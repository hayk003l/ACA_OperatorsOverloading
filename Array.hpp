#ifndef __ARRAY__
#define __ARRAY__
#include <iostream>

class Array {
public:
    Array(const int& size, int* arr);
    ~Array();

    int operator[] (const int& index);
    friend std::ostream& operator<<(std::ostream& os, const Array& obj);

private:
    int _size = 0;
    int* _arr = nullptr;
};


#endif // __ARRAY__