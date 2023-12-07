#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    int n = 0;

    for (int b : included)
    {
        if (b)
            answer += a + (d * n);

        n++;
    }

    return answer;
}