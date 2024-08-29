#include <iostream>

class LinkedList
{
private:
    class Node
    {
        public:
            int data;
            Node *next;

            Node(int data) : data(data) {}    // this is also a constructor
    };

    Node *head;
    Node *tail;

public:

    LinkedList()
    {
        this->head = nullptr;
    }

    void add(int value)
    {
        if (this->head == nullptr)
        {
            this->head = new Node(value);
        }
        else
        {
            Node *current = head;
            while(current->next != nullptr)
            {
                current = current->next;
            }

            current->next = new Node(value);
            this->tail = current->next;
        }
    }

    void remove(int value)
    {
        if (this->head->data == value)
        {
            this->head = this->head->next;
            return;
        }

        Node *before = this->head;
        Node *current = this->head->next;
        while(current != nullptr)
        {
            if (current->data == value)
            {
               before->next = current->next; 
            }
            before = current;
            current = current->next;
        }
    }

    void display()
    {
        Node *current = head;
        while(current != nullptr)
        {
            std::cout << current-> data << "\n";
            current = current->next;
        }
    }
};


int main()
{
    LinkedList list;
    list.add(5);
    list.add(10);
    list.add(100);
    list.add(23);
    list.remove(5);
    list.display();
}
