#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;

class stk
{
public:
	NODE *head;
	stk()
	{
		head=NULL;
	}
	void push();
	void display();
	void pop();
};

void stk::push()
{
	NODE *temp;
	temp = new NODE;
	int n;
	cin>>n;   // enter the elemennt
	temp->data= n;
	temp->next=NULL;
	if(head ==NULL)
	{
		head=temp;
	}
	else
	{
		temp->next = head;
    head= temp;
	}
}

void stk::display()
{
	NODE *temp;
	temp=head;
	if(temp==NULL)
		cout<<"stk is empty"<<endl;
	while(temp!=NULL)
	{
		cout<< temp->data<<"     ";
		temp= temp->next;
	}
}


void stk::pop()
{
  if(head==NULL)
    cout<<"STACK UNDERFLOW \n";
  else
  {
    cout<<"POPPED elemnt is: "<<head->data<<"\n";
    head = head->next;
  }
}


int main()
{
    stk l;
    int ch;
    while(1)
    {
        cout<<"\n**** MENU ****";
        cout<<"\n1:PUSH\n2:POP\n3:DISPLAY\n4.Exit\n";
        cout<<"\nEnter Your Choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            l.push();
            break;
        case 2:
            l.pop();
            break;
        case 3:
            l.display();
            break;
        default:
            exit(0);
        }
    }
    return 0;
}
