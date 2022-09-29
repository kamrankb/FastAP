/*
 * TwoD.h
 *
 *  Created on: Sep 22, 2022
 *      Author: student
 */

#ifndef TWOD_H_
#define TWOD_H_

class TwoD { // Class for two dimensional array
	protected:
		double x, y;
	public:
		TwoD(double i, double j) {
			x = i;
			y = j;
		}

		//SETTERs
		//setting X double variable
		void setX(double NewX) {
			x = NewX;
		}

		//setting Y double variable
		void setY(double NewY) {
			y = NewY;
		}

		//GETTERs
		//getting X double variable value
		double getX() {
			return x;
		}

		double getY() {
			return y;
		}
};



#endif /* TWOD_H_ */
