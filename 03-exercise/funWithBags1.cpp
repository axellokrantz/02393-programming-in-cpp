#include <iostream>
#include <set>
#include <string>
using namespace std;


int main(){

    std::set<int> bag;
    std::string command;
    int x;

    while(true){
        std::cin >> command;

        if(command == "add"){
            std::cin >> x;
            bag.insert(x);
        }
        else if(command == "del"){
            std::cin >> x;
            bag.erase(x); 
        }
        else if(command == "qry"){
            std::cin >> x;
            if(bag.find(x) != bag.end()){
                std::cout << "T";
            }
            else{
                std::cout << "F";
            }
        }
        else if(command == "quit"){
            break;
        }
    }
}