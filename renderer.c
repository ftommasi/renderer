#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>  
#include <stdio.h>

LRESULT CALLBACK 
WndProc(  
  HWND   hwnd,  
  UINT   uMsg,  
  WPARAM wParam,  
  LPARAM lParam  
){
  LRESULT result = 0;
  switch(uMsg)
  {
    case WM_CREATE:
    {
      //TODO(Fausto): do stuff

    } break;

    case WM_SIZE:
    {
      //TODO(Fausto): do stuff

    } break;

    case WM_DESTROY:
    {
      //TODO(Fausto): do stuff

    } break;

    case WM_CLOSE:
    {
      //TODO(Fausto): do stuff

    } break;

    case WM_ACTIVATEAPP:
    {
      //TODO(Fausto): do stuff

    } break;

    default:
    {
      
      //TODO(Fausto): do stuff
     result = DefWindowProc(hwnd,uMsg,wParam,lParam);
    } break;

    return result;
  }



  


}  

HINSTANCE hInst;
static TCHAR szWindowClass[] = _T("Fausto's Renderer");
static TCHAR szTitle[] = _T("Fengine (TM)");

int CALLBACK 
WinMain(  
  HINSTANCE hInstance,  
  HINSTANCE hPrevInstance,  
  LPSTR     lpCmdLine,  
  int       nCmdShow  
){
  WNDCLASS wnclass;  
  wnclass.style = CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
  wnclass.lpfnWndProc = WndProc;
  //wnclass.cbClsExtra = ;
  //wnclass.cbWndExtra = ;
  wnclass.hInstance = hInstance;
  //wnclass.hIcon = ;
  //wnclass.hCursor = ;
  //wnclass.hbrBackground = ;
  //wnclass.pszMenuName = ;
  wnclass.lpszClassName = "FaustoRenderClass";
  
  if(RegisterClass(&wnclass)){

    HWND hWnd = CreateWindowEx(
      0,
      wnclass.lpszClassName,
      "Fausto Renderer",
      WS_OVERLAPPEDWINDOW | WS_VISIBLE,
      CW_USEDEFAULT,
      CW_USEDEFAULT,
      CW_USEDEFAULT,
      CW_USEDEFAULT,
      0,
      0,
      hInstance,
      0 
    ); 

    if(hWnd){

      MSG message;
      while(GetMessage(&message,0,0,0)){
        TranslateMessage(&message);
        DispatchMessage(&message);
      }

    }
    else{
    //TODO(Fausto): Handle error

    }
  }
  else{
    //TODO(Fausto): Handle error

  }
  
  
}








