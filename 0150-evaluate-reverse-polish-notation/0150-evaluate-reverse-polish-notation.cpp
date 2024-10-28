class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int size = tokens.size();
        stack<int> s;

        for(int i = 0; i < size; i++) {
            if(tokens[i] == "*" || tokens[i] == "+"|| tokens[i] == "-" || tokens[i] == "/") {
                int temp = s.top();
                s.pop();

                if(tokens[i] == "*") {
                    s.top() = s.top() * temp;
                }
                else if(tokens[i] == "-"){
                    s.top() = s.top() - temp;
                }
                else if(tokens[i] == "/") {
                    s.top() = s.top() / temp;
                }
                else {
                    s.top() = s.top() + temp;
                }
            }
            else {
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};