// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLRenderbuffer_GLRenderbuffer_Impl_
#include <lime/graphics/opengl/_GLRenderbuffer/GLRenderbuffer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0c684fbb9993b6aa_12_fromInt,"lime.graphics.opengl._GLRenderbuffer.GLRenderbuffer_Impl_","fromInt",0x11b02c9b,"lime.graphics.opengl._GLRenderbuffer.GLRenderbuffer_Impl_.fromInt","lime/graphics/opengl/GLRenderbuffer.hx",12,0x63850e6d)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLRenderbuffer{

void GLRenderbuffer_Impl__obj::__construct() { }

Dynamic GLRenderbuffer_Impl__obj::__CreateEmpty() { return new GLRenderbuffer_Impl__obj; }

void *GLRenderbuffer_Impl__obj::_hx_vtable = 0;

Dynamic GLRenderbuffer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLRenderbuffer_Impl__obj > _hx_result = new GLRenderbuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLRenderbuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c55a00a;
}

 ::lime::graphics::opengl::GLObject GLRenderbuffer_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_0c684fbb9993b6aa_12_fromInt)
HXDLIN(  12)		return ::lime::graphics::opengl::GLObject_obj::fromInt(6,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLRenderbuffer_Impl__obj,fromInt,return )


GLRenderbuffer_Impl__obj::GLRenderbuffer_Impl__obj()
{
}

bool GLRenderbuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GLRenderbuffer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GLRenderbuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class GLRenderbuffer_Impl__obj::__mClass;

static ::String GLRenderbuffer_Impl__obj_sStaticFields[] = {
	HX_("fromInt",a5,dd,fa,57),
	::String(null())
};

void GLRenderbuffer_Impl__obj::__register()
{
	GLRenderbuffer_Impl__obj _hx_dummy;
	GLRenderbuffer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl._GLRenderbuffer.GLRenderbuffer_Impl_",64,c9,e6,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLRenderbuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GLRenderbuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GLRenderbuffer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLRenderbuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLRenderbuffer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLRenderbuffer
