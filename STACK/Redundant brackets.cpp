https://www.codingninjas.com/codestudio/problems/redundant-brackets_975473?leftPanelTab=0



/*
    Time Complexity: O(|S|)
    Space Complexity: O(|S|)

    Where '|S|' is the length of the given string.
*/

#include <stack>

bool findRedundantBrackets(string &s)
{
    // For keeping track of opening and closing brackets.
    stack<char> brackets;

    int n = s.length();

    // Iterate through the string.
    for (int i = 0; i < n; i++)
    {
        // Push the current character to the stack if it is an operator or an opening bracket.
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            brackets.push(s[i]);
        }

        // If the current character is a closing bracket.
        else if (s[i] == ')')
        {
            // For checking if the current bracket is redundant or not.
            bool isRedundant = true;

            // Keep popping from the stack till we reach an opening bracket.
            while (brackets.top() != '(')
            {
                // If we find a operator then the current bracket is not redundant.
                if (brackets.top() == '+' || brackets.top() == '-' || brackets.top() == '*' || brackets.top() == '/')
                {
                    isRedundant = false;
                }

                brackets.pop();
            }

            brackets.pop();

            // Return true if we did not find any operator before finding the opening bracket.
            if (isRedundant == true)
            {
                return true;
            }
        }
    }

    // If no bracket is redundant then return false.
    return false;
}