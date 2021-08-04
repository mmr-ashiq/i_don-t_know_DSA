#include<bits/stdc++.h>
using namespace std;

int Binary_search(int a[],int n,int key){

    int s = 0, e = n - 1;
    while(s <= e){
        int mid = s + (e - s) / 2; //for avoiding runtime error (INT_MAX)

        if(a[mid] == key){
            return key;
        }else if(a[mid] > key){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }

    return -1;

}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n ; i++){
        cin>>a[i];
    }

    cout<<"Enter a Key: ";
    int key;
    cin>>key;

    sort(a,a+n);

    int pos = Binary_search(a,n,key);
    if(pos == -1){
        cout<<"key not Found"<<endl;
    }else{
        cout<<"Key found at index "<<pos<<endl;
    }

    return 0;

}
