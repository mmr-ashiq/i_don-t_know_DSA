//this code is showing that how STL help use for reduce code size and clean coding

#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[] = {1,5,2,9,3,4,6,7,15,11};
    int n;
    cin>>n;
    sort(a,a+10);
    if(binary_search(a,a+10,n))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
