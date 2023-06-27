// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_CheckStyle
#include <flixel/addons/ui/CheckStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b952e0391651718d_599_new,"flixel.addons.ui.CheckStyle","new",0xda9b8dcc,"flixel.addons.ui.CheckStyle.new","flixel/addons/ui/FlxUIRadioGroup.hx",599,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_b952e0391651718d_610_applyToCheck,"flixel.addons.ui.CheckStyle","applyToCheck",0x906b6693,"flixel.addons.ui.CheckStyle.applyToCheck","flixel/addons/ui/FlxUIRadioGroup.hx",610,0x807a4586)
namespace flixel{
namespace addons{
namespace ui{

void CheckStyle_obj::__construct( ::Dynamic CheckColor, ::flixel::addons::ui::FontDef Font,::String Align, ::Dynamic Color, ::flixel::addons::ui::BorderDef Border){
            	HX_STACKFRAME(&_hx_pos_b952e0391651718d_599_new)
HXLINE( 601)		this->checkColor = null();
HXLINE( 605)		this->checkColor = CheckColor;
HXLINE( 606)		super::__construct(Font,Align,Color,Border);
            	}

Dynamic CheckStyle_obj::__CreateEmpty() { return new CheckStyle_obj; }

void *CheckStyle_obj::_hx_vtable = 0;

Dynamic CheckStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CheckStyle_obj > _hx_result = new CheckStyle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool CheckStyle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17433232) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x17433232;
	} else {
		return inClassId==(int)0x36a2ea0c;
	}
}

void CheckStyle_obj::applyToCheck( ::flixel::addons::ui::FlxUICheckBox c){
            	HX_STACKFRAME(&_hx_pos_b952e0391651718d_610_applyToCheck)
HXLINE( 611)		if (::hx::IsNotNull( this->checkColor )) {
HXLINE( 613)			c->set_color(( (int)(this->checkColor) ));
            		}
HXLINE( 615)		this->apply(( ( ::flixel::text::FlxText)(c->button->label) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckStyle_obj,applyToCheck,(void))


::hx::ObjectPtr< CheckStyle_obj > CheckStyle_obj::__new( ::Dynamic CheckColor, ::flixel::addons::ui::FontDef Font,::String Align, ::Dynamic Color, ::flixel::addons::ui::BorderDef Border) {
	::hx::ObjectPtr< CheckStyle_obj > __this = new CheckStyle_obj();
	__this->__construct(CheckColor,Font,Align,Color,Border);
	return __this;
}

::hx::ObjectPtr< CheckStyle_obj > CheckStyle_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic CheckColor, ::flixel::addons::ui::FontDef Font,::String Align, ::Dynamic Color, ::flixel::addons::ui::BorderDef Border) {
	CheckStyle_obj *__this = (CheckStyle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CheckStyle_obj), true, "flixel.addons.ui.CheckStyle"));
	*(void **)__this = CheckStyle_obj::_hx_vtable;
	__this->__construct(CheckColor,Font,Align,Color,Border);
	return __this;
}

CheckStyle_obj::CheckStyle_obj()
{
}

void CheckStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CheckStyle);
	HX_MARK_MEMBER_NAME(checkColor,"checkColor");
	 ::flixel::addons::ui::ButtonLabelStyle_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CheckStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(checkColor,"checkColor");
	 ::flixel::addons::ui::ButtonLabelStyle_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CheckStyle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"checkColor") ) { return ::hx::Val( checkColor ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"applyToCheck") ) { return ::hx::Val( applyToCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CheckStyle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"checkColor") ) { checkColor=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("checkColor",7b,73,4c,5a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CheckStyle_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CheckStyle_obj,checkColor),HX_("checkColor",7b,73,4c,5a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CheckStyle_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckStyle_obj_sMemberFields[] = {
	HX_("checkColor",7b,73,4c,5a),
	HX_("applyToCheck",7f,31,a8,51),
	::String(null()) };

::hx::Class CheckStyle_obj::__mClass;

void CheckStyle_obj::__register()
{
	CheckStyle_obj _hx_dummy;
	CheckStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.CheckStyle",da,f7,bd,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CheckStyle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CheckStyle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
