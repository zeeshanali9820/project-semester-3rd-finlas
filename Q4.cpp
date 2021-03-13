#include <stdlib.h>
#include <iostream> 
#include <stdio.h>
#include <cstdlib> 
struct Data 
{
int data;
Data *Next,*Prev; 
};
class List 
{
public:
Data *Head,*Tail; 
public:
List():Head(NULL),Tail(NULL){}; 
~List(); //Destructor 
void DisplayList(void); 
void Add(int _data); 
};
using namespace std;
int main(){
List lst;

int menu_state = 0;
do
{
system&#40;"cls"&#41;;
cout<<"1.Add element to the list"<<endl;
cout<<"2.Display List"<<endl;
cout<<"3.Delete List and exit"<<endl;
cin>>menu_state;
switch (menu_state)
{
case 1:
system&#40;"cls"&#41;;
int data;
cout<<"Enter numbet: ";
cin>>data;
lst.Add(data);
cout<<"Number was added.."<<endl;
system&#40;"pause"&#41;;
menu_state = 4;
break;
case 2:
system&#40;"cls"&#41;;
lst.DisplayList();
system&#40;"pause"&#41;;
menu_state = 4;
break;
default:
break;
}
} while (menu_state != 3);
lst.~List(); //for test
system&#40;"pause"&#41;;

return 0;
}
void List::Add(int _data)
{
Data *temp=new Data; 
temp->Next=NULL; 

temp->data = _data;
if (Head!=NULL) 
{
temp->Prev=Tail; 
Tail->Next=temp; 
Tail=temp; 
}
else 
{
temp->Prev=NULL; 
Head=Tail=temp; 
}
}
void List::DisplayList()
{
Data *temp = Head;
while (temp) 
{
cout<<"--------------------------------"<<endl;
cout<<"Data = "<<temp->data<<endl;
cout<<"--------------------------------"<<endl;
temp = temp->Next; 
}
}
List::~List() 
{ 
Data *temp = Head;
while (Head) 
{
Tail=Head->Next; 
delete Head; 
Head=Tail; 
}
cout<<"List was deleted.."<<endl;
}

