#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the  value of n " << endl;
    cin>>n;

    int row = 1;
    while(row <= n)
    { 
        int col = 1;
        int start = row ;

        while(col <= row){
          cout << start << " ";
          col++ ;
          start++ ;
        }
        cout << endl;
        row++;
    }
}