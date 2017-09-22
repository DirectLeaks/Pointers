/*
 * Pointers.cpp
 *
 * This code snippet attempts to demonstrate how pointers can be used to
 * store the value of an object and can be dereferenced and referenced to.
 */

#include <iostream>
using namespace std;

int main() {

	int OurNumber = 7;
	int* pOurNumber = &OurNumber;

	// Let's show the value of pOurNumber
	cout << "OurNumber's is located at: 0x" << hex << pOurNumber << endl;
	cout << "In other words, pOurNumber is: 0x" << hex << pOurNumber << endl;

	// Let's reference the value of the OurNumber
	cout << "The location of &OurNumber is: 0x" << hex << &OurNumber << endl;

	// Now let's dereference the pointed data to get the value of pOurNumber
	cout << "The dereference value of pOurNumber = " << dec << *pOurNumber << endl;

	return 0;
}
