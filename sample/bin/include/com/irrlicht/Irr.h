#ifndef INCLUDED_com_irrlicht_Irr
#define INCLUDED_com_irrlicht_Irr

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,irrlicht,Irr)
namespace com{
namespace irrlicht{


class HXCPP_CLASS_ATTRIBUTES  Irr_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Irr_obj OBJ_;
		Irr_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Irr_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Irr_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Irr"); }

		static Dynamic irr_createDevice;
		static Dynamic &irr_createDevice_dyn() { return irr_createDevice;}
		static Dynamic irr_device_setWindowCaption;
		static Dynamic &irr_device_setWindowCaption_dyn() { return irr_device_setWindowCaption;}
		static Dynamic irr_device_run;
		static Dynamic &irr_device_run_dyn() { return irr_device_run;}
		static Dynamic irr_device_drop;
		static Dynamic &irr_device_drop_dyn() { return irr_device_drop;}
		static Dynamic irr_device_getDriver;
		static Dynamic &irr_device_getDriver_dyn() { return irr_device_getDriver;}
		static Dynamic irr_device_getSceneManager;
		static Dynamic &irr_device_getSceneManager_dyn() { return irr_device_getSceneManager;}
		static Dynamic irr_driver_beginScene;
		static Dynamic &irr_driver_beginScene_dyn() { return irr_driver_beginScene;}
		static Dynamic irr_driver_endScene;
		static Dynamic &irr_driver_endScene_dyn() { return irr_driver_endScene;}
		static Dynamic irr_driver_getfps;
		static Dynamic &irr_driver_getfps_dyn() { return irr_driver_getfps;}
		static Dynamic irr_scene_drawAll;
		static Dynamic &irr_scene_drawAll_dyn() { return irr_scene_drawAll;}
};

} // end namespace com
} // end namespace irrlicht

#endif /* INCLUDED_com_irrlicht_Irr */ 
