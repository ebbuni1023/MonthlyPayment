#include <stdio.h>

int main(void)
{
	int amount_of_loan, monthly;
	float payment, balance;

	printf("Please input amount of loan: ");
	scanf("%d", &amount_of_loan);

	printf("Monthly\t\t\t Payment\t\t\t Balance");

	monthly = 12;
	for (int i = 0; i < monthly, i++)
	{	
		payment = amount_of_loan / monthly;
		balance = amount_of_loan - payment;
		printf("%d\t\t\t %f.2\t\t\t %f.2\n", i, payment, balance);
	}
	return 0;
}
