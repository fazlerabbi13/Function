#include <iostream>
using namespace std;

// Arguments are pass by value
void change(int* a) {
  
  	// Modifying arguments
    *a = 22;
}
int main() {
    int x = 5;

    // Passing address of x to change()
    change(&x);
    
    cout << x;
    return 0;
}