#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    //kalau n ganjil => print Alice
    if (n%2==1) printf("Alice");
    //selain itu, kalau n genap ==> print Bob
    else printf("Bob");
    
    return 0;
}