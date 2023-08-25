//The basic structure and syntax of C and C++ are same
//C++ is mostly a superset of C adding Object-Oriented Programming, Exception Handling, Templating, and a more extensive standard library. 
//namespace is a declarative region that provides scope to the identifiers toprevent name collisions and to divide the code into logial groups.
#include <iostream>

int main() {
    using namespace std; // here the std identifier has the the scope within the main function only.
    cout<< "Hello World!";
    return 0;
}