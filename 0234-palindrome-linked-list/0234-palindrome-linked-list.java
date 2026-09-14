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
    public boolean isPalindrome(ListNode head) {
        ListNode fast = head;
        ListNode slow = head;
        ListNode temp = null;
        ListNode last = null;
        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            temp = slow;
            slow = slow.next;
            temp.next = last;
            last = temp;
        }
        if (fast != null) {
            slow = slow.next;
        }
        while (temp != null && slow != null) {
            if (temp.val != slow.val) {
                return false;
            }
            temp = temp.next;
            slow = slow.next;
        }
        return true;
    }

}