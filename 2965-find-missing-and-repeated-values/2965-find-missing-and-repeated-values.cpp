class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> arr;
        int size = grid.size();
        vector<int> result;

        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                arr.push_back(grid[i][j]);
            }
        }

        sort(arr.begin(), arr.end());

        for(int i = 0; i < arr.size()-1; i++) {
            if(arr[i] == arr[i+1]) {
                result.push_back(arr[i]);
                break;
            }
        }

        // set<int> s1;

        // for(int i = 0; i < arr.size(); i++) {
        //     s1.insert(arr[i]);
        // }

        // for(int i = 0; i < size; i++) {
        //     if(i+1 != s1[i]) {
        //         result.push_back(i+1);
        //     }
        // }

        for(int i = 1; i <= arr.size(); i++) {
            if(find(arr.begin(), arr.end(), i) == arr.end()) {
                result.push_back(i);
                break;
            }
        }
        return result;
    }
};