// Generated by Haxe 4.3.1
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#define INCLUDED_flixel_addons_ui_interfaces_IFireTongue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFireTongue)

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES IFireTongue_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::String (::hx::Object :: *_hx_get)(::String flag,::String context,::hx::Null< bool >  safe); 
		static inline ::String get( ::Dynamic _hx_,::String flag,::String context,::hx::Null< bool >  safe) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFireTongue_obj *>(_hx_.mPtr->_hx_getInterface(0x5661c266)))->_hx_get)(flag,context,safe);
		}
		::String (::hx::Object :: *_hx_getFont)(::String str); 
		static inline ::String getFont( ::Dynamic _hx_,::String str) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFireTongue_obj *>(_hx_.mPtr->_hx_getInterface(0x5661c266)))->_hx_getFont)(str);
		}
		int (::hx::Object :: *_hx_getFontSize)(::String str,int size); 
		static inline int getFontSize( ::Dynamic _hx_,::String str,int size) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFireTongue_obj *>(_hx_.mPtr->_hx_getInterface(0x5661c266)))->_hx_getFontSize)(str,size);
		}
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFireTongue */ 
