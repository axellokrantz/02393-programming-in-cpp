#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string input;
    int number;

    vector<int> a;
    vector<int> b;

    while(true){
        cin >> input >> number;
        if(cin.fail()){
            break;
        }
        else if(input == "a"){
            a.push_back(number);
        }
        else if (input == "b"){
            b.push_back(number);
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i : a)
        cout << i << ' ';
    
    for (int i : b)
        cout << i << ' ';

    return 0;
}
