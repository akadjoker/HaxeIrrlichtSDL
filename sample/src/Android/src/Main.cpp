#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_sdl_Render
#include <sdl/Render.h>
#endif
#ifndef INCLUDED_sdl_SDLRect
#include <sdl/SDLRect.h>
#endif
#ifndef INCLUDED_sdl_SDL_Point
#include <sdl/SDL_Point.h>
#endif
#ifndef INCLUDED_sdl_Sdl
#include <sdl/Sdl.h>
#endif
#ifndef INCLUDED_sdl_TTFFont
#include <sdl/TTFFont.h>
#endif
#ifndef INCLUDED_sdl_Texture
#include <sdl/Texture.h>
#endif
#ifndef INCLUDED_sdl_Window
#include <sdl/Window.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",24,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	::sdl::Sdl_obj::sdl_main(this->SDL_Main_dyn());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::SDL_Main( ){
{
		HX_STACK_FRAME("Main","SDL_Main",0x27771e72,"Main.SDL_Main","Main.hx",30,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		::haxe::Log_obj::trace(HX_CSTRING("sdl main "),hx::SourceInfo(HX_CSTRING("Main.hx"),31,HX_CSTRING("Main"),HX_CSTRING("SDL_Main")));
		HX_STACK_LINE(33)
		::sdl::Sdl_obj::sdl_startIrrlciht();
		HX_STACK_LINE(34)
		::sdl::Sdl_obj::sdl_renderIrrlciht();
		HX_STACK_LINE(35)
		return null();
		HX_STACK_LINE(38)
		::sdl::Window _g = ::sdl::Window_obj::__new(HX_CSTRING("sdl 4 haxe by Luis Santos AKA DJOKER"),(int)0,(int)0,(int)640,(int)480,(int)5);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		this->window = _g;
		HX_STACK_LINE(42)
		return null();
		HX_STACK_LINE(43)
		::sdl::Render _g1 = ::sdl::Render_obj::__new(this->window,(int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		this->render = _g1;
		HX_STACK_LINE(44)
		::sdl::Texture tex = ::sdl::Texture_obj::__new(this->render);		HX_STACK_VAR(tex,"tex");
		HX_STACK_LINE(45)
		tex->loadFromFileColorKey(HX_CSTRING("Data/sdl.png"),(int)0,(int)255,(int)0);
		HX_STACK_LINE(47)
		::sdl::Texture sprtex = ::sdl::Texture_obj::__new(this->render);		HX_STACK_VAR(sprtex,"sprtex");
		HX_STACK_LINE(48)
		sprtex->loadFromFile(HX_CSTRING("Data/zazaka.png"));
		HX_STACK_LINE(51)
		::sdl::TTFFont font = ::sdl::TTFFont_obj::__new(HX_CSTRING("Data/04B_03.ttf"),(int)23);		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(54)
		bool quit = false;		HX_STACK_VAR(quit,"quit");
		HX_STACK_LINE(56)
		int fps_current = (int)0;		HX_STACK_VAR(fps_current,"fps_current");
		HX_STACK_LINE(57)
		int fps_frames = (int)0;		HX_STACK_VAR(fps_frames,"fps_frames");
		HX_STACK_LINE(58)
		int fps_lasttime = ::sdl::Sdl_obj::GetTicks();		HX_STACK_VAR(fps_lasttime,"fps_lasttime");
		HX_STACK_LINE(59)
		int lastfps;		HX_STACK_VAR(lastfps,"lastfps");
		HX_STACK_LINE(60)
		bool focus = false;		HX_STACK_VAR(focus,"focus");
		HX_STACK_LINE(61)
		int mousex = (int)0;		HX_STACK_VAR(mousex,"mousex");
		HX_STACK_LINE(62)
		int mousey = (int)0;		HX_STACK_VAR(mousey,"mousey");
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			if ((!((!(quit))))){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(65)
			lastfps = (int)100;
			HX_STACK_LINE(66)
			int event = (int)0;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(67)
			while((true)){
				HX_STACK_LINE(67)
				int _g2 = this->window->PoolEvent();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(67)
				int _g3 = event = _g2;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(67)
				if ((!(((_g3 != (int)0))))){
					HX_STACK_LINE(67)
					break;
				}
				HX_STACK_LINE(73)
				if (((event == (int)512))){
					HX_STACK_LINE(77)
					int _g4 = this->window->WindowEventType();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(77)
					switch( (int)(_g4)){
						case (int)12: {
							HX_STACK_LINE(81)
							focus = true;
						}
						;break;
						case (int)13: {
							HX_STACK_LINE(86)
							focus = false;
						}
						;break;
					}
				}
				HX_STACK_LINE(96)
				if (((event == (int)768))){
				}
				HX_STACK_LINE(102)
				if (((event == (int)769))){
				}
				HX_STACK_LINE(110)
				if (((event == (int)1792))){
				}
				else{
					HX_STACK_LINE(114)
					if (((event == (int)1793))){
					}
					else{
						HX_STACK_LINE(118)
						if (((event == (int)1794))){
							HX_STACK_LINE(120)
							Float _g4 = ::sdl::Sdl_obj::fingerX();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(120)
							Float _g5 = _g4;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(120)
							int _g6 = ::Std_obj::_int(_g5);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(120)
							mousex = _g6;
							HX_STACK_LINE(121)
							Float _g7 = ::sdl::Sdl_obj::fingerY();		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(121)
							Float _g8 = _g7;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(121)
							int _g9 = ::Std_obj::_int(_g8);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(121)
							mousey = _g9;
						}
						else{
							HX_STACK_LINE(127)
							if (((event == (int)1025))){
								HX_STACK_LINE(129)
								::haxe::Log_obj::trace(HX_CSTRING("mouse down"),hx::SourceInfo(HX_CSTRING("Main.hx"),129,HX_CSTRING("Main"),HX_CSTRING("SDL_Main")));
							}
							else{
								HX_STACK_LINE(131)
								if (((event == (int)1026))){
								}
								else{
									HX_STACK_LINE(135)
									if (((event == (int)1024))){
										HX_STACK_LINE(137)
										int _g10 = ::sdl::Sdl_obj::mouseX();		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(137)
										int _g11 = ::Std_obj::_int(_g10);		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(137)
										mousex = _g11;
										HX_STACK_LINE(138)
										int _g12 = ::sdl::Sdl_obj::mouseY();		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(138)
										int _g13 = ::Std_obj::_int(_g12);		HX_STACK_VAR(_g13,"_g13");
										HX_STACK_LINE(138)
										mousey = _g13;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(146)
				if (((event == (int)256))){
					HX_STACK_LINE(150)
					::haxe::Log_obj::trace(HX_CSTRING("sdk quit"),hx::SourceInfo(HX_CSTRING("Main.hx"),150,HX_CSTRING("Main"),HX_CSTRING("SDL_Main")));
				}
			}
			HX_STACK_LINE(157)
			this->render->SetDrawColor((int)0,(int)0,(int)45,(int)255);
			HX_STACK_LINE(158)
			this->render->Clear();
			HX_STACK_LINE(162)
			::sdl::SDLRect _g14 = ::sdl::SDLRect_obj::__new((int)100,(int)0,tex->width,tex->height);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(162)
			this->render->RenderCopy(tex,_g14,null());
			HX_STACK_LINE(164)
			::sdl::SDLRect _g15 = ::sdl::SDLRect_obj::__new((int)100,(int)200,(int)64,(int)64);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(164)
			int _g16 = ::Std_obj::_int((Float(sprtex->width) / Float((int)2)));		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(164)
			int _g17 = ::Std_obj::_int((Float(sprtex->height) / Float((int)2)));		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(164)
			::sdl::SDL_Point _g18 = ::sdl::SDL_Point_obj::__new(_g16,_g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(164)
			int _g19 = ::sdl::Sdl_obj::GetTicks();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(164)
			Float _g20 = (Float(_g19) / Float((int)1000));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(164)
			Float _g21 = ::Math_obj::sin(_g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(164)
			Float _g22 = (_g21 * (int)360);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(164)
			this->render->RenderCopyEx(sprtex,_g15,null(),_g18,_g22,(int)3);
			HX_STACK_LINE(166)
			this->render->SetDrawColor((int)255,(int)255,(int)45,(int)255);
			HX_STACK_LINE(168)
			::sdl::SDLRect _g23 = ::sdl::SDLRect_obj::__new(mousex,mousey,(int)25,(int)25);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(168)
			this->render->FillRect(_g23);
			HX_STACK_LINE(169)
			this->render->DrawRectangle((int)5,(int)5,(int)50,(int)50);
			HX_STACK_LINE(171)
			this->render->DrawLine((int)10,(int)10,(int)200,(int)200);
			HX_STACK_LINE(173)
			this->render->TextSolidColor(font,(HX_CSTRING("FPS:") + fps_current),(int)20,(int)20,(int)255,(int)0,(int)255);
			HX_STACK_LINE(175)
			this->render->Present();
			HX_STACK_LINE(178)
			(fps_frames)++;
			HX_STACK_LINE(179)
			int _g24 = ::sdl::Sdl_obj::GetTicks();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(179)
			Float _g25 = (_g24 - 1000.);		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(179)
			if (((fps_lasttime < _g25))){
				HX_STACK_LINE(181)
				int _g26 = ::sdl::Sdl_obj::GetTicks();		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(181)
				fps_lasttime = _g26;
				HX_STACK_LINE(182)
				fps_current = fps_frames;
				HX_STACK_LINE(183)
				fps_frames = (int)0;
			}
		}
		HX_STACK_LINE(189)
		this->render->Dispose();
		HX_STACK_LINE(190)
		this->window->Dispose();
		HX_STACK_LINE(191)
		::sdl::Sdl_obj::Quit();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,SDL_Main,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",196,0x087e5c05)
		HX_STACK_LINE(197)
		::haxe::Log_obj::trace(HX_CSTRING("haxe begin main"),hx::SourceInfo(HX_CSTRING("Main.hx"),197,HX_CSTRING("Main"),HX_CSTRING("main")));
		HX_STACK_LINE(198)
		::Main_obj::__new();
		HX_STACK_LINE(199)
		::haxe::Log_obj::trace(HX_CSTRING("haxe ends main"),hx::SourceInfo(HX_CSTRING("Main.hx"),199,HX_CSTRING("Main"),HX_CSTRING("main")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(render,"render");
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(render,"render");
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SDL_Main") ) { return SDL_Main_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::sdl::Window >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::sdl::Render >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("window"));
	outFields->push(HX_CSTRING("render"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sdl::Window*/ ,(int)offsetof(Main_obj,window),HX_CSTRING("window")},
	{hx::fsObject /*::sdl::Render*/ ,(int)offsetof(Main_obj,render),HX_CSTRING("render")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("window"),
	HX_CSTRING("render"),
	HX_CSTRING("SDL_Main"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

