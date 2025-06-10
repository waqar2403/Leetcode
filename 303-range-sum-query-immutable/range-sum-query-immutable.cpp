class NumArray {
private:
    vector<int> arr;
public:
    NumArray(vector<int>& nums) {
        arr = nums;
        for(int i=1;i<arr.size();i++){
            arr[i] = arr[i-1]+arr[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left != 0){return arr[right]-arr[left-1];}
        else{return arr[right];}
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */