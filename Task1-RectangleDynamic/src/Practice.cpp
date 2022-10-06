#include <iostream>
using namespace std;

class Rectangle {
private:
	float length, width;

public:
	Rectangle() {
		length = 1;
		width = 1;
	}

	float getLength() {
		return length;
	}

	float getWidth() {
		return width;
	}

	void setLength(float lengthValue) {
		try {
			if(lengthValue > 0 && lengthValue < 20.00) {
				length = lengthValue;
			} else {
				throw(lengthValue);	
			}
		} catch(float error) {
			std::cout << "\nLength should be greater than 0.00 and less than 20.00";
		}
	}

	void setWidth(float widthValue) {
		try {
			if(widthValue > 0 && widthValue < 20.00) {
				length = widthValue;
			} else {
				throw(widthValue);	
			}
		} catch(float error) {
			std::cout << "\nWidth should be greater than 0.00 and less than 20.00";
		}
	}

	float perimeter() {
		// Perimeter Formula: P=2(l+w)
		float p = 2*(length+width);
		std::cout << "\nPerimeter of Rectangle is " << p;

		return p;
	}

	float area() {
		// Area Formula: A=l*w
		float a = length*width;
		std::cout << "\nArea of Rectangle is " << a;

		return a;
	}


};

int main() {
	Rectangle rect;
	float width, length;

	std::cout << "\nEnter Length of Rectangle:";
	std::cin >> length;
	rect.setLength(length);

	std::cout << "\nEnter Width of Rectangle:";
	std::cin >> width;
	rect.setWidth(width);

	//get length and width of Rectangle respectively
	std::cout << "\nLength of Rectangle is " << rect.getLength();
	std::cout << "\nWidth of Rectangle is " << rect.getWidth();

	//Calling function to find Perimeter of Rectangle
	rect.perimeter();
	
	//Calling function to find Area of Rectangle
	rect.area();

	return 0;
}
