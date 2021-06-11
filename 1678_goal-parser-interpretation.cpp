#include <iostream>
#include <string>
using namespace std;

int main()
{
    class Solution
    {
    public:
        string interpret(string command)
        {
         
            while ((command.find("()") != std::string::npos))
            {
                command.replace(command.find("()"), 2, "o");
            }
            while ((command.find("(al)") != std::string::npos))
            {
                command.replace(command.find("(al)"), 4, "al");
            }

            return command;
        }
    };

    Solution obj;

    string command = "G()()()()(al)";
    // string command = "hola()";

    cout << obj.interpret(command);

    return 0;
}
