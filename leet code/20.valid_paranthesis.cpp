class Solution
{
public:
    stack<char> stk;
    bool isValid(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (stk.empty() and (s[i] == ']' or s[i] == '}' or s[i] == ')'))
            {
                return false;
            }
            if (s[i] == '[' or s[i] == '{' or s[i] == '(')
            {
                stk.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (stk.top() == '(')
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
            else if (s[i] == '}')
            {
                if (stk.top() == '{')
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
            else if (s[i] == ']')
            {
                if (stk.top() == '[')
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if (stk.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};