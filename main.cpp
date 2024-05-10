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

    int* arr = new int[size];

    std::cout << "fill the array" << std::endl;

    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    Array obj(size, arr);
    
    std::cout << std::endl;
    std::cout << obj[2] << std::endl;

    std::cout << std::endl;
    std::cout << obj << std::endl; 
}