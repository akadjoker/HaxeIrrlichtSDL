package com.irrlicht;

/**
 * ...
 * @author djoker soft
 */
class IColor
{
public var r:Int;
public var g:Int;
public var b:Int;
public var a:Int;

	public function new(r:Int = 255,g:Int=255,b:Int=255,a:Int=255 ) 
	{
		this.a = a;
		this.r = r;
		this.g = g;
		this.b=b;
	}
	
}