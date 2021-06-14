#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ran_num,length,c=0;
    string name,ns;
    vector<string> ps;
    string s="#*",pass="";
    for(int i=0; i<=9; i++)
    {
        s+=i+'0';
    }
    for(int i=16; i<=42; i++)
    {
        s+=i+'0';
    }
    for(int i=49; i<=74; i++)
    {
        s+=i+'0';
    }

    while(1)
    {
        c=0;
        cout<<"Enter your name: ";
        getline(cin,name);
        if(name.size()>30)
        {
            cout<<"Sorry! Name is too large. Please give a name which characters should be A-Z or a-z and max length is 20 characters."<<endl;
            c=1;
            if(c==1) continue;
        }
        for(i=0; i<name.size(); i++)
        {
            if((name[i]!=' ')&&((name[i])<65||((name[i])>=91 && (name[i])<=96) || (name[i])>122))
            {
                cout<<"Sorry! Please give a name which characters should be A-Z or a-z."<<endl;
                c=1;
                break;
            }
        }
        if(c==1) continue;
        else break;
    }
    while(1)
    {
        c=0;
        cout<<"How many passwords do you want?: ";
        cin>>ns;
        for(i=0; i<ns.size(); i++)
        {
            if(ns.size()>4||isdigit(ns[i])==false)
            {
                cout<<"Sorry! Please give a positive integer which characters should be (0-9) and max length is 4 digits."<<endl;
                c=1;
                break;
            }
        }
        if(c==1) continue;
        else break;
    }
    n=stoi(ns);
    while(1)
    {
        c=0;
        cout<<"Enter the password length: ";
        cin>>ns;
        for(i=0; i<ns.size(); i++)
        {
            if(isdigit(ns[i])==false||ns.size()>3|| stoi(ns)>126 || stoi(ns)<8)
            {
                cout<<"Sorry! Password length should be greater than or equal 8 and less than or equal 126 and characters should be (0-9)."<<endl;
                c=1;
                break;
            }

        }
        if(c==1) continue;
        else break;
    }
    length=stoi(ns);
    // cout<<s<<endl;
    srand(time(0));
    for(j=1; j<=n; j++)
    {
        pass="";
        for(i=1; i<=length; i++)
        {
            ran_num=rand()%65;
            pass+=s[ran_num];
        }
        ps.push_back(pass);
    }
    cout<<endl;
    if(length==1) cout<<"Hi! "<<name<<", "<<"your password is generated. "<<endl;

    else  cout<<"Hi! "<<name<<", "<<"your passwords are generated. "<<endl;
    cout<<endl;
    for(i=0; i<n; i++)
    {
        cout<<ps[i]<<endl;
        cout<<endl;
    }
    return 0;
}
