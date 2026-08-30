
func minimumDeletions(nums []int) int {
	minidx ,maxidx:=0,0
    for i:=0;i<len(nums);i++{
        if nums[i]<nums[minidx]{
            minidx=i
        }
        if nums[i]>nums[maxidx]{
            maxidx=i
        }
    }
    left:= min(minidx,maxidx)
    right:= max(minidx,maxidx)
    front:= right+1
    back:= len(nums) - left
    frontback := left+1 + (len(nums)-right)
    return min(front,back,frontback)
}
