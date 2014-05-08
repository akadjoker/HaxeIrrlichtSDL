#include <hxcpp.h>

#ifndef INCLUDED_com_irrlicht_Device
#include <com/irrlicht/Device.h>
#endif
#ifndef INCLUDED_com_irrlicht_IColor
#include <com/irrlicht/IColor.h>
#endif
#ifndef INCLUDED_com_irrlicht_Irr
#include <com/irrlicht/Irr.h>
#endif
#ifndef INCLUDED_com_irrlicht_ReferenceCounted
#include <com/irrlicht/ReferenceCounted.h>
#endif
#ifndef INCLUDED_com_irrlicht_VideoDriver
#include <com/irrlicht/VideoDriver.h>
#endif
namespace com{
namespace irrlicht{

Void VideoDriver_obj::__construct(::com::irrlicht::Device device)
{
HX_STACK_FRAME("com.irrlicht.VideoDriver","new",0x40e4957d,"com.irrlicht.VideoDriver.new","com/irrlicht/VideoDriver.hx",11,0x3853e873)
HX_STACK_THIS(this)
HX_STACK_ARG(device,"device")
{
	HX_STACK_LINE(12)
	Dynamic _g = ::com::irrlicht::Irr_obj::irr_device_getDriver(device->handle);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(12)
	this->handle = _g;
}
;
	return null();
}

//VideoDriver_obj::~VideoDriver_obj() { }

Dynamic VideoDriver_obj::__CreateEmpty() { return  new VideoDriver_obj; }
hx::ObjectPtr< VideoDriver_obj > VideoDriver_obj::__new(::com::irrlicht::Device device)
{  hx::ObjectPtr< VideoDriver_obj > result = new VideoDriver_obj();
	result->__construct(device);
	return result;}

Dynamic VideoDriver_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VideoDriver_obj > result = new VideoDriver_obj();
	result->__construct(inArgs[0]);
	return result;}

Void VideoDriver_obj::beginScene( bool backBuffer,bool zBuffer,::com::irrlicht::IColor color){
{
		HX_STACK_FRAME("com.irrlicht.VideoDriver","beginScene",0x2c93b2e6,"com.irrlicht.VideoDriver.beginScene","com/irrlicht/VideoDriver.hx",17,0x3853e873)
		HX_STACK_THIS(this)
		HX_STACK_ARG(backBuffer,"backBuffer")
		HX_STACK_ARG(zBuffer,"zBuffer")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(17)
		::com::irrlicht::Irr_obj::irr_driver_beginScene(this->handle,backBuffer,zBuffer,color->a,color->r,color->g,color->b);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VideoDriver_obj,beginScene,(void))

Void VideoDriver_obj::endScene( ){
{
		HX_STACK_FRAME("com.irrlicht.VideoDriver","endScene",0x12adfd34,"com.irrlicht.VideoDriver.endScene","com/irrlicht/VideoDriver.hx",22,0x3853e873)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		::com::irrlicht::Irr_obj::irr_driver_endScene(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VideoDriver_obj,endScene,(void))

int VideoDriver_obj::getFPS( ){
	HX_STACK_FRAME("com.irrlicht.VideoDriver","getFPS",0x66c06ff6,"com.irrlicht.VideoDriver.getFPS","com/irrlicht/VideoDriver.hx",26,0x3853e873)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return ::com::irrlicht::Irr_obj::irr_driver_getfps(this->handle);
}


HX_DEFINE_DYNAMIC_FUNC0(VideoDriver_obj,getFPS,return )


VideoDriver_obj::VideoDriver_obj()
{
}

Dynamic VideoDriver_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getFPS") ) { return getFPS_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endScene") ) { return endScene_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beginScene") ) { return beginScene_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VideoDriver_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void VideoDriver_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("beginScene"),
	HX_CSTRING("endScene"),
	HX_CSTRING("getFPS"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VideoDriver_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VideoDriver_obj::__mClass,"__mClass");
};

#endif

Class VideoDriver_obj::__mClass;

void VideoDriver_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.irrlicht.VideoDriver"), hx::TCanCast< VideoDriver_obj> ,sStaticFields,sMemberFields,
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

void VideoDriver_obj::__boot()
{
}

} // end namespace com
} // end namespace irrlicht
