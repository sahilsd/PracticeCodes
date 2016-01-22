struct GraphNode{
        int i;
        vector<GraphNode> adjacency;
        int color; //0:white, 1:gray, 2:black
};

vector<GraphNode> bfs(GraphNode s)
{
        queue<GraphNode> Q;
        vector<GraphNode> bfsList;

        Q.insert(s);
        s.color = gray;
        GraphNode u;

        while(!Q.empty()) {
            u = Q.top();
        Q.pop();

            for(int i=0; i<u.adjacency.size(); i++) {
                Q.insert(u.adjacency[i]);
                u.adjacency[i].color = 1;
            }
            u.color = black;
            bfsList.push_back(u);
        }

        return bfsList;
}
