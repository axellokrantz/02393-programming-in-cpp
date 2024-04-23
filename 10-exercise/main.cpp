#include "doubly-linked.h"

int main(int argc, char const *argv[])
{
    List myList;
    myList.insert(1);
    myList.insert(2);
    myList.insert(13);
    myList.reverse();
    myList.print();
    return 0;
}
