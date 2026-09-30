#include<bits/stdc++.h>
using namespace std;
int lc(vector<int>&arr)
{
unordered_set<int> numSet(arr.begin(),arr.end());  

int longest=0;
for(int x : numSet){
    if(numSet.find(x-1)==numSet.end()){
        int length=1;
        while(numSet.find(x+length)!=numSet.end())
        {
            length++;
        }
        longest=max(longest,length);
    }
}
return longest;
}
int main()
{
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter"<<n<<"elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"longest consequtive sequence length  "<<lc(arr)<<endl;
    return 0;
}