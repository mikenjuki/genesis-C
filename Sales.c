#include <stdio.h>
#define NUM_PRODUCTS 5

const double productPrices[NUM_PRODUCTS] = { 2.98, 4.50, 9.98, 4.49, 6.87 };

double calcTotalSales(int sales[]);
void trackProductSales();

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");
	trackProductSales();

	return 0;
}


double calcTotalSales(int sales[])
{
	double totalSales = 0.0;
	for (int i = 0; i < NUM_PRODUCTS; i++)
	{
		totalSales += sales[i] * productPrices[i];
	}

	return totalSales;
}


//get total sales for each product and store in array
void trackProductSales()
{
	int productSales[NUM_PRODUCTS] = { 0 };
	printf("\nKeep track of your %d products\n", NUM_PRODUCTS);

	for (int i = 0; i < NUM_PRODUCTS; i++)
	{
		int productID, weekSales;

		printf("Enter product number and no. of items sold for product %d: ", i + 1);
		scanf_s("%d%d", &productID, &weekSales);

		//termination 
		if (productID == -1)
		{
			printf("\nTerminating program!");
			break;
		}

		if (productID >= 1 && productID <= NUM_PRODUCTS) {
			productSales[productID - 1] = weekSales;
		}
		else {
			printf("Invalid product ID: %d\n", productID);
			i--;  // Repeat this iteration to allow re-entry of valid input
		}

	}
	double totalSales = calcTotalSales(productSales);
	printf("Total week sales: %.3lf\n", totalSales);

}
