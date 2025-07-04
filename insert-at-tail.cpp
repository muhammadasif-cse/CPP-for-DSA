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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
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
    Node *middle = new Node(30);
    Node *tail = new Node(50);

    head->next = middle;
    middle->next = tail;

    insert_tail(head, tail, 70);
    insert_tail(head, tail, 90);
    print_value(head);
    return 0;
}