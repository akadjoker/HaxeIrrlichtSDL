#include "Utils.h"


 value irr_createDevice (value* arg, int nargs) 
{
 enum { aWidth, aHeight, aBpp, aFull, aStencil, aVsync };

   int w = val_number(arg[aWidth]);
   int h = val_number(arg[aHeight]);
   int bpp = val_int(arg[aBpp]);
   int fullscreen= val_bool(arg[aFull]);
   int stencilbuffer= val_bool(arg[aStencil]);
   int vsync= val_bool(arg[aVsync]);
   
irr::IrrlichtDevice* device =createDevice( video::EDT_OGLES1, dimension2d<u32>(w,h), bpp,fullscreen,stencilbuffer,vsync, 0);

    video::IVideoDriver* driver = 0;
	scene::ISceneManager* smgr = 0;
	
	 driver = device->getVideoDriver();
	 smgr = device->getSceneManager();
	 
	 scene::ICameraSceneNode* camera =smgr->addCameraSceneNodeFPS(0,100.0f,1.2f);
	 camera->setPosition(core::vector3df(0,2,-10));
	  camera->setFarValue(10000.0f); // this increase a shadow visible range.
	
//	scene::IMeshSceneNode* node=smgr->addCubeSceneNode();
	 
	 
return ObjectToAbstract(device);
}
DEFINE_PRIM_MULT (irr_createDevice);

 void irr_device_setWindowCaption (value inHandle,value caption) 
{
 irr::IrrlichtDevice* device=0;
 if (AbstractToObject(inHandle,device))
 {
  char* args =(char*) ValueToString(caption);
  core::stringw tmp(args);
  device->setWindowCaption(tmp.c_str());
 }
}
DEFINE_PRIM (irr_device_setWindowCaption, 2);

value irr_device_run (value inHandle) 
{


 irr::IrrlichtDevice* device;
 if (AbstractToObject(inHandle,device))
 {
  return alloc_int( device->run());
 }
return alloc_int( 0);

}
DEFINE_PRIM (irr_device_run, 1);

value irr_device_drop (value inHandle) 
{
 irr::IrrlichtDevice* device;
 if (AbstractToObject(inHandle,device))
 {
   device->drop();
   device=0;
    return alloc_int( 0);
 }
 return alloc_int( 1);
}
DEFINE_PRIM (irr_device_drop, 1);

value irr_device_getDriver (value inHandle) 
{
 irr::IrrlichtDevice* device;
 if (AbstractToObject(inHandle,device))
 {
 	IVideoDriver* driver=device->getVideoDriver();
    return ObjectToAbstract(driver);
 }
   return alloc_null();
}
DEFINE_PRIM (irr_device_getDriver, 1);

value irr_device_getSceneManager (value inHandle) 
{
 irr::IrrlichtDevice* device;
 if (AbstractToObject(inHandle,device))
 {
 	irr::scene::ISceneManager* smgr=device->getSceneManager();
    return ObjectToAbstract(smgr);
 }
   return alloc_null();
}
DEFINE_PRIM (irr_device_getSceneManager, 1);

