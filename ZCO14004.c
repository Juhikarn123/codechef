#include <stdio.h>

#define max(x, y)       \
  ({                    \
    typeof(x) _x = (x); \
    typeof(y) _y = (y); \
    _x > _y ? _x : _y;  \
  })

#define min(x, y)       \
  ({                    \
    typeof(x) _x = (x); \
    typeof(y) _y = (y); \
    _x < _y ? _x : _y;  \
  })

long long solve(int* nums, const long long n){
    long long sum[4];
    
    sum[0] = nums[0];
    
    if(n>=2){
        sum[1] = nums[0] + nums[1];
    }
    if(n>=3){
        sum[2] = max( sum[1] , max(nums[0]+nums[2], nums[1]+nums[2]));
    }
    
    for(int i=3; i<n; i++){
        sum[3] =
        max( sum[2], max(sum[1]+nums[i], sum[0]+nums[i-1]+nums[i]));
        
        for(int j=0; j<3; j++) sum[j] = sum[j+1];
    }
    return sum[3];
}

int main(void) {
	// your code goes here
	long long n;
	scanf("%d" , &n);
	
	int* nums = (int*)malloc(sizeof(int)*n);
	for(long long i=0; i<n; i++)
	    scanf( "%d", &nums[i]);
	    
	long long answer = solve(nums, n);
	printf("%d\n", answer);
	
	free(nums);
	    
	
	return 0;
}