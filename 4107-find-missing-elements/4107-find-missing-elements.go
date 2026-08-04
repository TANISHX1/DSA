func findMissingElements(nums []int) []int {
	lowest := slices.Min(nums)
	highest := slices.Max(nums)
	var buffer []int
	for lowest < highest {
		lowest++
		if !slices.Contains(nums, lowest) {
			buffer = append(buffer, lowest)
		}
	}
	return buffer
}

