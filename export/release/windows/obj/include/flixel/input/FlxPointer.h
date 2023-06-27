// Generated by Haxe 4.3.1
#ifndef INCLUDED_flixel_input_FlxPointer
#define INCLUDED_flixel_input_FlxPointer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES FlxPointer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxPointer_obj OBJ_;
		FlxPointer_obj();

	public:
		enum { _hx_ClassId = 0x62adae31 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.FlxPointer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.FlxPointer"); }
		static ::hx::ObjectPtr< FlxPointer_obj > __new();
		static ::hx::ObjectPtr< FlxPointer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxPointer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxPointer",8b,7a,4d,80); }

		static void __boot();
		static  ::flixel::math::FlxPoint _cachedPoint;
		int x;
		int y;
		int screenX;
		int screenY;
		int _globalScreenX;
		int _globalScreenY;
		 ::flixel::math::FlxPoint getWorldPosition( ::flixel::FlxCamera Camera, ::flixel::math::FlxPoint point);
		::Dynamic getWorldPosition_dyn();

		 ::flixel::math::FlxPoint getScreenPosition( ::flixel::FlxCamera Camera, ::flixel::math::FlxPoint point);
		::Dynamic getScreenPosition_dyn();

		 ::flixel::math::FlxPoint getPositionInCameraView( ::flixel::FlxCamera Camera, ::flixel::math::FlxPoint point);
		::Dynamic getPositionInCameraView_dyn();

		 ::flixel::math::FlxPoint getPosition( ::flixel::math::FlxPoint point);
		::Dynamic getPosition_dyn();

		bool overlaps( ::flixel::FlxBasic ObjectOrGroup, ::flixel::FlxCamera Camera);
		::Dynamic overlaps_dyn();

		void setGlobalScreenPositionUnsafe(Float newX,Float newY);
		::Dynamic setGlobalScreenPositionUnsafe_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void updatePositions();
		::Dynamic updatePositions_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxPointer */ 
