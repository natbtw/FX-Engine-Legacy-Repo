// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String IFlxUIClickable_obj_sMemberFields[] = {
	HX_("set_skipButtonUpdate",37,1f,14,ff),
	HX_("skipButtonUpdate",ba,02,f2,13),
	::String(null()) };

::hx::Class IFlxUIClickable_obj::__mClass;

void IFlxUIClickable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.interfaces.IFlxUIClickable",82,0e,89,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxUIClickable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x3e998408 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
