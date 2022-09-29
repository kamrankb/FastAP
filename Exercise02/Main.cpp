#include <iostream>
#include<cmath>

using namespace std;

int main() {
	try {
        throw 10;
    } catch (char *excep) {
        std::cout << "Caught " << excep;
    } catch (...) {
        std::cout << "Default Exception";
    }
    
	return 0;
}
