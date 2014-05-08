#ifndef INCLUDED_com_sdl_Render
#define INCLUDED_com_sdl_Render

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,sdl,Render)
HX_DECLARE_CLASS2(com,sdl,SDLRect)
HX_DECLARE_CLASS2(com,sdl,SDL_Point)
HX_DECLARE_CLASS2(com,sdl,TTFFont)
HX_DECLARE_CLASS2(com,sdl,Texture)
HX_DECLARE_CLASS2(com,sdl,Window)
namespace com{
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  Render_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Render_obj OBJ_;
		Render_obj();
		Void __construct(::com::sdl::Window window,int flags);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Render_obj > __new(::com::sdl::Window window,int flags);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Render_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Render"); }

		Dynamic handle;
		virtual Void Dispose( );
		Dynamic Dispose_dyn();

		virtual Void SetDrawColor( int r,int g,int b,int a);
		Dynamic SetDrawColor_dyn();

		virtual Void Clear( );
		Dynamic Clear_dyn();

		virtual Void Present( );
		Dynamic Present_dyn();

		virtual Void FillRect( ::com::sdl::SDLRect rect);
		Dynamic FillRect_dyn();

		virtual Void FillRectangle( int x,int y,int w,int h);
		Dynamic FillRectangle_dyn();

		virtual Void DrawRectangle( int x,int y,int w,int h);
		Dynamic DrawRectangle_dyn();

		virtual Void DrawRect( ::com::sdl::SDLRect rect);
		Dynamic DrawRect_dyn();

		virtual Void DrawLine( int x1,int y1,int x2,int y2);
		Dynamic DrawLine_dyn();

		virtual Void RenderCopy( ::com::sdl::Texture texture,::com::sdl::SDLRect Clip,::com::sdl::SDLRect Rect);
		Dynamic RenderCopy_dyn();

		virtual Void RenderCopyEx( ::com::sdl::Texture texture,::com::sdl::SDLRect Clip,::com::sdl::SDLRect Rect,::com::sdl::SDL_Point Center,Float angle,int flags);
		Dynamic RenderCopyEx_dyn();

		virtual Void TextSolid( ::com::sdl::TTFFont font,::String text,int x,int y);
		Dynamic TextSolid_dyn();

		virtual Void TextSolidColor( ::com::sdl::TTFFont font,::String text,int x,int y,int r,int g,int b);
		Dynamic TextSolidColor_dyn();

};

} // end namespace com
} // end namespace sdl

#endif /* INCLUDED_com_sdl_Render */ 
