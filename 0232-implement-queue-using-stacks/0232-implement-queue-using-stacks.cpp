class MyQueue {
private:
    stack<int> in;
    stack<int> out;

public:
    MyQueue() {
    }

    void push(int x) {
        in.push(x);
    }

    int pop() {
        move();

        int x = out.top();
        out.pop();

        return x;
    }

    int peek() {
        move();

        return out.top();
    }

    bool empty() {
        return in.empty() && out.empty();
    }

private:
    void move() {
        if (out.empty()) {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
    }
};