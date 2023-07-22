
// algocpp/algorithm/chm.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_ALGORITHM_CHM
#define ALGOCPP_ALGORITHM_CHM

namespace algocpp
{
	namespace algorithm
	{
		template <typename Tp>
		inline bool chmax(Tp &a, Tp b)
		{
			if (a < b)
			{
				a = b;
				return true;
			}
			else
			{
				return false;
			}
		}

		template <typename Tp>
		inline bool chmin(Tp &a, Tp b)
		{
			if (a > b)
			{
				a = b;
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}

#endif // ALGOCPP_ALGORITHM_CHM
