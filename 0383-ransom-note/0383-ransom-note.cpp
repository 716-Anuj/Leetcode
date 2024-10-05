class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int size1 = ransomNote.size();
        int size2 = magazine.size();

        vector<int> alphabet(26, 0);
        vector<int> alphabet1(26, 0);

        for(int i = 0; i < size1; i++) {
            alphabet[ransomNote[i]-'a']++;
        }

        for(int i = 0; i < size2; i++) {
            alphabet1[magazine[i]-'a']++;
        }

        for(int i = 0; i < alphabet.size(); i++) {
            if(alphabet[i] > alphabet1[i]) return false;
        }
        return true;
    }
};