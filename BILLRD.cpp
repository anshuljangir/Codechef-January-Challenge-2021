
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, K, x, y;
        cin >> n >> K >> x >> y;
        int xx, yy;
        if(x == y)
        {
            xx = n;
            yy = n;
        }
        else if(x > y)
        {
            if(K % 4 == 1)
            {
                xx = n; yy = n - x + y;
            }
            else if(K % 4 == 2)
            {
                xx = n - x + y; yy = n;
            }
            else if(K % 4 == 3)
            {
                xx = 0; yy = x - y;
            }
            else if(K % 4 == 0)
            {
                xx = x - y; yy = 0;
            }
        }
        else //if(x < y)
        {
            if(K % 4 == 1)
            {
                yy = n; xx = n - y + x;
            }
            else if(K % 4 == 2)
            {
                yy = n - y + x; xx = n;
            }
            else if(K % 4 == 3)
            {
                yy = 0; xx = y - x;
            }
            else if(K % 4 == 0)
            {
                yy = y - x; xx = 0;
            }
        }
        cout << xx << " " << yy << "\n";
    }
	// your code goes here
	return 0;
}