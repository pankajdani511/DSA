class Solution {
public:
    void nextPermutation(vector<int>& A) {

        //find the pivat

        int pivat =-1 ,n=A.size();
        for(int i = n-2 ;i>=0;i--){
            if(A[i]<A[i+1]){
                pivat=i;
                break;
            }
        }
        if (pivat == -1){
            reverse(A.begin(),A.end());
            return;
        }

        // next larger element

        for (int i=n-1;i>pivat; i--){
            if(A[i]>A[pivat]){
                swap(A[i],A[pivat]);
                break;

            }
        }

        // reverse (pivat+1 to n-1)

        // reverse(A.begin(),A.end());

        int i = pivat+1 ,j = n-1;
        while(i<= j){
            swap(A[i++],A[j--]);
        }

    }
};