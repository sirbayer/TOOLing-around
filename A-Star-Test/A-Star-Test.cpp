#include "stdafx.h"



int main()
{
    return 0;
}

class mapStarNode {
private:
	int cost, g, f;
	mapStarNode *cameFrom;
public:
	// Constructor - zero-sets everything, unless otherwise instructed
	mapStarNode(int sCost = 0, int sG = 0, int sF = 0, mapStarNode *sCF = NULL) {
		setCost(sCost);
		setG(sG);
		setF(sF);
		setCF(sCF);
	}
	// SETTERS & GETTERS
	void setCost(int newCost) { cost = newCost; }
	int getCost() { return cost; }
	void setG(int newG) { g = newG; }
	int getG() { return g; }
	void setF(int newF) { f = newF; }
	int getF() { return f; }
	void setCF(mapStarNode *newCF) { cameFrom = newCF; }
	mapStarNode* getCF() { return cameFrom; }
};

class mapStar {
private:
	mapStarNode **map;
	struct compF {bool operator()(mapStarNode& a, mapStarNode& b) { return a.getF() < b.getF(); }};
	std::priority_queue < mapStarNode, std::vector<mapStarNode>, compF> frontier;

public:
	// Initializer. Just creates appropriate-sized 2d array of nodes.
	mapStar(int x, int y) {
		map = new mapStarNode*[x];
		for (int column = 0; column < x; column++) {
			map[column] = new mapStarNode[y];
		}
	}

	// Need to be able to graphically represent maps for analysis.
	void printMap() {

	}
};