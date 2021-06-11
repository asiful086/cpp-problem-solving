#include <iostream>

using namespace std;

int main()
{
    class Solution
    {
    public:
        string defangIPaddr(string address)
        {
            string newString;
            for (int i = 0; i < address.length(); i++)
            {
                if (address[i] == '.')
                {
                    newString.append("[.]");
                }
                else
                {
                    newString.push_back(address[i]);
                }
            }
            return newString;
        }
    };

    Solution obj;

    string address = "1.1.1.1";

    cout << obj.defangIPaddr(address);

    return 0;
}
