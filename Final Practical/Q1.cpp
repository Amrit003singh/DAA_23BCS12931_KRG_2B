class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {  
        unordered_map<int,int>helper;
        helper.insert(make_pair(0,1));
        int sum=0;
        int count=0;
        for(auto &i:nums){
            sum+=i;
            i=sum;
        } 
        for(auto i:nums){
            if(helper.find(i-k)!=helper.end()){
                count+=helper[i-k];
                helper[i]++;
            }else{
                helper[i]++;
            }
        }
        return count;  
    }
};
