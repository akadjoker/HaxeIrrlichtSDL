#include <hxcpp.h>

#ifndef INCLUDED_com_sdl_Render
#include <com/sdl/Render.h>
#endif
#ifndef INCLUDED_com_sdl_SDLRect
#include <com/sdl/SDLRect.h>
#endif
#ifndef INCLUDED_com_sdl_SDL_Point
#include <com/sdl/SDL_Point.h>
#endif
#ifndef INCLUDED_com_sdl_Sdl
#include <com/sdl/Sdl.h>
#endif
#ifndef INCLUDED_com_sdl_TTFFont
#include <com/sdl/TTFFont.h>
#endif
#ifndef INCLUDED_com_sdl_Texture
#include <com/sdl/Texture.h>
#endif
#ifndef INCLUDED_com_sdl_Window
#include <com/sdl/Window.h>
#endif
namespace com{
namespace sdl{

Void Render_obj::__construct(::com::sdl::Window window,int flags)
{
HX_STACK_FRAME("com.sdl.Render","new",0xd87a17c8,"com.sdl.Render.new","com/sdl/Render.hx",12,0x4dfbc3e6)
HX_STACK_THIS(this)
HX_STACK_ARG(window,"window")
HX_STACK_ARG(flags,"flags")
{
	HX_STACK_LINE(13)
	Dynamic _g = ::com::sdl::Sdl_obj::hx_CreateRenderer(window->handle,flags);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(13)
	this->handle = _g;
}
;
	return null();
}

//Render_obj::~Render_obj() { }

Dynamic Render_obj::__CreateEmpty() { return  new Render_obj; }
hx::ObjectPtr< Render_obj > Render_obj::__new(::com::sdl::Window window,int flags)
{  hx::ObjectPtr< Render_obj > result = new Render_obj();
	result->__construct(window,flags);
	return result;}

Dynamic Render_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Render_obj > result = new Render_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Render_obj::Dispose( ){
{
		HX_STACK_FRAME("com.sdl.Render","Dispose",0xc09fc3e7,"com.sdl.Render.Dispose","com/sdl/Render.hx",17,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		::com::sdl::Sdl_obj::hx_DestroyRenderer(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,Dispose,(void))

Void Render_obj::SetDrawColor( int r,int g,int b,int a){
{
		HX_STACK_FRAME("com.sdl.Render","SetDrawColor",0xb7633e75,"com.sdl.Render.SetDrawColor","com/sdl/Render.hx",22,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(22)
		::com::sdl::Sdl_obj::hx_SetRenderDrawColor(this->handle,r,g,b,a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Render_obj,SetDrawColor,(void))

Void Render_obj::Clear( ){
{
		HX_STACK_FRAME("com.sdl.Render","Clear",0xbf5dd2d5,"com.sdl.Render.Clear","com/sdl/Render.hx",26,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		::com::sdl::Sdl_obj::hx_RenderClear(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,Clear,(void))

Void Render_obj::Present( ){
{
		HX_STACK_FRAME("com.sdl.Render","Present",0x3f2f7e43,"com.sdl.Render.Present","com/sdl/Render.hx",30,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		::com::sdl::Sdl_obj::hx_RenderPresent(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,Present,(void))

Void Render_obj::FillRect( ::com::sdl::SDLRect rect){
{
		HX_STACK_FRAME("com.sdl.Render","FillRect",0x1040e0ff,"com.sdl.Render.FillRect","com/sdl/Render.hx",35,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(35)
		::com::sdl::Sdl_obj::hx_RenderFillRect(this->handle,rect->x,rect->y,rect->w,rect->h);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Render_obj,FillRect,(void))

Void Render_obj::FillRectangle( int x,int y,int w,int h){
{
		HX_STACK_FRAME("com.sdl.Render","FillRectangle",0x10766674,"com.sdl.Render.FillRectangle","com/sdl/Render.hx",39,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(39)
		::com::sdl::Sdl_obj::hx_RenderFillRect(this->handle,x,y,w,h);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Render_obj,FillRectangle,(void))

Void Render_obj::DrawRectangle( int x,int y,int w,int h){
{
		HX_STACK_FRAME("com.sdl.Render","DrawRectangle",0x8e54d0d3,"com.sdl.Render.DrawRectangle","com/sdl/Render.hx",43,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(43)
		::com::sdl::Sdl_obj::hx_RenderDrawRect(this->handle,x,y,w,h);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Render_obj,DrawRectangle,(void))

Void Render_obj::DrawRect( ::com::sdl::SDLRect rect){
{
		HX_STACK_FRAME("com.sdl.Render","DrawRect",0x03989300,"com.sdl.Render.DrawRect","com/sdl/Render.hx",47,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(47)
		::com::sdl::Sdl_obj::hx_RenderDrawRect(this->handle,rect->x,rect->y,rect->w,rect->h);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Render_obj,DrawRect,(void))

Void Render_obj::DrawLine( int x1,int y1,int x2,int y2){
{
		HX_STACK_FRAME("com.sdl.Render","DrawLine",0xffa45dd0,"com.sdl.Render.DrawLine","com/sdl/Render.hx",51,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(51)
		::com::sdl::Sdl_obj::hx_RenderDrawLine(this->handle,x1,y1,x2,y2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Render_obj,DrawLine,(void))

Void Render_obj::RenderCopy( ::com::sdl::Texture texture,::com::sdl::SDLRect Clip,::com::sdl::SDLRect Rect){
{
		HX_STACK_FRAME("com.sdl.Render","RenderCopy",0x283eafe3,"com.sdl.Render.RenderCopy","com/sdl/Render.hx",55,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(Clip,"Clip")
		HX_STACK_ARG(Rect,"Rect")
		HX_STACK_LINE(56)
		if (((Rect == null()))){
			HX_STACK_LINE(58)
			::com::sdl::SDLRect _g = ::com::sdl::SDLRect_obj::__new((int)0,(int)0,texture->width,texture->height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			Rect = _g;
		}
		HX_STACK_LINE(60)
		if (((Clip == null()))){
			HX_STACK_LINE(62)
			::com::sdl::SDLRect _g1 = ::com::sdl::SDLRect_obj::__new((int)0,(int)0,texture->width,texture->height);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(62)
			Clip = _g1;
		}
		HX_STACK_LINE(66)
		::com::sdl::Sdl_obj::hx_RenderCopy(this->handle,texture->handle,Clip->x,Clip->y,Clip->w,Clip->h,Rect->x,Rect->y,Rect->w,Rect->h);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Render_obj,RenderCopy,(void))

Void Render_obj::RenderCopyEx( ::com::sdl::Texture texture,::com::sdl::SDLRect Clip,::com::sdl::SDLRect Rect,::com::sdl::SDL_Point Center,Float angle,int flags){
{
		HX_STACK_FRAME("com.sdl.Render","RenderCopyEx",0xb934eb36,"com.sdl.Render.RenderCopyEx","com/sdl/Render.hx",71,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(Clip,"Clip")
		HX_STACK_ARG(Rect,"Rect")
		HX_STACK_ARG(Center,"Center")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(flags,"flags")
		HX_STACK_LINE(72)
		if (((Rect == null()))){
			HX_STACK_LINE(74)
			::com::sdl::SDLRect _g = ::com::sdl::SDLRect_obj::__new((int)0,(int)0,texture->width,texture->height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			Rect = _g;
		}
		HX_STACK_LINE(76)
		if (((Clip == null()))){
			HX_STACK_LINE(78)
			::com::sdl::SDLRect _g1 = ::com::sdl::SDLRect_obj::__new((int)0,(int)0,texture->width,texture->height);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(78)
			Clip = _g1;
		}
		HX_STACK_LINE(81)
		if (((Center == null()))){
			HX_STACK_LINE(83)
			::com::sdl::SDL_Point _g2 = ::com::sdl::SDL_Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(83)
			Center = _g2;
		}
		HX_STACK_LINE(86)
		::com::sdl::Sdl_obj::hx_RenderCopyEx(this->handle,texture->handle,Clip->x,Clip->y,Clip->w,Clip->h,Rect->x,Rect->y,Rect->w,Rect->h,Center->x,Center->y,angle,flags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Render_obj,RenderCopyEx,(void))

Void Render_obj::TextSolid( ::com::sdl::TTFFont font,::String text,int x,int y){
{
		HX_STACK_FRAME("com.sdl.Render","TextSolid",0x8cd3e986,"com.sdl.Render.TextSolid","com/sdl/Render.hx",91,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(font,"font")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(91)
		::com::sdl::Sdl_obj::hx_RenderText_Solid(this->handle,font->handle,text,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Render_obj,TextSolid,(void))

Void Render_obj::TextSolidColor( ::com::sdl::TTFFont font,::String text,int x,int y,int r,int g,int b){
{
		HX_STACK_FRAME("com.sdl.Render","TextSolidColor",0xaebbb1fd,"com.sdl.Render.TextSolidColor","com/sdl/Render.hx",95,0x4dfbc3e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(font,"font")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(95)
		::com::sdl::Sdl_obj::hx_RenderText_Solid_Color(this->handle,font->handle,text,x,y,r,g,b);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Render_obj,TextSolidColor,(void))


Render_obj::Render_obj()
{
}

void Render_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Render);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void Render_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic Render_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Clear") ) { return Clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Dispose") ) { return Dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"Present") ) { return Present_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FillRect") ) { return FillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"DrawRect") ) { return DrawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"DrawLine") ) { return DrawLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TextSolid") ) { return TextSolid_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RenderCopy") ) { return RenderCopy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SetDrawColor") ) { return SetDrawColor_dyn(); }
		if (HX_FIELD_EQ(inName,"RenderCopyEx") ) { return RenderCopyEx_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FillRectangle") ) { return FillRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"DrawRectangle") ) { return DrawRectangle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TextSolidColor") ) { return TextSolidColor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Render_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Render_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Render_obj,handle),HX_CSTRING("handle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("handle"),
	HX_CSTRING("Dispose"),
	HX_CSTRING("SetDrawColor"),
	HX_CSTRING("Clear"),
	HX_CSTRING("Present"),
	HX_CSTRING("FillRect"),
	HX_CSTRING("FillRectangle"),
	HX_CSTRING("DrawRectangle"),
	HX_CSTRING("DrawRect"),
	HX_CSTRING("DrawLine"),
	HX_CSTRING("RenderCopy"),
	HX_CSTRING("RenderCopyEx"),
	HX_CSTRING("TextSolid"),
	HX_CSTRING("TextSolidColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Render_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Render_obj::__mClass,"__mClass");
};

#endif

Class Render_obj::__mClass;

void Render_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.sdl.Render"), hx::TCanCast< Render_obj> ,sStaticFields,sMemberFields,
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

void Render_obj::__boot()
{
}

} // end namespace com
} // end namespace sdl
