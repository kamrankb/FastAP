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
			if(lengthValue > 20) {
				throw(lengthValue);
			} else if(lengthValue < 0) {
				throw(lengthValue);
			}

			length = lengthValue;

		} catch(float error) {
			std::cout << "\nLength should be greater than 0.00 and less than 20.00";
		}
	}

	void setWidth(float widthValue) {
		try {
			if(widthValue > 20) {
				throw(widthValue);
			} else if(widthValue < 0) {
				throw(widthValue);
			}

			width = widthValue;

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
	rect.getLength();
	rect.getWidth();

	rect.setLength(23.22);

	rect.setWidth(10.2);
	rect.setLength(12.2);

	rect.perimeter();

	rect.area();

	rect.getLength();
	rect.getWidth();
	return 0;
}
