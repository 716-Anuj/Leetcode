class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int time = 0;

        while(1) {
            for(int i = 0; i < n; i++) {
                if(tickets[i] > 0) {
                    tickets[i] = tickets[i] - 1;
                    time++;
                }

                if(i == k && tickets[i] == 0) {
                    return time;
                }
            }
        }
        return 0;
    }
};