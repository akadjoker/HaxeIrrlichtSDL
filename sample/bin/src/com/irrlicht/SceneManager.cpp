#include <hxcpp.h>

#ifndef INCLUDED_com_irrlicht_Device
#include <com/irrlicht/Device.h>
#endif
#ifndef INCLUDED_com_irrlicht_Irr
#include <com/irrlicht/Irr.h>
#endif
#ifndef INCLUDED_com_irrlicht_ReferenceCounted
#include <com/irrlicht/ReferenceCounted.h>
#endif
#ifndef INCLUDED_com_irrlicht_SceneManager
#include <com/irrlicht/SceneManager.h>
#endif
namespace com{
namespace irrlicht{

Void SceneManager_obj::__construct(::com::irrlicht::Device device)
{
HX_STACK_FRAME("com.irrlicht.SceneManager","new",0xa692beeb,"com.irrlicht.SceneManager.new","com/irrlicht/SceneManager.hx",12,0x41772b05)
HX_STACK_THIS(this)
HX_STACK_ARG(device,"device")
{
	HX_STACK_LINE(13)
	Dynamic _g = ::com::irrlicht::Irr_obj::irr_device_getSceneManager(device->handle);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(13)
	this->handle = _g;
}
;
	return null();
}

//SceneManager_obj::~SceneManager_obj() { }

Dynamic SceneManager_obj::__CreateEmpty() { return  new SceneManager_obj; }
hx::ObjectPtr< SceneManager_obj > SceneManager_obj::__new(::com::irrlicht::Device device)
{  hx::ObjectPtr< SceneManager_obj > result = new SceneManager_obj();
	result->__construct(device);
	return result;}

Dynamic SceneManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SceneManager_obj > result = new SceneManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SceneManager_obj::drawAll( ){
{
		HX_STACK_FRAME("com.irrlicht.SceneManager","drawAll",0xffca6f88,"com.irrlicht.SceneManager.drawAll","com/irrlicht/SceneManager.hx",17,0x41772b05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		::com::irrlicht::Irr_obj::irr_scene_drawAll(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SceneManager_obj,drawAll,(void))


SceneManager_obj::SceneManager_obj()
{
}

Dynamic SceneManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"drawAll") ) { return drawAll_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SceneManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SceneManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("drawAll"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SceneManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SceneManager_obj::__mClass,"__mClass");
};

#endif

Class SceneManager_obj::__mClass;

void SceneManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.irrlicht.SceneManager"), hx::TCanCast< SceneManager_obj> ,sStaticFields,sMemberFields,
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

void SceneManager_obj::__boot()
{
}

} // end namespace com
} // end namespace irrlicht
