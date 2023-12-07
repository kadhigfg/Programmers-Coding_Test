#include <string>
#include <vector>

#define SUM(x, y, z) x + y + z
#define MUL1(x) x * x
#define MUL2(x) x * x * x



using namespace std;

int solution(int a, int b, int c)
{
    int answer = 0;

    if (a == b && b == c)
        answer = (SUM(a, b, c)) * (MUL1(a) + MUL1(b) + MUL1(c)) * (MUL2(a) + MUL2(b) + MUL2(c));
    else if (a == b || b == c || a == c)
        answer = (SUM(a, b, c)) * (MUL1(a) + MUL1(b) + MUL1(c));
    else
        answer = SUM(a, b, c);

    return answer;
}
