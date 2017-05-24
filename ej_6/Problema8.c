#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
 unsigned long long suma= 0, mayor =0, menor = 0, arr[5];
    int i;
    scanf("%lld",&arr[0]);
mayor = arr[0];
    menor = arr[0];
    suma = arr[0];
    for(i = 1;i < 5; i++){
       scanf("%lld",&arr[i]);
                
        if (arr[i]>mayor)
            mayor=arr[i];
        
        if (arr[i]<menor)
            menor=arr[i];
         suma  += arr[i];
    }
printf("%lld %lld",suma-mayor,suma-menor);
    return 0;
}