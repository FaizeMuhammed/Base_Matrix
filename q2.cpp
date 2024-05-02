#include<iostream>

using namespace std;
int main(){
    int i,j,n,m;

    cout<<"enter the number of raw and coloumn";
    cin>>n>>m;
    if(n==m){
        cout<<"it is a square matrix"<<endl;
    }
    else{
        cout<<"it is not square matrix";
        

    }

    int a[n][m],transpose[n][m];

    cout<<"enter the elements";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            transpose[j][i]=a[i][j];
        }
    }
    cout<<"matrix after transpose"<<endl;
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            cout<<transpose[j][i];
        }
        cout<<endl;
    }

    
}