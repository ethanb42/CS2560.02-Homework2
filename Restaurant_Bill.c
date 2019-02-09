/*
 * Restaurant_Bill.c
 *
 *  Created on: Feb 8, 2019
 *      Author: ebald
 */

#include <stdio.h>

void billCalculate() {

	//Declare variables
	double mealCharge;
	double tax;
	double tip;
	double total;

	//assign variables
	mealCharge = 88.67;

	//calculate values
	tax = mealCharge * 0.0675;
	tip = (mealCharge + tax) * 0.2;
	total = mealCharge + tax + tip;

	//display the results

	printf ("Meal Cost: $%0.2f \n",mealCharge );
	printf ("Tax Amount: $%0.2f \n", tax);
	printf ("Tip Amount: $%0.2f \n", tip);
	printf ("Total Bill: $%0.2f \n", total);

	//end

}
