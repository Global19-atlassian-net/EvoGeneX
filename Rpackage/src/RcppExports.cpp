// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// brown_fit
List brown_fit(int nterm, int nrep, const NumericVector& dat, const NumericMatrix& bt, double gamma);
RcppExport SEXP _EvoGeneX_brown_fit(SEXP ntermSEXP, SEXP nrepSEXP, SEXP datSEXP, SEXP btSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nterm(ntermSEXP);
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type dat(datSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type bt(btSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(brown_fit(nterm, nrep, dat, bt, gamma));
    return rcpp_result_gen;
END_RCPP
}
// evogenex_fit
List evogenex_fit(int nterm, int nrep, int nreg, const NumericVector& dat, const NumericVector& nbranch, const NumericVector& beta, const NumericVector& epochs, const NumericMatrix& bt, double alpha, double gamma);
RcppExport SEXP _EvoGeneX_evogenex_fit(SEXP ntermSEXP, SEXP nrepSEXP, SEXP nregSEXP, SEXP datSEXP, SEXP nbranchSEXP, SEXP betaSEXP, SEXP epochsSEXP, SEXP btSEXP, SEXP alphaSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nterm(ntermSEXP);
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< int >::type nreg(nregSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type dat(datSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type nbranch(nbranchSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type epochs(epochsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type bt(btSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(evogenex_fit(nterm, nrep, nreg, dat, nbranch, beta, epochs, bt, alpha, gamma));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_EvoGeneX_brown_fit", (DL_FUNC) &_EvoGeneX_brown_fit, 5},
    {"_EvoGeneX_evogenex_fit", (DL_FUNC) &_EvoGeneX_evogenex_fit, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_EvoGeneX(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
