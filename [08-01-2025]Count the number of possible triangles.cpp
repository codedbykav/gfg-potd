        sort(arr.begin(),arr.end());
        int count=0;
        for(int i=arr.size()-1;i>=2;i--){
            
            for(int j =i-1;j>=1;j--){
                for(int k=j-1;k>=0;k--){
                    if(arr[i]<arr[j]+arr[k] && j!=k ){
                        count++;
                    }else{
                        break;
                    }
                    
                }
            }
        
        }
        return count;
 
