#include<cstdlib>
#include<string>
#include<stack>

class Stack {
private:
    std::stack<pair<int, int>> _s;    //standard stack with push() pop()
    
public:
    int pop() {
        if( ! _s.empty()) {
            int ret = _s.top().second;
            _s.pop();
            return ret;
        }
        else {
            throw length_error(“empty_stack”);
        }
        return 0;
    }
    int push(int a) {    //returns new maximum
        int max = _s.empty ? a : std::max(_s.top().second, a);
        _s.push(pair<a, max>);
        return _s.top().second;
    }
};

