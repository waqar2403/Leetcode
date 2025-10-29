class Solution {
public:
    int smallestNumber(int n) {
    string bi = "";
    while(n>0){
        bi += (n%2 == 0? "0":"1");
        n = n/2;
    }
        n = bi.size();
        int num=0;
        int i=0;
        while(i<n){
           num+=pow(2,i);
           i++;     
        }

        return num; 
}
};