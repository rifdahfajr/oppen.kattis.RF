#include <iostream>
using namespace std;
int main() {
    int x, n, consum, sisa;
    
    cin >> x;
    cin >> n;
    
    sisa = 0;
    for (int i=0;i<n;i++) {
        sisa = sisa + x;
        cin>>consum;
        sisa = sisa-consum;
    }
    
    sisa = sisa + x;
    cout<<sisa<< "\n";
    
    
    return 0;
}