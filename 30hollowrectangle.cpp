#include<iostream>
using namespace std;
int main(){
    int rows,columns,i,j;
    cout<<"Enter the no of rows: ";
    cin>>rows;
    cout<<"Enter the no of columns: ";
    cin>>columns;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(i==1 || i==rows-1 || j==1 || j==columns-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<"\n";
    }
}









               
            
              
            
