#include <iostream>
using namespace std;

int main() 
{   
    int t;
    cin >> t;
    while(t--)
    {
        int N,K,D, sum = 0;
        cin >> N >> K >> D;
        int arr[N];
        for(int i = 0; i < N; i++)
        {
            cin >>arr[i];
        }
        for(int i = 0; i < N; i++)
        {
            sum += arr[i];
        }
        if(sum < K)
            cout << "0" << "\n";
        else
        {
            if((sum/K) <= D)
                cout << (sum/K) << "\n";
            else
                cout << D << "\n";
        }
        
    }
	// your code goes here
	return 0;
}
