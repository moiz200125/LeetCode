class Solution {
public:
    int countDigits(int num) 
    {
        int count = 0;
        int n = num;
        while(n != 0)
        {
            int d = n % 10;
            
            // Skip division by zero
            if(d != 0 && num % d == 0)
                count++;

            n = n / 10;    
        }
        return count;
    }
};


// class Solution {
// public:
//     int countDigits(int num) 
//     {
//         int count = 0;
//         int n = num;
//         while(n != 0)
//         {
//             int d = n % 10;
//             if(num % d == 0)
//                 count++;

//             n = n / 10;    
//         }
//         return count;
//     }
// };