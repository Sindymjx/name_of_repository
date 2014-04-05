#include<iostream>
#include"stack.h"
using namespace std;

Stack::Stack()
{
    top_node = NULL;
    count = 0;
}
bool Stack::empty() const
{
    return (count == 0);
}
void Stack::push(const char item)
{
    Node* new_node = new Node(item, top_node);
    top_node = new_node;
    count++;
}
void Stack::pop()
{
    Node* p = top_node->next;
    delete top_node;
    top_node = p;
    count--;
}
char Stack::top() const
{
    return top_node->entry;
}
int Stack::size() const
{
    return count;
}
