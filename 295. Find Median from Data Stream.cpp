// SWC
//  Hints by ashraf bhai :
//  Smallest half will remain in max heap and longest half wil  remain in min
//  heap

class MedianFinder {
private:
    priority_queue<int> lower;                            // Max heap
    priority_queue<int, vector<int>, greater<int>> upper; // Mean heap

public:
    /** initialize your data structure here. */
    MedianFinder() {}

    void addNum(int num) {
        if (lower.empty())
            lower.push(num);
        else {
            if (num <= lower.top())
                lower.push(num);
            else
                upper.push(num);

            if (lower.size() > upper.size() + 1) {
                upper.push(lower.top());
                lower.pop();
            } else if (upper.size() > lower.size() + 1) {
                lower.push(upper.top());
                upper.pop();
            }
        }
    }

    double findMedian() {
        if (upper.size() == lower.size()) {
            return (double)(upper.top() + lower.top()) / 2;
        } else {
            return upper.size() > lower.size() ? upper.top() : lower.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
