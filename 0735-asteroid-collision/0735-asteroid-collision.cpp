class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int size = asteroids.size();
        stack<int> s;

        for(int a : asteroids) {
            if(a > 0) {
                s.push(a);
            }
            else {
                while(!s.empty() && s.top() > 0 && s.top() < -a) {
                    s.pop();
                }
                if(s.empty() || s.top() < 0) {
                    s.push(a);
                }
                if(!s.empty() && s.top() == -a) {
                    s.pop();
                }
            }
        }
        size = s.size();
        vector<int> arr(size);

        for(int i = size-1; i >= 0; i--) {
            arr[i] = s.top();
            s.pop();
        }
        return arr;
    }
};