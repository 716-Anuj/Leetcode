class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int val = 0;

        int size = commands.size();

        for(int i = 0; i < size; i++) {
            if(commands[i] == "DOWN") {
                val = val + n;
            }
            else if(commands[i] == "UP") {
                val = val-n;
            }
            else if(commands[i] == "RIGHT") {
                val = val+1;
            }
            else {
                val = val-1;
            }
        }
        return val;
    }
};