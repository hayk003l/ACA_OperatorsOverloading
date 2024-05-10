#include "Array.hpp"

Array::Array(const int& size, int* arr) : _size(size), _arr(arr) {}
Array::~Array() {}

int Array::operator[] (const int& index) {
    if(index > _size || index < 0) {
        return -1;
    }
    else {
        return _arr[index];
    }
}

