package ;


import com.irrlicht.Device;
import com.irrlicht.ICamera;
import com.irrlicht.IColor;
import com.irrlicht.INode;
import com.irrlicht.math.IVector3f;
import com.irrlicht.SceneManager;
import com.irrlicht.VideoDriver;
import com.sdl.Sdl;
import com.sdl.Render;
import com.sdl.SDL_Point;
import com.sdl.Texture;
import com.sdl.TTFFont;
import com.sdl.Window;
import com.sdl.SDLRect;
/**
 * ...
 * @author djoker
 */

class Main 
{
	  public var window:Window;
	  public var render:Render;
	  
	  public function new()
	  {

		 // Sdl.sdl_main(Main_sdl_Teste);
		  Sdl.sdl_main(main_irrlicht);
		
		  
	  }
	  public function main_irrlicht()
	  {
		  var driver:VideoDriver;
          var device:Device;
		  var scene:SceneManager;
		  
		  var camera:ICamera;
		 
		   device = new  Device(640, 480, 32, false, false, false);
		   driver = device.getDriver();
		   device.setWindowCaption("Irrlicht + SDL2 + HAXE by Luis Santos AKA DJOKER");
		   scene = device.getSceneManager();
		   
		  camera = scene.addCameraSceneNode(new IVector3f(0, 2, -2), new IVector3f(0, 0, 100));
		  camera.setPosition(new IVector3f(0, 0, -2));
		   
		   var cube:INode = scene.addCubeSceneNode(1);
		   cube.setScale(new IVector3f(1, 1, 1));
		   
			
     	while (device.run())
		{
			driver.beginScene(true, true, new IColor(0, 0, 45));
			scene.drawAll();
			driver.endScene();
		}
		
		device.drop();
	  }
	  public   function Main_sdl_Teste()
   {
     	 
	 #if android
	   window = new Window('sdl 4 haxe by Luis Santos AKA DJOKER', 0,0, 640, 480, Sdl.WINDOW_FULLSCREEN | Sdl.WINDOW_SHOWN);
	  #else
	  window = new Window('sdl 4 haxe by Luis Santos AKA DJOKER', Sdl.WINDOWPOS_CENTERED, Sdl.WINDOWPOS_CENTERED, 640, 480,Sdl.WINDOW_RESIZABLE | Sdl.WINDOW_SHOWN);
	 #end
	
	  render = new Render(window, Sdl.RENDERER_ACCELERATED  );
	  var tex:Texture = new Texture(render);
	  //tex.loadFromFileColorKey("Data/sdl.png", 0, 255, 0);
	  tex.loadFromFile("Data/sdl.png");
	  
	  var sprtex:Texture = new Texture(render);
	  sprtex.loadFromFile("Data/zazaka.png");
	  
	  
	  var font:TTFFont = new TTFFont("Data/04B_03.ttf",23) ;
	  
	
	  var quit:Bool = false;
	  
	  var fps_current:Int=0;
	  var fps_frames:Int = 0;
	  var fps_lasttime:Int = Sdl.GetTicks();
	  var lastfps:Int;
	  var focus:Bool = false;
	  var mousex:Int = 0;
	  var mousey:Int = 0;
	  while (!quit)
	  {
		  lastfps = 100;
	    	  var event:Int = 0;
			  while ( (event =  window.PoolEvent())!=0)
			  {
	
				
				  
			//  if (event != 0) 	  trace(event);
			if (event == Sdl.WINDOWEVENT)
			{
				//trace(window.WindowEventType());
				
				switch (window.WindowEventType())
				{
					case Sdl.WINDOWEVENT_FOCUS_GAINED:
						{
							focus = true;
						}
					
				   case Sdl.WINDOWEVENT_FOCUS_LOST:
					{
						focus = false;
						//  quit = true;
				       //  break;
					}
				}
				
			}
		     
			
			
			  if (event == Sdl.KEYDOWN)
			  {
				// trace("key donw");
				//  if (event != 0) 	  trace(event);
				
			  } 
			  if (event == Sdl.KEYUP)
			  {
				// trace("key up");
				
			  }   
			  
			//  #if android
			  
			    if (event == Sdl.FINGERDOWN)
			  {
				// trace("touch down");
			  } else  	  
			  if (event == Sdl.FINGERUP)
			  {
				// trace("touch dup");  
			  } else
			  if (event == Sdl.FINGERMOTION)
			  {
				  mousex =  Std.int(Sdl.fingerX()*1);
		          mousey =  Std.int(Sdl.fingerY()*1);
				 // trace("touch move:"+mousex+'<>'+mousey);
			  } else
			  
			//  #else
			 
			   if (event == Sdl.MOUSEBUTTONDOWN)
			  {
				 trace("mouse down");
			  } else
			  if (event == Sdl.MOUSEBUTTONUP)
			  {
				//  trace("mouse up");
			  } else
			  if (event == Sdl.MOUSEMOTION)
			  {
				  mousex = Std.int(Sdl.mouseX());
		          mousey = Std.int(Sdl.mouseY());
			  }   
			  
		//	  #end
			  
			 
			  
			 
			  if (event == Sdl.QUIT)
			  {
				  quit = true;
				  break;
				trace("sdk quit");
			  } 
		  }
		 
		   
					
	
	      render.SetDrawColor(0, 0, 45, 255);
		  render.Clear();
		  
		 
		  
		 render.RenderCopy(tex, new SDLRect(100, 0, tex.width, tex.height),null);
		  
		  render.RenderCopyEx(sprtex, new SDLRect(100, 200, 64,64),null,new SDL_Point(Std.int(sprtex.width/2),Std.int(sprtex.height/2)),Math.sin(Sdl.GetTicks()/1000)*360,Sdl.FLIP_VERTICAL|Sdl.FLIP_HORIZONTAL);
		  
		   render.SetDrawColor(255, 255, 45, 255);
		  
		  render.FillRect(new SDLRect(mousex, mousey, 25, 25));
		  render.DrawRectangle(5,5, 50, 50);
		  
		  render.DrawLine(10, 10, 200, 200);
		  
		 render.TextSolidColor(font, 'FPS:'+fps_current, 20, 20,255,0,255);
		  
		  render.Present();
		  
		  
    fps_frames++;
   if (fps_lasttime < Sdl.GetTicks() - 1.0*1000)
   {
      fps_lasttime = Sdl.GetTicks();
      fps_current = fps_frames;
      fps_frames = 0;
	 
   }
	  }
	  
	 
	  render.Dispose();
	  window.Dispose();
	  Sdl.Quit();
	
   }

    public static function main()
	{
	  trace("haxe begin main");
	  new Main();
      trace("haxe ends main");
	   
      
    }
	
}