#include "Utils.h"

value irr_node_setPosition(value inHandle,value vx,value vy,value vz) 
{
irr::scene::ISceneNode* node;
 if (AbstractToObject(inHandle,node))
 {
 	float x=ValueToFloat(vx);
	float y=ValueToFloat(vy);
	float z=ValueToFloat(vz);
	core::vector3df position=core::vector3df(x,y,z);
 	node->setPosition(position);
	return alloc_int( 1);
 }
   return  alloc_int( 0);
}
value irr_node_setRotation(value inHandle,value vx,value vy,value vz) 
{
irr::scene::ISceneNode* node;
 if (AbstractToObject(inHandle,node))
 {
 	float x=ValueToFloat(vx);
	float y=ValueToFloat(vy);
	float z=ValueToFloat(vz);
	core::vector3df position=core::vector3df(x,y,z);
 	node->setRotation(position);
	return alloc_int( 1);
 }
   return  alloc_int( 0);
}
value irr_node_setScale(value inHandle,value vx,value vy,value vz) 
{
irr::scene::ISceneNode* node;
 if (AbstractToObject(inHandle,node))
 {
 	float x=ValueToFloat(vx);
	float y=ValueToFloat(vy);
	float z=ValueToFloat(vz);
	core::vector3df position=core::vector3df(x,y,z);
 	node->setScale(position);
	return alloc_int( 1);
 }
   return  alloc_int( 0);
}
DEFINE_PRIM (irr_node_setScale, 4);
DEFINE_PRIM (irr_node_setPosition, 4);
DEFINE_PRIM (irr_node_setRotation, 4);