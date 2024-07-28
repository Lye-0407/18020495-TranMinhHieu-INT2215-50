SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data)
{
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);

    if (head == NULL)
        return newNode;

    SinglyLinkedListNode* backup_head = head;
    while (head->next != NULL)
        head = head->next;
        
    head->next = newNode;

    return backup_head;
}