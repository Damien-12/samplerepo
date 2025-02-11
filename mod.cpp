#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n=124;
	int absolute=n;
	int mod;
	int a,i=0;
	
	while(n)
	{
		mod = n % 10;
		//cout << mod << endl;
		//store mod and divide
		a = mod;
		if(absolute % a == 0)
		{
			i++;
		}
		//if yes, i++
		n = n /10;
	}
	cout << i << endl;
}
