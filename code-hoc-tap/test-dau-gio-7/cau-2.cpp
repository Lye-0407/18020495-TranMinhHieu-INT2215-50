// Cho một class Node biểu diễn một node
//  của 1 danh sách liên kết đôi như sau:

// class Node {
//     int value;
// public:
//     Node* next;
//     Node* prev;
//     int getValue() {
//         return value;
//     }
// };

// Biết head là con trỏ trỏ tới một danh sách liên kết, viết hàm Node* sort(Node* head); sắp xếp danh sách liên kết theo thứ tự tăng dần. Hàm trả về con trỏ trỏ tới vị trí đầu tiên của danh sách liên kết sau khi đã sắp xếp.

Node* sort(Node* head)
{
    if (!head) return nullptr; // Nếu danh sách rỗng

    Node* sorted = nullptr; // Khai báo danh sách sorted là rỗng

    Node* current = head; // DUyệt các Node
    while (current != nullptr)
    {
        Node* next = current->next; // Lưu lại node tiếp theo
        current->prev = current->next = nullptr; // Ngắt kết nối các nốt hiện tại
    
        // Chèn current vào sorted
        if (sorted == nullptr)
            sorted = current; // Case: list = nullptr
        else if (sorted->getValue() >= current)
    }
}