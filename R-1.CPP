#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    ListNode* current = head;
    
    while (current != nullptr && current->next != nullptr) {
        if (current->val == current->next->val) {
            ListNode* duplicate = current->next;
            current->next = current->next->next;
            delete duplicate;
        } else {
            current = current->next;
        }
    }
    
    return head;
}
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
        
    }
    cout << endl;
}
   
int main() {
    // Example usage
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    cout << "Original list: ";
    printList(head);

    ListNode* updatedList = deleteDuplicates(head);

    cout << "List after removing duplicates: ";
    printList(updatedList);

    while (updatedList != nullptr) {
        ListNode* temp = updatedList;
        updatedList = updatedList->next;
        delete temp;
    }

    return 0;
}
