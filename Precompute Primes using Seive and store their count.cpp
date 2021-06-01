#include <bits/stdc++.h>
using namespace std;
vector<long long> prime; 
long long primes[10000005];
void sieve()        
{
    for(long long i=0;i<=10000000;i++)
    primes[i]=1;
    primes[0]=0;
    primes[1]=0;
    for(long long i=2;i<=10000000;i++)
    {
        if(primes[i]==1)
        {
            prime.push_back(i);
            for(long long j=2*i;j<=10000000;j+=i)
            primes[j]=0;    
        }
    }
    return;
}


int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    for(int i = 3; i <= 10000004; i++)	{
    	primes[i] += primes[i-1];
    }
    int t;
    cin >> t;
    while(t--)	{
    	int n;
    	cin >> n;
    	if(n == 2 || n == 3)	{
    		cout << n-1 << "\n";
    		continue;
    	}
    	cout << 1 + primes[n] - primes[n/2] << "\n";
    }
    return 0;
}
