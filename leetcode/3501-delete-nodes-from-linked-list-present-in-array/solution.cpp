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
   

    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> to_delete(nums.begin(), nums.end());
        ListNode* dummy = new ListNode(0, head);
        ListNode* current = dummy;
        
        while (current->next != nullptr) {
            if (to_delete.count(current->next->val)) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                current = current->next;
            }
        }
        
        ListNode* new_head = dummy->next;
        delete dummy;
        return new_head;
    }
};
