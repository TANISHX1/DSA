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
	var previous *ListNode = nil
	count := 0
	var res []int
	var finres []int

	for pos := head; pos.Next != nil; pos = pos.Next {
			count++
		if previous == nil {
			previous = pos
			continue
		}
		if (previous.Val > pos.Val && pos.Next.Val > pos.Val) || (previous.Val < pos.Val && pos.Next.Val < pos.Val) {
			res = append(res, count)
            n := len(res)
            if n>1{
                finres = append(finres,res[n-1]-res[n-2])
            }
		}
		previous = pos

	}
    // fmt.Println("res:",res, "count : ",count,"finres:",finres)
if len(finres)>0{
	return []int{slices.Min(finres), slices.Max(res)-slices.Min(res)}
}else{
    return []int{-1,-1}
}
}
