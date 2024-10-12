/*
Solution 1: Depth-First Search (DFS)

We can use the Depth-First Search (DFS) method to traverse the entire graph, count the number of reachable nodes, and use an array vis to mark whether the current node has been visited to prevent repeated visits.

Finally, we count the number of visited nodes. If it is the same as the total number of nodes, it means that all nodes can be visited; otherwise, there are nodes that cannot be reached.

The time complexity is O ( n + m ) , and the space complexity is O ( n ) , where n is the number of nodes, and m is the number of edges.
*/

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int> visitedRooms;
        vector<bool> isVisited(rooms.size(), false);
        visitedRooms.push(0);
        while (!visitedRooms.empty()) {
            int key = visitedRooms.top();
            visitedRooms.pop();
            if (!isVisited[key]) {
                isVisited[key] = true;
                for (auto i : rooms[key])
                    visitedRooms.push(i);
            }
        }

        for (auto i : isVisited)
            if (!i)
                return i;
        return true;
    }
};
