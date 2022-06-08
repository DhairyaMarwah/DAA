//magic number question C++
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num,size;
        cin>>size;
        cin>>num;
        int array[num];
        int count=0;
        for(int j=0;j<size;j++){
            cin>>array[j];
        }
        int low = 0;
        int high = size-1;
        while(low <= high){
            int mid = (low+high)/2;
            count++;
            if(array[mid]==num){
                cout<<"Yes "<<count<<endl;
                break;
            }
            if(array[mid]>num){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        // int index = binarySearch(array,low,high,num);
        // if(index==-1){
        //     cout<<"NO"<<endl;
        // }
        // else{
        //     cout<<"YES"<<endl;
        // }
    }
    return 0;
}