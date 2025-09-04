#include <iostream>
using namespace std;

int count = 0;

class deconstruct {
public:
    // Constructor
    deconstruct() {
        count++;
        cout << "No. of objects created: " << count << endl;
    }

    // Destructor
    ~deconstruct() {
        count--;
        cout << "No. of objects destroyed: " << count << endl;
    }
};

int main() {
    deconstruct obj1;
    {
        deconstruct obj2, obj3;
    } 

    deconstruct obj4;
    return 0;
}

//Output:
//No. of objects created: 1
//No. of objects created: 2
//No. of objects created: 3
//No. of objects destroyed: 2
//No. of objects destroyed: 1
//No. of objects created: 2
//No. of objects destroyed: 1
//No. of objects destroyed: 0
