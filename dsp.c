#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    int c=0;
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
        scanf("%d",&a[a_i]);}
        for(int a_i = 0; a_i < n; a_i++)
            for(int j=a_i+1;j<n;j++)
            if((a[a_i]+a[j])%k==0)
            c++;
            printf("%d",c);
                
    return 0;
}

