#include <iostream>
using namespace std;

int main(){
    int number;
    int array[1000] = {};
    
    while(true){
        cin >> number;
        if(number != 0){
            if(number > 0 || number <= 1000){
                cout << array[number - 1] << endl;
                array[number -1]++;
            }
        }
        else{
            break;
        }
    }
}