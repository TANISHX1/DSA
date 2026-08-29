func summaryRanges(nums []int) []string {
    if len(nums) ==0{
        return []string{}
    }
	var buffer []string
	start := nums[0]
count:=0
	for i := 1; i < len(nums); i++ {
		if nums[i-1]+1 == nums[i] {
            count++
			continue
		} else {
			buffer = append(buffer, format(start,count))
		start = nums[i]
            count=0
		}
	}
    buffer = append(buffer, format(start,count))
	return buffer
}

func format (start ,count int ) string {
    if count ==0{
        return  fmt.Sprintf("%d", start)
    }else{
        return  fmt.Sprintf("%d->%d", start, start+count)
    }
}