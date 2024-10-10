#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        for (char x : s) {
            if (!st.empty() && st.top() == '(' && x == ')') {
                st.pop();
            } else {
                st.push(x);
            }
        }
        return st.size();
    }
};

int main() {
    Solution solution;
    string input;
    
    cout << "Enter a string of parentheses: ";
    cin >> input;

    int result = solution.minAddToMakeValid(input);
    cout << "Minimum additions required to make the string valid: " << result << endl;

    return 0;
}
