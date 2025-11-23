/* 
          //METHOD 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the  value of n " << endl;
    cin>>n;

    int row = 1;
    
        while(row<=n){
          int start = row ;
          int col = 1;
          while(col <= row){
             cout << start << " ";
             col++ ;
             start -- ;
          }
          cout << endl;
          row++;
    }
}*/


                         // METHOD 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the  value of n " << endl;
    cin>>n;

    int row = 1;
    
        while(row<=n){
          int col = 1;
          while(col <= row){
             cout << row-col+1 << " ";
             col++ ;
          }
          cout << endl;
          row++;
    }
}

