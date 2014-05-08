#include <hxcpp.h>

#ifndef INCLUDED_com_irrlicht_Irr
#include <com/irrlicht/Irr.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
namespace com{
namespace irrlicht{

Void Irr_obj::__construct()
{
	return null();
}

//Irr_obj::~Irr_obj() { }

Dynamic Irr_obj::__CreateEmpty() { return  new Irr_obj; }
hx::ObjectPtr< Irr_obj > Irr_obj::__new()
{  hx::ObjectPtr< Irr_obj > result = new Irr_obj();
	result->__construct();
	return result;}

Dynamic Irr_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Irr_obj > result = new Irr_obj();
	result->__construct();
	return result;}

Dynamic Irr_obj::irr_createDevice;

Dynamic Irr_obj::irr_device_setWindowCaption;

Dynamic Irr_obj::irr_device_run;

Dynamic Irr_obj::irr_device_drop;

Dynamic Irr_obj::irr_device_getDriver;

Dynamic Irr_obj::irr_device_getSceneManager;

Dynamic Irr_obj::irr_driver_beginScene;

Dynamic Irr_obj::irr_driver_endScene;

Dynamic Irr_obj::irr_driver_getfps;

Dynamic Irr_obj::irr_scene_drawAll;


Irr_obj::Irr_obj()
{
}

Dynamic Irr_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"irr_device_run") ) { return irr_device_run; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"irr_device_drop") ) { return irr_device_drop; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"irr_createDevice") ) { return irr_createDevice; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"irr_driver_getfps") ) { return irr_driver_getfps; }
		if (HX_FIELD_EQ(inName,"irr_scene_drawAll") ) { return irr_scene_drawAll; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"irr_driver_endScene") ) { return irr_driver_endScene; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"irr_device_getDriver") ) { return irr_device_getDriver; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"irr_driver_beginScene") ) { return irr_driver_beginScene; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"irr_device_getSceneManager") ) { return irr_device_getSceneManager; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"irr_device_setWindowCaption") ) { return irr_device_setWindowCaption; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Irr_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"irr_device_run") ) { irr_device_run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"irr_device_drop") ) { irr_device_drop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"irr_createDevice") ) { irr_createDevice=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"irr_driver_getfps") ) { irr_driver_getfps=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"irr_scene_drawAll") ) { irr_scene_drawAll=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"irr_driver_endScene") ) { irr_driver_endScene=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"irr_device_getDriver") ) { irr_device_getDriver=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"irr_driver_beginScene") ) { irr_driver_beginScene=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"irr_device_getSceneManager") ) { irr_device_getSceneManager=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"irr_device_setWindowCaption") ) { irr_device_setWindowCaption=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Irr_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("irr_createDevice"),
	HX_CSTRING("irr_device_setWindowCaption"),
	HX_CSTRING("irr_device_run"),
	HX_CSTRING("irr_device_drop"),
	HX_CSTRING("irr_device_getDriver"),
	HX_CSTRING("irr_device_getSceneManager"),
	HX_CSTRING("irr_driver_beginScene"),
	HX_CSTRING("irr_driver_endScene"),
	HX_CSTRING("irr_driver_getfps"),
	HX_CSTRING("irr_scene_drawAll"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Irr_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Irr_obj::irr_createDevice,"irr_createDevice");
	HX_MARK_MEMBER_NAME(Irr_obj::irr_device_setWindowCaption,"irr_device_setWindowCaption");
	HX_MARK_MEMBER_NAME(Irr_obj::irr_device_run,"irr_device_run");
	HX_MARK_MEMBER_NAME(Irr_obj::irr_device_drop,"irr_device_drop");
	HX_MARK_MEMBER_NAME(Irr_obj::irr_device_getDriver,"irr_device_getDriver");
	HX_MARK_MEMBER_NAME(Irr_obj::irr_device_getSceneManager,"irr_device_getSceneManager");
	HX_MARK_MEMBER_NAME(Irr_obj::irr_driver_beginScene,"irr_driver_beginScene");
	HX_MARK_MEMBER_NAME(Irr_obj::irr_driver_endScene,"irr_driver_endScene");
	HX_MARK_MEMBER_NAME(Irr_obj::irr_driver_getfps,"irr_driver_getfps");
	HX_MARK_MEMBER_NAME(Irr_obj::irr_scene_drawAll,"irr_scene_drawAll");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Irr_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Irr_obj::irr_createDevice,"irr_createDevice");
	HX_VISIT_MEMBER_NAME(Irr_obj::irr_device_setWindowCaption,"irr_device_setWindowCaption");
	HX_VISIT_MEMBER_NAME(Irr_obj::irr_device_run,"irr_device_run");
	HX_VISIT_MEMBER_NAME(Irr_obj::irr_device_drop,"irr_device_drop");
	HX_VISIT_MEMBER_NAME(Irr_obj::irr_device_getDriver,"irr_device_getDriver");
	HX_VISIT_MEMBER_NAME(Irr_obj::irr_device_getSceneManager,"irr_device_getSceneManager");
	HX_VISIT_MEMBER_NAME(Irr_obj::irr_driver_beginScene,"irr_driver_beginScene");
	HX_VISIT_MEMBER_NAME(Irr_obj::irr_driver_endScene,"irr_driver_endScene");
	HX_VISIT_MEMBER_NAME(Irr_obj::irr_driver_getfps,"irr_driver_getfps");
	HX_VISIT_MEMBER_NAME(Irr_obj::irr_scene_drawAll,"irr_scene_drawAll");
};

#endif

Class Irr_obj::__mClass;

void Irr_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.irrlicht.Irr"), hx::TCanCast< Irr_obj> ,sStaticFields,sMemberFields,
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

void Irr_obj::__boot()
{
	irr_createDevice= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("irr_createDevice"),(int)-1);
	irr_device_setWindowCaption= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("irr_device_setWindowCaption"),(int)2);
	irr_device_run= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("irr_device_run"),(int)1);
	irr_device_drop= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("irr_device_drop"),(int)1);
	irr_device_getDriver= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("irr_device_getDriver"),(int)1);
	irr_device_getSceneManager= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("irr_device_getSceneManager"),(int)1);
	irr_driver_beginScene= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("irr_driver_beginScene"),(int)-1);
	irr_driver_endScene= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("irr_driver_endScene"),(int)1);
	irr_driver_getfps= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("irr_driver_getfps"),(int)1);
	irr_scene_drawAll= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("irr_scene_drawAll"),(int)1);
}

} // end namespace com
} // end namespace irrlicht
