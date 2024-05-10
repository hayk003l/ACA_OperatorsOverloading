#include "Array.hpp"

Array::Array(const int& size) : _size(size) {
    _arr = new int[_size];
    for (int i = 0; i < _size; ++i) {
        _arr[i] = 0;
    }
}

Array::~Array() {
    delete[] _arr;
    _arr = nullptr;
}
Array::Array(const Array& obj) {
    this->_count = obj._count;
    this->_size = obj._size;
    _arr = new int[_size];
    for (int i = 0; i < _size; ++i) {
        this->_arr[i] = obj._arr[i];
    }
}

Array& Array::operator=(const Array& obj) {
    if(this != &obj) {
        delete[] _arr;
        this->_size = obj._size;
        this->_count = obj._count;
        for (int i = 0; i < _size; ++i) {
            this->_arr[i] = obj._arr[i];
        }
    }
    return *this;
}

int Array::operator[] (const int& index) {
    if(index > _size || index < 0) {
        return -1;
    }
    else {
        return _arr[index];
    }
}


void Array::addElement(const int& num) {
    if (_count > _size) {
        std::cout << "Wrong operation." << std::endl;
    }
    else {
        _arr[_count++] = num;
    }
}

void Array::deleteElement(const int& index) {
    if (index >= _count) {
        std::cout << "Wrong operation." << std::endl;
    }
    else {
        for (int i = index; i < _count - 1; ++i) {
            _arr[i] = _arr[i + 1];
        }
        _arr[_count] = 0;
        --_count;
    }
}

void Array::printArray() {
    for (int i = 0; i < _count; ++i) {
        std::cout << _arr[i] << " ";
    }
}