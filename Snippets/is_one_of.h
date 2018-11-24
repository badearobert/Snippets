#pragma once
#include <type_traits>

namespace Snippets
{
	namespace v1
	{
		template<class Expected, class... Received>
		inline constexpr bool is_one_of = (std::is_same_v<Expected, Received> || ...);
	}

	namespace v2
	{
		template<class Expected>
		struct is_one_of
		{
			template <class ...Received>
			static constexpr inline bool check()
			{
				return (std::is_same_v<Expected, Received> || ...);
			}
		};
	}


	template<typename T>
	struct is_something {
		static const bool value = v1::is_one_of<T, int, float, double>;
	};

} // namespace