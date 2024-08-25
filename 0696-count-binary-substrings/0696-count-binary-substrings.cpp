class Solution {
public:
    int countBinarySubstrings(string s) {
        // int size = s.size();
        // int count = 0;

        // if(size == 1) return 0;

        // for(int i = 0; i < size; i++) {
        //     int flag = 0;
        //     int count0 = 0;
        //     int count1 = 0;
        //     int j = i;
        //     while(j < size) {
        //         if(flag == 2) {
        //             break;
        //         }
        //         if(s[j] != s[j+1] && j+1 < size) {
        //             flag++;
        //         }
        //         if(s[j] == '0') {
        //             count0++;
        //         }
        //         if(s[j] == '1') {
        //             count1++;
        //         }
        //         if(count0 == count1 && count0 != 0) {
        //             count++;
        //             break;
        //         }
        //         j++;
        //     }
        // }
        // return count;

        int left, right, ans = 0;

        for(int i = 1; i < s.length(); i++) {
            if(s[i] != s[i-1]) {
                left = i-2;
                right = i+1;
                ans++;

            while(left >= 0 && right < s.length() && s[left] == s[left+1] && s[right] == s[right-1]) {
                left--;
                right++;
                ans++;
            }
            i = right-1;
        }
        }
        return ans;
    }
};