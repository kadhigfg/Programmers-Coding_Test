#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
       string A = to_string(a);
   string B = to_string(b);

   if (stoi(A + B) >= stoi(B + A))
   {
       answer = stoi(A + B);
   }
   else
   {
       answer = stoi(B + A);
   }

    return answer;
}