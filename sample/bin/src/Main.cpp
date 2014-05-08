#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_irrlicht_Device
#include <com/irrlicht/Device.h>
#endif
#ifndef INCLUDED_com_irrlicht_IColor
#include <com/irrlicht/IColor.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",29,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	::com::sdl::Sdl_obj::sdl_main(this->main_irrlicht_dyn());
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

Void Main_obj::main_irrlicht( ){
{
		HX_STACK_FRAME("Main","main_irrlicht",0x3babb3fa,"Main.main_irrlicht","Main.hx",34,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		::com::irrlicht::VideoDriver driver;		HX_STACK_VAR(driver,"driver");
		HX_STACK_LINE(36)
		::com::irrlicht::Device device;		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(37)
		::com::irrlicht::SceneManager scene;		HX_STACK_VAR(scene,"scene");
		HX_STACK_LINE(39)
		::com::irrlicht::Device _g = ::com::irrlicht::Device_obj::__new((int)640,(int)480,(int)32,false,false,false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		device = _g;
		HX_STACK_LINE(40)
		::com::irrlicht::VideoDriver _g1 = device->getDriver();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		driver = _g1;
		HX_STACK_LINE(41)
		::com::irrlicht::SceneManager _g2 = device->getSceneManager();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(41)
		scene = _g2;
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			if ((!(device->run()))){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(45)
			::com::irrlicht::IColor _g3 = ::com::irrlicht::IColor_obj::__new((int)0,(int)0,(int)45,null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(45)
			driver->beginScene(true,true,_g3);
			HX_STACK_LINE(46)
			scene->drawAll();
			HX_STACK_LINE(47)
			driver->endScene();
		}
		HX_STACK_LINE(50)
		device->drop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main_irrlicht,(void))

Void Main_obj::Main_sdl_Teste( ){
{
		HX_STACK_FRAME("Main","Main_sdl_Teste",0x7f5f55be,"Main.Main_sdl_Teste","Main.hx",53,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		::com::sdl::Window _g = ::com::sdl::Window_obj::__new(HX_CSTRING("sdl 4 haxe by Luis Santos AKA DJOKER"),(int)805240832,(int)805240832,(int)640,(int)480,(int)36);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		this->window = _g;
		HX_STACK_LINE(61)
		::com::sdl::Render _g1 = ::com::sdl::Render_obj::__new(this->window,(int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		this->render = _g1;
		HX_STACK_LINE(62)
		::com::sdl::Texture tex = ::com::sdl::Texture_obj::__new(this->render);		HX_STACK_VAR(tex,"tex");
		HX_STACK_LINE(64)
		tex->loadFromFile(HX_CSTRING("Data/sdl.png"));
		HX_STACK_LINE(66)
		::com::sdl::Texture sprtex = ::com::sdl::Texture_obj::__new(this->render);		HX_STACK_VAR(sprtex,"sprtex");
		HX_STACK_LINE(67)
		sprtex->loadFromFile(HX_CSTRING("Data/zazaka.png"));
		HX_STACK_LINE(70)
		::com::sdl::TTFFont font = ::com::sdl::TTFFont_obj::__new(HX_CSTRING("Data/04B_03.ttf"),(int)23);		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(73)
		bool quit = false;		HX_STACK_VAR(quit,"quit");
		HX_STACK_LINE(75)
		int fps_current = (int)0;		HX_STACK_VAR(fps_current,"fps_current");
		HX_STACK_LINE(76)
		int fps_frames = (int)0;		HX_STACK_VAR(fps_frames,"fps_frames");
		HX_STACK_LINE(77)
		int fps_lasttime = ::com::sdl::Sdl_obj::GetTicks();		HX_STACK_VAR(fps_lasttime,"fps_lasttime");
		HX_STACK_LINE(78)
		int lastfps;		HX_STACK_VAR(lastfps,"lastfps");
		HX_STACK_LINE(79)
		bool focus = false;		HX_STACK_VAR(focus,"focus");
		HX_STACK_LINE(80)
		int mousex = (int)0;		HX_STACK_VAR(mousex,"mousex");
		HX_STACK_LINE(81)
		int mousey = (int)0;		HX_STACK_VAR(mousey,"mousey");
		HX_STACK_LINE(82)
		while((true)){
			HX_STACK_LINE(82)
			if ((!((!(quit))))){
				HX_STACK_LINE(82)
				break;
			}
			HX_STACK_LINE(84)
			lastfps = (int)100;
			HX_STACK_LINE(85)
			int event = (int)0;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(86)
			while((true)){
				HX_STACK_LINE(86)
				int _g2 = this->window->PoolEvent();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(86)
				int _g3 = event = _g2;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(86)
				if ((!(((_g3 != (int)0))))){
					HX_STACK_LINE(86)
					break;
				}
				HX_STACK_LINE(92)
				if (((event == (int)512))){
					HX_STACK_LINE(96)
					int _g4 = this->window->WindowEventType();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(96)
					switch( (int)(_g4)){
						case (int)12: {
							HX_STACK_LINE(100)
							focus = true;
						}
						;break;
						case (int)13: {
							HX_STACK_LINE(105)
							focus = false;
						}
						;break;
					}
				}
				HX_STACK_LINE(115)
				if (((event == (int)768))){
				}
				HX_STACK_LINE(121)
				if (((event == (int)769))){
				}
				HX_STACK_LINE(129)
				if (((event == (int)1792))){
				}
				else{
					HX_STACK_LINE(133)
					if (((event == (int)1793))){
					}
					else{
						HX_STACK_LINE(137)
						if (((event == (int)1794))){
							HX_STACK_LINE(139)
							Float _g4 = ::com::sdl::Sdl_obj::fingerX();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(139)
							Float _g5 = _g4;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(139)
							int _g6 = ::Std_obj::_int(_g5);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(139)
							mousex = _g6;
							HX_STACK_LINE(140)
							Float _g7 = ::com::sdl::Sdl_obj::fingerY();		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(140)
							Float _g8 = _g7;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(140)
							int _g9 = ::Std_obj::_int(_g8);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(140)
							mousey = _g9;
						}
						else{
							HX_STACK_LINE(146)
							if (((event == (int)1025))){
								HX_STACK_LINE(148)
								::haxe::Log_obj::trace(HX_CSTRING("mouse down"),hx::SourceInfo(HX_CSTRING("Main.hx"),148,HX_CSTRING("Main"),HX_CSTRING("Main_sdl_Teste")));
							}
							else{
								HX_STACK_LINE(150)
								if (((event == (int)1026))){
								}
								else{
									HX_STACK_LINE(154)
									if (((event == (int)1024))){
										HX_STACK_LINE(156)
										int _g10 = ::com::sdl::Sdl_obj::mouseX();		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(156)
										int _g11 = ::Std_obj::_int(_g10);		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(156)
										mousex = _g11;
										HX_STACK_LINE(157)
										int _g12 = ::com::sdl::Sdl_obj::mouseY();		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(157)
										int _g13 = ::Std_obj::_int(_g12);		HX_STACK_VAR(_g13,"_g13");
										HX_STACK_LINE(157)
										mousey = _g13;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(165)
				if (((event == (int)256))){
					HX_STACK_LINE(167)
					quit = true;
					HX_STACK_LINE(168)
					break;
					HX_STACK_LINE(169)
					::haxe::Log_obj::trace(HX_CSTRING("sdk quit"),hx::SourceInfo(HX_CSTRING("Main.hx"),169,HX_CSTRING("Main"),HX_CSTRING("Main_sdl_Teste")));
				}
			}
			HX_STACK_LINE(176)
			this->render->SetDrawColor((int)0,(int)0,(int)45,(int)255);
			HX_STACK_LINE(177)
			this->render->Clear();
			HX_STACK_LINE(181)
			::com::sdl::SDLRect _g14 = ::com::sdl::SDLRect_obj::__new((int)100,(int)0,tex->width,tex->height);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(181)
			this->render->RenderCopy(tex,_g14,null());
			HX_STACK_LINE(183)
			::com::sdl::SDLRect _g15 = ::com::sdl::SDLRect_obj::__new((int)100,(int)200,(int)64,(int)64);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(183)
			int _g16 = ::Std_obj::_int((Float(sprtex->width) / Float((int)2)));		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(183)
			int _g17 = ::Std_obj::_int((Float(sprtex->height) / Float((int)2)));		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(183)
			::com::sdl::SDL_Point _g18 = ::com::sdl::SDL_Point_obj::__new(_g16,_g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(183)
			int _g19 = ::com::sdl::Sdl_obj::GetTicks();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(183)
			Float _g20 = (Float(_g19) / Float((int)1000));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(183)
			Float _g21 = ::Math_obj::sin(_g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(183)
			Float _g22 = (_g21 * (int)360);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(183)
			this->render->RenderCopyEx(sprtex,_g15,null(),_g18,_g22,(int)3);
			HX_STACK_LINE(185)
			this->render->SetDrawColor((int)255,(int)255,(int)45,(int)255);
			HX_STACK_LINE(187)
			::com::sdl::SDLRect _g23 = ::com::sdl::SDLRect_obj::__new(mousex,mousey,(int)25,(int)25);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(187)
			this->render->FillRect(_g23);
			HX_STACK_LINE(188)
			this->render->DrawRectangle((int)5,(int)5,(int)50,(int)50);
			HX_STACK_LINE(190)
			this->render->DrawLine((int)10,(int)10,(int)200,(int)200);
			HX_STACK_LINE(192)
			this->render->TextSolidColor(font,(HX_CSTRING("FPS:") + fps_current),(int)20,(int)20,(int)255,(int)0,(int)255);
			HX_STACK_LINE(194)
			this->render->Present();
			HX_STACK_LINE(197)
			(fps_frames)++;
			HX_STACK_LINE(198)
			int _g24 = ::com::sdl::Sdl_obj::GetTicks();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(198)
			Float _g25 = (_g24 - 1000.);		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(198)
			if (((fps_lasttime < _g25))){
				HX_STACK_LINE(200)
				int _g26 = ::com::sdl::Sdl_obj::GetTicks();		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(200)
				fps_lasttime = _g26;
				HX_STACK_LINE(201)
				fps_current = fps_frames;
				HX_STACK_LINE(202)
				fps_frames = (int)0;
			}
		}
		HX_STACK_LINE(208)
		this->render->Dispose();
		HX_STACK_LINE(209)
		this->window->Dispose();
		HX_STACK_LINE(210)
		::com::sdl::Sdl_obj::Quit();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,Main_sdl_Teste,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",215,0x087e5c05)
		HX_STACK_LINE(216)
		::haxe::Log_obj::trace(HX_CSTRING("haxe begin main"),hx::SourceInfo(HX_CSTRING("Main.hx"),216,HX_CSTRING("Main"),HX_CSTRING("main")));
		HX_STACK_LINE(217)
		::Main_obj::__new();
		HX_STACK_LINE(218)
		::haxe::Log_obj::trace(HX_CSTRING("haxe ends main"),hx::SourceInfo(HX_CSTRING("Main.hx"),218,HX_CSTRING("Main"),HX_CSTRING("main")));
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
	case 13:
		if (HX_FIELD_EQ(inName,"main_irrlicht") ) { return main_irrlicht_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"Main_sdl_Teste") ) { return Main_sdl_Teste_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::com::sdl::Window >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::com::sdl::Render >(); return inValue; }
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
	{hx::fsObject /*::com::sdl::Window*/ ,(int)offsetof(Main_obj,window),HX_CSTRING("window")},
	{hx::fsObject /*::com::sdl::Render*/ ,(int)offsetof(Main_obj,render),HX_CSTRING("render")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("window"),
	HX_CSTRING("render"),
	HX_CSTRING("main_irrlicht"),
	HX_CSTRING("Main_sdl_Teste"),
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

