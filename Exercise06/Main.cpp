#include <iostream>
#include<cmath>

using namespace std;

class Base {};

class Derived: public Base {};

int main() {
	Derived d;

    try {
        throw d;
    } catch (Derived d) {
        std::cout << "Caught Derived Exception";
    } catch (Base b) {
        std::cout << "Caught Base Exception";
    }

    getchar();
    
	return 0;
}
