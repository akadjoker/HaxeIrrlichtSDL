package com.irrlicht;
import com.irrlicht.math.IVector3f;
/**
 * ...
 * @author djoker soft
 */
class INode extends ReferenceCounted 
{

	public function new() 
	{
	handle = null;	
	}
	public function setPosition(v:IVector3f):Void
	{
		if (handle == null) return;
		Irr.irr_node_setPosition( handle, v.x, v.y, v.z);
	}
	public function setRotation(v:IVector3f):Void
	{
		if (handle == null) return;
		Irr.irr_node_setRotation( handle, v.x, v.y, v.z);
	}
		public function setScale(v:IVector3f):Void
	{
		if (handle == null) return;
		Irr.irr_node_setScale( handle, v.x, v.y, v.z);
	}
		
}