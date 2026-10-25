#pragma once
#include <string_view>
namespace coh {
// Platform-neutral bootstrap only; this does not load the original game.
struct RuntimeInfo { std::string_view project_name; std::string_view stage; };
RuntimeInfo runtime_info() noexcept;
bool validate_runtime_info(const RuntimeInfo& info) noexcept;
} // namespace coh
