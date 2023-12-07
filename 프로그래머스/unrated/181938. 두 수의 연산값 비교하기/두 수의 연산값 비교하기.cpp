#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string x = to_string(a);
    string y = to_string(b);

    int sum = stoi(x + y);

    return answer = sum >= 2 * a * b ? sum : 2 * a * b;
}