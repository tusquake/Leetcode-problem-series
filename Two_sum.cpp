class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if((arr[i]+arr[j])==target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v;
    }

};

int main(){
    Solution s;
    int t;
    cin>>t;
    vector<int> v;
    s.twoSum(v,t);
}