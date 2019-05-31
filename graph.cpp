#include "graph.hpp"
#include<stdlib.h>
#include<math.h>

mits::BitMapMatrix::BitMapMatrix(int nv){
	nvertex=nv;
	vbitmap=(char*)malloc(ceil((nvertex*nvertex)/8));
}

bool mits::BitMapMatrix::getBit(int i, int j){
	int bitpos=(i*nvertex)+j;
	int byteloc=ceil(bitpos/8);
	int bitoffset=bitpos%8;
	int mask=pow(2,8-bitoffset);
	return (this->vbitmap[byteloc]&=mask);
}

void mits::BitMapMatrix::setBit(int i, int j){
	int bitpos=(i*nvertex)+j;
	int byteloc=ceil(bitpos/8);
	int bitoffset=bitpos%8;
	int mask=pow(2,8-bitoffset);
	this->vbitmap[byteloc]|=mask;
	
}

void mits::BitMapMatrix::resetBit(int i, int j){

}


void mits::BitMapMatrix::deleteEntry(int v){

}

