#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;

    for (size_t i = 0; i < n + 1; i++)
        sum += i;

    cout << sum << endl;
}