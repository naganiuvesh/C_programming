#include<stdio.h>
int main()
{
    
    // Arithmetic operators 
    int a = 12;
    int b = a - 12;
    b = a + 12;
    b = a / 2;
    b = a * 2;
    b = a % 2;
    b++;
    b--;
    
    // Relational operators using condition 
    int c = 12;
    if(c == 12)
    {
        printf("\n c is 12");
    }
    if(c <= 12)
    {
        printf("\n c is 12 / 12+");
    }
    if(c >= 12)
    {
        printf("\n c is 12 / 12--");
    }
    if(c != 12)
    {
        printf("\n c is not equal to 12");
    }
    if(c < 12)
    {
        printf("\n c is < 12");
    }
    if(c > 12)
    {
        printf("\n c is > 12");
    }
    
    // Logical operators using condition 
    int d = 12, e = 13;
    if(d == 12 && e == 13)
    {
        printf("\n D = 12 and E = 13");
    }
    
    if(d == 12 || e == 13)
    {
        printf("\n D = 12 || E == 13");
    }
    if(d != 13)
    {
        printf("\n d is not equal to 13");
    }
    
    // Assignment opetator - =;
    int z = 7; // z is variable and 7 is value of z
    printf("\n z = %d",z);

    printf("\n\n\tThank you");
    return 0;
}