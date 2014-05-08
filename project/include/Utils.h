#ifndef SDLHAXE_H
#define SDLHAXE_H

  
#include <hx/CFFI.h>

#include <stdio.h>
#ifdef WIN32
#include <windows.h>
#include <SDL.h>
#include <SDL_mixer.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_opengl.h>
#else
#include <SDL.h>
#include <SDL_mixer.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_opengles.h>
#endif

#define _IRR_STATIC_LIB_ 1
#include <irrlicht.h>  



using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;



 #define ValueToFloat(value) static_cast<float>(val_get_double(value))
 #define ValueToString(value) ( val_is_null(value) ? NULL : (val_get_string(value)) )
 #define ValueToLong(value) static_cast<long>(val_get_int(value))
 #define ValueToBool(value) val_get_bool(value)
 #define ValueToInt(value) val_get_int(value)

extern vkind gObjectKind;

inline  void release_object(value inValue)
{
   if (val_is_kind(inValue,gObjectKind))
   {
      IReferenceCounted *obj = (IReferenceCounted *)val_to_kind(inValue,gObjectKind);
      if (obj)
         obj->drop();
   }
}


template<typename OBJ>
bool AbstractToObject(value inValue, OBJ *&outObj)
{
   outObj = 0;
   if ( ! val_is_kind(inValue,gObjectKind) )    return false;
   IReferenceCounted *obj = (IReferenceCounted *)val_to_kind(inValue,gObjectKind);
   outObj = dynamic_cast<OBJ *>(obj);
   return outObj;
}

inline value ObjectToAbstract(IReferenceCounted *inObject)
{
   value result = alloc_abstract(gObjectKind,inObject);
   val_gc(result,release_object);
   return result;
}

 
//Texture wrapper class
class LTexture
{
	public:
		//Initializes variables
		LTexture();

		//Deallocates memory
		~LTexture();

		//Loads image at specified path
		bool loadFromFile(SDL_Renderer* gRenderer,const char* path );
		bool loadFromFileCk(SDL_Renderer* gRenderer,const char* path,int r,int g,int b );

		//Deallocates texture
		void free();


		//Gets image dimensions
		int getWidth();
		int getHeight();

	public:
		SDL_Texture* mTexture;
		int mWidth;
		int mHeight;
};



#endif