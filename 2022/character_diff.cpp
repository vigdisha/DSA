// Input : string strA = "abcd";
//         string strB = "cbdae";
// Output : e

#include <iostream>
using namespace std;

char findExtra(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (str1[i] != str2[j])
            {
                break;
            }
            // if last cahr is the different char
            if (j == n2)
            {
                return str1[i];
            }
        }
    }

    return str2[n2 - 1];
}

int main()
{
    string str1 = "abcd";
    string str2 = "cbade";
    cout << findExtra(str1, str2) << endl;
    return 0;
}