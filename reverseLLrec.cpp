#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
class linkedlist
{
private:
    Node *head;

public:
    linkedlist()
    {
        head = nullptr;
    }
    void insert(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    Node *reverseRec(Node *node)
    {
        if (node == nullptr || node->next == nullptr)
        {
            return node;
        }
        Node *test = reverseRec(node->next);
        node->next->next = node;
        node->next = nullptr;
        return test;
    }
    void reverse()
    {
        head = reverseRec(head);
    }
    void display()
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    linkedlist l;
    l.insert(10);
    l.insert(20);
    l.insert(30);
    l.insert(40);
    l.insert(50);
    l.display();

    cout << endl;
    
    l.reverse();
    l.display();
}