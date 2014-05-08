package com.irrlicht ;

/**
 * ...
 * @author djoker
 */
class VideoDriver extends ReferenceCounted
{

	public function new(device:Device) 
	{
	  handle= Irr.irr_device_getDriver(device.handle);	
	}
	
	public function beginScene(backBuffer:Bool,zBuffer:Bool,color:IColor):Void
	{
		Irr.irr_driver_beginScene(handle,backBuffer,zBuffer,color.a,color.r,color.g,color.b);
	}
	
	public function endScene():Void
	{
		Irr.irr_driver_endScene(handle);
	}
		public function getFPS():Int
	{
		return Irr.irr_driver_getfps(handle);
	}
}