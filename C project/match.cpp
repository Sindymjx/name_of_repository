#include<iostream>
#include"match.h"
#include"stack.h"

void Card::printCard(int x)
{
    int i, getnum;
    Queue q;
    for (i = 1; i <= x; i++) {
        q.push(i);
    }
    while (q.getSize() > 2) {
        std::cout << q.getFront() << " ";
        q.pop();
        getnum = q.getFront();
        q.pop();
        q.push(getnum);
    }
    while (!q.empty()) {
        cout << q.getFront() << " ";
        q.pop();
  }
    std::cout << endl;
}
