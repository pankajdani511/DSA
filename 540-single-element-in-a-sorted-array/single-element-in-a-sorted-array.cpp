class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n= A.size();

        if(n==1) return A[0];

        int st=0 , end=n-1;
        while(st<=end){
            int mid =st + (end - st)/2;

            if(mid==0 && A[0] != A[1]) return A[mid];
            if(mid == n-1 &&  A[n-1] != A[n-2] ) return A[mid];

            if(A[mid]!=A[mid-1] && A[mid] != A[mid+1])  
            return A[mid];

            if(mid %2 ==0){ //even numbers in both side of mid

                if(A[mid]==A[mid-1]){
                    end=mid-1;  //left
                }else{
                    st=mid+1;  //right
                }

            }else{  //for odd condition

                if(A[mid]==A[mid-1]){   //right
                    st=mid+1; 
                }else{  //left
                    end = mid -1;
                }

            }

        }
return -1;
    }
};