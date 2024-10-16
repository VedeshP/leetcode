#include <stack>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        int len = s.length();

        for (int i = 0; s[i] != '\0'; i++)
        {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[')
            {
                stack.push(ch);
            }

            else if (ch == ')' || ch == '}' || ch == ']')
            {
                if (stack.empty() || !isMatchingPair(stack.top(), ch))
                {
                    return false;
                }
                stack.pop();

            }
            
        }

        return stack.empty();
    }

    bool isMatchingPair(char left, char right)
    {
        return (left == '(' && right == ')') ||
            (left == '{' && right == '}') ||
            (left == '[' && right == ']');
    }
};