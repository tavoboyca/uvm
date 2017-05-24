#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
int     n; 
    float pos = 0;
  float   neg = 0;
  float  cero =0;
    
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        
       if(arr[arr_i]>0){
           pos = pos +1;
       }
 if (arr[arr_i]<0){
     neg = neg +1;
 }
        if (arr[arr_i]==0){
            cero = cero +1;
        }
    }
    
float a,b,c;
    a = pos/n;
b = neg/n;
    c = cero/n;
    
printf("%f\n%f\n%f",a,b,c);
  
    return 0;
}
