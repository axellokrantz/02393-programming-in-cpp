#include <iostream>
#include <numeric>
#include <vector>

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

    int dotProduct = inner_product(a.begin(), a.end(), b.begin(), 0);
    cout << dotProduct;
    
    return 0;
}
