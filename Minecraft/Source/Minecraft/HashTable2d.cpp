// Fill out your copyright notice in the Description page of Project Settings.


#include "HashTable2d.h"

int HashTable2d::getHashKey(int x, int y)
{
  return abs(fmodf(sin(x * 12.9898f + y * 78.233), 1)) * size;
}

HashTable2d::HashTable2d(int s)
{
  size = s;
  table.resize(size);
}

HashTable2d::~HashTable2d()
{
  clear();
}

void HashTable2d::insert(void* data, int x, int y)
{

  auto key = getHashKey(x,y);
  auto node = new HT2DNode({ x, y, data });
  table[key].push_back(node);
}

void* HashTable2d::getNodeAt(int x, int y)
{
  auto key = getHashKey(x, y);
  for (auto node : table[key]) {
    if (node->x == x && node->y == y) {
      return node->data;
    }
  }
  return nullptr;
}

void HashTable2d::eraseAt(int x, int y)
{
  auto key = getHashKey(x, y);
  for (auto node : table[key]) {
    if (node->x == x && node->y == y) {
      table[key].remove(node);
      return;
    }
  }
}

void HashTable2d::clear()
{
  for (list<HT2DNode*>& l : table) {
    for (HT2DNode* node : l) {
      delete node;
    }
  }
}
