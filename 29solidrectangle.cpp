//To print the solid rectangle
#include<iostream>
using namespace std;
void solid_rectangle(int n,int m){
    int i,j;
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=m;j++)
    {
    cout<<"*";
    }
    cout<<endl;
    }

    }
int main(){
    int rows,columns;
    cout<<"Enter the no of rows : ";
    cin>>rows;
    cout<<"Enter the no of columns: ";
    cin>>columns;
    cout<<endl;
    solid_rectangle(rows,columns);
   

}