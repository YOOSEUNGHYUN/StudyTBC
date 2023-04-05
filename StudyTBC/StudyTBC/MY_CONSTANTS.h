#pragma once

namespace constants
{
	// constexpr는 컴파일 타임에 확실히 결정되어야 하는 상수다.
	constexpr double pi(3.141592);
	constexpr double avogadro(6.0221413e23);
	constexpr double moon_gravity(9.8 / 6.0);

}