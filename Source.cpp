#include <iostream>
#include <exception>
using namespace std;

void WentRong() {

	bool Error1 = true;
	bool Error2 = false;

	if (Error1) {
		throw bad_alloc();      // throws an Error of type " bad_alloc " that is a subclass of " Exception "
	}

	if (Error2) {
		throw exception();	   // throws an Error of type " Exception "
	}
}

int main() {

	try {
		WentRong();
	}
	// Because of " Polymorphism " we need to be carefull about the order of calling sub-classes and classes functions and themselves
	catch (bad_alloc& e) {
		cout << " Bad_alloc Error :  " << e.what() << endl;
	}
	catch (exception& e) {
		cout << " Exception Error :  " << e.what() <<  endl;
	}

	return 0;
}