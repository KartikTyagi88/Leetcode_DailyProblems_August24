/*class Solution {
public:
    int findComplement(int num) {

        int ans = 0;

        int i = 0;
        while (num != 1) {
            int rem = num % 2;
            num = num / 2;

            if (rem == 0) {
                ans += 1 * pow(2, i);
            } else {
                ans += 0 * pow(2, i);
            }
            i++;
        }

        ans += 0 * pow(2, i); // Finally the number becomes 1 so it's complement
                              // is 0 that's why we have done 0*pow(2,i) to find
                              // the interger value of the complement

        return ans;
    }
};*/