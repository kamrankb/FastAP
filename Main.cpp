#include <iostream>
#include<cmath>

using namespace std;

int main() {
	int x = -1;

    std::cout << "Before try \n";

    try {
        std::cout << "Inside try \n";

        if(x < 0) {
            std::cout << "Throw is about to run";
            throw x;
        }
    } catch(int x) {
        std::cout << "Exception Caught \n";
    }
    
    std::cout << "After Exception (Will be executed) \n";

	return 0;
}
