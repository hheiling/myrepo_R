## Example for Stack Overflow

# The following libraries will be uploaded with the package:

# library(lme4)
# library(irr)
# library(ncvreg)
# library(mvtnorm)
# library(ROCR)
# library(Rcpp)
# library(RcppArmadillo)
# library(inline)
# library(grpreg)
# library(bigmemory)
# library(bigalgebra)
# library(BH)
# library(glmnet)

library(devtools)
library(remotes)
install_github("hheiling/myrepo_R", subdir = "HelpWithZnewgen2")

library(HelpWithZnewgen2)

set.seed(1)
U = matrix(rnorm(3000), nrow=100, ncol=30)
Z = matrix(rnorm(15000), nrow = 500, ncol = 30)
group = rep(1:10, each = 50)
cols = c(1,11,21)
n = 500
q = 3
d = 10 
Znew = big.matrix(nrow = nrow(Z)*nrow(U), ncol = 6)
J_SpMat = Matrix(0, 9, 6, sparse = TRUE)
  sumy = 0
  sumx = 0
  zeros = 0
  for(i in 1:3){
    J_SpMat[ sumx + zeros + 1:(3 - (i-1)), sumy + 1:(3 - (i-1))] = diag((3 - (i-1)))
    sumy = sumy + (3 - (i-1))
    sumx = sumy
    zeros = zeros + i
  }

## Running example using the compiled R package:
  
Znew_gen2.Rfunction(U, Z, group, cols, n, q, d, Znew@address, J_SpMat)

    ## Error received:
    # error: arma::memory::acquire(): out of memory
    # Error in Znew_gen2(U, Z, group, cols, n, q, d, pBigMat, J) : 
    #   std::bad_alloc

## Running example by sourcing the .cpp file by itself (no error): 

### Code to download the "Znew_gen2.cpp" file from the GitHub repo and 
### specify where you want the file to download to:
destination_file = "Source_Code_Znew_gen2.cpp" 
    # Can specify however you like, but must not have spaces in the filename
download.file(url = "https://raw.githubusercontent.com/hheiling/myrepo_R/master/Znew_gen2.cpp", 
              destfile = destination_file)
sourceCpp(file = destination_file)
Znew_gen2(U, Z, group, cols, n, q, d, Znew@address, J_SpMat)
    ## This ran properly if the lines "First For Loop" and "Second For Loop" appear

