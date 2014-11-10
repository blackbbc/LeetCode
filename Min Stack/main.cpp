/**

尼玛，开两个栈居然会超内存
要压缩 


*/

class MinStack {
public:
	
	stack<int> sta;
	stack<int> mm;
	
    void push(int x) {
    	sta.push(x);
    	if (mm.empty()||x<=mm.top()) {
    	    mm.push(x);
    	}
    }

    void pop() {
    	
    	if (sta.top()==mm.top())
    	    mm.pop();
		sta.pop();
    }

    int top() {
        return sta.top();
    }

    int getMin() {
        return mm.top();
    }
    
};
