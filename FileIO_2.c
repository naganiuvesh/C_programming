#include<stdio.h>
int main()
{
    FILE *fptr;
    // write 
    fptr = fopen("test.txt", "w");
    char ch[] = "uvesh";
    fprintf(fptr, "%s", ch);
    fclose(fptr);
    return 0;   
}
