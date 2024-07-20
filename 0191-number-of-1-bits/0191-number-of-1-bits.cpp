class Solution {
public:
    int hammingWeight(int n) {
        stack<int> st;
        int count = 0;

        if(n == 1) {
            return 1;
        }
         if( n == 0) {
            return 0;
         }

        while(n != 0) {
            st.push(n%2);
            n /= 2;
        }

        while(!st.empty()) {
            if(st.top() == 1) {
                count++;
            }
            st.pop();
        }
        return count;
    }
};