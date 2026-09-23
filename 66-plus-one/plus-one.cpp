class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i = digits.size()-1 ; i>=0 ; i-- )
        {
            if(digits[i]<9){

                digits[i]++;

                return digits;
            }

            digits[i]=0; // agr last digit 9 hai toh uske liye example : 129 = 120 ho jayega , ab loop preious digit pr jayega then 120=>130
        } 


    digits.insert(digits.begin(),1); // ye condition hai jb sari digit 9999 ho toh ham starting me 1 insert kra denge 
    
    return digits;
        
        
    }
};