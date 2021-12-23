def BinarySearch(a):
    l, r = 0, len(a) - 1
    while(l <= r):
        mid = (l + r) // 2
        if a[mid] == mid:
            return mid
        elif a[mid] > mid:
            r = mid - 1
        else:
            l = mid + 1
    return -1
n = int(input())
a = list(map(int, input().split()))
print(BinarySearch(a))