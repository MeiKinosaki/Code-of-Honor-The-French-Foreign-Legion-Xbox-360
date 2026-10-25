# Code of Honor — Xbox 360 port roadmap

## Status policy
This repository is currently a porting scaffold, not a playable port. Mark a task **implemented** only when code exists, **built** only when a recorded build succeeds, and **hardware-tested** only when results from an Xbox 360 RGH/JTAG console are recorded. Never infer runtime compatibility from a host build.

## Parallel workstreams

### A. Repository and original-game audit
- Inventory source files, licenses, asset formats, executable dependencies, and engine/API assumptions.
- Keep proprietary game assets out of this repository; use legally obtained local files for testing.
- Record unknown formats rather than guessing.

### B. Runtime foundation
- Establish a portable C++ core with clear platform boundaries.
- Add deterministic startup/shutdown and structured logging.
- Keep platform-specific file, timing, controller, audio, and graphics code behind interfaces.

### C. Rendering investigation
- Document the original renderer/API requirements and map them to a staged Xbox 360 renderer.
- Start with a diagnostic clear/frame path, then texture upload, geometry, shaders, and resource lifetime.
- Track visual parity separately from frame-rate optimization.

### D. Input and gameplay integration
- Define controller input actions independent of physical buttons.
- Add camera/movement and collision integration only after the relevant original formats and simulation behavior are understood.
- Do not mark gameplay complete until an original level can be loaded and exercised end-to-end.

### E. Assets, audio, and saves
- Identify asset containers and compression using test fixtures.
- Add explicit bounds/error checks to parsers.
- Isolate audio and save-data adapters so each can be tested without the full game.

### F. Build and validation
- First run portable host builds and unit tests in CI.
- Then validate the selected Xbox 360 homebrew toolchain independently.
- Produce Xenon.elf only when the target build succeeds; produce default.xex only after a verified ELF-to-XEX packaging step.
- Record compiler version, command, exit status, artifact hash, and test environment for every claimed result.

## Sequential milestones
1. **M0 — Scaffold:** repository layout, host build, smoke test, CI.
2. **M1 — Audit:** documented engine/API/dependency and asset inventory.
3. **M2 — Platform interfaces:** filesystem, clock, controller, renderer, audio interfaces.
4. **M3 — Target toolchain:** reproducible Xbox 360 cross-build.
5. **M4 — Renderer prototype:** diagnostic frame on target hardware.
6. **M5 — Asset pipeline:** validated parsers and test fixtures.
7. **M6 — First scene:** load a legally obtained test scene and render it.
8. **M7 — Gameplay slice:** input, movement, collision, and one complete test sequence.
9. **M8 — Content integration:** audio, UI, saves, and remaining scenes.
10. **M9 — Compatibility and performance:** memory, stability, frame pacing, regression suite.

## Progress reporting
Report four independent values: planning, implementation, build, and hardware proof. A percentage is meaningful only when its denominator is a published checklist. At this stage no original-game runtime, assets, or target hardware tests are verified.
