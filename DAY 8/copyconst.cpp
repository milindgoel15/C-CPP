// copy constructor

#include <iostream>
using namespace std;

class wall {
private:  // cannot be accessible by other classes
    double length;
    double height;

public:
    wall(double len, double hgt) {
        length = len;
        height = hgt;
    }

    /* If we want to copy values, we can do so with and without using copy constructors. 

    wall(wall &obj) {
        length = obj.length;
        height = obj.height;
    }

    */

    double calculateArea() {
        return length * height;
    }
};

int main() {
    wall obj(10, 5);
    
    wall obj1 = obj;  // copying values from obj to ob1

    cout << "Area of obj: " << obj.calculateArea();
    cout << "\nArea of obj1: " << obj1.calculateArea();

    return 0;
}