#include "int_arr.h"

IntArr::IntArr(){
    this->data = 0;
    this->capacity = 0;
    this->length = 0;
}

IntArr::IntArr(int capacity){
    if(capacity > length){
        int* new_data = new int[length * 2];

        for(int i = 0; i < length * 2; ++i){
            new_data[i] = rand() % 10;
        }

        delete[] data;
        data = new_data;
        length = length * 2;
    }
    else{
        int* data = new int[length];

        for(int i = 0; i < length; ++i){
            data[i] = rand() % 10;
        }
    } 
}

IntArr::IntArr(const IntArr& intarr){
    this->length = length;
    this->capacity = capacity;
    int* data1 = new int[length];

    for(int i = 0; i < length; ++i){
        data1[i] = data[i];
    }
}

IntArr::~IntArr(){
    delete[] data;
    this->data = 0;
    this->capacity = 0;
    this->length = 0;
}

IntArr& IntArr::operator=(const IntArr& intarr){
    if(this->length > 0){
        delete[] data;
    }
    this->length = length;
    capacity = intarr.capacity;
    int* data = new int[length];

    for(int i = 0; i < length; ++i){
        data[i] = intarr.data[i];
    }
    return *this;
}

bool IntArr::operator==(IntArr& intarr){
    for(int i = 0; i < intarr.length; ++i){
        if(this->data[i] != data[i]){
            return false;
        }
    }
    return true;
}

void IntArr::operator+=(int element){
    if(capacity < length){
        data[length - capacity] = element;
    }
    else if(capacity >= length){
        int* new_data = new int[length * 2];

        for(int i = 0; length * 2; ++i){
            new_data[i] = 0;
        }

        for(int i = 0; i < capacity; ++i){
            new_data[i] = data[i];
        }

        new_data[length - capacity] = element;
        delete[] data;
        data = new_data;
    }
}

IntArr operator+(IntArr& arr1, IntArr& arr2){
    int new_length = arr1.capacity + arr2.capacity;
    IntArr arr3(new_length);

    for(int i = 0; i < arr1.capacity; ++i){
        arr3.data[i] = arr1.data[i];
    }

    for(int i = arr1.capacity; i < arr2.capacity; ++i){
        arr3.data[i] = arr2.data[i];
    }
    delete[] arr1.data;
    delete[] arr2.data;
    return arr3;
}

std::ostream& operator<<(std::ostream& stream, IntArr& intarr){
    for(int i = 0; i < intarr.capacity; ++i){
        stream << intarr.data[i] << "; ";
    }
    return stream;
}

