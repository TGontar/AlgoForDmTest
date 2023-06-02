cmake_minimum_required(VERSION 3.23)
project(Test_Discrete_Maths)

set(CMAKE_CXX_STANDARD 14)

add_executable(Test_Discrete_Maths DFS_Find_Comps.cpp DFS_Find_Strong_Comps.cpp MST_Kruskal.cpp Paths_Floyd_Warshall.cpp Paths_Ford_Bellman.cpp Tree_Diametr.cpp Paths_Dijkstra.cpp)
