/*
 * Stock_Transaction_Program.c
 *
 *  Created on: Feb 8, 2019
 *      Author: ebald
 */

#include <stdio.h>


void stockProgram(){

	//declaration
	int stockCount;               //number of stocks
	double stockPurchaseTotal;     //cost of purchasing price
	double purchaseCommission;    //amount of commission paid for paid
	double sellCommission;        //amount of commission paid for selling
	double stockSaleTotal;        //the total value the stocks were sold for
	double profit;                //the profit of his stock trading

	//assign
	stockCount = 1000;

	//calculations
	stockPurchaseTotal = stockCount * 45.50;        // calculates the cost of purchasing
	purchaseCommission = stockPurchaseTotal * 0.02; // calculates the commission for purchasing
	stockSaleTotal = stockCount *56.90;             // calculates the total sale price of the stocks
	sellCommission = stockSaleTotal * 0.02;         // calculates the commission for selling
	profit = (stockSaleTotal - stockPurchaseTotal) - (sellCommission + purchaseCommission);      // calculates the profit by (Sell price - buy price ) - total commission

	//display the results to two decimals
	printf ("Price paid for the stock: $%0.2f \n", stockPurchaseTotal);
	printf("Commission paid for purchase: $%0.2f \n", purchaseCommission);
	printf("Stock sold for a total of: $%0.2f \n", stockSaleTotal);
	printf("Commission paid for sale: $%0.2f \n", sellCommission);
	printf("Joe made a profit of: $%0.2f \n", profit);




}
