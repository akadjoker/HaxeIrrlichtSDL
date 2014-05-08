#include <hxcpp.h>

#ifndef INCLUDED_com_irrlicht_ReferenceCounted
#include <com/irrlicht/ReferenceCounted.h>
#endif
namespace com{
namespace irrlicht{

Void ReferenceCounted_obj::__construct()
{
	return null();
}

//ReferenceCounted_obj::~ReferenceCounted_obj() { }

Dynamic ReferenceCounted_obj::__CreateEmpty() { return  new ReferenceCounted_obj; }
hx::ObjectPtr< ReferenceCounted_obj > ReferenceCounted_obj::__new()
{  hx::ObjectPtr< ReferenceCounted_obj > result = new ReferenceCounted_obj();
	result->__construct();
	return result;}

Dynamic ReferenceCounted_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ReferenceCounted_obj > result = new ReferenceCounted_obj();
	result->__construct();
	return result;}


ReferenceCounted_obj::ReferenceCounted_obj()
{
}

void ReferenceCounted_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ReferenceCounted);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void ReferenceCounted_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic ReferenceCounted_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ReferenceCounted_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ReferenceCounted_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ReferenceCounted_obj,handle),HX_CSTRING("handle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("handle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ReferenceCounted_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ReferenceCounted_obj::__mClass,"__mClass");
};

#endif

Class ReferenceCounted_obj::__mClass;

void ReferenceCounted_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.irrlicht.ReferenceCounted"), hx::TCanCast< ReferenceCounted_obj> ,sStaticFields,sMemberFields,
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

void ReferenceCounted_obj::__boot()
{
}

} // end namespace com
} // end namespace irrlicht
