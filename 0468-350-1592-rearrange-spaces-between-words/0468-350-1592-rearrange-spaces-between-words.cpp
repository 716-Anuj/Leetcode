class Solution {
public:
    string reorderSpaces(string text) {
        int size = text.size();
        int cnt = 0;
        string result;
        string word;
        vector<string> words;

        stringstream ss(text);

        while(ss >> word) {
            words.push_back(word);
        }

        for(int i = 0; i < size; i++) {
            if(text[i] == ' ') cnt++;
        }

        if(cnt == 0) return text;

        int no_of_space = words.size() == 1 ? 0 : cnt/(words.size()-1);
        int extra = words.size() == 1 ? cnt : cnt % (words.size()-1);

        for(int i = 0; i < words.size(); i++) {
            result += words[i];

            if(i != words.size()-1) {
                for(int j = 0; j < no_of_space; j++) {
                    result += ' ';
                }
            }
        }

        for(int i = 0; i < extra; i++) {
            result += ' ';
        }
        return result;
    }
};