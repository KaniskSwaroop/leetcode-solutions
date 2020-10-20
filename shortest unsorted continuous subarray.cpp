int i =  0, j = nums.size()-1, n = nums.size();
        
        while(i+1<n){
            if(nums[i] <= nums[i+1]) i++;
            else break;
        }
        
        if(i == n-1) return 0;
        
        while(j-1 >= i){
            if(nums[j-1] <= nums[j]) j--;
            else break;
        }
        
        int mx = INT_MIN, mn = INT_MAX;
        
        for(int k=i;k<=j;k++){
            mn = min(mn, nums[k]);
            mx = max(mx, nums[k]);
        }
        int a = 0, b = j+1;
        
        while(a < i){
            if(nums[a] <= mn) a++;
            else break;
        }
        
        while(b < n){
            if(nums[b] < mx) b++;
            else break;
        }
        return b-a;
