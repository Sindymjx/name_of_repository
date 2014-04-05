#include<iostream>
#include<cstring>
#include"shallowcopy.h"

shallowcopy::shallowcopy()
{
    name = NULL;
}
shallowcopy::shallowcopy(char* str)
{
    name = new char[strlen(str) + 1];
    strcpy(name, str);
}
shallowcopy::shallowcopy(shallowcopy& a)
{
    name = new char[strlen(a.name) + 1];
    strcpy(name, a.name);
}
void shallowcopy::print()
{
    std::cout << "This name is " << name << std::endl;
}
shallowcopy::~shallowcopy()
{
    std::cout << "Delete the name of " << name << std::endl;
    delete []name;
}
