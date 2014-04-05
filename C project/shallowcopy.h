#ifndef SHALLOWCOPY_H
#define SHALLOWCOPY_H
#include<iostream>

class shallowcopy
{
public:
    shallowcopy();
    shallowcopy(char*);
    shallowcopy(shallowcopy&);
    void print();
    ~shallowcopy();
private:
    char* name;
};
#endif // SHALLOWCOPY_H

