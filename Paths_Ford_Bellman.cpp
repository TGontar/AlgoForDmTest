//#include "iostream"
//#include "vector"
//#include "queue"
//#include "algorithm"
//
//#define mx 100000000
//
//using std::vector;
//using std::cin;
//using std::cout;
//using std::string;
//using std::queue;
//using std::reverse;
//using std::pair;
//using std::min;
//using std::max;
//
//vector<int> bellman_ford_cycles(vector<vector<int>> &graph, int v, int start) {
//    vector<int> dists(v, mx);
//    vector<int> prev(v, -1);
//    dists[start] = 0;
//
//    for (int i = 0; i < v - 1; i++) {
//        int check = 0;
//        for (auto j: graph) {
//            if (dists[j[0]] + j[2] < dists[j[1]]) {
//                dists[j[1]] = dists[j[0]] + j[2];
//                prev[j[1]] = j[0];
//                check += 1;
//            }
//        }
//        if (check == 0) {
//            break;
//        }
//    }
//
//    return dists;
//}
//
//int main() {
//    int v, e, start;
//    cin >> v;
//    cin >> e;
//    cin >> start;
//
//    //create list of edges
//    vector<vector<int>> edges;
//
//    for (int i = 0; i < e; i++) {
//        int from, to, wight;
//        cin >> from;
//        cin >> to;
//        cin >> wight;
//        edges.push_back({from - 1, to - 1, wight});
//    }
//
//    vector<int> ans = bellman_ford_cycles(edges, v, start - 1);
//
//    for (auto i : ans) {
//        cout << i << " ";
//    }
//
//    return 0;
//}