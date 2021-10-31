#include "plugin.h"

// Use lower_snake_case syntax for naming
const char *PLUGIN_NAME() {
    return "name_in_c";
}

// Use semantic versioning (SemVer)
const char *PLUGIN_VERSION() {
    return "0.0.1";
}

ResultCheck *get_combo_result(char *user, char *pass, char *proxy, enum ProxyType proxy_type) {
    // Add your code here
    ResultCheck *out = malloc(sizeof(ResultCheck));
    *out = (ResultCheck) {BAD, "Add what you want to be saved on the file additionally!"};
    return out;
}