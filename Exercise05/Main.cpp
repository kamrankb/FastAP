#include <iostream>
#include<cmath>

using namespace std;

class Base {};

class Derived: public Base {};

int main() {
	Derived d;

    try {
        throw d;
    } catch (Base b) {
        std::cout << "Caught Base Exception";
    } catch (Derived d) {
        std::cout << "Caught Derived Exception";
    }

    getchar();
    
	return 0;
}
