#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the  value of n " << endl;
    cin>>n;

    int row = 1;
    int count = 1;
        while(row<=n){
        int col = 1;
        while(col <= row){
            cout << count << " ";
            col++ ;
            count++ ;
        }
        cout << endl;
        row++;
    }
}