#include "coh/core.hpp"
#include <iostream>
int main() {
    const auto info = coh::runtime_info();
    if (!coh::validate_runtime_info(info)) { std::cerr << "Runtime bootstrap validation failed\n"; return 1; }
    std::cout << info.project_name << " — " << info.stage << '\n';
    std::cout << "Scaffold only: original game content and Xbox 360 runtime are not integrated.\n";
    return 0;
}
