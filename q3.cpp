#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"enter row size = ";cin>>m;
    cout<<"enter column size = ";cin>>n;
    int arr[m][n];
    cout<<"enter elements =";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"MATRIX = "; 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<"TRANSPOSE = "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}