#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    answer = num_list;
    
    int last_element = answer.back();
    int pre_element = answer[answer.size() - 2];
    
    if (last_element > pre_element)
    {
        answer.push_back(last_element - pre_element);
    }
    else
    {
        answer.push_back(last_element * 2);
    }

    
    
    return answer;
}