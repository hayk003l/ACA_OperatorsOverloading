#include <iostream>
#include "Array.hpp"

std::ostream& operator<<(std::ostream& os, const Array& obj) {
    os << obj._size;
    return os;
}


int main() {
    int size = 0;
    std::cout << "Enter the size of your array" << std::endl;
    std::cin >> size;

    Array obj(size);
 
    obj.addElement(4);
    obj.addElement(3);
    obj.addElement(4);
    obj.addElement(1);  
    obj.addElement(5);

    std::cout << obj[2] << std::endl;

    obj.deleteElement(0);
    obj.printArray();


    return 0;
}