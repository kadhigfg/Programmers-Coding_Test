#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer;

    
    

    for (int i = 0; i < queries.size(); i++)
    {
        int k = 1000001;

        for (int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            if (arr[j] > queries[i][2] && arr[j] < k)
            {
                k = arr[j];
            }
        }
        
        if (k != 1000001) answer.push_back(k);
        else answer.push_back(-1);
    }

    return answer;
}