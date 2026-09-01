func largestInteger(nums []int, k int) int {
	freq := [64]int{}
	for _, val := range nums {
		freq[val]++
	}

	val := -1
    n := len(nums)
	if k == 1 {
		for i := 50; i > 0; i-- {
			if freq[i] == 1 {
				return i
			}
		}
		return -1
	}

	if k == n {
        answer:=0
		for _, count := range nums {
			if count > answer {
				answer= count
			}
		}
		return answer
	}
	if freq[nums[0]] == 1 && nums[0] > val {
		val = nums[0]
	}
	if freq[nums[n-1]] == 1 && nums[n-1] > val {
		val = nums[n-1]
	}
	return val
}
