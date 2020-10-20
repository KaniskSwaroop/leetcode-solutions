int n=a.size(),i,res=0,count,l,r;
        for(i=1;i<n-1;i++)
        {
            if(a[i-1]<a[i] && a[i+1]<a[i])
            {
                l=i-1;
                r=i+1;
                count=2;
                while(l>0 && a[l]>a[l-1])
                {
                    l--;
                    count++;
                }
                if(a[0]<a[1] && l==1)
                    count++;
                while(r<n-1 && a[r+1]<a[r])
                {
                    r++;
                    count++;
                }
                if(r==n-2 && a[n-1]<a[n-2])
                    count++;
                res=max(res,count+1);
            }
        }
        return res;
