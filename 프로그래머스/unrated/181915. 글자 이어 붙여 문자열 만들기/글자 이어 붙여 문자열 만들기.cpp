#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";

    for (auto& i : index_list)
    {
        my_string[i];
        answer.push_back(my_string[i]);
    }

    return answer;
}