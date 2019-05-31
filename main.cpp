#include<iostream>
#include "graph.hpp"
using namespace std;
int main()
{
	mits::BitMapMatrix b(3);
	b.setBit(2,2);
	if(b.getBit(2,2)==1)
		cout<<"Working";	
	else
		cout<<"Else";
	 cout<<"Testing Graph object creation";
   int adjcMat[][6]={\
                        {0, 1, 0, 0, 1, 1},\
                        {1, 0, 0, 1, 1, 0},\
                        {0, 0, 0, 1, 0, 0},\
                        {0, 1, 1, 0, 1, 1},\
                        {1, 1, 0, 1, 0, 0},\
                        {1, 0, 0, 1, 0, 0}\
                    };
    int* pAdjcMat=(int*)adjcMat;
    std::vector<std::string> vnames(6), enames(8);
    char vn[][6]={"v1", "v2", "v3", "v4", "v5", "v6"};
    char en[][8]={"e1", "e2", "e3", "e4", "e5", "e6", "e7", "e8"};
   
    vnames.assign(vn,vn+6);
    enames.assign(en, en+8);
   
    mits::Graph g(6, 8, vnames, enames, pAdjcMat, mits::ADJACENCY_MATRIX);
    g.printAdjcMat();
    cout<<endl;
mits::Graph::Graph(const int nv, const int ne, std::vector<std::string> &vn, std::vector<std::string> &en, const int* adjcMat, RepType t){
    // 1. check if nv > MAX_VERTICES
    // 2. set the class members
    // 3. use the adjcMat to set the bit map
}
 void mits::Graph::printAdjcMat()
int mits::Graph::getVertexCount()
int mits::Graph::getEdgeCount()
}
