
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, sum1 = 0, sum2 = 0;
        cin >> n >> m;
        int arr1[n], arr2[m];
        int c = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            sum1 += arr1[i]; 
        }
        for(int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            sum2 += arr2[i];
        }
        bool f = true;
        while(sum1 <= sum2)
        {
            sort(arr1, arr1 + n); sort(arr2, arr2 + m);
            
            if( arr2[m-1] > arr1[0] )
            {
                sum1 += arr2[m-1] - arr1[0];
                sum2 += arr1[0] - arr2[m-1];
                
                swap(arr2[m-1], arr1[0]);
                
                c++;
            }
            else
            {
                f = false;
                break;
            }    
        }
        if(f)
            cout << c << "\n";
        else
            cout << "-1" << "\n";
    }
	// your code goes here
	return 0;
}
