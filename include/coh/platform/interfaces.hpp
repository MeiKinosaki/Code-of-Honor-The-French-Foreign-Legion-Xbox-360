#pragma once

#include <cstddef>
#include <cstdint>
#include <string_view>

namespace coh::platform {

struct Vec2 { float x{}; float y{}; };
struct Vec3 { float x{}; float y{}; float z{}; };
struct Rgba8 { std::uint8_t r{}, g{}, b{}, a{255}; };

enum class Button : std::uint8_t { Confirm, Cancel, Pause, MoveForward, MoveBackward, MoveLeft, MoveRight, LookLeft, LookRight, LookUp, LookDown };

class IClock {
public:
    virtual ~IClock() = default;
    virtual std::uint64_t milliseconds() const noexcept = 0;
};

class IInput {
public:
    virtual ~IInput() = default;
    virtual bool pressed(Button button) const noexcept = 0;
    virtual Vec2 left_stick() const noexcept = 0;
    virtual Vec2 right_stick() const noexcept = 0;
};

class IFileSystem {
public:
    virtual ~IFileSystem() = default;
    virtual bool exists(std::string_view path) const = 0;
    virtual std::size_t read(std::string_view path, std::uint8_t* destination, std::size_t capacity) const = 0;
};

class IRenderer {
public:
    virtual ~IRenderer() = default;
    virtual bool begin_frame(Rgba8 clear_color) = 0;
    virtual void end_frame() = 0;
};

class IAudio {
public:
    virtual ~IAudio() = default;
    virtual bool initialize() = 0;
    virtual void shutdown() noexcept = 0;
};

} // namespace coh::platform
