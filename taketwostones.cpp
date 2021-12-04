#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    if (n%2==1) {
        cout << "Alice";  //kalau n ganjil => print Alice

    } else {
        cout << "Bob"; //selain itu, kalau n genap ==> print Bob
    }
   
    return 0;
}