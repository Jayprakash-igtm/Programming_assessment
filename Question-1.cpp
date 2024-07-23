/*Write a function to reverse a singly linked list. 
The function should take the head of the list and return 
the new head of the reversed list*/



#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseLinkedList(ListNode* head) {
   ListNode* prev = nullptr;
    ListNode* current = head;
    ListNode* nextTemp = nullptr;
    
    while (current != nullptr) {
        nextTemp = current->next;
        current->next = prev;
        prev = current;
        current = nextTemp;
    }
    
    return prev;
}

void printList(ListNode* head) {
ListNode* current = head;
while (current != nullptr) {
    std::cout << current->val << " -> ";
     current = current->next;
}
std::cout << "null" << std::endl;
}

int main() {
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);

  std::cout << "Original linked list:" << std::endl;
  printList(head);

  ListNode* reversedHead = reverseLinkedList(head);

  std::cout << "Reversed linked list:" << std::endl;
  printList(reversedHead);

  return 0;
}
