package leetcode

func twoSum(nums []int, target int) []int {
	len := len(nums)
	smap := make(map[int]int)
	for i := 0; i < len; i++ {
		if p, h := smap[target-nums[i]]; h {
			return []int{i, p}
		}
		smap[nums[i]] = i
	}
	return nil
}
