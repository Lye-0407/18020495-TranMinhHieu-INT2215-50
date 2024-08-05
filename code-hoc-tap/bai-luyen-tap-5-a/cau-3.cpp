// Biết head là con trỏ trỏ tới node đầu tiên của danh sách liên kết, viết hàm Node* insertHead(Node* head, int value); thêm một node có giá trị là value vào đầu của danh sách liên kết. Hàm trả về con trỏ trỏ tới node đầu của danh sách liên kết sau khi đã thêm.

Node* insertHead(Node* head, int value)
{
    // Create a new node with the given data
    Node* newNode = new Node{value, nullptr};

    // Make the next of the new node point to the current
    // head
    newNode->next = head;

    // Return the new node as the new head of the list
    return newNode;
}