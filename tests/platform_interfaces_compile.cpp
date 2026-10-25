#include "coh/platform/interfaces.hpp"

#include <type_traits>

static_assert(!std::is_copy_constructible_v<coh::platform::IClock>);
static_assert(!std::is_copy_constructible_v<coh::platform::IInput>);
static_assert(!std::is_copy_constructible_v<coh::platform::IFileSystem>);
static_assert(!std::is_copy_constructible_v<coh::platform::IRenderer>);
static_assert(!std::is_copy_constructible_v<coh::platform::IAudio>);

int main() {
    const coh::platform::Vec2 stick{0.0f, 0.0f};
    const coh::platform::Rgba8 clear{0, 0, 0, 255};
    return (stick.x == 0.0f && clear.a == 255) ? 0 : 1;
}
