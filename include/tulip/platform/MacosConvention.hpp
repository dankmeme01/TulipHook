#pragma once

#include "../Platform.hpp"
#if defined(TULIP_HOOK_MACOS)

#include <string>

#include "../CallingConvention.hpp"

namespace tulip::hook {
	class AbstractFunction;

	class DefaultConvention : public CallingConvention {
	public:
		~DefaultConvention() override;

		std::string generateFromDefault(AbstractFunction const& function) override;
		std::string generateToDefault(AbstractFunction const& function) override;
	};

	using PlatformConvention = DefaultConvention;
}

#endif