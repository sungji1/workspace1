#include <stdio.h>

int mp(int base, int exp) {
    int res =1;
    for(int i=0;i<exp;i++){
        // i=0 2=1*2
        // i=0 4=2*2
        // i=0 8=4*2
        // i=0 16=8*2
        // i=0 32=16*2
        // i=0 2=6*2
        // i=0 2=7*2
        // i=0 2=1*2
        // i=0 2=1*2
        // i=0 2=1*2
        // i=0 2=1*2
        // i=0 2=1*2
        
        res = res * base;
    }
    return res;
}
int main() {
    int res;
    res = mp(2,10);
    printf("%d", res);
    return 0;
}