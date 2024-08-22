class Solution {
public:
    int findComplement(int num) {        
        int copy = num;
        int bitcount = 0;

        while(copy != 0)
        {
            copy >>= 1;
            bitcount++;
        }

        unsigned int bitmask = 1 << bitcount;
        bitmask--;

        return num ^ bitmask;
    }
};