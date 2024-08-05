// Biết head là con trỏ trỏ tới node đầu tiên của danh sách liên kết, viết hàm Node* insertTail(Node* head, int value); thêm một node có giá trị là value vào cuối của danh sách liên kết. Hàm trả về con trỏ trỏ tới node đầu của danh sách liên kết sau khi đã thêm.

Node* insertTail(Node* head, int value)
{
    // Create a new node
    Node* newNode = new Node{value,nullptr};

    // If the Linked List is empty, make
    // the new node as the head and return
    if (head == nullptr) return newNode; 

    // Store the head reference in a temporary variable
    Node* last = head;

     // Traverse till the last node
    while (last->next != nullptr)
    {
        last = last->next;
    }

    // Change the next pointer of the last node 
    // to point to the new node
    last->next = newNode;

    // Return the head of the list
    return head;
}