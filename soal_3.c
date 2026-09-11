#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long a,b,c;
    
    if(scanf("%lld", &a) ==1 ){
        for (b=1; b<= a; b++){
            c = (b*b*(b-1)*(b-1))/2;
            printf("%lld\n",c);
        }
    }
    
    return 0;
}
