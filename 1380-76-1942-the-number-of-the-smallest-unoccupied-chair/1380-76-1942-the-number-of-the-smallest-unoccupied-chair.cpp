class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int size = times.size();
        vector<int> chairs(size, -1);

        int target = times[targetFriend][0];
        sort(times.begin(), times.end());

        for(auto it : times) {
            int arrival = it[0];
            int dept = it[1];

            for(int i = 0; i < size; i++) {
                if(arrival >= chairs[i]) {
                    chairs[i] = dept;
                    if(arrival == target) {
                        return i;
                    }
                    break;
                }
            }
        }
        return -1;
    }
};