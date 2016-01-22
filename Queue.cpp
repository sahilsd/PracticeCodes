class Queue {
private:
         stack<int> _s0, _s1; 
         int token = 0;
         stack<int> getActive() {
             return token?_s1:_s2;
         }
         void toggleActive() {
            token ^= token;
         }
public:
         void push(int x) {
             stack<int> s = getActive;
             s.push(x);
        }
        void pop() {
             getactive().pop();
         }
         int peek() {
            stack<int> s = getActive();
             stack<int> passive = getPassive();
             while(!s.empty()) {
                 int tmp = s.top();
                passive.push(tmp);
                 s.pop();
             }
            toggleActive();
             return passive.top();
         }
        bool empty() {
            return getActive.empty();
         }
};

