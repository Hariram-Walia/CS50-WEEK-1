#include <cs50.h>
#include <stdio.h>

int main(void)
{
int x = get_int("What's is x ");
int y = get_int("What's is y ");
    if (x<y)
    {
        printf("x is smaller than y\n ");
    }
    else if (x>y)
    {
        printf(" x is greater than y\n ");
    }
    else
    {
        printf("x is equal to y\n ");
    }


}
