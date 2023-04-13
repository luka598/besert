#include <iostream>

#define BESERT_BEGIN             // Prints to cout when assertion begins
// #define BESERT_FATAL             // Throw runtime error when assertion fails
#define BESERT_NONFATAL          // Print to cout error when assertion fails
#define BESERT_END               // Print to cout result of assertion
// #define BESERT_INCREMENT_SUCCESS // Increments n on success
#define BESERT_INCREMENT_FAIL    // Incremenets n on fail
#define BESERT_BORDERS           // Add borders on begin and end of assertion
#include "besert.hpp"

int main(){
	// Simple assert
	ASSERT(3.14 == 3);
	
	// Assert with increment
	int n = 0;
	ASSERTI('A' == 'B', &n); // BESERT_INCREMENT_SUCCESS -> n = 0; BESERT_INCREMENT_FAIL -> n = 1;
	std::cout << "n=" << n << std::endl;
	
	// Assert with messages
	ASSERTM(2 + 2 == 5, "Check if 2+2 is equal to 5", "2+2 is not equal to 5");

	// Assert with increment and messaes
	int k = 0;
	ASSERTIM( 2/2 == 1, &k, "Check if 2/2 == 1", "2/2 != 1"); // BESERT_INCREMENT_SUCCESS -> k = 1; BESERT_INCREMENT_FAIL -> k = 0;
	std::cout << "k=" << k << std::endl;

	return 0;
}
