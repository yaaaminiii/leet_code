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
    bool isPalindrome(ListNode* head) {
    //     vector<int>arr;
    //     ListNode* temp=head;
    //     while(temp!=NULL){
    //         arr.push_back(temp->val);
    //         temp=temp->next;
    //     }
    //    int i = 0;
    //     int j = arr.size() - 1;
    //     while (i < j) {
    //         if (arr[i] != arr[j]) {
    //             return false;
    //         }
    //         i++;
    //         j--;
    //     }

    //     return true;

 ListNode* slow = head;
        ListNode* fast = head;

        // Find the middle of the linked list
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half
        ListNode* prev = NULL;
        ListNode* curr = slow;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Compare first half and reversed second half
        ListNode* first = head;
        ListNode* second = prev;

        while (second != NULL) {
            if (first->val != second->val) {
                return false;
            }

            first = first->next;
            second = second->next;
        }

        return true;
  
    
    }
};