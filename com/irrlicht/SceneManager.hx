package com.irrlicht;

import com.irrlicht.math.IVector3f;
/**
 * ...
 * @author djoker
 */
class SceneManager extends ReferenceCounted 
{

	public function new(device:Device) 
	{
	  handle= Irr.irr_device_getSceneManager(device.handle);	
	}
	public function drawAll():Void
	{
	  Irr.irr_scene_drawAll(handle);	
	}
	public function addCameraSceneNode(position:IVector3f,lookAt:IVector3f,parent:INode=null,id:Int=-1):ICamera 
	{
	  return new  ICamera(this, position, lookAt, parent,id);
	  
	}
	public function addCubeSceneNode(size:Float,parent:INode=null,id:Int=-1):IMeshSceneNode 
	{
	  var cube:IMeshSceneNode = new IMeshSceneNode();
	  cube.handle = Irr.irr_scene_addCubeSceneNode(this.handle, parent, size, id);
	  return cube;
	}		
}