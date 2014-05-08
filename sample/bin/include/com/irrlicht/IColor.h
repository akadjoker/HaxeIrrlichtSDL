#ifndef INCLUDED_com_irrlicht_IColor
#define INCLUDED_com_irrlicht_IColor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,irrlicht,IColor)
namespace com{
namespace irrlicht{


class HXCPP_CLASS_ATTRIBUTES  IColor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IColor_obj OBJ_;
		IColor_obj();
		Void __construct(hx::Null< int >  __o_r,hx::Null< int >  __o_g,hx::Null< int >  __o_b,hx::Null< int >  __o_a);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< IColor_obj > __new(hx::Null< int >  __o_r,hx::Null< int >  __o_g,hx::Null< int >  __o_b,hx::Null< int >  __o_a);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IColor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("IColor"); }

		int r;
		int g;
		int b;
		int a;
};

} // end namespace com
} // end namespace irrlicht

#endif /* INCLUDED_com_irrlicht_IColor */ 
