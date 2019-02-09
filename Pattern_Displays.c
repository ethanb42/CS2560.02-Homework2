/*
 * Pattern_Displays.c
 *
 *  Created on: Feb 8, 2019
 *      Author: ebald
 */

#include <stdio.h>

void pattern(){


	//Pattern A
	printf("Pattern A \n");

	for (int x=0; x<10; x++){           // for 10 rows
		for (int y=0; y<=x; y++){       //"+" per row
			printf("+");      //prints "+' equal to the row number
		}

		printf("\n \n");   //prints the new line between each
	}

	//Pattern B
	printf("Pattern B \n");
	for (int x=0; x<10; x++){ //for 10 rows
		for (int y=10; y>x; y--){  //"+" per row
			printf("+");         //starts with printing 10 "+" per row and decreases by 1 each time
		}
 		printf("\n \n");    //prints the new line
		}



}

