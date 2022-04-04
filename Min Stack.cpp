class MinStack {
public:
   int *data;
    int capacity;
    int nextindex;
    
    MinStack() {
        data=new int[4];
        capacity=4;
        nextindex=0;
    }
    
    void push(int val) {
        if(capacity==nextindex)
        {
            int *newdata=new int[capacity*2];
            for(int i=0;i<capacity;i++)
            {
                newdata[i]=data[i];
            }
            capacity*=2;
            delete[] data;
            data=newdata;
        }
        /*if(val<min){
            min=val;
        }
        */
        data[nextindex]=val;
        nextindex++;
        
    }
    
    void pop() {
    
        
            nextindex-=1;
        
        
    }
    
    int top() {
        
            return data[nextindex-1];
        
    }
    
    int getMin() {
       int mini=INT_MAX;
        for(int i=0;i<nextindex;i++){
            mini=min(data[i],mini);
        }
        return mini;
    }
};
