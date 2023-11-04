// reverse integer
// https://leetcode.com/problems/reverse-integer/description/

class Solution {
public:
    int reverse(int x) {
        long rev = 0;

        while(x){
            rev = x%10 + rev*10;
            x /= 10;
        }

        if(rev > INT_MAX || rev < INT_MIN) return 0;

        return rev;
    }
};


// class Solution {
// public:
//     int reverse(int x) {
//         if (x >= numeric_limits<int>::max() || x<= numeric_limits<int>::min()) return 0;
//         long int rev = 0;
//         bool sign = x<0;
//         // x = sign ? -1 * x : x;
//         x = sign ? -x : x;
//         while(x>0){
//             rev *= 10;
//             rev +=  x%10;
//             if(rev > numeric_limits<int>::max()) return 0;
//             x /= 10;
//         }

//         return sign ? -rev : rev;
//     }
// };
