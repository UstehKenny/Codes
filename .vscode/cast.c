#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 127;
    short s = 300;

    c = s;

    //printf("%d\n",sizeof(c));
    //printf("%d\n",sizeof(s));
    printf("\n%d",c);
    
   
    return EXIT_SUCCESS;
}