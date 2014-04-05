#include"MidToLast.h"
#include"stack.h"
#include<string>

string MidToLast::transfer(string str)
{
    Stack s;
    string ans = "";
    int l = str.length();
    for (int i = 0; i < l; i++) {
        if ((str[i] >= '0')&&(str[i] <= '9')) {
            ans += str[i];
        }
        else if ((str[i] == '+')||(str[i] == '-')) {
            if (s.empty()) {
                s.push(str[i]);
            }
            else if ((s.top() == '*')||(s.top() == '/')||(s.top() == '-')||(s.top() == '+')||(s.top() == '(')) {
                while ((!s.empty())&&(s.top() != '(')) {
                    ans += s.top();
                    s.pop();
                }
                s.push(str[i]);
            }
        }
        else if (str[i] == '(') {
            s.push(str[i]);
        }
        else if (str[i] == ')') {
            while (s.top() != '(') {
                ans += s.top();
                s.pop();
            }
            s.pop();
        }
        else if  ((str[i] == '*')||(str[i] == '/')) {
            if (s.empty()) {
                s.push(str[i]);
            }
            else if ((s.top() == '*')||(s.top() == '/')) {
                while ((!s.empty())&&((s.top() == '*')||(s.top() == '/'))) {
                    ans += s.top();
                    s.pop();
                }
                s.push(str[i]);
            } else {
                s.push(str[i]);
            }
        }
    }
    while ( !s.empty()) {
        if ((s.top() != ')')&&(s.top() != '(')) {
            ans += s.top();
        }
        s.pop();
    }
    return ans;
}
