#ifndef INCLUDED_com_irrlicht_Device
#define INCLUDED_com_irrlicht_Device

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/irrlicht/ReferenceCounted.h>
HX_DECLARE_CLASS2(com,irrlicht,Device)
HX_DECLARE_CLASS2(com,irrlicht,ReferenceCounted)
HX_DECLARE_CLASS2(com,irrlicht,SceneManager)
HX_DECLARE_CLASS2(com,irrlicht,VideoDriver)
namespace com{
namespace irrlicht{


class HXCPP_CLASS_ATTRIBUTES  Device_obj : public ::com::irrlicht::ReferenceCounted_obj{
	public:
		typedef ::com::irrlicht::ReferenceCounted_obj super;
		typedef Device_obj OBJ_;
		Device_obj();
		Void __construct(int width,int height,int bpp,bool fullscreen,bool stencilbuffer,bool vsync);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Device_obj > __new(int width,int height,int bpp,bool fullscreen,bool stencilbuffer,bool vsync);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Device_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Device"); }

		virtual Void setWindowCaption( ::String caption);
		Dynamic setWindowCaption_dyn();

		virtual bool run( );
		Dynamic run_dyn();

		virtual ::com::irrlicht::VideoDriver getDriver( );
		Dynamic getDriver_dyn();

		virtual ::com::irrlicht::SceneManager getSceneManager( );
		Dynamic getSceneManager_dyn();

		virtual Void drop( );
		Dynamic drop_dyn();

};

} // end namespace com
} // end namespace irrlicht

#endif /* INCLUDED_com_irrlicht_Device */ 
