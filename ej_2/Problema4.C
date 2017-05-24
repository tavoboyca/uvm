#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long n; 
    long suma = 0;
    scanf("%d",&n);
    
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        suma = suma + arr[arr_i];
    }
    printf("%ld",suma);
    return 0;
}