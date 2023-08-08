
// algocpp/algorithm/stalin_sort.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_ALGORITHM_STALIN
#define ALGOCPP_ALGORITHM_STALIN

#include <vector>
#include <array>
#include <list>
#include <algocpp/type/to_vector.hpp>

namespace algocpp
{
	namespace algorithm
	{
		namespace base
		{
			template <typename T>
			inline std::vector<T> base_stalin_sort(std::vector<T> v, bool up)
			{
				if (v.size() == 0)
					return std::vector<T>{};

				std::vector<T> result = {v[0]};
				for (unsigned long long i = 1; i < v.size(); i++)
				{
					if ((up && result.back() < v[i]) || (!up && result.back() <= v[i]))
					{
						result.emplace_back(v[i]);
					}
				}

				return result;
			}
		}

		template <typename T>
		inline std::vector<T> stalin_sort(std::vector<T> v, bool up = false)
		{
			return base::base_stalin_sort(v, up);
		}

		template <typename T>
		inline std::vector<T> stalin_sort(std::list<T> v, bool up = false)
		{
			return base::base_stalin_sort(algocpp::type::to_vector(v), up);
		}

		template <typename T, std::size_t n>
		inline std::vector<T> stalin_sort(std::array<T, n> v, bool up = false)
		{
			return base::base_stalin_sort(algocpp::type::to_vector(v), up);
		}
	}
}

#endif // ALGOCPP_ALGORITHM_STALIN
