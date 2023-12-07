#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = n;
    
    for (char con : control)
    {
        if (con == 'w')
            answer += 1;
        else if (con == 's')
            answer -= 1;
        else if (con == 'd')
            answer += 10;
        else if (con == 'a')
            answer -= 10;
    }
    
    return answer;
}