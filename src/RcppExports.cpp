// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// sendWSMessage
void sendWSMessage(SEXP conn, bool binary, Rcpp::RObject message);
RcppExport SEXP _httpuv_sendWSMessage(SEXP connSEXP, SEXP binarySEXP, SEXP messageSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type conn(connSEXP);
    Rcpp::traits::input_parameter< bool >::type binary(binarySEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type message(messageSEXP);
    sendWSMessage(conn, binary, message);
    return R_NilValue;
END_RCPP
}
// closeWS
void closeWS(SEXP conn, uint16_t code, std::string reason);
RcppExport SEXP _httpuv_closeWS(SEXP connSEXP, SEXP codeSEXP, SEXP reasonSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type conn(connSEXP);
    Rcpp::traits::input_parameter< uint16_t >::type code(codeSEXP);
    Rcpp::traits::input_parameter< std::string >::type reason(reasonSEXP);
    closeWS(conn, code, reason);
    return R_NilValue;
END_RCPP
}
// makeTcpServer
Rcpp::RObject makeTcpServer(const std::string& host, int port, Rcpp::Function onHeaders, Rcpp::Function onBodyData, Rcpp::Function onRequest, Rcpp::Function onWSOpen, Rcpp::Function onWSMessage, Rcpp::Function onWSClose, Rcpp::List staticPaths, Rcpp::List staticPathOptions);
RcppExport SEXP _httpuv_makeTcpServer(SEXP hostSEXP, SEXP portSEXP, SEXP onHeadersSEXP, SEXP onBodyDataSEXP, SEXP onRequestSEXP, SEXP onWSOpenSEXP, SEXP onWSMessageSEXP, SEXP onWSCloseSEXP, SEXP staticPathsSEXP, SEXP staticPathOptionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type host(hostSEXP);
    Rcpp::traits::input_parameter< int >::type port(portSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onHeaders(onHeadersSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onBodyData(onBodyDataSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onRequest(onRequestSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onWSOpen(onWSOpenSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onWSMessage(onWSMessageSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onWSClose(onWSCloseSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type staticPaths(staticPathsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type staticPathOptions(staticPathOptionsSEXP);
    rcpp_result_gen = Rcpp::wrap(makeTcpServer(host, port, onHeaders, onBodyData, onRequest, onWSOpen, onWSMessage, onWSClose, staticPaths, staticPathOptions));
    return rcpp_result_gen;
END_RCPP
}
// makePipeServer
Rcpp::RObject makePipeServer(const std::string& name, int mask, Rcpp::Function onHeaders, Rcpp::Function onBodyData, Rcpp::Function onRequest, Rcpp::Function onWSOpen, Rcpp::Function onWSMessage, Rcpp::Function onWSClose, Rcpp::List staticPaths, Rcpp::List staticPathOptions);
RcppExport SEXP _httpuv_makePipeServer(SEXP nameSEXP, SEXP maskSEXP, SEXP onHeadersSEXP, SEXP onBodyDataSEXP, SEXP onRequestSEXP, SEXP onWSOpenSEXP, SEXP onWSMessageSEXP, SEXP onWSCloseSEXP, SEXP staticPathsSEXP, SEXP staticPathOptionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    Rcpp::traits::input_parameter< int >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onHeaders(onHeadersSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onBodyData(onBodyDataSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onRequest(onRequestSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onWSOpen(onWSOpenSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onWSMessage(onWSMessageSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onWSClose(onWSCloseSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type staticPaths(staticPathsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type staticPathOptions(staticPathOptionsSEXP);
    rcpp_result_gen = Rcpp::wrap(makePipeServer(name, mask, onHeaders, onBodyData, onRequest, onWSOpen, onWSMessage, onWSClose, staticPaths, staticPathOptions));
    return rcpp_result_gen;
END_RCPP
}
// stopServer_
void stopServer_(std::string handle);
RcppExport SEXP _httpuv_stopServer_(SEXP handleSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type handle(handleSEXP);
    stopServer_(handle);
    return R_NilValue;
END_RCPP
}
// getStaticPaths_
Rcpp::List getStaticPaths_(std::string handle);
RcppExport SEXP _httpuv_getStaticPaths_(SEXP handleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type handle(handleSEXP);
    rcpp_result_gen = Rcpp::wrap(getStaticPaths_(handle));
    return rcpp_result_gen;
END_RCPP
}
// setStaticPaths_
Rcpp::List setStaticPaths_(std::string handle, Rcpp::List sp);
RcppExport SEXP _httpuv_setStaticPaths_(SEXP handleSEXP, SEXP spSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type handle(handleSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sp(spSEXP);
    rcpp_result_gen = Rcpp::wrap(setStaticPaths_(handle, sp));
    return rcpp_result_gen;
END_RCPP
}
// removeStaticPaths_
Rcpp::List removeStaticPaths_(std::string handle, Rcpp::CharacterVector paths);
RcppExport SEXP _httpuv_removeStaticPaths_(SEXP handleSEXP, SEXP pathsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type handle(handleSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type paths(pathsSEXP);
    rcpp_result_gen = Rcpp::wrap(removeStaticPaths_(handle, paths));
    return rcpp_result_gen;
END_RCPP
}
// getStaticPathOptions_
Rcpp::List getStaticPathOptions_(std::string handle);
RcppExport SEXP _httpuv_getStaticPathOptions_(SEXP handleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type handle(handleSEXP);
    rcpp_result_gen = Rcpp::wrap(getStaticPathOptions_(handle));
    return rcpp_result_gen;
END_RCPP
}
// setStaticPathOptions_
Rcpp::List setStaticPathOptions_(std::string handle, Rcpp::List opts);
RcppExport SEXP _httpuv_setStaticPathOptions_(SEXP handleSEXP, SEXP optsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type handle(handleSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type opts(optsSEXP);
    rcpp_result_gen = Rcpp::wrap(setStaticPathOptions_(handle, opts));
    return rcpp_result_gen;
END_RCPP
}
// base64encode
std::string base64encode(const Rcpp::RawVector& x);
RcppExport SEXP _httpuv_base64encode(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RawVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(base64encode(x));
    return rcpp_result_gen;
END_RCPP
}
// encodeURI
Rcpp::CharacterVector encodeURI(Rcpp::CharacterVector value);
RcppExport SEXP _httpuv_encodeURI(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(encodeURI(value));
    return rcpp_result_gen;
END_RCPP
}
// encodeURIComponent
Rcpp::CharacterVector encodeURIComponent(Rcpp::CharacterVector value);
RcppExport SEXP _httpuv_encodeURIComponent(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(encodeURIComponent(value));
    return rcpp_result_gen;
END_RCPP
}
// decodeURI
Rcpp::CharacterVector decodeURI(Rcpp::CharacterVector value);
RcppExport SEXP _httpuv_decodeURI(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(decodeURI(value));
    return rcpp_result_gen;
END_RCPP
}
// decodeURIComponent
Rcpp::CharacterVector decodeURIComponent(Rcpp::CharacterVector value);
RcppExport SEXP _httpuv_decodeURIComponent(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(decodeURIComponent(value));
    return rcpp_result_gen;
END_RCPP
}
// ipFamily
int ipFamily(const std::string& ip);
RcppExport SEXP _httpuv_ipFamily(SEXP ipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type ip(ipSEXP);
    rcpp_result_gen = Rcpp::wrap(ipFamily(ip));
    return rcpp_result_gen;
END_RCPP
}
// invokeCppCallback
void invokeCppCallback(Rcpp::List data, SEXP callback_xptr);
RcppExport SEXP _httpuv_invokeCppCallback(SEXP dataSEXP, SEXP callback_xptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SEXP >::type callback_xptr(callback_xptrSEXP);
    invokeCppCallback(data, callback_xptr);
    return R_NilValue;
END_RCPP
}
// getRNGState
void getRNGState();
RcppExport SEXP _httpuv_getRNGState() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    getRNGState();
    return R_NilValue;
END_RCPP
}
// wsconn_address
std::string wsconn_address(SEXP external_ptr);
RcppExport SEXP _httpuv_wsconn_address(SEXP external_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type external_ptr(external_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(wsconn_address(external_ptr));
    return rcpp_result_gen;
END_RCPP
}
// log_level
std::string log_level(const std::string& level);
RcppExport SEXP _httpuv_log_level(SEXP levelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type level(levelSEXP);
    rcpp_result_gen = Rcpp::wrap(log_level(level));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP httpuv_decodeURIComponent(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_httpuv_sendWSMessage", (DL_FUNC) &_httpuv_sendWSMessage, 3},
    {"_httpuv_closeWS", (DL_FUNC) &_httpuv_closeWS, 3},
    {"_httpuv_makeTcpServer", (DL_FUNC) &_httpuv_makeTcpServer, 10},
    {"_httpuv_makePipeServer", (DL_FUNC) &_httpuv_makePipeServer, 10},
    {"_httpuv_stopServer_", (DL_FUNC) &_httpuv_stopServer_, 1},
    {"_httpuv_getStaticPaths_", (DL_FUNC) &_httpuv_getStaticPaths_, 1},
    {"_httpuv_setStaticPaths_", (DL_FUNC) &_httpuv_setStaticPaths_, 2},
    {"_httpuv_removeStaticPaths_", (DL_FUNC) &_httpuv_removeStaticPaths_, 2},
    {"_httpuv_getStaticPathOptions_", (DL_FUNC) &_httpuv_getStaticPathOptions_, 1},
    {"_httpuv_setStaticPathOptions_", (DL_FUNC) &_httpuv_setStaticPathOptions_, 2},
    {"_httpuv_base64encode", (DL_FUNC) &_httpuv_base64encode, 1},
    {"_httpuv_encodeURI", (DL_FUNC) &_httpuv_encodeURI, 1},
    {"_httpuv_encodeURIComponent", (DL_FUNC) &_httpuv_encodeURIComponent, 1},
    {"_httpuv_decodeURI", (DL_FUNC) &_httpuv_decodeURI, 1},
    {"_httpuv_decodeURIComponent", (DL_FUNC) &_httpuv_decodeURIComponent, 1},
    {"_httpuv_ipFamily", (DL_FUNC) &_httpuv_ipFamily, 1},
    {"_httpuv_invokeCppCallback", (DL_FUNC) &_httpuv_invokeCppCallback, 2},
    {"_httpuv_getRNGState", (DL_FUNC) &_httpuv_getRNGState, 0},
    {"_httpuv_wsconn_address", (DL_FUNC) &_httpuv_wsconn_address, 1},
    {"_httpuv_log_level", (DL_FUNC) &_httpuv_log_level, 1},
    {"httpuv_decodeURIComponent", (DL_FUNC) &httpuv_decodeURIComponent, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_httpuv(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
