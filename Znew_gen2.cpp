
#define ARMA_64BIT_WORD
#include <RcppArmadillo.h>
// [[Rcpp::depends(BH, bigmemory, RcppArmadillo)]]
#include <bigmemory/MatrixAccessor.hpp>
#include <numeric>

using namespace Rcpp ;

// [[Rcpp::export]]
void Znew_gen2( const arma::mat& U, const arma::mat& Z, const arma::vec& g, const arma::vec& cols, 
                unsigned int n, unsigned int q, unsigned int d, SEXP pBigMat, 
                arma::sp_mat& J){ 
  
  unsigned int i = 0;
  unsigned int j = 0;
  unsigned int nMC = U.n_rows;
  unsigned int index = 0;
  int gr = 0;
  arma::mat Usub(1, q);
  arma::mat Zsub(1, q);
  arma::mat out(n*nMC, J.n_cols);
  XPtr<BigMatrix> pMat(pBigMat); 
  MatrixAccessor<double> out2(*pMat); 
  
  Rprintf("First For Loop \n");
  for(i = 0; i<n; i++){
    gr = g(i);
    for(index = 0;index<q; index++){
      Zsub(0,index) = Z(i,cols(index)-1 + gr - 1);
    }
    for(j = 0; j < nMC; j++){
      for(index = 0;index<q; index++){
        Usub(0,index) = U(j,cols(index)-1 + gr - 1);
      }
      out.row((i*nMC + j)) = kron(Usub, Zsub) * J;
    }
  }
  
  Rprintf("Second For Loop \n");
  for(i = 0; i<n*nMC; i++){
    for(j = 0; j<out.n_cols; j++){
      out2[j][i] = out(i, j);
    }
  }
  //return wrap(out);
}

