#include <cs50.h>
#include <stdio.h>

void print_col(int spaces,int hashes);

int main(void)
{
int height;
do
    {
height=get_int("height ? ");
    }

while(height<1 || height>20);

for(int row=0;row < height ;row++)
{
    int spaces= height-row-1;
    int hashes= row+1;
    print_col(spaces,hashes);
}
}

void print_col(int spaces , int hashes)
{
    for(int i=0;i<spaces;i++)
    {
        printf(" ");
    }
    {
        for(int i=0;i<hashes;i++)
        {
            printf("#");
        }
    }
    printf("\n");
}
