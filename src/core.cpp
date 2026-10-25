#include "coh/core.hpp"
namespace coh {
RuntimeInfo runtime_info() noexcept { return {"Code of Honor Xbox 360 Port", "M0 scaffold"}; }
bool validate_runtime_info(const RuntimeInfo& info) noexcept { return !info.project_name.empty() && !info.stage.empty(); }
} // namespace coh
