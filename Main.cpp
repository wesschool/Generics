#include <iostream>
#include "Math_Lib.h"

using namespace std;

int main()
{	
	cout << "power(5, 2) = " << Math::power(5, 2) << endl;
	cout << "absoluteValue(-897) = " << Math::absoluteValue(-897) << endl;
	cout << "max(4.534, 4.549) = " << Math::max(4.534, 4.549) << endl;
	cout << "min(45, 89) = " << Math::min(45, 89) << endl;

	std::vector<float> nums{ 3, 45, 13, 76, 48, 1, 39 };
	cout << "nums = 3, 45, 13, 76, 48, 1, 39" << endl;
	cout << "\tmax(&nums) = " << Math::max(&nums) << endl;
	cout << "\tmin(&nums) = " << Math::min(&nums) << endl;
}

