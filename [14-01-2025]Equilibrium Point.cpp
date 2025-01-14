        int n = arr.size();
        int sum=0;
        int sum1=0;
        int ans = -1;
         
         for(int i:arr){
             sum += i;//total sum
             
         }
        //part1+part2=sum
        
        for(int i=0;i<n;i++){
            sum1 +=arr[i];
            if(sum==sum1){
                ans=i;
                break;
            }
            sum -=arr[i]; 
            
             }
        
        return ans;
        
        
