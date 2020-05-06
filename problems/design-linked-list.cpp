#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL){};
};

class MyLinkedList {
    Node *head;
    int size;

  public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        size = 0;
        head = new Node(0);
    }

    /** Get the value of the index-th node in the linked list. If the index is
     * invalid, return -1. */
    int get(int index) {
        if(index >= size) {
            return -1;
        }
        return getNode(index + 1)->val;
    }

    Node *getNode(int index) {
        Node *tmp = head;
        for(int i = 0; i < index; i++) {
            tmp = tmp->next;
        }
        return tmp;
    }

    /** Add a node of value val before the first element of the linked list.
     * After the insertion, the new node will be the first node of the linked
     * list. */
    void addAtHead(int val) {
        Node *temp = head->next;
        head->next = new Node(val);
        head->next->next = temp;
        size++;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node *tail = getNode(size);
        tail->next = new Node(val);
        size++;
    }

    /** Add a node of value val before the index-th node in the linked list. If
     * index equals to the length of linked list, the node will be appended to
     * the end of linked list. If index is greater than the length, the node
     * will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index == 0) {
            addAtHead(val);
        } else if(index == size) {
            addAtTail(val);
        } else {
            Node *node = getNode(index);
            Node *tmp = node->next;
            node->next = new Node(val);
            node->next->next = tmp;
            size++;
        }
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index >= size) {
            return;
        }

        if(index == 0) {
            Node *tmp = head->next;
            head = tmp;
        } else if(index == size - 1) {
            getNode(index)->next = NULL;
        } else {
            Node *node = getNode(index);
            Node *tmp = node->next->next;
            node->next = tmp;
        }

        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
