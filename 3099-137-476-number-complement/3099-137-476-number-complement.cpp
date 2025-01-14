class Solution {
public:
    int findComplement(int num) {
        int bits = floor(log2(num)) + 1;
        int mask = (1ULL << bits) - 1;
        return num ^ mask;
    }
};