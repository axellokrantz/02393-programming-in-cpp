#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(vector<int> sequence, int start, int end){
 
    if(start >= end){
        return true;
    }

    if(sequence[start] == sequence[end]){
        return isPalindrome(sequence, start + 1, end - 1);
    }
    else{
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int number;
    vector<int> sequence;
    while(cin >> number){
        sequence.push_back(number);
    }

    if(isPalindrome(sequence, 0, sequence.size() - 1)){
        cout << "yes";
    }
    else{
        cout << "no";
    }

    return 0;
}
