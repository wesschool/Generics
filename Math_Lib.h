#pragma once
#include <vector>

namespace Math
{
	template <typename T>
	T power(T base, int exponent)
	{
		T temp = 1;
		for (int i = 0; i < exponent; ++i)
		{
			temp *= base;
		}

		return temp;
	}

	template <typename T>
	T  absoluteValue(T value)
	{
		return (value < 0) ? -value : value;
	}

	template <typename T>
	T max(T a, T b)
	{
		return (a > b) ? a : b;
	}

	template <typename T>
	T max(std::vector <T>* values)
	{
		T biggest = (*values)[0];
		for (int i = 1; i < values->size(); ++i)
		{
			if ((*values)[i] > biggest)
				biggest = (*values)[i];
		}

		return biggest;
	}

	template <typename T>
	T min(T a, T b)
	{
		return (a < b) ? a : b;
	}

	template <typename T>
	T min(std::vector <T>* values)
	{
		T smallest = (*values)[0];
		for (int i = 1; i < values->size(); ++i)
		{
			if ((*values)[i] < smallest)
				smallest = (*values)[i];
		}

		return smallest;
	}
}
