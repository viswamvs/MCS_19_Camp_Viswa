#include<iostream>
#define MAX 50
using namespace std;
int STACK[MAX],TOP;
void initStack(){
    TOP=-1;
}
int Empty(){
    if(TOP==-1)
        return 1;
    else
        return 0;
}
int Full(){
    if(TOP==MAX-1)
        return 1;
    else   
        return 0;
}
 
void push(int num){
    if(Full()){
        cout<<"STACK is overflow!"<<endl;
        return; 
    }
    ++TOP;
    STACK[TOP]=num;
    cout<<num<<" has been inserted."<<endl;
}
 
void display(){
    int i;
    if(Empty()){
        cout<<"STACK is underflow!"<<endl;
        return;
    }
    for(i=TOP;i>=0;i--){
        cout<<STACK[i]<<" ";
    }
    cout<<endl;
}
void pop(){
    int temp;
    if(Empty()){
        cout<<"STACK is underflow!"<<endl;
        return;
    }
     
    temp=STACK[TOP];
    TOP--;
    cout<<temp<<" has been popped"<<endl;   
}
int main(){
    int num;
    initStack();
    char ch;
    do{
            int a;
            cout<<"\n--------------------------------------------\n";
            cout<<"\t STACK IMPLEMENTATION";
			cout<<"\n--------------------------------------------\n";
            cout<<"\n1.PUSH\n"<<"2.POP\n"<<"3.DISPLAY\n";
            cout<<"Enter your choice: ";
            cin>>a;
            switch(a)
            {
                case 1:
                    cout<<"Enter the element to be pushed : ";
                    cin>>num;
                    push(num);
                break;
                 
                case 2: 
                    pop();
                    break;
                 
                case 3: 
                    display();
                    break;
                 
                default : 
                cout<<"Invalid Choice!!\n";
            }
            cout<<"Do you want to continue ? ";
            cin>>ch;                      
            }while(ch=='Y'||ch=='y');
    return 0;
}
