#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int k;
vector<char> v;
string PlainToCypher(string a)
{
    for(int i=0; i<a.size(); i++)
        for(int j=0; j<=v.size(); j++)
            if(a[i]==v[j])
            {
                int m = (j+k)%27;
                a[i]=v[m];
                break;
            }
    return a;
}

string CypherToPlain(string a)
{
    for(int i=0; i<a.size(); i++)
        for(int j=0; j<v.size(); j++)
            if(a[i]==v[j])
            {
                int m = j-k;
                (m<0)? m= 27 + (m%27):m%27;
                a[i]=v[m];
                break;
            }
    return a;
}

int main()
{
    int choice;
    string s;
    for(int i=65; i<=90; i++)
        v.pb(i);
    v.pb(32);

    cout << "What do u want to do?\n\t(1)Encryption\n\t(2)Decryption\n\t(3)Both\n";
    cin >> choice;

    cout << "Enter your message: ";
    cin.ignore();
    getline(cin,s);

    cout << "Enter The Constant: ";
    cin >> k;
    if(choice==1) cout << PlainToCypher(s) <<endl;
    else if(choice==2) cout << CypherToPlain(s) <<endl;
    else if(choice==3)
    {
        cout << PlainToCypher(s) << endl;
        cout << PlainToCypher(CypherToPlain(s)) <<endl;
    }
    return 0;
}
