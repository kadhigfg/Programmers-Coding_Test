#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s)
{
    string answer = my_string.erase(s, overwrite_string.size());

    answer.insert(s, overwrite_string);

    return answer;
}