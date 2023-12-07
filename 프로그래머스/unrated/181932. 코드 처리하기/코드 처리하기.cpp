#include <string>
#include <vector>

using namespace std;

string solution(string code)
{
    string answer = "";
    bool mode = false;


    for (int i = 0; i < code.size(); i++)
    {
        if (!mode)
        {
            if (code[i] != '1')
            {
                if (i % 2 == 0)
                {
                    answer += code[i];
                }
            }
            else
            {
                mode = true;
            }
        }
        else
        {
            if (code[i] != '1')
            {
                if (i % 2 != 0)
                {
                    answer += code[i];
                }
            }
            else
            {
                mode = false;
            }
        }
    }

    if (answer.empty())
        return answer = "EMPTY";

    return answer;
}