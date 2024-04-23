#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n){
    if(n <= 1) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char const *argv[])
{
    int number;
    std::vector<int> sequence;

    while(cin >> number){
       sequence.push_back(fibonacci(number));
    }

    for (int i = 0; i < sequence.size(); i++){
        cout << sequence[i] << " ";
    }
    
    return 0;
}
