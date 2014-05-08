#include <hxcpp.h>

#include <haxe/Log.h>
#include <com/sdl/Window.h>
#include <com/sdl/Texture.h>
#include <com/sdl/TTFFont.h>
#include <com/sdl/Sdl.h>
#include <com/sdl/SDL_Point.h>
#include <com/sdl/SDLRect.h>
#include <com/sdl/Render.h>
#include <com/irrlicht/VideoDriver.h>
#include <com/irrlicht/SceneManager.h>
#include <com/irrlicht/Irr.h>
#include <cpp/Lib.h>
#include <com/irrlicht/IColor.h>
#include <com/irrlicht/Device.h>
#include <com/irrlicht/ReferenceCounted.h>
#include <Std.h>
#include <Main.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::haxe::Log_obj::__register();
::com::sdl::Window_obj::__register();
::com::sdl::Texture_obj::__register();
::com::sdl::TTFFont_obj::__register();
::com::sdl::Sdl_obj::__register();
::com::sdl::SDL_Point_obj::__register();
::com::sdl::SDLRect_obj::__register();
::com::sdl::Render_obj::__register();
::com::irrlicht::VideoDriver_obj::__register();
::com::irrlicht::SceneManager_obj::__register();
::com::irrlicht::Irr_obj::__register();
::cpp::Lib_obj::__register();
::com::irrlicht::IColor_obj::__register();
::com::irrlicht::Device_obj::__register();
::com::irrlicht::ReferenceCounted_obj::__register();
::Std_obj::__register();
::Main_obj::__register();
::cpp::Lib_obj::__boot();
::haxe::Log_obj::__boot();
::Main_obj::__boot();
::Std_obj::__boot();
::com::irrlicht::ReferenceCounted_obj::__boot();
::com::irrlicht::Device_obj::__boot();
::com::irrlicht::IColor_obj::__boot();
::com::irrlicht::Irr_obj::__boot();
::com::irrlicht::SceneManager_obj::__boot();
::com::irrlicht::VideoDriver_obj::__boot();
::com::sdl::Render_obj::__boot();
::com::sdl::SDLRect_obj::__boot();
::com::sdl::SDL_Point_obj::__boot();
::com::sdl::Sdl_obj::__boot();
::com::sdl::TTFFont_obj::__boot();
::com::sdl::Texture_obj::__boot();
::com::sdl::Window_obj::__boot();
}

