#ifndef INCLUDED_com_irrlicht_VideoDriver
#define INCLUDED_com_irrlicht_VideoDriver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/irrlicht/ReferenceCounted.h>
HX_DECLARE_CLASS2(com,irrlicht,Device)
HX_DECLARE_CLASS2(com,irrlicht,IColor)
HX_DECLARE_CLASS2(com,irrlicht,ReferenceCounted)
HX_DECLARE_CLASS2(com,irrlicht,VideoDriver)
namespace com{
namespace irrlicht{


class HXCPP_CLASS_ATTRIBUTES  VideoDriver_obj : public ::com::irrlicht::ReferenceCounted_obj{
	public:
		typedef ::com::irrlicht::ReferenceCounted_obj super;
		typedef VideoDriver_obj OBJ_;
		VideoDriver_obj();
		Void __construct(::com::irrlicht::Device device);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VideoDriver_obj > __new(::com::irrlicht::Device device);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VideoDriver_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("VideoDriver"); }

		virtual Void beginScene( bool backBuffer,bool zBuffer,::com::irrlicht::IColor color);
		Dynamic beginScene_dyn();

		virtual Void endScene( );
		Dynamic endScene_dyn();

		virtual int getFPS( );
		Dynamic getFPS_dyn();

};

} // end namespace com
} // end namespace irrlicht

#endif /* INCLUDED_com_irrlicht_VideoDriver */ 
