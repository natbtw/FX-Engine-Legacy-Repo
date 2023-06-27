// Generated by Haxe 4.3.1
#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#define INCLUDED_flixel_util_FlxBitmapDataPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxBitmapDataPool)
HX_DECLARE_CLASS3(flixel,util,_FlxBitmapDataPool,FlxBitmapDataPoolNode)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxBitmapDataPool_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxBitmapDataPool_obj OBJ_;
		FlxBitmapDataPool_obj();

	public:
		enum { _hx_ClassId = 0x09960165 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxBitmapDataPool")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util.FlxBitmapDataPool"); }

		inline static ::hx::ObjectPtr< FlxBitmapDataPool_obj > __new() {
			::hx::ObjectPtr< FlxBitmapDataPool_obj > __this = new FlxBitmapDataPool_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxBitmapDataPool_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxBitmapDataPool_obj *__this = (FlxBitmapDataPool_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBitmapDataPool_obj), false, "flixel.util.FlxBitmapDataPool"));
			*(void **)__this = FlxBitmapDataPool_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBitmapDataPool_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBitmapDataPool",27,6f,5b,ac); }

		static void __boot();
		static int maxLength;
		static int length;
		static  ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode _head;
		static  ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode _tail;
		static  ::openfl::geom::Rectangle _rect;
		static  ::openfl::display::BitmapData get(int w,int h,::hx::Null< bool >  transparent, ::Dynamic fillColor, ::Dynamic exactSize);
		static ::Dynamic get_dyn();

		static void put( ::openfl::display::BitmapData bmd);
		static ::Dynamic put_dyn();

		static void clear();
		static ::Dynamic clear_dyn();

		static int set_maxLength(int value);
		static ::Dynamic set_maxLength_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxBitmapDataPool */ 
