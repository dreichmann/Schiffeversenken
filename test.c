#include "hilfe.h"
#include <stdio.h>

int main(void){
int z;
int a = 5, b = 7;

z=add_it(a , b) ;
printf("z = %d\n", z);
z =  subtract_it(a, b) ;
printf("z = %d\n", z);
printf("Please press ENTER to exit program\n");
z = getchar();
return 0;

}