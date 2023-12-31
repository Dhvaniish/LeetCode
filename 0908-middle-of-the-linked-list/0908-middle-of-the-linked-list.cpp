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
    int getLength(ListNode* head){
        int length = 0;
        while(head!=NULL){
            length++;
            head = head->next;
        }
        return length;
    }
    ListNode* middleNode(ListNode* head) {
        int length = getLength(head);
        int ans = length/2;
        ListNode* temp = head;
        int count = 0;
        while(count< ans){
            temp = temp -> next;
            count++;
        }
        return temp;
    }
};