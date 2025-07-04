#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val); // create a new node
    newNode->next = head;          // new node address pass on head
    head = newNode;
}

void print_value(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->next = b;

    insert_head(head, 100);
    insert_head(head, 500);
    insert_head(head, 800);
    print_value(head);
    return 0;
}