# myrepo_R
This repo contains materials intended to ease communication with people on Stack Overflow

This repo includes the R package "HelpWithZnewgen2" and its .tar.gz file. This R package can be uploaded using the following lines of R code:

  library(devtools)
  
  library(remotes)
  
  install_github("hheiling/myrepo_R", subdir = "HelpWithZnewgen2")

The file "Stack Overflow Example.R" contains the example code provided to Stack Overflow that produces the sample matrices/vectors/other numbers and runs the Znew_gen2 function, producing the errors of interest.

The Znew_gen2 function itself is provided in the "Znew_gen2.cpp" file above as well as in the `src` folder of the package (HelpWithZnewgen2/src/Znew_gen2.cpp).
