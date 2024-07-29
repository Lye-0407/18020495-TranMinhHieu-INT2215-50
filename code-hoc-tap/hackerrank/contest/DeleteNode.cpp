include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Function to delete a node at a given position in the linked list
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    // If the list is empty
    if (llist == nullptr) {
        return nullptr;
    }

    // If the head node is to be deleted
    if (position == 0) {
        SinglyLinkedListNode* temp = llist;
        llist = llist->next;
        delete temp;
        return llist;
    }

    // Traverse the list to find the node just before the position
    SinglyLinkedListNode* current = llist;
    for (int i = 0; current != nullptr && i < position - 1; ++i) {
        current = current->next;
    }

    // If the position is out of range
    if (current == nullptr || current->next == nullptr) {
        return llist;
    }

    // Node current->next is the node to be deleted
    SinglyLinkedListNode* temp = current->next;
    current->next = current->next->next;
    delete temp;

    return llist;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    SinglyLinkedList* llist = new SinglyLinkedList();

    int llist_count;
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        llist->insert_node(llist_item);
    }

    int position;
    cin >> position;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    SinglyLinkedListNode* llist1 = deleteNode(llist->head, position);

    print_singly_linked_list(llist1, " ", fout);
    fout << "\n";

    free_singly_linked_list(llist1);

    fout.close();

    return 0;
}
