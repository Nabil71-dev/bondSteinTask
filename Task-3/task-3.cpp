/*
Complexity
TC : O(n) and SC : O(n)

Approach
the thought is about create unordered map and store data so that we can easily search for value in O(1) tc
and then iterate through array get one value and subtract that so the we can get the rest one and search that in hashMap
if found return that else return -1.
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vc vector<ll>
#define mp unordered_map<int,int>

int main()
{
    int n,target;
    bool flag=false;
    cout<<"Enter array size and target value"<<endl;
    cin>>n>>target;
    int arr[n];
    mp hashMap;

    cout<<"Enter array value"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        hashMap[arr[i]]=i;
    }

    for(int i=0; i<n; i++)
    {
        int x=target-arr[i];
        if(hashMap[x] && hashMap[x]!=i)
        {
            cout<<"Value found and the positions are : "<<i+1<<' '<<hashMap[x]+1<<endl;
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<"Value not found "<<endl;
    }
}
