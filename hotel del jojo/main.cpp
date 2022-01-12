#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#define ll long long
#define ld long double

// alif ardika - 2501990470

//function



int main(){
    
    FILE *fp = fopen("customer/customer_data","r");

    char x[255];
    fscanf(fp,"%s", &x);
    printf("%s", x); 
    
    
    return 0;
}