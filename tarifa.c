#include <stdio.h>

int main() {
    int x, n, consum, sisa;
    
    scanf("%d", &x);
    scanf("%d", &n);
    
    sisa = 0;
    for (int i=0;i<n;i++) {
        sisa = sisa + x;
        scanf("%d", &consum);
        sisa = sisa - consum;
    }
    
    sisa = sisa + x;
    printf("%d\n", sisa);
    
    
    return 0;
}