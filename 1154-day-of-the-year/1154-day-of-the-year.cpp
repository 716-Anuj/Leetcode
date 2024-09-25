class Solution {
public:
    int dayOfYear(string date) {
        int flag = 0;

        int arr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        string yy;
        yy.push_back(date[0]);
        yy.push_back(date[1]);
        yy.push_back(date[2]);
        yy.push_back(date[3]);

        int yr = stoi(yy);

        string mm;
        mm.push_back(date[5]);
        mm.push_back(date[6]);

        int mn = stoi(mm);

        string dd;
        dd.push_back(date[8]);
        dd.push_back(date[9]);

        int dt = stoi(dd);
        int result = dt;

        if(yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0) {
            flag = 1;
        }

        for(int i = 0; i < mn; i++) {
            result += arr[i];
            if(i == 2 && flag == 1) result++;
        }
        return result;
    }
};