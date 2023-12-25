#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) 
{
    int answer = 0;

    for (auto& c : order)
    {
        if (c.find("americano") != string::npos || c.find("anything") != string::npos)
        {
            answer += 4500;
        }
        
        if (c.find("cafelatte") != string::npos)
        {
            answer += 5000;
        }
    }




    return answer;
}