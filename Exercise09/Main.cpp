#include <iostream>
#include<cmath>

using namespace std;

class Test {
public:
    Test() { cout << "Constructor of Test" << endl; }
    ~Test() { cout << "Destructor of Test" << endl; }
};

int main() {
	try {
        Test t1;
        throw 10;
    } catch (int i) {
        std::cout << "Caught " << i;
    }

	return 0;
}
