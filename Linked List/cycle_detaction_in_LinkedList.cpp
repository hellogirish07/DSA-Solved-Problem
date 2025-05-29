#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert at end
    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Create cycle at given position (0-based)
    void createCycle(int pos) {
        if (!head) return;

        Node* temp = head;
        Node* startNode = nullptr;
        int count = 0;

        while (temp->next) {
            if (count == pos) {
                startNode = temp;
            }
            temp = temp->next;
            count++;
        }
        temp->next = startNode;
    }

    // Detect cycle using Floyd's Algorithm
    Node* detectCycle() {
        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return slow;
        }
        return nullptr;
    }

    // Find start of cycle
    Node* findCycleStart() {
        Node* intersection = detectCycle();
        if (!intersection) return nullptr;

        Node* slow = head;
        while (slow != intersection) {
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
    }

    // Remove cycle if it exists
    void removeCycle() {
        Node* startNode = findCycleStart();
        if (!startNode) {
            cout << "No cycle detected.\n";
            return;
        }

        Node* temp = startNode;
        while (temp->next != startNode) {
            temp = temp->next;
        }
        temp->next = nullptr;

        cout << "Cycle removed. Cycle started at node with data: " << startNode->data << endl;
    }

    // Print the list (works only if no cycle)
    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);

    list.createCycle(2); // Make node 50 point to node 30 (index 2)

    Node* cycleStart = list.findCycleStart();
    if (cycleStart)
        cout << "Cycle detected at node with data: " << cycleStart->data << endl;
    else
        cout << "No cycle detected.\n";

    list.removeCycle();

    cout << "Linked list after removing cycle:\n";
    list.printList();

    return 0;
}
