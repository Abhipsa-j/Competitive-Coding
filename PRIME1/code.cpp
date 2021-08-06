#include <iostream>
#include<vector>
using namespace std;

const int N = 100000;
int p[N+1] = {0};
vector<int> primes;

void sieve()
{
    for(int i = 2; i<=N; i++)
    {
        if(p[i]==0)
        {
            primes.push_back(i);
            for(int j = i; j<=N; j+=i)
            {
                p[j] = 1;
            }
        }
    }
}


int main() {
    int m, n, t;
    cin>>t;
    
    sieve();
    while(t--){
    	cin>>m;
    	cin>>n;
    	bool seg[n-m+1] = {0};
    	for(auto x : primes)
    	{
        	if(x*x>n)
        	{
        		break;
        	}
        	int start = (m/x)*x;
        	if(x>=m && x<=n)
        	{
            	start = 2*x;
        	}
        
        	for(int i = start; i<=n; i+=x)
        	{
            	seg[i-m] = 1;
        	}
        
    	}
    	for(int i = m; i<=n; i++)
    	{
        	if(seg[i-m] == 0 && i!=1)
        	{
            	cout<<i<<endl;
        	}
    	}
    		cout<<endl;
    }
    
}
