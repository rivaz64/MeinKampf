// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <vector>
#include <list>
using std::vector;
using std::list;
struct HT2DNode {
	int x;
	int y;
	void* data;
	HT2DNode(int _x, int _y, void* d) :x(_x), y(_y), data(d) {};
};
/**
 * 
 */
class MINECRAFT_API HashTable2d
{
	vector<list<HT2DNode*>> table;
	int size;
public:
	int getHashKey(int x, int y);
	HashTable2d(int s);
	~HashTable2d();
	void insert(void* data,int x,int y);
	void* getNodeAt(int x, int y);
	void eraseAt(int x, int y);
	void clear();
};
