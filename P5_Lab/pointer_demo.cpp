#include <iostream>
using namespace std;


// Example 3: pass by reference vs. Pass by value 
void squareByValue     (int n) { 
    n = n*n; 
} //
void squareByReference (int& n)  {
    n = n*n; 
} 
void squareByPointer   (int* n) {
     *n = (*n) * (*n);
     }

int main() {
// Example 1: basic pointer
// x is a variable of type int, px is a pointer to x
int x = 42;         //give x a value of 42
int* px = &x;       //px holds the address of x, px(value of px) = &x(address of x), int* defines a pointer to an int
cout << "Variable x is equal to " << x << endl;  // prints 42
cout << "Pointer px hold the memory address of x, px = " << px << endl; // prints the address of x
cout << "Value at the address stored in px: " << *px << endl; // prints 42, value at the address stored in px, which is x
*px = 100;        // changes the value of x to 100 through the pointer
cout << "Variable x is now equal to " << x << endl;  // prints 100




// Example 2: pointer to an array
double arr[3] = {1.0,2.5, 3.7}; //makes an array of 3 doubless
double* p = arr; // p(pointer to the first element of the array) arr ==&arr[0] (address of the first element of the array)
for (int i=0; i<3; i++){  // makes a new variable i and initializes it to 0, then checks if i is less than 3
                           //if true executes the loop body and increments i by 1, until i is no longer less than 3
 cout << "Value at address of p + i: " << *(p + i) << " " << endl; // pointer arithmetic, prints value at(*) p + ith element or arr[i](&arr[i])
}


int  a=5, b=5, c=5;
squareByValue(a); cout << "Original variable, change not stored = " << a << endl; //5 unchanged
squareByReference(b); cout << "Changed value at the address of variable = " << b << endl; //25 changed
squareByPointer(&c); cout << "Changed value at the address of variable = " << c << endl; //25 changed


return 0;
    } 
