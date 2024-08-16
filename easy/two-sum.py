def twoSum(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    mapa = {}
    for i in range(len(nums)):
        mapa.update({nums[i]: i})

    for i in range(len(nums)):
        value = nums[i] # 1
        to_find = target - value # 5
        found = mapa.get(to_find) #
        if (found and found != i):
            return [i, found]