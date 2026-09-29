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
    ListNode* middleNode(ListNode* head) {
        // int length=0;
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     length++;
        //     temp=temp->next;
        // }
        // int mid=length/2;
        // temp=head;
        // while(mid>0){
        //     temp=temp->next;
        //     mid--;
        // }
        // return temp;

        ListNode *fast,*slow;
        slow=head;
        fast=head;
        while(fast!=NULL && fast->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};