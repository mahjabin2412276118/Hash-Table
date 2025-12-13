#include<iostream>
using namespace std;

void createhashtable(){
    int tablesize=11;
    int hashtable[11];

    for(int i=0;i<tablesize;i++){
        hashtable[i]=-1;
    }

    int data[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    int n = 9;

    for(int i=0;i<n;i++){
        int index=data[i]%tablesize;

        while(hashtable[index]!=-1){
            index=(index+1)%tablesize;  //wrap around 
        }
        hashtable[index]=data[i];
    }

      // Display
    cout << "Hash Table (Linear Probing):\n";
    for (int i = 0; i < tablesize; i++)
        cout << i << " : " << hashtable[i] << endl;

        //searching
        int item;
        cin>>item;

        int index=item%tablesize;
        int count=0;

        while(hashtable[index]!=-1 && count<tablesize){
            if(hashtable[index]==item){
                cout<<"Found at index"<< index<<endl;
                
            }
            else{
                index=(index+1)%tablesize;
                count++;
            }
        }
}

void probe3(){
    int tablesize=11;
    int hashtable[11];
    
    for(int i=0;i<tablesize;i++){
        hashtable[i]=-1;
    }

    int data[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    int n=9;

    for(int i=0;i<n;i++){
        int index=data[i]%tablesize;

        while(hashtable[index]!=-1){
            index=(index+3)%tablesize;  //wrap around with step size 3
        }
         hashtable[index]=data[i];
    }

    for(int i=0;i<tablesize;i++){
        cout<<i<<" :"<< hashtable[i]<<endl;
    }

}
