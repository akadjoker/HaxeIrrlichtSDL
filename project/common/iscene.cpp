#include "Utils.h"

value irr_scene_drawAll(value inHandle) 
{
irr::scene::ISceneManager* smgr;
 if (AbstractToObject(inHandle,smgr))
 {
 	smgr->drawAll();
	return alloc_int( 1);
 }
   return  alloc_int( 0);
}

value irr_scene_addCameraSceneNode(value* arg, int nargs) 
{
  irr::scene::ISceneManager* smgr;
 if (AbstractToObject(arg[0],smgr))
 {
 
    ISceneNode* parent = 0;
    if (AbstractToObject(arg[1],parent))
	{
	 // parent = ObjectToAbstract(arg[1]);
	}
	
	float x=ValueToFloat(arg[2]);
	float y=ValueToFloat(arg[3]);
	float z=ValueToFloat(arg[4]);
	core::vector3df position=core::vector3df(x,y,z);
	
    float lx=ValueToFloat(arg[5]);
	float ly=ValueToFloat(arg[6]);
	float lz=ValueToFloat(arg[7]);
	core::vector3df lookat=core::vector3df(lx,ly,lz);
	
	
	
 	 scene::ICameraSceneNode* camera=smgr->addCameraSceneNode(parent,position,lookat,ValueToInt(arg[8]));

	 return ObjectToAbstract(camera);
 }
 
   return  alloc_int( 0);
}


value irr_scene_addCubeSceneNode(value vsmgr,value vparent,value vsize,value vid) 
{
  irr::scene::ISceneManager* smgr;
 if (AbstractToObject(vsmgr,smgr))
 {
 
    ISceneNode* parent = 0;
    if (AbstractToObject(vparent,parent))
	{

	}
	 scene::IMeshSceneNode* node=smgr->addCubeSceneNode(ValueToFloat(vsize),parent,ValueToInt(vid));
	 return ObjectToAbstract(node);
 }
   return  alloc_int( 0);
}




DEFINE_PRIM_MULT (irr_scene_addCameraSceneNode);
DEFINE_PRIM (irr_scene_addCubeSceneNode, 4);
DEFINE_PRIM (irr_scene_drawAll, 1);