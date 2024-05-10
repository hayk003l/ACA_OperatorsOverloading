#ifndef __ARRAY__
#define __ARRAY__
#include <iostream>

class Array {
public:
    Array(const int& size);
    ~Array();
    Array(const Array& obj); 
    Array& operator=(const Array& obj);


    int operator[] (const int& index);
    friend std::ostream& operator<<(std::ostream& os, const Array& obj);
    void addElement(const int& num);
    void deleteElement(const int& index);
    void printArray();
private:
    int _size = 0;
    int* _arr = nullptr;
    int _count = 0;
};


#endif // __ARRAY__