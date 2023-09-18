/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* temp = head;
        while(temp!=NULL){
            c++;
            temp= temp->next;
        }
        if(head ==NULL || head->next == NULL)
        {
            return NULL;
        }
        if(c-n==0){
            head = head->next;
            return head;
        }
        ListNode* curr = head;
        ListNode* slow = head;
        for(int i=0; i<c-n; i++){
            slow = curr;
            curr = curr->next;
        }
        slow->next = curr->next;
        return head;
    }
};