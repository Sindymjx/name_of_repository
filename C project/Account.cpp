#include<iostream>
#include<string>
#include"Account.h"
using namespace std;

Account::Account()
{
    name_ = "";
    balance_ = 0;
    next_ = NULL;
}
Account::Account(const string& name, double balance)
{
    name_ = name;
    balance_ = balance;
    next_ = NULL;
}
string Account::getName() const
{
    return name_;
}
double Account::getBalance() const
{
    return balance_;
}
Account* Account::getNext() const
{
    return next_;
}
void Account::setName(const string& name)
{
    name_ = name;
}
void Account::setBalance(double balance)
{
    balance_ = balance;
}
void Account::setNext(Account* next)
{
    next_ = next;
}
