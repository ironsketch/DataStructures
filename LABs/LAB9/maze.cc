#include <vector>
#include <iostream>
#include <string>
#include "solveMaze.h"
using namespace std;
int main(){
    cout << "\n\033[31m█\033[0m Path\n" << endl;
    vector<string> a = {"▒","B","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒"};
    vector<string> b = {"▒"," ","█"," "," "," ","█"," "," "," "," "," "," ","█"," "," "," "," "," "," "," ","█"," "," ","█","█","█","▒"};
    vector<string> c = {"▒"," "," "," ","█"," ","█"," ","█","█","█","█"," "," "," ","█","█","█","█","█"," ","█","█"," "," "," "," ","▒"};
    vector<string> d = {"▒","█","█","█","█"," ","█"," ","█","█"," ","█","█","█"," ","█"," ","█","█","█"," ","█","█","█","█"," ","█","▒"};
    vector<string> e = {"▒"," "," "," "," "," ","█"," "," "," "," ","█"," ","█","█","█"," ","█","█"," "," "," "," "," "," "," "," ","▒"};
    vector<string> f = {"▒"," ","█","█","█","█","█"," ","█","█","█","█"," "," "," "," "," "," ","█"," ","█","█","█","█","█","█"," ","▒"};
    vector<string> g = {"▒"," "," "," "," "," "," "," "," "," "," "," "," ","█","█","█","█"," ","█"," ","█"," ","█"," "," "," "," ","▒"};
    vector<string> h = {"▒","█"," ","█","█","█","█","█","█","█","█","█","█","█"," ","█","█"," ","█"," ","█"," ","█"," ","█","█","█","▒"};
    vector<string> i = {"▒"," "," ","█"," "," "," "," "," "," "," "," "," "," "," "," "," "," ","█"," "," "," ","█"," "," "," "," ","▒"};
    vector<string> j = {"▒","█","█","█"," ","█","█","█","█","█","█","█","█","█","█","█"," ","█","█","█","█","█","█","█","█","█"," ","▒"};
    vector<string> k = {"▒"," "," "," "," ","█"," "," "," "," "," "," "," "," "," "," "," ","█"," "," "," "," "," "," "," "," "," ","▒"};
    vector<string> l = {"▒","█","█","█"," ","█","█"," ","█"," ","█","█","█","█","█","█","█","█"," ","█","█","█","█","█","█","█","█","▒"};
    vector<string> m = {"▒","█"," ","█","█","█","█"," ","█"," ","█"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","▒"};
    vector<string> n = {"▒","█"," "," "," "," "," "," ","█"," ","█","█","█","█","█","█","█","█"," ","█","█","█","█","█","█"," ","█","▒"};
    vector<string> o = {"▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","▒","E","▒","▒"};
    vector<vector<string> > maze; maze.push_back(a); maze.push_back(b); maze.push_back(c); maze.push_back(d); maze.push_back(e);
    maze.push_back(f); maze.push_back(g); maze.push_back(h); maze.push_back(i); maze.push_back(j); maze.push_back(k);
    maze.push_back(l); maze.push_back(m); maze.push_back(n); maze.push_back(o);
    cout << "The Maze" << endl;
    
    solveMaze solve(maze);
    solve.prnt();
    solve.aPath();

    return 0;
}
