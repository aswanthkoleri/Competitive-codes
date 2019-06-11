def loseit(n,current,length,toremove):
	if n>=length:
		return toremove
	if ar[n]==current:
		if current==4:
			return min(loseit(n+1,8,length,toremove+1),loseit(n+1,4,length,toremove+1))
	else:
		return 1+loseit(n+1,current,length,toremove)