#include<iostream>
using namespace std;

int main(){
    int tablesize=11;
    int hashtable[11];

    for(int i=0;i<tablesize;i++){
        hashtable[i]=-1;
    }

    int data[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    int n=9;

    for(int i=0;i<n;i++){
      int index=data[i]%tablesize;

      int j=1;
      while(hashtable[index]!=1){
        index=(data[i]+j*j)%tablesize;
        j++;
      }
      hashtable[index]=data[i];
    }

    cout<<"Hash Table: (Quadratic Probing)"<<endl;
    for(int i=0;i<tablesize;i++){
        cout<<i<<":"<<hashtable[i]<<endl;
    }


}