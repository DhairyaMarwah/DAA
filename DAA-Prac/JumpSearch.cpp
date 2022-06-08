
#include <bits/stdc++.h>
using namespace std;


int binarySearch(int array[],int low,int high,int num){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(array[mid]==num){
        return mid;
    }
    if(array[mid]>num){
        return binarySearch(array,low,mid-1,num);
    }
    else{
        return binarySearch(array,mid+1,high,num);
    }
}

int jumpSearch(int array[],int size,int x){
    int start = 0;
    int end = sqrt(size);
    while(array[end]<x && end<size){
        start = end;
        end = end + sqrt(size);
        if(end > size){
            end = size;
        }
    }
    for(int i=start;i<end;i++){
        if(array[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"enter the number to be searched"<<endl;
    int num;
    cin>>num;
    cout<<"Found "<<jumpSearch(array,size,num)<<endl;
    return 0;
}