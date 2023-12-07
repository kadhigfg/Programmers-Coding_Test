#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string str1;
    string str2;

    for (int n : num_list)
    {
        if (n % 2 == 1)
            str1 += to_string(n);
        else
            str2 += to_string(n);
    }

    return answer = stoi(str1) + stoi(str2);
    
}