#include "vector.c"
#include <iostream>
#include "graphmatr.h"
using namespace std;


int main()
{

    Graph<int> graph(5);


    graph.addEdge(0, 1, (void*)3);
    graph.addEdge(0, 2, (void*)4);
    graph.addEdge(2, 4, (void*)5);

    if (!graph.EdgeExists(0, 1)) {
        cout << "edgnoexist";
        return 0;
    }



    graph.setEdgeMark(0, 1, (void*)5);
    if (graph.getEdgeWeight(0, 1) != (int*)5) {
        cout << "weighterror";
        return 0;
    }





    graph.setVertexMark(0, 7);
    if (graph.getVertexMark(0) != (int*)7) {
        cout << "weighterror";
        return 0;
    }


    graph.removeEdge(0, 1);
    if (graph.EdgeExists(0, 1)) {
        cout << "edgeexusts error";
        return 0;
    }
    const Vector* verticesBefore = graph.getVertices();
   
    
    graph.removeVertex(0);
    const Vector* verticesAfter = graph.getVertices();
   
    if (vector_size(verticesBefore) == vector_size(verticesAfter)) {
        cout << "Vertex was not removed.";
        return 0;
    }
    


    return 0;
};


