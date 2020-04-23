#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int a;
    printf("enter your input : (enter 'x' to exit)\n");
    while((a=getchar())!='x'){
        putchar(a);
    }
    // putchar(a);
    return 0;
}