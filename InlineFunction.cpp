#include <iostream>
using namespace std;

class A {
public:

	// declare inline
	inline int square(int x);
};

// Define the function
inline int A::square(int x) {
	return x*x;
}

int main() {
	A obj;
	cout << obj.square(3);
	return 0;
}