#include "Cell.h"
#include "Body/Body.h"

using namespace std;
using namespace ssvs::Utils;

namespace ssvsc
{
	Cell::Cell(int mLeft, int mRight, int mTop, int mBottom) : left{mLeft}, right{mRight}, top{mTop}, bottom{mBottom} { }

	void Cell::add(Body* mBody) { for(auto group : mBody->getGroups()) bodies[group].push_back(mBody); }
	void Cell::del(Body* mBody) { for(auto group : mBody->getGroups()) eraseFromVector(bodies[group], mBody); }
	bool Cell::hasGroup(const string& mGroup) { return bodies.count(mGroup) > 0; }

	// Properties
	vector<Body*>* Cell::getQuery(const string& mGroup) { return &bodies[mGroup]; }
	int Cell::getLeft() 	{ return left; }
	int Cell::getRight() 	{ return right; }
	int Cell::getTop() 		{ return top; }
	int Cell::getBottom() 	{ return bottom; }
}
