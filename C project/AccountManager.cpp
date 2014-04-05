#include"Account.h"
#include"AccountManager.h"
#include<iostream>
using namespace std;

AccountManager::AccountManager()
{
    head_ = NULL;
}
AccountManager::~AccountManager()
{
    Account* p = head_;
    Account* p_;
    while (p->getNext() != NULL) {
        p_ = p->getNext();
        delete p;
        p = p_;
    }
    delete p;
}
void AccountManager::open(const string& name, double balance)
{
    Account* p = new Account;
    p->setName(name);
    p->setBalance(balance);
    p->setNext(NULL);
    if (head_ == NULL) {
        head_ = p;
    } else {
        Account* p1 = head_;
        while (p1->getNext() != NULL) {
            p1 = p1->getNext();
        }
        p1->setNext(p);
    }
}
      // 参数依次为账户名、账户余额

  // if the name is not existed, please output "no such account"
void AccountManager::close(const string& name)
{
    Account* p = head_;
    if (p->getName() == name) {
        if (AccountManager::getAccountNumber() == 1) head_ = NULL;
        else head_ = head_->getNext();
        delete p;
    } else {
        while(p->getNext() != NULL) {
            if (p->getNext()->getName() == name) break;
            p = p->getNext();
        }
        if (p->getNext() != NULL) {
            Account* p_ = p->getNext();
            p->setNext(p->getNext()->getNext());
            delete p_;
        } else {
            if ((p == head_)&&(p->getName() == name)) {
                delete p;
                head_ = NULL;
            } else {
                std::cout << "no such account" << std::endl;
            }
        }
    }
}  // 通过账户名来关闭账户
int AccountManager::getAccountNumber()
{
    int count = 1;
    Account* p = head_;
    if (p == NULL) {
        count = 0;
    } else {
        while (p->getNext() != NULL) {
            p = p->getNext();
            count++;
        }
    }
    return count;
}  // 获取当前已经开设的账户总数
