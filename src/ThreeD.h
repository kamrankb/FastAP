/*
 * ThreeD.h
 *
 *  Created on: Sep 22, 2022
 *      Author: student
 */

#ifndef THREED_H_
#define THREED_H_


class ThreeD: public TwoD {
	private:
		double z;
	public:
		ThreeD(double i, double j, double k) : TwoD(i, j) {
			z = k;
		}

		void setZ(double NewZ) {
			z = NewZ;
		}

		double getZ() {
			return z;
		}
};


#endif /* THREED_H_ */
