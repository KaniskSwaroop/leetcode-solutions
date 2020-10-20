if(n==0 || n==1)
            return n;
        int arr[n+1];
        arr[0]=0;
        arr[1]=1;
        arr[2]=1;
        int i;
        for(i=3;i<=n;i++)
        {
            arr[i]=arr[i-3]+arr[i-2]+arr[i-1];
        }
        return arr[n];
