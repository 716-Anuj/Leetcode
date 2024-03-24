class Solution {
public:
    int clumsy(int n) {
        stack<int> s;
        s.push(n);

        int operation = 0;

        for(int i = n-1; i > 0; i--)
        {
            switch(operation)
            {
                case 0 : s.top() *= i; break;
                case 1 : s.top() /= i; break;
                case 2 : s.push(i);break;
                case 3 : s.push(-i);
            }
            operation = (operation + 1)%4;
        }

        int result = 0;

        while(!s.empty())
        {
            result = result + s.top();
            s.pop();
        }
        return result;
    }
};