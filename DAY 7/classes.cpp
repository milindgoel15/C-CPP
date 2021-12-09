#include <iostream>
using namespace std;

class abc {
    int i;

public:  // using public constructor for calling functions
    void display()
    {
        cout << "Inside member function";
    }
}; // class ends here

int main() {
    abc obj;       //creating abc class's object
    obj.display(); //calling member function using class object
}