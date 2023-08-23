#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node()
        {
            val = 0;
            next = NULL;
        }
        Node(int  val)
        {
            this->val = val;
            this->next = NULL;
        }

};
class Linkedlist
{
    Node *head;
    public:
        Linkedlist()
        {
            head = NULL;
        }
        void insert(int x);
        void del();
        void display();
};

void Linkedlist::insert(int x)
{
    Node* n = new Node(x);
    if(head==NULL)
    {
        head = n;
        return;
    }
    Node *t = head;
    while(t->next!=NULL)
    {
        t = t->next;
    }
    t->next = n;
}

void Linkedlist::del()
{
    if(head==NULL)
    cout<<"The list is empty"<<endl;
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else{
        Node* t = head;
        while(t->next->next!=NULL)
        {
            t =t->next;
        }
        delete t->next->next;
        t->next = NULL;
        
    }

}
void Linkedlist::display()
{
    if(head == NULL)
    cout<<"The list is empty"<<endl;
    
    else{
        Node* t =head;
        while(t!=NULL)
        {
            cout<<t->val<<endl;
            t = t->next;
        }
    }
}
void Takeinput()
{
	#ifndef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int main()
{
    Takeinput();
    Linkedlist list;
    list.insert(12);
    list.insert(13);
    list.display();
    list.del();
    list.display();
    list.del();
    list.display();
    return 0;
}