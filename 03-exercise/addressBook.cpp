#include <iostream>
#include <sstream>
#include <map>


using namespace std;

struct Contact {
    std::string name;
    std::string middleName;
    std::string lastName;
    std::string phoneNumber;
    std::string streetAddress;
    std::string houseNumber;
    std::string zipCode;
    std::string region;
};

int main() {
    std::map<int, Contact> addressBook;
    std::string command;

    while (std::cin >> command) {
        if (command == "add") {
            int page;
            std::cin >> page;
            Contact contact;
            std::cin >> contact.name >> contact.middleName >> contact.lastName
                    >> contact.phoneNumber >> contact.streetAddress >> contact.houseNumber
                    >> contact.zipCode >> contact.region;
            if(addressBook.find(page) == addressBook.end() && page <= 50){
                addressBook[page] = contact;
            }

        } else if (command == "clr") {
            int page;
            std::cin >> page;
            addressBook.erase(page);
        } else if (command == "qry") {
            int page;
            std::cin >> page;
            if (addressBook.find(page) != addressBook.end()) {
                Contact contact = addressBook[page];
                std::cout << contact.name << "," << contact.middleName << "," << contact.lastName
                          << "," << contact.phoneNumber << "," << contact.streetAddress << ","
                          << contact.houseNumber << "," << contact.zipCode << "," << contact.region << endl;
            }
        } else if (command == "quit") {
            break;
        }
    }
    return 0;  
}
