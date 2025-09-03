class Solution {
public:
    bool rec(int n){
        if(n ==1){
            return true;
        }
        if(n <= 0){
            return false;
        }
        if(n%2 != 1){
            return rec(n/2);
        }else {
            return false;
        }
    }
    bool isPowerOfTwo(int n) {
        if (n ==0) {
            return false;
        }
        return rec(n);
    }
};