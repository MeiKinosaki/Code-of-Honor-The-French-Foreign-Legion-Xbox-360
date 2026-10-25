# Development status ledger

Last updated: 2026-10-25

## Current milestone: M0 — scaffold

| Area | State | Evidence |
|---|---|---|
| Port roadmap | Written | `docs/PORTING_PLAN.md` |
| CMake host project | Added; includes two CTest targets | `CMakeLists.txt` |
| Runtime bootstrap | Added | `src/core.cpp`, `src/main.cpp` |
| Runtime smoke test | Added, execution pending | `tests/smoke_test.cpp` |
| Platform abstraction compile test | Added to CMake, execution pending | `tests/platform_interfaces_compile.cpp` |
| Platform subsystem interfaces | Added | `include/coh/platform/interfaces.hpp` |
| Host CI | Workflow file added; run result not verified | `.github/workflows/host-ci.yml` |
| Original engine integration | Not started | Original source/dependency audit required |
| Xbox 360 cross-build | Not verified | Toolchain and target configuration required |
| Xenon.elf / default.xex | Not produced | No verified target build yet |
| RGH console test | Not performed | Hardware evidence required |

## Reporting rules
- **Planned**: described in documentation only.
- **Implemented**: code is present in the repository.
- **Host-tested**: CI or a reproducible local host test passes.
- **Target-built**: Xbox 360 target compiler succeeds and artifacts are recorded.
- **Hardware-tested**: the artifact is run on an Xbox 360 RGH/JTAG console and results are recorded.

Do not combine these statuses into a single optimistic percentage. This repository is a technical scaffold and is not currently a playable port.
