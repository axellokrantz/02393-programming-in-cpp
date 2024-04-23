#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    double sum = 0.0;
    cin >> n;

    for (size_t i = 0; i < n; i++)
        sum += pow(-1.0, i)/ (2 * i + 1);

    cout << sum * 4.0;
}