#include <stdlib.h>
#include <stdbool.h>

// This solution is terrible but it works lol

struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

  int temp_sum;
  int sum = 0;
  int total;
  int digit;
  int carry;
  bool has_carry;

  struct ListNode* product = malloc(sizeof(struct ListNode));
  struct ListNode* head = product;

  //   3 4 2
  // + 4 6 5
  // -------

  while (1) {
    has_carry = false;

    int v1 = (l1 != NULL) ? l1->val : 0;
    int v2 = (l2 != NULL) ? l2->val : 0;

    temp_sum = sum + v1 + v2;

    if (temp_sum > 9) {
      carry = temp_sum / 10;
      has_carry = true;
      sum = temp_sum % 10;
    } else { sum = temp_sum; }

    product->val = sum;

    if (has_carry) {
      sum = carry;
    } else sum = 0;

    if (l1 != NULL) l1 = l1 -> next;
    if (l2 != NULL) l2 = l2 -> next;

    if (l1 == NULL && l2 == NULL) break;
    product->next = malloc(sizeof(struct ListNode));
    product = product -> next;
  }

  if (sum != 0) {
    product->next = malloc(sizeof(struct ListNode));
    product = product -> next;
    product -> val = sum;
    product -> next = NULL;
  }
  product->next = NULL; 
  return head;
}
