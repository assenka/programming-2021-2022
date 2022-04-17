#pragma once
#include <iostream>

class IntArr{
    private:
    int* data;
    int capacity;
    int length;

    void expand(int addLength){
        int new_length = length + addLength;
        this->length = 0;
    };

    public:
    IntArr();
    IntArr(int length);
    IntArr(const IntArr& intarr);
    ~IntArr();

    IntArr& operator=(const IntArr& intarr);

    bool operator==(IntArr& intarr);

    void operator+=(int element);

    friend IntArr operator+(IntArr& arr1, IntArr& arr2);

    friend std::ostream& operator<<(std::ostream& stream, IntArr& arr);    
};