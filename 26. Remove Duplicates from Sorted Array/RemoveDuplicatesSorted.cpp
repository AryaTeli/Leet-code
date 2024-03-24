class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[ind])
            {
                ind++;
            }
            nums[ind]=nums[i];
        }
        return ind+1;
    }
};



// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//     int n = nums.size();
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(nums[i]==nums[j])
//             {
//                 for(int k=j;k<n;k++)
//                 {
//                     nums[k]=nums[k+1];
//                 }
//                 n--;
//                 j--;
//             }
//         }
//     }
//     return n;
//     }
// };