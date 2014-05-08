#include "Utils.h"




///*******************************************************************************************************
///*******************************************************************************************************
//DRIVER
///*******************************************************************************************************
///*******************************************************************************************************
 value irr_driver_beginScene (value* arg, int nargs) 
{
  IVideoDriver* driver;
 if (AbstractToObject(arg[0],driver))
 {
   bool backBuffer= val_int(arg[1]);
   bool zBuffer= val_int(arg[2]);
   
   
   
  driver->beginScene(backBuffer,zBuffer,SColor(ValueToInt(arg[3]),ValueToInt(arg[4]),ValueToInt(arg[5]),ValueToInt(arg[6])));
  // driver->beginScene(backBuffer,zBuffer,SColor(255,0,0,45));
   
  return alloc_int( 1);
 }
  return alloc_int( 0); 
}
DEFINE_PRIM_MULT (irr_driver_beginScene);


 value irr_driver_endScene (value inHandle) 
{
 IVideoDriver* driver;
 if (AbstractToObject(inHandle,driver))
 {
 driver->endScene();
 return alloc_int( 1);
 }
  return alloc_int( 0);
}
DEFINE_PRIM (irr_driver_endScene, 1);


 value irr_driver_getfps (value inHandle) 
{
  IVideoDriver* driver;
 if (AbstractToObject(inHandle,driver))
 {
 return alloc_int( driver->getFPS());
}
 }
 
DEFINE_PRIM (irr_driver_getfps, 1);