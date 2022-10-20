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
        map<int,ListNode*>mp;
        int i = 0;
        
        while(head != NULL){
            mp[i] = head;
            head = head->next;
            i++;
        }
        int a = i/2;
        return mp[a];
    }
}; 