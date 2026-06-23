#include <iostream>
using namespace std;

int main()
{
    int satisfy = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    for (int i = 0; i < g.size(); i++)
    {
        for (int j = i; i < s.size(); j++)
        {
            if (s[j] >= g[j])
            {
                satisfy++;
            }
        }
    }

    return satisfy;
}