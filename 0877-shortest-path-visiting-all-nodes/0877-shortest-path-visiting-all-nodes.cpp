class Solution {
public:
    typedef pair<int, int> P; //Globally defined a type
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        if(n == 1 || n == 0)
            return 0;
        
        queue<P> que; //auxillary data structure
        set<P> vis; //auxillary data structure to mark nodes visited

        int allVisitedState = (1 << n) - 1; // if all nodes visited with MaskValue containing all 1's eg. for N=4, MaskValue = 1111 which is equal to (2^n)-1 == (1 << n) - 1

        //initialize all the nodes with their maskValue
        for(int i = 0; i < n; i++) {
            int maskValue = (1 << i); //updating mask value of the node
            que.push({i, maskValue}); //push the node and maskvalue
            vis.insert({i, maskValue}); //mark the node visited along with maskvalue
        }
        
        int result = 0; 
        // Implementing BFS
        while(!que.empty())  {
            
            int N = que.size();
            result++; //visited 1 level (0 -> 1 || 0 -> 2 || 0 -> 3)

            while(N--) { //visit all the nodes in the queue
                
                auto curr = que.front(); //visiting and saving the first node in the queue
                que.pop(); //remove the node from the queue
                
                int currNode = curr.first; //storing the Node Value
                int currMask = curr.second; //storing the Mask Value
                
                for(auto &adj: graph[currNode]) {
                    int nextMask = currMask | (1 << adj); //updating the Mask Value for next iteration
                    
                    if(nextMask == allVisitedState) //if visited all the Nodes (eg. for N=4, MaskValue = 1111)
                        return result;
                    
                    if(vis.find({adj, nextMask}) == vis.end()) {//if visited the last node, add node with nextMask value of next level to the Queue
                        vis.insert({adj, nextMask});
                        que.push({adj, nextMask});                      
                    }
                }  
            }
        }
        return -1;
    }
};