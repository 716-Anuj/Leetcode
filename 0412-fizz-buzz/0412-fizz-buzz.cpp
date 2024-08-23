class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        vector<string> result;

        ans.push_back("FizzBuzz");
        ans.push_back("Fizz");
        ans.push_back("Buzz");

        for(int i = 0; i < n; i++) {
            if((i+1)%3 == 0 && (i+1)%5 == 0) {
                result.push_back(ans[0]);
            }
            else if((i+1)%3 == 0) {
                result.push_back(ans[1]);
            }
            else if((i+1)%5 == 0){
                result.push_back(ans[2]);
            }
            else {
                result.push_back(to_string(i+1));
            }
        }
        return result;
    }
};