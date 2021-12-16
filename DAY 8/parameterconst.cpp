// parameterized constructor

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

    double calculateArea() {
        return length * height;
    }
};

int main() {
    wall obj(10, 5);
    wall obj1(10, 6);

    cout << "Area of obj is: " << obj.calculateArea();
    cout << "\nArea of obj1 is: " << obj1.calculateArea();
    return 0; 
}