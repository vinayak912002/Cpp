#include <iostream>
#include <string>
using namespace std;

class Room{

    public:
        double length;
        double breadth;
        double height;

        double calculateArea(){
            return length*breadth;
        }

        double calculateVolume(){
            return length*breadth*height;
        }
};

int main(){

    //creating object of class Room
    Room room1;
    //assigning values to the data members
    room1.length = 156;
    room1.breadth = 105;
    room1.height = 108;

    cout<< "Area of room = " << room1.calculateArea()<<endl;
    cout<< "Volume of room = " << room1.calculateVolume();
    
    return 0;
}
//all the members we created in this class were public. We can also create private members.
//Private members cannot be accesed outside the class.