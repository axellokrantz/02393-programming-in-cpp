#include <iostream>
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

    int i, j = 0;

    while (i < a.size() || j < b.size()) {
        if (i < a.size()) {
            cout << a[i] << " ";
            i++;
        }
        if (j < b.size()) {
            cout << b[j] << " ";
            j++;
        }
    }

    cout << endl;
    return 0;
}
