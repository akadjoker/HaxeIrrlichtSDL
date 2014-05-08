package com.irrlicht;

/**
 * ...
 * @author djoker
 */
class Device extends ReferenceCounted
{

	public function new(width:Int,height:Int,bpp:Int,fullscreen:Bool,stencilbuffer:Bool,vsync:Bool):Void
	{
		handle=Irr.irr_createDevice(width,height,bpp,fullscreen,stencilbuffer,vsync);
	}
	public function setWindowCaption(caption:String):Void
	{
		Irr.irr_device_setWindowCaption(handle, caption);
	}
	public function run():Bool
	{
		return (Irr.irr_device_run(handle) > 0);
	}	
	public function getDriver():VideoDriver
	{
		return new VideoDriver(this);
	}	
	public function getSceneManager():SceneManager
	{
		return new SceneManager(this);
	}	
	
	public function drop():Void
	{
		Irr.irr_device_drop(handle);
		
	}	
}