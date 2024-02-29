/*
void sum_diff( float op1, float op2, float *psum, float *pdiff )
{
    *psum=op1+op2;
    *pdiff=op1-op2;
}*///-----------------------------------------------------------------
/*
void findmax( int *px, int *py, int *pmax )
{
    if(*px>*py) *pmax=*px;
    else *pmax=*py;
}*///------------------------------------------------------------------------
/*
int FindArrayMax( int a[], int n )
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i]) max=a[i];
    }
    return max;
}*///-------------------------------------------------------------------------
/*
int insert(int a[ ], int value) {
	int i = 0;
	for (i = 0; i < Count; i++)
		if (a[i] == value)
			return -1;
	i = 0;
	while (i < Count ) {
		if (a[i] > value)
			break;
		i++;
	}
	if (i == Count)
		a[i] = value;
	else {
		int tmp1 = a[i], tmp2;
		a[i] = value;
		while (i < Count) {
			i++;
			tmp2 = a[i];
			a[i] = tmp1;
			tmp1 = tmp2;
		}
	}
	Count++;
	return 1;
}
 
int del(int a[ ], int value) {
	int i = 0, j = 0, flag = 1;
	for (i = 0; i < Count; i++) {
		if (a[i] == value) {
			for (j = i; a[j] != '\0'; j++)
				a[j] = a[j + 1];
			flag = 0;
		}
	}
	if (flag)
		return -1;
	Count--;
	return 1;
}
 
int modify(int a[ ], int value1, int value2) {
	int i, flag = 1;
	for (i = 0; i < Count; i++) {
		if (a[i] == value2)
			return -1;
		if (a[i] == value1)
			flag = 0;
	}
	if (flag)
		return -1;
	for (i = 0; i < Count; i++)
		if (a[i] == value1) {
			a[i] = value2;
			break;
		}
	for (i = 0; i < Count; i++)
		for (int j = i + 1; j < Count; j++)
			if (a[j] < a[i]) {
				int tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
	return 1;
}
 
int query(int a[ ], int value) {
	int before = 0, after = Count - 1;
	while (before <= after) {
		int mid = (before + after) / 2;
		if (a[mid] > value)
			after = mid - 1;
		else if (a[mid] < value)
			before = mid + 1;
		else
			return mid;
	}
	return -1;
}*///----------------------------------------------------------------------------