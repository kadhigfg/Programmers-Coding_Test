#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
        for (char& n : str)
    {
        if (isupper(n))
        {
            n = tolower(n);
        }
        else if (islower(n))
        {
            n = toupper(n);
        }
    }
        cout << str << endl;

    return 0;
}