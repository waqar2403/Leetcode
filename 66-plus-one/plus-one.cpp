class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size()-1;
        bool isz = false;
        for(int i=n;i>=0;i--){
            if(digits[i]+1 <=9){
                digits[i]++; break;
            }else{
                digits[i] =0;
                if(i==0){
                    isz = true;
                }
            }
        }
        if(isz){digits.insert(digits.begin(),1);}
        return digits;
    }
};