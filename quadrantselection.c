#include <stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > 0){
        if (y > 0){
            printf("1\n");
        } else {
            printf("4\n");
        }
    } else {
        if (y > 0){
            printf("2\n");
        } else {
            printf("3\n");
        }
    }
    return 0;
}