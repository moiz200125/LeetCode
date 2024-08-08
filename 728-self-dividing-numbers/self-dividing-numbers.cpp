class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> res;

        for(int i = left; i <= right; i++)
        {
            int it = i;
            bool isSelfDividing = true;

            while(it != 0)
            {
                int n = it % 10;

                // If digit is zero or the number is not divisible by this digit
                if(n == 0 || i % n != 0)
                {
                    isSelfDividing = false;
                    break;
                }

                it = it / 10;
            }

            // If the number is self-dividing, add it to the result
            if(isSelfDividing)
            {
                res.push_back(i);
            }
        }   
        return res;
    }
};



// class Solution {
// public:
//     vector<int> selfDividingNumbers(int left, int right) 
//     {
//         vector<int>res;
//         queue<int>q;
//         for(int i = left;i <= right;i++)
//         {
//             if(!(i % 2 == 0 && i % 5 == 0))
//             {
//                 int it = i;
//                 while(it != 0)
//                 {
//                     int r = it % 10;
//                     q.push(r);
//                     it = it / 10;
//                 }
//                 while(!q.empty())
//                 {
//                     int n = i % q.front();
//                     q.pop();
//                     if(n == 0)
//                     {
//                         continue;
//                     }
//                     else
//                     {
//                         break;
//                     }
//                 }
//                 res.push_back(i);
//             }
//         }   
//         return res;
//     }
// };



/*
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int>res;

        for(int i = left;i <= right;i++)
        {
            if(!(i % 2 == 0 && i % 5 == 0))
            {
                int it = i;
                while(it != 0)
                {
                    int n = it % 10;
                    if(it % n != 0)
                    {
                        break;
                    }
                    else
                    {
                        it = it / 10;
                        
                    }

                    if(it == 0)
                        res.push_back(i);
                }
                
            }
        }   
        return res;
    }
};
*/