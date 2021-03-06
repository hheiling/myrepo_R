// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpparma_hello_world
arma::mat rcpparma_hello_world();
RcppExport SEXP _HelpWithZnewgen2_rcpparma_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpparma_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_outerproduct
arma::mat rcpparma_outerproduct(const arma::colvec& x);
RcppExport SEXP _HelpWithZnewgen2_rcpparma_outerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_outerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_innerproduct
double rcpparma_innerproduct(const arma::colvec& x);
RcppExport SEXP _HelpWithZnewgen2_rcpparma_innerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_innerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_bothproducts
Rcpp::List rcpparma_bothproducts(const arma::colvec& x);
RcppExport SEXP _HelpWithZnewgen2_rcpparma_bothproducts(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_bothproducts(x));
    return rcpp_result_gen;
END_RCPP
}
// Znew_gen2
void Znew_gen2(const arma::mat& U, const arma::mat& Z, const arma::vec& g, const arma::vec& cols, unsigned int n, unsigned int q, unsigned int d, SEXP pBigMat, arma::sp_mat& J);
RcppExport SEXP _HelpWithZnewgen2_Znew_gen2(SEXP USEXP, SEXP ZSEXP, SEXP gSEXP, SEXP colsSEXP, SEXP nSEXP, SEXP qSEXP, SEXP dSEXP, SEXP pBigMatSEXP, SEXP JSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type q(qSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type d(dSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat& >::type J(JSEXP);
    Znew_gen2(U, Z, g, cols, n, q, d, pBigMat, J);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_HelpWithZnewgen2_rcpparma_hello_world", (DL_FUNC) &_HelpWithZnewgen2_rcpparma_hello_world, 0},
    {"_HelpWithZnewgen2_rcpparma_outerproduct", (DL_FUNC) &_HelpWithZnewgen2_rcpparma_outerproduct, 1},
    {"_HelpWithZnewgen2_rcpparma_innerproduct", (DL_FUNC) &_HelpWithZnewgen2_rcpparma_innerproduct, 1},
    {"_HelpWithZnewgen2_rcpparma_bothproducts", (DL_FUNC) &_HelpWithZnewgen2_rcpparma_bothproducts, 1},
    {"_HelpWithZnewgen2_Znew_gen2", (DL_FUNC) &_HelpWithZnewgen2_Znew_gen2, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_HelpWithZnewgen2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
