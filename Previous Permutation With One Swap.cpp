int n=a.size(),i,j,res=INT_MAX,idx=INT_MAX;
        bool found=false;
        bool yes=false;
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]<a[i])
            {
                yes=true;
                break;
            }
        }
        if(yes)
        {
        for(i=n-2;i>=0;i--)
        {
            for(j=n-1;j>i;j--)
            {
                if(a[i]>a[j])
                {
                    if(a[i]-a[j]<res)
                    {
                        res=a[i]-a[j];
                        idx=j;
                    }
                    found=true;
                    break;
                }
                else
                    continue;
            }
            if(found)
                break;
        }
        swap(a[i],a[idx]);
        }
        return a;
