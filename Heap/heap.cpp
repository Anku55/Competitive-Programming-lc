#include <bits/stdc++.h>
using namespace std;
// in 1-based indexing
// leftChind=2*i;
//rightChild=2*i+1;
//leafnode n/2+1 --- n;
// 0 based indexing
// left child =2*i+1;
// rightChind =2*i+2;

class heap
{
    public :
    int arr[100];
    int size = 0;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insertInHeap(int val)
    {
        size += 1;
        int index = size;
        arr[index] = val;
        

        while (index > 1)

        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index=parent;
            }else{
                return;
            }
        }
    }
    void deleteFromHeap(){
        // deletind root 
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }

        arr[1]=arr[size];
        size--;
        int i=1;
        // take root one to its right position

        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            if(leftIndex< size && arr[i]<arr[leftIndex]){
                swap(arr[leftIndex],arr[i]);
                i=leftIndex;

            }else if(rightIndex<size&&arr[rightIndex]<arr[i]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }else{
                break;
            }
        }
    }



    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

    void heapyFy(int arr[],int n ,int i){

        int largest=i;
        int leftIndex=2*i;
        int rightIndex=2*i+1;

        if(leftIndex<n && arr[largest]<arr[leftIndex]){
            largest=leftIndex;
        }
        if(rightIndex<n && arr[largest]<arr[rightIndex]){
            largest=rightIndex;
        }

        if(largest !=i){
            swap(arr[largest],arr[i]);
            heapyFy(arr,n,largest);

        }
    }

int main(){

    heap h;

    h.insertInHeap(10);
    h.insertInHeap(30);
    h.insertInHeap(25);
    h.insertInHeap(45);

    h.print();
    h.deleteFromHeap();
    h.print();

    int arr[6]={-1,4,5,6,7,8};
    int n=6;
    for(int i=n/2;i>0;i--){
        heapyFy(arr,n,i);

    }
    cout<<"printing new Array"<<endl;

    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
       
        
    }cout<<endl;

}