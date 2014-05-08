#ifndef INCLUDED_com_irrlicht_ReferenceCounted
#define INCLUDED_com_irrlicht_ReferenceCounted

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,irrlicht,ReferenceCounted)
namespace com{
namespace irrlicht{


class HXCPP_CLASS_ATTRIBUTES  ReferenceCounted_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ReferenceCounted_obj OBJ_;
		ReferenceCounted_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ReferenceCounted_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ReferenceCounted_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ReferenceCounted"); }

		Dynamic handle;
};

} // end namespace com
} // end namespace irrlicht

#endif /* INCLUDED_com_irrlicht_ReferenceCounted */ 
