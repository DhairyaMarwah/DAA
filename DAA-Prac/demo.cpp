#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
    int array[n];
	for(int i=0;i<n;i++){
        int num,tiles;
        cin>>num>>tiles;
        array[n] = 0;
        // cout<<"num"<<num<<"tiles"<<tiles<<"\n";
        if(num <= tiles || tiles%num==0){
            array[i]=1;
        }
	}
    for(int i=0;i<n;i++){
        // cout<<array[i];
       if(array[i] == 1){
           cout<<"YES"<<"\n";
       }
       else{
           cout<<"NO"<<"\n";
       }
    }
	return 0;
}
