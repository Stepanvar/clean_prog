import time
def gcd_rec(a, b):
	maxv = max(a, b)
	minv = min(a, b)
	remainder = maxv % minv
	if remainder == 0:
		return minv
	else:
		return gcd_rec(minv, remainder)
def gcd_cycle(a, b):
	maxv = max(a, b)
	minv = min(a, b)
	gcd = maxv
	while minv != 0:
		maxv = minv
		minv = gcd % minv
		gcd = maxv
	return maxv
st1 = time.time()
num = gcd_rec(100, 54)
stop1 = time.time()
print("time spent = " + str((stop1 - st1) * 1000000) + " num = " + str(num))
st2 = time.time()
num2 = gcd_cycle(100, 54)
stop2 = time.time()
print("time spent = " + str((stop2 - st2) * 1000000) + " num = " + str(num2))