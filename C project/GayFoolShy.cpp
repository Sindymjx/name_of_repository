#include"GayFoolShy.h"
#include"FuErDai.h"
#include"GuanErDai.h"
#include"Account.h"
#include<iostream>

GayFoolShy::GayFoolShy(const string& name,
             const string& fName,
             double fBalance,
             const string& gName,
             double gBalance)
             :FuErDai(name, fName, fBalance), GuanErDai(name, gName, gBalance)
{
    name_ = name;
}

string GayFoolShy::getName() const
{
    return name_;
}  // 获取高帅富名字
double GayFoolShy::getBalance() const
{
    return (FuErDai::getBalance() + GuanErDai::getBalance());
}  // 获取高帅富财产
