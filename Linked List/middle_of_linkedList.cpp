#include <iostream>
using namespace std;

// Node class representing each element of the linked list
class Node
{
public:
    int val;
    Node *next;

    Node(int value)
    {
        val = value;
        next = nullptr;
    }
};

// LinkedList class with utility methods
class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    // Insert at end
    void insert(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Brute Force: Find and print middle node
    void getMiddleBruteForce()
    {
        int count = 0;
        Node *temp = head;

        // Count total nodes
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }

        int mid = count / 2;
        temp = head;

        // Traverse to mid index
        for (int i = 0; i < mid; i++)
        {
            temp = temp->next;
        }

        if (temp != nullptr)
            cout << "Middle (Brute Force): " << temp->val << endl;
        else
            cout << "List is empty." << endl;
    }

    // Slow-Fast Pointer: Find and print middle node
    void getMiddleFastSlow()
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        if (slow != nullptr)
            cout << "Middle (Fast-Slow): " << slow->val << endl;
        else
            cout << "List is empty." << endl;
    }

    // Display list
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;

    // Insert elements
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6); // Try commenting this for odd size test

    cout << "Linked List: ";
    list.display();

    // Node *mid1 = list.getMiddleBruteForce();
    list.getMiddleBruteForce();

    // Node *mid2 = list.getMiddleFastSlow();
    list.getMiddleFastSlow();

    return 0;
}
