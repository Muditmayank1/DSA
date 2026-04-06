/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode s = null;
        ListNode n = head;
        while(n!=null){
            ListNode t = n.next;
            n.next=s;
            s=n;
            n=t;
            n=t;
        }
        return s;
    }
}