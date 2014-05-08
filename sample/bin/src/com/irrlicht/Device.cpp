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
#ifndef INCLUDED_com_irrlicht_VideoDriver
#include <com/irrlicht/VideoDriver.h>
#endif
namespace com{
namespace irrlicht{

Void Device_obj::__construct(int width,int height,int bpp,bool fullscreen,bool stencilbuffer,bool vsync)
{
HX_STACK_FRAME("com.irrlicht.Device","new",0x9aa9dd80,"com.irrlicht.Device.new","com/irrlicht/Device.hx",11,0x20b9de10)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(bpp,"bpp")
HX_STACK_ARG(fullscreen,"fullscreen")
HX_STACK_ARG(stencilbuffer,"stencilbuffer")
HX_STACK_ARG(vsync,"vsync")
{
	HX_STACK_LINE(12)
	Dynamic _g = ::com::irrlicht::Irr_obj::irr_createDevice(width,height,bpp,fullscreen,stencilbuffer,vsync);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(12)
	this->handle = _g;
}
;
	return null();
}

//Device_obj::~Device_obj() { }

Dynamic Device_obj::__CreateEmpty() { return  new Device_obj; }
hx::ObjectPtr< Device_obj > Device_obj::__new(int width,int height,int bpp,bool fullscreen,bool stencilbuffer,bool vsync)
{  hx::ObjectPtr< Device_obj > result = new Device_obj();
	result->__construct(width,height,bpp,fullscreen,stencilbuffer,vsync);
	return result;}

Dynamic Device_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Device_obj > result = new Device_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Device_obj::setWindowCaption( ::String caption){
{
		HX_STACK_FRAME("com.irrlicht.Device","setWindowCaption",0x6d937ab4,"com.irrlicht.Device.setWindowCaption","com/irrlicht/Device.hx",16,0x20b9de10)
		HX_STACK_THIS(this)
		HX_STACK_ARG(caption,"caption")
		HX_STACK_LINE(16)
		::com::irrlicht::Irr_obj::irr_device_setWindowCaption(this->handle,caption);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Device_obj,setWindowCaption,(void))

bool Device_obj::run( ){
	HX_STACK_FRAME("com.irrlicht.Device","run",0x9aacf46b,"com.irrlicht.Device.run","com/irrlicht/Device.hx",19,0x20b9de10)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	int _g = ::com::irrlicht::Irr_obj::irr_device_run(this->handle);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	return (_g > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(Device_obj,run,return )

::com::irrlicht::VideoDriver Device_obj::getDriver( ){
	HX_STACK_FRAME("com.irrlicht.Device","getDriver",0x2a02ae7e,"com.irrlicht.Device.getDriver","com/irrlicht/Device.hx",24,0x20b9de10)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return ::com::irrlicht::VideoDriver_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Device_obj,getDriver,return )

::com::irrlicht::SceneManager Device_obj::getSceneManager( ){
	HX_STACK_FRAME("com.irrlicht.Device","getSceneManager",0xb6c77557,"com.irrlicht.Device.getSceneManager","com/irrlicht/Device.hx",28,0x20b9de10)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	return ::com::irrlicht::SceneManager_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Device_obj,getSceneManager,return )

Void Device_obj::drop( ){
{
		HX_STACK_FRAME("com.irrlicht.Device","drop",0xb365a70f,"com.irrlicht.Device.drop","com/irrlicht/Device.hx",33,0x20b9de10)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::com::irrlicht::Irr_obj::irr_device_drop(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Device_obj,drop,(void))


Device_obj::Device_obj()
{
}

Dynamic Device_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDriver") ) { return getDriver_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSceneManager") ) { return getSceneManager_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setWindowCaption") ) { return setWindowCaption_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Device_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Device_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("setWindowCaption"),
	HX_CSTRING("run"),
	HX_CSTRING("getDriver"),
	HX_CSTRING("getSceneManager"),
	HX_CSTRING("drop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Device_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Device_obj::__mClass,"__mClass");
};

#endif

Class Device_obj::__mClass;

void Device_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.irrlicht.Device"), hx::TCanCast< Device_obj> ,sStaticFields,sMemberFields,
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

void Device_obj::__boot()
{
}

} // end namespace com
} // end namespace irrlicht
