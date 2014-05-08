package com.irrlicht;

#if cpp
import cpp.Lib;
#elseif neko
import neko.Lib;
#end



class Irr {
	
	

	public static var irr_createDevice = Lib.load ("sdlhaxe", "irr_createDevice", -1);
	public static var irr_device_setWindowCaption = Lib.load ("sdlhaxe", "irr_device_setWindowCaption", 2);
	public static var irr_device_run = Lib.load ("sdlhaxe", "irr_device_run", 1);
	public static var irr_device_drop = Lib.load ("sdlhaxe", "irr_device_drop", 1);
	public static var irr_device_getDriver = Lib.load ("sdlhaxe", "irr_device_getDriver", 1);
	public static var irr_device_getSceneManager = Lib.load ("sdlhaxe", "irr_device_getSceneManager", 1);
	
	
	public static var irr_driver_beginScene = Lib.load ("sdlhaxe", "irr_driver_beginScene", -1);
    public static var irr_driver_endScene = Lib.load ("sdlhaxe", "irr_driver_endScene", 1);
	public static var irr_driver_getfps = Lib.load ("sdlhaxe", "irr_driver_getfps", 1);
	
	public static var irr_scene_drawAll = Lib.load ("sdlhaxe", "irr_scene_drawAll", 1);
	public static var irr_scene_addCameraSceneNode = Lib.load ("sdlhaxe", "irr_scene_addCameraSceneNode", -1);
	public static var irr_scene_addCubeSceneNode = Lib.load ("sdlhaxe", "irr_scene_addCubeSceneNode", 4);
	
	
	
	public static var 	irr_node_setPosition = Lib.load ("sdlhaxe", "irr_node_setPosition", 4);
	public static var 	irr_node_setRotation = Lib.load ("sdlhaxe", "irr_node_setRotation", 4);
	public static var 	irr_node_setScale = Lib.load ("sdlhaxe", "irr_node_setScale", 4);
	


		
	
}