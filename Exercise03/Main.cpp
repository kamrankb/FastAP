#include <iostream>
#include<cmath>

using namespace std;

int main() {
	try {
        throw 'a';
    } catch (int x) {
        std::cout << "Caught " << x;
    } catch (...) {
        std::cout << "Default Exception\n";
    }
    
	return 0;
}
