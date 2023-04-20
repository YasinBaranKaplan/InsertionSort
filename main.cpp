#include <iostream>

using namespace std;

//"D" is our given array from users and "lenght" is our array lenght.

void insertSort(int D[],int lenght){

    int add;

    for(int i=1;i<lenght;i++){
        add=D[i];
    int j= i-1;

    while(j>=0 && D[j]>add){
        D[j+1]=D[j];
        j=j-1;
    }
    D[j+1]=add;
}
}







int main(){
    int tryArray[7]={2,7,15,4,3,100,-5};

    insertSort(tryArray,7);
    for(int i=0;i<7;i++){
        cout<<tryArray[i]<<"\t";
    }






}
