#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
 
    for (size_t i = 2; i < n; i++)
    {
        while(n%i == 0){
            cout << i << " * ";
            n = n / i;
        }
    }
    cout << n << endl;
}