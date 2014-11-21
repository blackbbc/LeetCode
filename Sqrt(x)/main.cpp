/**
**Å£¶Ù·¨¿ª·½
*/ 

class Solution {
public:
    int sqrt(int x) {
        
        if (x==0)
            return 0;
        
        double val=x;
        
        double last;
        do
        {
            last=val;
            val=(val+x/val)/2;
        }
        while(abs(val-last)>1e-2);
        return int(val);
        
                
        
    }
};
