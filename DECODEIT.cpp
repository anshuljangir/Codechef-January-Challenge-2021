#include <iostream>
using namespace std;
#define S "abcdefghijklmnop"
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,left,right;
        cin >> n;
        string str;
        cin >> str;
        string res;
        for(int i = 0; i < n; i = i+4)
        {
            int index = stoi(str.substr(i, 4), 0, 2);
            res.push_back(S[index]);
        }
        cout << res << "\n";
    }
	// your code goes here
	return 0;
}
