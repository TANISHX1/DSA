
func uniformArray(nums1 []int) bool {
	
	minval:= slices.Min(nums1)
    hasodd:= false

    for _,val:= range nums1{
        if val%2==1{
            hasodd= true
            break
        }
    }
    if hasodd  && minval%2 == 0{
        return false
    }
    return true 
}