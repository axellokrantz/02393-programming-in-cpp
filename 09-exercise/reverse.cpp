#include <vector>
#include <iostream>
using namespace std;

void reverseSequence(vector<int>& sequence, int start, int end){
    if(start >= end)
        return;
    int tmp = sequence[start];
    sequence[start] = sequence[end];
    sequence[end] = tmp;
    reverseSequence(sequence, start + 1, end - 1);
}

int main(int argc, char const *argv[])
{
    int number;
    vector<int> sequence;

    while (cin >> number) {
        sequence.push_back(number);
    }

    reverseSequence(sequence, 0, sequence.size() - 1);

    for (int i = 0; i < sequence.size(); i++)
        cout << sequence[i] << " ";
    
    return 0;
}
