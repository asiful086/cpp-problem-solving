#include <iostream>
#include <vector>

using namespace std;

int main()
{
    class Solution
    {
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            vector<int> the_result;

            for (int i = 0; i < nums.size(); i++)
            {
                bool shouldBreak = false;
                for (int j = 0; j < nums.size(); j++)
                {
                    if (j == i)
                        continue;
                    if (nums[j] + nums[i] == target)
                    {
                        the_result.push_back(i);
                        the_result.push_back(j);
                        shouldBreak = true;
                    }
                }
                if (shouldBreak)
                    break;
            }
            return the_result;
        }
    };
    // [2,7,11,15]
    // 9
    Solution obj;
    vector<int> nums = {3,3};
    vector<int> result = obj.twoSum(nums, 6);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }

    return 0;
}







// #include <unordered_map>
// #include <iostream> 
// #include <vector>

// using std::unordered_map;
// using std::vector;


// class Solution 
// {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) 
//     {
//         unordered_map<int,int> hash;
//         auto end= hash.end();
//         vector<int> solution(2,0);
        
//         for (int i=0;i<nums.size();i++)
//         {
            
//             auto find =hash.find(target-nums[i]);
            
//             if(find==end)
//             {   
//                  hash.emplace(nums[i],i);   
//             }
//             else
                
//             {
//                 solution={find->second,i};
                
//                 return solution;     
//             }     
//         }   
//     }
// };






// myHash = {}
//     for index, value in enumerate(nums):
//         if target - value in myHash:
//             return [myHash[target-value], index]
//         myHash[value] = index