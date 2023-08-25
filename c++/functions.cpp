#include <iostream>
//in c++ all the functions need to be defined above the main function.
int sum(int num1, int num2){
    return num1+num2;
}
int main(){//entry point of the c++ code.
    std::cout << sum(1,2);
    return 0;
}