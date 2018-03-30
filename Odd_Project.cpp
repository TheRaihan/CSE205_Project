#include<bits/stdc++.h>
using namespace std;

int mul,increment,range,mod,i=0;
void func(int seed)
{
    if(i==range) return;
        printf("x%d = (%dX%d+%d) MOD %d = ",++i,seed,mul,increment,mod);
    cout << (seed*mul+increment)%mod <<endl;
    func((seed*mul+increment)%mod);
}

int main()
{
    int seed;
    cout << "Seed: ";
    cin >> seed;
    cout << "Increment: ";
    cin >> increment;
    cout << "Multiplier: ";
    cin >> mul;
    cout << "Range: ";
    cin >> range;
    cout << "Mod Value: ";
    cin >> mod;
    func(seed);
    return 0;
}
/**
3
4
7
10
9
**/
