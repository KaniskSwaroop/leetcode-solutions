int n=s.length(),res=0,i,count=0;
        if(n==0)
            res=0;
        else
        {
            stack<char> st;
           for(i=0;i<n;)
           {
               while(s[i]=='(')
               {
                   st.push(s[i]);
                   i++;
               }
               while(s[i]==')')
               {
                   if(st.size()>0)
                   {
                       st.pop();
                   }
                   else
                       count++;
                   i++;
               }
           }
            res=count+st.size();
        }
        return res;
