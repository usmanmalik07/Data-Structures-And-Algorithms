#include <stdio.h>
#include <iostream>
using namespace std;
#define size 1000
string queue[size];
int front = -1;
int rear = -1;
void enqueue(string order)  
{  
//empty
    if(front==-1 && rear==-1)   
    {  
        front=0;  
        rear=0;  
        queue[rear]=order;  
    }  
//full
    else if((rear+1)%size==front)  
    {  
        printf("Maximum orders received");  
    }  
    else  
    {  
        rear=(rear+1)%size;       
        queue[rear]=order;     
    }  
} 
void display()  
{  
    int i;
	i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n No orders received");  
    }  
    else  
    {  
        printf("\nCURRENT ORDERS ARE :\n");  
        while(i<=rear)  
        {  
            cout<<"Order number: "<<i<<endl<<" order: "<<queue[i]<<endl;
            i=(i+1)%size;  
        }  
    }  
} 
void menu(){
bool run;
    cout<<"----------//PIZZA HUTT ORDER//----------";
	cout<<"\n WELCOME TO PIZZA HUTT ENTER 1 TO ORDER AND 0 TO CLOSE ? 1/0 "<<endl;
	int operation;
	cin>>operation;
    if(operation==1){
    	run = true;
	}
	else if(operation==0){
		run = false;
	}
	else {
		cout<<"Wrong command";
	}
  
      
    if(run==true)    
    {  
     
        
        cout<<("\nEnter the food which you want to order "); 
		 
        string x;
		cin>>x;  
        enqueue(x);  
        cout<<"\norder placed successfully"<<endl;
        cout<<"-----//-----//-----"<<endl;
        display();
        menu();
        
       
	}

}

int main()

{  
menu();
}
