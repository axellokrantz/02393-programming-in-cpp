#include <iostream>
using namespace std;

int min(int x, int y, int z) {
    return min(min(x, y), z);
}

int levensteinDistance(string& str1, string& str2, int n, int m){
    
    if(n == 0)
        return m;
    if (m == 0)
        return n;

    if(str1[n-1] == str2[m-1]){
        return levensteinDistance(str1, str2, n - 1, m -1);
    }

    int insert = levensteinDistance(str1, str2, n, m - 1) + 1;
    int replace = levensteinDistance(str1, str2, n - 1, m - 1) + 1;
    int remove = levensteinDistance(str1, str2, n - 1, m) + 1;

    return min(insert, replace, remove);
}

int main(int argc, char const *argv[])
{
    string str1;
    string str2;

    cin >> str1 >> str2;

    int distance = levensteinDistance(str1, str2, str1.length(), str2.length());
    cout << distance;

    return 0;
}
