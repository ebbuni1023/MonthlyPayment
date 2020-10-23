#include <stdio.h>

int main(void)
{
   int monthly;
   int amount_of_loan;
   double payment, balance;

   printf("Please input amount of loan: ");
   scanf("%d", &amount_of_loan);

   printf("Monthly\t\t\t Payment\t\t Balance \n");

   payment = amount_of_loan / 12.0;
   balance = amount_of_loan;
   //monthly = 12;
   for (int i = 1; i <= monthly; i++)
   {
      monthly = 12;
      balance = balance - payment;
      if (balance < 0)
         balance = -balance;
      printf("%d\t\t\t %.2f\t\t\t %.2f\n", i, payment, balance);
   }
   return 0;
}
