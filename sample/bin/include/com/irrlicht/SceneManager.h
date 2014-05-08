#ifndef INCLUDED_com_irrlicht_SceneManager
#define INCLUDED_com_irrlicht_SceneManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/irrlicht/ReferenceCounted.h>
HX_DECLARE_CLASS2(com,irrlicht,Device)
HX_DECLARE_CLASS2(com,irrlicht,ReferenceCounted)
HX_DECLARE_CLASS2(com,irrlicht,SceneManager)
namespace com{
namespace irrlicht{


class HXCPP_CLASS_ATTRIBUTES  SceneManager_obj : public ::com::irrlicht::ReferenceCounted_obj{
	public:
		typedef ::com::irrlicht::ReferenceCounted_obj super;
		typedef SceneManager_obj OBJ_;
		SceneManager_obj();
		Void __construct(::com::irrlicht::Device device);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SceneManager_obj > __new(::com::irrlicht::Device device);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SceneManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SceneManager"); }

		virtual Void drawAll( );
		Dynamic drawAll_dyn();

};

} // end namespace com
} // end namespace irrlicht

#endif /* INCLUDED_com_irrlicht_SceneManager */ 
