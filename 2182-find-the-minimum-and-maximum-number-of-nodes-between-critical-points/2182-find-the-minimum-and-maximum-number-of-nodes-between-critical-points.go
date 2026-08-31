/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func nodesBetweenCriticalPoints(head *ListNode) []int {
	if head == nil {
		return []int{-1, -1}
	}
	prev := head
	pos := head
	count := 1
	start, mid := 0, 0
	minval, maxval := -1, -1

	for pos.Next != nil {
		if (prev.Val > pos.Val && pos.Next.Val > pos.Val) || (prev.Val < pos.Val && pos.Next.Val < pos.Val) {
			if start == 0 {
				start = count
				mid = count
			} else {
				maxval = count - start
				if count-mid < minval || minval == -1 {
					minval = count - mid
				}
					mid = count
			}
		}
			prev = pos
			pos = pos.Next
			count++

	}
	fmt.Println("start:", start, "mid: ", mid)

	return []int{minval,maxval}
}
