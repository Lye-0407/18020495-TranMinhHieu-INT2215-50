// Biết head là con trỏ trỏ tới node đầu tiên của danh sách liên kết, viết hàm void print(Node* head); in ra giá trị các phần tử của danh sách liên kết trên cùng một dòng, cách nhau bởi 1 dấu cách.

void print(Node* head)
{
    Node* current = head;
    while (current != nullptr)
    {
        cout << current->value << " ";
        current = current->next;
    }
}
