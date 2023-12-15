#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
   for (int i = l; i <= r; i++)
   {
       string numStr;

       bool isZeroFive = true;
       numStr = to_string(i);

       for (char c : numStr)
       {

           if (c != '0' && c != '5')
           {
               isZeroFive = false;
               break;
           }
       }

       if (isZeroFive)
           answer.push_back(i);

   }

   if (answer.empty())
       answer.push_back(-1);
    
    
    return answer;
}