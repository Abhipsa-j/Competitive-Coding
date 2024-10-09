// { Driver Code Starts
#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node *inPlace(Node *root);
 
void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main() {
	// your code goes here
	int T;
	cin>>T;
 
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Node *res = inPlace(head);
		print(res);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/


Node *inPlace(Node *root)
{
 // your code goes here
 Node * ptr=root;
 Node * ptr1=NULL;
 Node * ptr2=NULL;
 while(ptr!=ptr1&&ptr->next!=ptr1)
 {
     
     ptr1=ptr;
     while(ptr1->next->next !=NULL)
     ptr1=ptr1->next;
         
    ptr2=ptr1->next;
         
    ptr1->next=ptr2->next;
    ptr2->next=ptr->next;
    ptr->next=ptr2;
    ptr=ptr2->next;
   /* if(ptr->next==ptr1)
    break;*/
}
 return root;
 
}
