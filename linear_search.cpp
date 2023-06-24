#include<iostream>
using namespace std;

  int linear_search(int array[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if (array[i]==key)
        {
            return 1;
        }

    }
    return 0;
  }


int main(){
    int array[9]={1,2,3,4,5,6,7,8,9};
    int size=9;

    for (int i = 0; i < size; i++)
    {
        cout<< array[i] << endl;
    }
    int key= 1;
    int found=linear_search(array,size,key);
    if (found)
    {
        cout<< "THE ELEMENT IS FOUND";
    }else{
        cout<<"THE ELEMENT IS NOT FOUND";
    }


}