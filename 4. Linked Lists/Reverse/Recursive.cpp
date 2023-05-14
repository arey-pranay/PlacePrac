class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        if(head->next == nullptr){
            return head;
        }
        ListNode* temp = reverseList(head->next);
        ListNode* temp2 = head->next;
        temp2->next = head;
        head->next = nullptr;
        return temp;

    }
};
