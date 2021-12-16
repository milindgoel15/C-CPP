// default constructor

#include <iostream>
using namespace std;

class wall {
private:  // cannot be accessible by other classes
    double length;

public:
    wall()
    {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Creating a wall of length = " << length << endl;
    }
};

int main() {
    wall wall1;
    return 0;
}