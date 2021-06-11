#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    // class Solution
    // {
    // public:
    //     int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    //     {
    //         int count = 0;
    //         for (int i = 0; i < items.size(); i++)
    //         {
    //             for (int j = 0; j < items[i].size(); j++)
    //             {
    //                 if (ruleKey == "type" && j == 0)
    //                 {
    //                     if (ruleValue == items[i][j])
    //                     {
    //                         count+=1;
    //                     }
    //                 }
    //                 if (ruleKey == "color" && j == 1)
    //                 {
    //                     if (ruleValue == items[i][j])
    //                     {
    //                         count+=1;
    //                     }
    //                 }
    //                 if (ruleKey == "name" && j == 2)
    //                 {
    //                     if (ruleValue == items[i][j])
    //                     {
    //                         count+=1;
    //                     }
    //                 }
    //             }
    //         }
    //         return count;
    //     }
    // };

    class Solution
    {
    public:
        int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
        {
            unordered_map<string, int> strMap;
            strMap["type"] = 0;
            strMap["color"] = 1;
            strMap["name"] = 2;

            int index = strMap[ruleKey];
            int result = 0;
            for (int i = 0; i < items.size(); i++)
            {
                if (items[i][index].compare(ruleValue) == 0)
                    result++;
            }
            return result;
        }
    };

    Solution obj;

    vector<vector<string>> items = {{"phone", "blue", "pixel"}, {"computer", "silver", "phone"}, {"phone", "gold", "iphone"}};

    cout << obj.countMatches(items, "type", "phone");

    return 0;
}

// [["phone","blue","pixel"],["computer","silver","phone"],["phone","gold","iphone"]]
// "type"
// "phone"