// Problem link: https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/0

//User function template for C++

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head->next==NULL)
            return false;
        // your code here
        Node *slow=head, *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            // if(fast!=NULL)
            //     fast=fast->next;
            
            slow=slow->next;
            
            if(slow==fast)
            return true;
        }
        return false;
    }
};
