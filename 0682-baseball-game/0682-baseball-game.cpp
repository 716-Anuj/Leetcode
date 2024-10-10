class Solution {
public:
    int calPoints(vector<string>& operations) {
        int size = operations.size();
        stack<int> st;

        for(int i = 0; i < size; i++) {
            if(operations[i] == "C") {
                st.pop();
            }
            else if(operations[i] == "D") {
                st.push(2*st.top());
            }
            else if(operations[i] == "+"){
                int a = st.top();
                st.pop();
                int b = a + st.top();

                st.push(a);
                st.push(b);
            }
            else {
                st.push(stoi(operations[i]));
            }
        }
        int sum = 0;
        int s = st.size();

        for(int i = 0; i < s; i++) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};