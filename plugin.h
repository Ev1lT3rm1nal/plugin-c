#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// DO NOT EDIT THIS PART!!!
#ifndef PLUGIN_LIBRARY_H /* --------------------------------------------------------------------------*/
#define PLUGIN_LIBRARY_H                                                                              //
                                      // DO NOT EDIT THIS PART!!!                                     //
typedef enum ProxyType {                                                                              //
    HTTPS,                                                                                            //
    SOCKS4,                                                                                           //
    SOCKS5,                                                                                           //
} ProxyType;                                                                                          //
                                                                                                      //
typedef enum ResultType {                                                                             //
    RETRY,                                                                                            //
    HIT,                                                                                              //
    BAD,                                                                                              //
} ResultType;                                                                                         //
                                       // DO NOT EDIT THIS PART!!!                                    //
const char *PLUGIN_NAME();                                                                            //
                                                                                                      //
const char *PLUGIN_VERSION();                                                                         //
                                                                                                      //
enum ResultType get_combo_result(char *user, char *pass, char *proxy, enum ProxyType proxy_type);     //
                                                                                                      //
#endif //PLUGIN_LIBRARY_H ----------------------------------------------------------------------------*/
