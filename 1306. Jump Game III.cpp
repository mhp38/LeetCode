/*
We can use BFS to determine whether we can reach the index with a value of 0 .

Define a queue q to store the currently reachable indices. Initially, enqueue the s t a r t index.

When the queue is not empty, take out the front index i of the queue. If a r r [ i ] = 0 , return true. Otherwise, mark the index i as visited. If i + a r r [ i ] and i − a r r [ i ] are within the array range and have not been visited, enqueue them and continue searching.

Finally, if the queue is empty, it means that we cannot reach the index with a value of 0 , so return false.

The time complexity is O ( n ) , and the space complexity is O ( n ) . Where n is the length of the array.
*/
class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        // treat as a graph problem
        // initialize all nodes as not visited
        vector<bool> visited(arr.size(), false);
        queue<int> vertices;
        vertices.push(start);

        while (!vertices.empty()) {
            int cur = vertices.front();
            vertices.pop();
            if (arr[cur] == 0)
                return true;

            int rightJump = cur + arr[cur];
            int leftJump = cur - arr[cur];

            if (rightJump < arr.size() && !visited[rightJump])
                vertices.push(rightJump);
            if (leftJump >= 0 && !visited[leftJump])
                vertices.push(leftJump);

            visited[cur] = true;
        }

        return false;
    }
};
