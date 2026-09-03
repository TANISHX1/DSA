
func uniformArray(nums1 []int) bool {
	n := len(nums1)
	nums2 := make([]int, n)
	minval := slices.Min(nums1)

	if minval%2 != 0 {
		for i := 0; i < n; i++ {
			if (nums1[i]%2 == 0) && (nums1[i]-minval >= 1) {
				nums2[i] = nums1[i] - minval
			} else {
				nums2[i] = nums1[i]
			}
		}
	} else {
		for i := 0; i < n; i++ {
			if (nums1[i]%2 != 0) && (nums1[i]-minval >= 1) {
				nums2[i] = nums1[i] - minval
			} else {
				nums2[i] = nums1[i]
			}
		}
	}
fmt.Println(nums2)
	oddflag,evenflag:=false,false
	for _, val := range nums2 {
			if val%2 == 0 {
				evenflag =true
				if oddflag == true{
					evenflag=false
					oddflag = false
					break
				}
			} else {
				oddflag = true
				if evenflag ==true{
					evenflag = false
					oddflag =false
					break
				}
				
			}
		}
return  evenflag||oddflag
}