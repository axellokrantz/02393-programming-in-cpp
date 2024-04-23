#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class fraction {
    private:
        int numerator;
        int denominator;
        void simplify();
        int gcd(int, int);
    public:
        fraction(int x, int y) : numerator(x), denominator(y){
            simplify();
        }
        void add(fraction f);
        void multiply(fraction f);
        void divide(fraction f);
        void display();
        
        
};

int fraction::gcd(int numerator, int denominator){
    while(denominator != 0){
        int t = denominator;
        denominator = numerator % denominator;
        numerator = t;
    }
    return numerator;
}

void fraction::simplify(){
    int gcdValue = gcd(numerator, denominator);
    numerator /= gcdValue;
    denominator /= gcdValue;
}

void fraction::add(fraction f){
    numerator = numerator * f.denominator + f.numerator * denominator;
    denominator *= f.denominator;
    simplify();
}

void fraction::multiply(fraction f){
    denominator *= f.denominator;
    numerator *= f.numerator;
    simplify();
}

void fraction::divide(fraction f){
    numerator *= f.denominator;
    denominator *= f.numerator;
    simplify();
}

void fraction::display(){
    cout << numerator << " / " << denominator << endl;
}

int main(){

    int a, b, c, d;
    string operation;
    string division;

    while(1){

        std::cin >> a >> division >> b >> operation >> c >> division >> d;

        if(cin.fail())
            break;
        
        fraction f1(a, b);
        fraction f2(c, d);
        
        if(operation == "*"){
            f1.multiply(f2);
            f1.display();
        }
        else if (operation == "+"){
            f1.add(f2);
            f1.display();
        }
        else{
            f1.divide(f2);
            f1.display();
        }
    }

    return 0;
}