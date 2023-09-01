//The basic structure and syntax of C and C++ are same
//C++ is mostly a superset of C adding Object-Oriented Programming, Exception Handling, Templating, and a more extensive standard library. 
//Namespace scope A name that is declared within a namespace, outside of any class or enum definition or function block, is visible from its point of declaration to the end of the namespace. A namespace may be defined in multiple blocks across different files.
#include <iostream>

int main() {
    using namespace std; // here the std identifier has the the scope within the main function only.
    cout<< "Hello World!";
    return 0;
}