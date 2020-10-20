int n=words.size(),i,res=0,j,k;
        map<char,bool> m;
     
        bool found=false;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<words[i].length();j++)
            {
                m[words[i][j]]=1;
            }
            for(j=i+1;j<n;j++)
            {
                found=false;
                for(k=0;k<words[j].length();k++)
                {
                    if(m[words[j][k]]==1)
                    {
                        found=true;
                        break;
                    }
                }
                if(!found)
                {
                    if(res<words[i].length()*words[j].length())
                        res=words[i].length()*words[j].length();
                }
            }
            for(j=0;j<words[i].length();j++)
                m[words[i][j]]=0;
        }
        return res;
