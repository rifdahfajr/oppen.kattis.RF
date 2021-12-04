#include <stdio.h>

int main() {
    int n, length, sum=0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &length);
        sum += length;
        sum--;
    }
    printf("%d\n", sum+1);
}