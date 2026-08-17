#include<iostream>
using namespace std;
int top=-1;
void push(int arr[],int data,int size){
    if(top==size-1){
        cout<<"stack overflow\n";
    }
    else{
        top=top+1;
        arr[top]=data;
    }
}
void pop(int arr[]){
    if(top==-1){
        cout<<"stack underflow\n";
    }
    else{
        cout<<" element popped: "<<arr[top]<<"\n";
        top=top-1;
    }
}
int main(){
    int size;
    cout<<"enter the size of an array: ";
    cin>>size;
    int arr[size];
     
    int n;
    cout<<"how many elements you want to push: ";
    cin>>n;
    if(n>size){
        cout<<"stack will overflow, only "<<size<<" elements will be pushed"<<"\n";
        n=size;
    }
    for(int i=0;i<n;i++){
      int element;
      cout<<"enter the element  "<<(i+1)<<": ";
      cin>>element;
      push(arr,element,size);
    }
     
    cout<<"\n"<<"elements in stack: ";
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n"<<"how many elements you want to pop: ";
    cin>>n;
    if(n>top+1){
        cout<<"stack will underflow, only "<<(top+1)<<" elements will be popped"<<"\n";
        n=top+1;
    }
    for(int i=0;i<n;i++){
      pop(arr);
    }
    
    cout<<"\n"<<"elements in stack: ";
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}