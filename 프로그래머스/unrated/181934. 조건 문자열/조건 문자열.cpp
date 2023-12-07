#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    if (ineq == ">" && eq == "=" && n >= m ||
    ineq == "<" && eq == "=" && n <= m ||
    ineq == ">" && eq == "!" && n > m ||
    ineq == "<" && eq == "!" && n < m)
{
    return 1;
}
else
    return 0;
    
    
    
    
    return answer;
}