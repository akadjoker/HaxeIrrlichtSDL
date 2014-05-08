package com.irrlicht;

import com.irrlicht.math.IVector3f;
/**
 * ...
 * @author djoker soft
 */
class ICamera extends INode
{

	public function new(smgr:SceneManager,position:IVector3f,lookAt:IVector3f,parent:INode,id:Int=-1) 
	{
		super();
		if (parent != null)
		{
		 handle=  Irr.irr_scene_addCameraSceneNode(smgr.handle, parent.handle,
	     	position.x, position.y, position.z,
			lookAt.x, lookAt.y, lookAt.z,
			id);
		} else
		{
		handle=	Irr.irr_scene_addCameraSceneNode(smgr.handle, null,
			 	position.x, position.y, position.z,
				lookAt.x, lookAt.y, lookAt.z,
			-1);
		}
	}
	
}