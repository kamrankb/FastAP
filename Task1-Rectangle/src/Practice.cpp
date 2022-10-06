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

	void getLength() {
		std::cout << "\nLength of Rectangle is " << length;
	}

	void getWidth() {
		std::cout << "\nWidth of Rectangle is " << width;
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
	//get length and width of Rectangle respectively
	rect.getLength();
	rect.getWidth();

	//Setting invalid length to check the exception
	rect.setLength(23.22);

	//set length and width of Rectangle respectively
	rect.setWidth(10.2);
	rect.setLength(12.2);

	//Calling function to find Perimeter of Rectangle
	rect.perimeter();
	
	//Calling function to find Area of Rectangle
	rect.area();

	//getting length and width of Rectangle respectively
	rect.getLength();
	rect.getWidth();
	
	return 0;
}
