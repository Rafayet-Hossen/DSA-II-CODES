#include <iostream>
using namespace std;
// this is the basic way:
void reverse_string(string s, int n)
{
    // base case
    if (n == -1)
        return;

    char last = s[n - 1];
    cout << last;
    reverse_string(s, n - 1);
}

int main()
{
    string s;
    cin >> s;
    reverse_string(s, s.size());
    return 0;
}
