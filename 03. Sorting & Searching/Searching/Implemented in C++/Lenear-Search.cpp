/*
output demo:
Enter the array length: 5
Enter Elements: 5 7 8 6 2
Enter the key for Searching: 6
Key is found at index 3
*/

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int a[],int array_size,int key){
    for(int i=0;i<array_size;i++){

        if(a[i] == key){
            return i;
        }
    }

    return -1;
}
int main()
{
    int array_size;
    cout<<"Enter the array length: ";
    cin>>array_size;
    int a[array_size];

    cout<<"\nEnter Elements: ";
    for(int i=0;i<array_size;i++){
        cin>>a[i];
    }

    cout<<"\nEnter the key for Searching: ";
    int key;
    cin>>key;
    int position = linearSearch(a,array_size,key);

    if(position == -1){
        cout<<"\nKey not found"<<endl;
    }
    else{
        cout<<"\nKey is found at index "<<position<<endl;
    }
}

/*
Time Complexity of Linear Search is O(n).
*/
