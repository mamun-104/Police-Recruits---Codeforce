#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int crime_count_untreated=0, police_count=0;
    int i,m;
    for(i=0;i<n;i++)
    {
        cin>>m;
        if(m==(-1) && police_count==0){crime_count_untreated++;}
        else if(m==(-1) && police_count>0){police_count--;}
        else
        {
            police_count=police_count+m;
        }
    }
    cout<<crime_count_untreated;



    return 0;
}



