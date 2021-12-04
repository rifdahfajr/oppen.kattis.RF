#include <iostream>
using namespace std;

int main() {
    int n, length, sum=0;
    cin >> n;
    while(n--) {
        cin >> length;
        sum += length;
        sum--;
    }
    cout << sum+1 << "\n";
}