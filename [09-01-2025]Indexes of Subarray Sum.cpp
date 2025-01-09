int n=arr.size(),L=0,R=0,S=0;
        while(R<n){
            S+=arr[R];
            while(L<R&&S>target) {
                S-=arr[L];
                L++;
            }
            if(S==target) {
                return{L+1,R+1};
            }
            R++;
        }
        return {-1};
    
