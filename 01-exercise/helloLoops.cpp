#include <iostream>
using namespace std;

int main(){
   int n;
   float sum = 0.0;
   float next;

   cin >> n;
   for (int i = 0; i < n; i++){
        cin >> next;
        sum += next;
   }
   cout << sum << endl;
   
}