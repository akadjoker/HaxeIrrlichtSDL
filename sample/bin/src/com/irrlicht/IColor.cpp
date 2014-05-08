#include <hxcpp.h>

#ifndef INCLUDED_com_irrlicht_IColor
#include <com/irrlicht/IColor.h>
#endif
namespace com{
namespace irrlicht{

Void IColor_obj::__construct(hx::Null< int >  __o_r,hx::Null< int >  __o_g,hx::Null< int >  __o_b,hx::Null< int >  __o_a)
{
HX_STACK_FRAME("com.irrlicht.IColor","new",0x8ceb6724,"com.irrlicht.IColor.new","com/irrlicht/IColor.hx",15,0xa82054ec)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_r,"r")
HX_STACK_ARG(__o_g,"g")
HX_STACK_ARG(__o_b,"b")
HX_STACK_ARG(__o_a,"a")
int r = __o_r.Default(255);
int g = __o_g.Default(255);
int b = __o_b.Default(255);
int a = __o_a.Default(255);
{
	HX_STACK_LINE(16)
	this->a = a;
	HX_STACK_LINE(17)
	this->r = r;
	HX_STACK_LINE(18)
	this->g = g;
	HX_STACK_LINE(19)
	this->b = b;
}
;
	return null();
}

//IColor_obj::~IColor_obj() { }

Dynamic IColor_obj::__CreateEmpty() { return  new IColor_obj; }
hx::ObjectPtr< IColor_obj > IColor_obj::__new(hx::Null< int >  __o_r,hx::Null< int >  __o_g,hx::Null< int >  __o_b,hx::Null< int >  __o_a)
{  hx::ObjectPtr< IColor_obj > result = new IColor_obj();
	result->__construct(__o_r,__o_g,__o_b,__o_a);
	return result;}

Dynamic IColor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IColor_obj > result = new IColor_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


IColor_obj::IColor_obj()
{
}

Dynamic IColor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IColor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IColor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("r"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IColor_obj,r),HX_CSTRING("r")},
	{hx::fsInt,(int)offsetof(IColor_obj,g),HX_CSTRING("g")},
	{hx::fsInt,(int)offsetof(IColor_obj,b),HX_CSTRING("b")},
	{hx::fsInt,(int)offsetof(IColor_obj,a),HX_CSTRING("a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("r"),
	HX_CSTRING("g"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IColor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IColor_obj::__mClass,"__mClass");
};

#endif

Class IColor_obj::__mClass;

void IColor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.irrlicht.IColor"), hx::TCanCast< IColor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void IColor_obj::__boot()
{
}

} // end namespace com
} // end namespace irrlicht
