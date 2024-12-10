#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include<vector>

template <typename T>
void CP::stack<T>::mitosis(int a, int b){
    std::vector<T> v, d;
    size_t p = 0, f = mSize;
    while(p <= b){
        if(p < a){
            v.push_back(mData[mSize - 1]);
            pop();
            p++;
        }
        else if(p <= b){
            d.push_back(mData[mSize - 1]);
            pop();
            p++;
        }
    }
    for(int i = d.size()-1; i >= 0; i--){
        push(d[i]);
        push(d[i]);
    }
    for(int i = v.size()-1; i >= 0; i--){
        push(v[i]);
    }
}

#endif