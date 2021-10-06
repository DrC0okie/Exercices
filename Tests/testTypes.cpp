#include <iostream> // Used to input and output data in console
#include <cmath>    // Used to trunc values
#include <cstdio>   // Used to pause the console with getchar()
#include <limits>	// Used to display the mx value of an int

using namespace std;

int main()
{
	cout << "Long: " << numeric_limits<long>::lowest() << " -> "
		<< numeric_limits<long>::max() << "  " << numeric_limits<long>::digits  << " bits"  << endl;
	 
	cout << "Int: " << numeric_limits<int>::lowest() << " -> "
		<< numeric_limits<int>::max() << "  " << numeric_limits<int>::digits  << " bits"  << endl;

	cout << "Long long: " << numeric_limits<long long>::lowest() << " -> "
		<< numeric_limits<long long>::max() << "  " << numeric_limits<long long>::digits  << " bits" << endl;

	cout << "Signed char: " << numeric_limits<char>::lowest() << " -> "
		<< numeric_limits<signed char>::max() << "  " << numeric_limits<signed char>::digits  << " bits" << endl;
	 
	 getchar();
}

