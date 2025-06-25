#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
 float amount;
 do
 {
  amount=get_float("Enter the owed amount ");
 }
 while(amount<0);

 int cents=amount;
 int coins=0;

 coins+= cents/25;
 cents= cents%25;

 coins+= cents/10;
 cents = cents%10;

 coins += cents/5;
 cents  = cents%5;

 coins += cents;
printf("coins: %i\n" , coins);
}
