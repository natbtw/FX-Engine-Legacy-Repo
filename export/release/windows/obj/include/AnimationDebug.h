// Generated by Haxe 4.3.1
#ifndef INCLUDED_AnimationDebug
#define INCLUDED_AnimationDebug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(AnimationDebug)
HX_DECLARE_CLASS0(Boyfriend)
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES AnimationDebug_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef AnimationDebug_obj OBJ_;
		AnimationDebug_obj();

	public:
		enum { _hx_ClassId = 0x7383fb8f };

		void __construct(::String __o_daAnim);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="AnimationDebug")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"AnimationDebug"); }
		static ::hx::ObjectPtr< AnimationDebug_obj > __new(::String __o_daAnim);
		static ::hx::ObjectPtr< AnimationDebug_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_daAnim);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimationDebug_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimationDebug",cf,78,98,91); }

		 ::Boyfriend bf;
		 ::Character dad;
		 ::Character _hx_char;
		 ::flixel::text::FlxText textAnim;
		 ::flixel::group::FlxTypedGroup dumbTexts;
		::Array< ::String > animList;
		int curAnim;
		bool isDad;
		::String daAnim;
		 ::flixel::FlxObject camFollow;
		void create();

		void genBoyOffsets(::hx::Null< bool >  pushList);
		::Dynamic genBoyOffsets_dyn();

		void updateTexts();
		::Dynamic updateTexts_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_AnimationDebug */ 
