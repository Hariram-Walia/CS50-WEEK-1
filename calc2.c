#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int dollars=1;
    while(true)
    {
        char c = get_char("here's $%i. do you want to double it and give it to next person? ", dollars);
        if(c=='y')
        {
            dollars = dollars * 2;
        }
    }
}

