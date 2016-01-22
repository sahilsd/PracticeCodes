#include<cstdlib>
#include<stack>
#include<list>
#include<vector>

#define WHITE   0
#define GRAY    1
#define BLACK   2

struct GraphNode {
    int i;
    std::vector<GraphNode> adjList;
    int color;
};


std::list<GraphNode> dfs(GraphNode s)
{
    std::stack<GraphNode> S;
    std::list<GraphNode> dfsList;

    S.push(s);
    s.color = GRAY;

    dfsList.push_back(s);

    while(!S.empty()) {
        GraphNode u = S.top();
        S.pop();

        for(int i = 0; i<u.adjList.size(); i++) {
            if(!u.adjList[i].color) {
                u.color = GRAY;
                S.push(u.adjList[i]);
                dfsList.push_back(u);
            }
        }
        u.color = BLACK;
    }
    
    return dfsList;
}

