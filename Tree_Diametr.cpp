//#include "iostream"
//#include "vector"
//#include "queue"
//#include "algorithm"
//
//#define mx 1000000
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
//vector<vector<int>> &floyd(vector<vector<int>> &graph, int v) {
//    for (int mid = 0; mid < v; mid++) {
//        for (int from = 0; from < v; from++) {
//            for (int to = 0; to < v; to++) {
//                graph[from][to] = min(graph[from][to], graph[from][mid] + graph[mid][to]);
//            }
//        }
//
//    }
//
//    return graph;
//}
//
//
//int main() {
//    int v, e;
//    cin >> v;
//    cin >> e;
//
//    //create adjacency matrix from input list of edges
//    vector<vector<int>> matrix(v, vector<int>(v, mx));
//
//    for (int i = 0; i < e; i++) {
//        int from, to;
//        cin >> from;
//        cin >> to;
//        matrix[from - 1][to - 1] = 1;
//        matrix[to - 1][from - 1] = 1;
//    }
//
//    for (int i = 0; i < v; i++) {
//        matrix[i][i] = 0;
//    }
//
//    matrix = floyd(matrix, v);
//
////    for (int i = 0; i < v; i++) {
////        matrix[i][i] = mx;
////    }
//
//    int diametr = 0;
//    for (auto &i : matrix) {
//        int excentricity = *max_element(i.begin(), i.end());
//        if (excentricity > diametr) {
//            diametr = excentricity;
//        }
//    }
//
//    int radius = mx;
//    for (auto &i : matrix) {
//        int excentricity = *max_element(i.begin(), i.end());
//        if (excentricity < radius) {
//            radius = excentricity;
//        }
//    }
//
//    vector<int> centers;
//    for (int i = 0; i < matrix.size(); i++) {
//        int excentricity = *max_element(matrix[i].begin(), matrix[i].end());
//        if (excentricity == radius) {
//            centers.push_back(i + 1);
//        }
//    }
//
//    cout << "Diametr: " << diametr << "\n";
//    cout << "Radius: " << radius << "\n";
//    cout << "Centers: ";
//    for (auto i : centers) {
//        cout << i << " ";
//    }
//
//
//    return 0;
//}