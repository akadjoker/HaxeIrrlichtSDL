#include <hxcpp.h>

#ifndef INCLUDED_com_sdl_Render
#include <com/sdl/Render.h>
#endif
#ifndef INCLUDED_com_sdl_SDLRect
#include <com/sdl/SDLRect.h>
#endif
#ifndef INCLUDED_com_sdl_Sdl
#include <com/sdl/Sdl.h>
#endif
#ifndef INCLUDED_com_sdl_Texture
#include <com/sdl/Texture.h>
#endif
namespace com{
namespace sdl{

Void Texture_obj::__construct(::com::sdl::Render render)
{
HX_STACK_FRAME("com.sdl.Texture","new",0x7ec73acd,"com.sdl.Texture.new","com/sdl/Texture.hx",18,0xce18e845)
HX_STACK_THIS(this)
HX_STACK_ARG(render,"render")
{
	HX_STACK_LINE(19)
	this->handle = null();
	HX_STACK_LINE(20)
	this->width = (int)0;
	HX_STACK_LINE(21)
	this->height = (int)0;
	HX_STACK_LINE(22)
	this->render = render;
}
;
	return null();
}

//Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(::com::sdl::Render render)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(render);
	return result;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Texture_obj::loadFromFile( ::String filename){
{
		HX_STACK_FRAME("com.sdl.Texture","loadFromFile",0xab74e93f,"com.sdl.Texture.loadFromFile","com/sdl/Texture.hx",25,0xce18e845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_LINE(26)
		Dynamic _g = ::com::sdl::Sdl_obj::hx_LoadTexture(this->render->handle,filename);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		this->handle = _g;
		HX_STACK_LINE(27)
		int _g1 = this->TextureWidth();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		this->width = _g1;
		HX_STACK_LINE(28)
		int _g2 = this->TextureHeight();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(28)
		this->height = _g2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,loadFromFile,(void))

Void Texture_obj::loadFromFileColorKey( ::String filename,int r,int g,int b){
{
		HX_STACK_FRAME("com.sdl.Texture","loadFromFileColorKey",0x450a0c5b,"com.sdl.Texture.loadFromFileColorKey","com/sdl/Texture.hx",31,0xce18e845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(32)
		Dynamic _g = ::com::sdl::Sdl_obj::hx_LoadTextureColorKey(this->render->handle,filename,r,g,b);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		this->handle = _g;
		HX_STACK_LINE(33)
		int _g1 = this->TextureWidth();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		this->width = _g1;
		HX_STACK_LINE(34)
		int _g2 = this->TextureHeight();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(34)
		this->height = _g2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Texture_obj,loadFromFileColorKey,(void))

Void Texture_obj::RenderCopy( ::com::sdl::SDLRect Clip,::com::sdl::SDLRect Rect){
{
		HX_STACK_FRAME("com.sdl.Texture","RenderCopy",0x9928277e,"com.sdl.Texture.RenderCopy","com/sdl/Texture.hx",38,0xce18e845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Clip,"Clip")
		HX_STACK_ARG(Rect,"Rect")
		HX_STACK_LINE(38)
		::com::sdl::Sdl_obj::hx_RenderCopy(this->render->handle,this->handle,Clip->x,Clip->y,Clip->w,Clip->h,Rect->x,Rect->y,Rect->w,Rect->h);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,RenderCopy,(void))

int Texture_obj::TextureWidth( ){
	HX_STACK_FRAME("com.sdl.Texture","TextureWidth",0xdb990f3e,"com.sdl.Texture.TextureWidth","com/sdl/Texture.hx",43,0xce18e845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	return ::com::sdl::Sdl_obj::hx_TextureWidth(this->handle);
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,TextureWidth,return )

int Texture_obj::TextureHeight( ){
	HX_STACK_FRAME("com.sdl.Texture","TextureHeight",0x00a3bfaf,"com.sdl.Texture.TextureHeight","com/sdl/Texture.hx",47,0xce18e845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	return ::com::sdl::Sdl_obj::hx_TextureHeight(this->handle);
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,TextureHeight,return )


Texture_obj::Texture_obj()
{
}

void Texture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(render,"render");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void Texture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(render,"render");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

Dynamic Texture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RenderCopy") ) { return RenderCopy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { return loadFromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"TextureWidth") ) { return TextureWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TextureHeight") ) { return TextureHeight_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"loadFromFileColorKey") ) { return loadFromFileColorKey_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::com::sdl::Render >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("handle"));
	outFields->push(HX_CSTRING("render"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Texture_obj,handle),HX_CSTRING("handle")},
	{hx::fsObject /*::com::sdl::Render*/ ,(int)offsetof(Texture_obj,render),HX_CSTRING("render")},
	{hx::fsInt,(int)offsetof(Texture_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(Texture_obj,height),HX_CSTRING("height")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("handle"),
	HX_CSTRING("render"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("loadFromFile"),
	HX_CSTRING("loadFromFileColorKey"),
	HX_CSTRING("RenderCopy"),
	HX_CSTRING("TextureWidth"),
	HX_CSTRING("TextureHeight"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

#endif

Class Texture_obj::__mClass;

void Texture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.sdl.Texture"), hx::TCanCast< Texture_obj> ,sStaticFields,sMemberFields,
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

void Texture_obj::__boot()
{
}

} // end namespace com
} // end namespace sdl
