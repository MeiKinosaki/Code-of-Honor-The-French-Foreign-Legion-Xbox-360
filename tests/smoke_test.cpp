#include "coh/core.hpp"
int main() {
    const auto info = coh::runtime_info();
    if (!coh::validate_runtime_info(info)) return 1;
    if (info.project_name != "Code of Honor Xbox 360 Port") return 2;
    if (info.stage != "M0 scaffold") return 3;
    if (coh::validate_runtime_info({"", "stage"})) return 4;
    if (coh::validate_runtime_info({"project", ""})) return 5;
    return 0;
}
