#include <iostream>

class DoubleLinkedList
{
private:
    class Node
    {
        public:
            int data;
            Node *pre;
            Node *next;

            Node(int _data) : data(_data) {}
    };

    Node *head;
    Node *tail;

public:

    DoubleLinkedList()
    {
        this->head = nullptr;
    }

    void add(int value, bool atPre)
    {
        if (this-> head == nullptr)
        {
            this->head = new Node(value);
        }
        else
        {
            Node *current = this->head;
            if (atPre)
            {
                while(current->pre != nullptr)
                {
                    current = current->pre;
                }

                Node *newNode = new Node(value);
                current->pre =  newNode;
                newNode->next = current;
                this->head = newNode;
            }
            else
            {
                while(current->next != nullptr)
                {
                    current = current->next;
                }

                current->next = new Node(value);
                this->tail = current->next;
            }
        }
    }

    void display()
    {
        Node *current = head;
        while(current != nullptr)
        {
            std::cout << current->data << "\n";
            current = current->next;
        }
    }
};

int main()
{
    DoubleLinkedList list;
    list.add(5, false);
    list.add(100, false);
    list.add(42, true);
    list.add(69, false);

    list.display();
}
