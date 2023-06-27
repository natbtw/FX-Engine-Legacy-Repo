// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TankmenBG
#include <TankmenBG.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30fb0b486e2d14a9_7_new,"TankmenBG","new",0x2f0a4b83,"TankmenBG.new","TankmenBG.hx",7,0x1f34d54d)
HX_LOCAL_STACK_FRAME(_hx_pos_30fb0b486e2d14a9_38_resetShit,"TankmenBG","resetShit",0x2cf2d092,"TankmenBG.resetShit","TankmenBG.hx",38,0x1f34d54d)
HX_LOCAL_STACK_FRAME(_hx_pos_30fb0b486e2d14a9_49_update,"TankmenBG","update",0x527062c6,"TankmenBG.update","TankmenBG.hx",49,0x1f34d54d)
HX_LOCAL_STACK_FRAME(_hx_pos_30fb0b486e2d14a9_9_boot,"TankmenBG","boot",0xf210c7af,"TankmenBG.boot","TankmenBG.hx",9,0x1f34d54d)

void TankmenBG_obj::__construct(Float x,Float y,bool isGoingRight){
            	HX_STACKFRAME(&_hx_pos_30fb0b486e2d14a9_7_new)
HXLINE(  13)		this->tankSpeed = ((Float)0.7);
HXLINE(  12)		this->goingRight = false;
HXLINE(  11)		this->strumTime = ((Float)0);
HXLINE(  19)		super::__construct(x,y,null());
HXLINE(  23)		::String library = null();
HXDLIN(  23)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("tankmanKilled1",04,7a,c5,c3)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  23)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("tankmanKilled1",04,7a,c5,c3)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  24)		this->set_antialiasing(true);
HXLINE(  25)		this->animation->addByPrefix(HX_("run",4b,e7,56,00),HX_("tankman running",cf,9f,c7,29),24,true,null(),null());
HXLINE(  26)		 ::flixel::animation::FlxAnimationController _hx_tmp1 = this->animation;
HXDLIN(  26)		_hx_tmp1->addByPrefix(HX_("shot",fa,d4,52,4c),(HX_("John Shot ",11,13,ab,01) + ::flixel::FlxG_obj::random->_hx_int(1,2,null())),24,false,null(),null());
HXLINE(  28)		this->animation->play(HX_("run",4b,e7,56,00),null(),null(),null());
HXLINE(  29)		 ::flixel::animation::FlxAnimation _hx_tmp2 = this->animation->_curAnim;
HXDLIN(  29)		_hx_tmp2->set_curFrame(::flixel::FlxG_obj::random->_hx_int(0,(this->animation->_curAnim->frames->length - 1),null()));
HXLINE(  31)		this->updateHitbox();
HXLINE(  33)		this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ((Float)0.8))),null());
HXLINE(  34)		this->updateHitbox();
            	}

Dynamic TankmenBG_obj::__CreateEmpty() { return new TankmenBG_obj; }

void *TankmenBG_obj::_hx_vtable = 0;

Dynamic TankmenBG_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TankmenBG_obj > _hx_result = new TankmenBG_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TankmenBG_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x52c34351) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x52c34351;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void TankmenBG_obj::resetShit(Float x,Float y,bool isGoingRight){
            	HX_STACKFRAME(&_hx_pos_30fb0b486e2d14a9_38_resetShit)
HXLINE(  39)		this->setPosition(x,y);
HXLINE(  40)		this->goingRight = isGoingRight;
HXLINE(  41)		this->endingOffset = ::flixel::FlxG_obj::random->_hx_float(50,200,null());
HXLINE(  42)		this->tankSpeed = ::flixel::FlxG_obj::random->_hx_float(((Float)0.6),1,null());
HXLINE(  44)		if (this->goingRight) {
HXLINE(  45)			this->set_flipX(true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(TankmenBG_obj,resetShit,(void))

void TankmenBG_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_30fb0b486e2d14a9_49_update)
HXLINE(  50)		this->super::update(elapsed);
HXLINE(  52)		bool _hx_tmp;
HXDLIN(  52)		if (!((this->x >= (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.2))))) {
HXLINE(  52)			_hx_tmp = (this->x <= (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)-0.5)));
            		}
            		else {
HXLINE(  52)			_hx_tmp = true;
            		}
HXDLIN(  52)		if (_hx_tmp) {
HXLINE(  53)			this->set_visible(false);
            		}
            		else {
HXLINE(  55)			this->set_visible(true);
            		}
HXLINE(  57)		if ((this->animation->_curAnim->name == HX_("run",4b,e7,56,00))) {
HXLINE(  59)			Float endDirection = ((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.74)) + this->endingOffset);
HXLINE(  61)			if (this->goingRight) {
HXLINE(  63)				endDirection = ((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.02)) - this->endingOffset);
HXLINE(  65)				this->set_x((endDirection + ((::Conductor_obj::songPosition - this->strumTime) * this->tankSpeed)));
            			}
            			else {
HXLINE(  69)				this->set_x((endDirection - ((::Conductor_obj::songPosition - this->strumTime) * this->tankSpeed)));
            			}
            		}
HXLINE(  73)		if ((::Conductor_obj::songPosition > this->strumTime)) {
HXLINE(  76)			this->animation->play(HX_("shot",fa,d4,52,4c),null(),null(),null());
HXLINE(  78)			if (this->goingRight) {
HXLINE(  80)				this->offset->set_y(( (Float)(200) ));
HXLINE(  81)				this->offset->set_x(( (Float)(300) ));
            			}
            		}
HXLINE(  85)		bool _hx_tmp1;
HXDLIN(  85)		if ((this->animation->_curAnim->name == HX_("shot",fa,d4,52,4c))) {
HXLINE(  85)			_hx_tmp1 = (this->animation->_curAnim->curFrame >= (this->animation->_curAnim->frames->length - 1));
            		}
            		else {
HXLINE(  85)			_hx_tmp1 = false;
            		}
HXDLIN(  85)		if (_hx_tmp1) {
HXLINE(  87)			this->kill();
            		}
            	}


::cpp::VirtualArray TankmenBG_obj::animationNotes;


::hx::ObjectPtr< TankmenBG_obj > TankmenBG_obj::__new(Float x,Float y,bool isGoingRight) {
	::hx::ObjectPtr< TankmenBG_obj > __this = new TankmenBG_obj();
	__this->__construct(x,y,isGoingRight);
	return __this;
}

::hx::ObjectPtr< TankmenBG_obj > TankmenBG_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,bool isGoingRight) {
	TankmenBG_obj *__this = (TankmenBG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TankmenBG_obj), true, "TankmenBG"));
	*(void **)__this = TankmenBG_obj::_hx_vtable;
	__this->__construct(x,y,isGoingRight);
	return __this;
}

TankmenBG_obj::TankmenBG_obj()
{
}

::hx::Val TankmenBG_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strumTime") ) { return ::hx::Val( strumTime ); }
		if (HX_FIELD_EQ(inName,"tankSpeed") ) { return ::hx::Val( tankSpeed ); }
		if (HX_FIELD_EQ(inName,"resetShit") ) { return ::hx::Val( resetShit_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"goingRight") ) { return ::hx::Val( goingRight ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endingOffset") ) { return ::hx::Val( endingOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TankmenBG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"animationNotes") ) { outValue = ( animationNotes ); return true; }
	}
	return false;
}

::hx::Val TankmenBG_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"strumTime") ) { strumTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tankSpeed") ) { tankSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"goingRight") ) { goingRight=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endingOffset") ) { endingOffset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TankmenBG_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"animationNotes") ) { animationNotes=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void TankmenBG_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strumTime",f6,2d,21,f4));
	outFields->push(HX_("goingRight",c2,3d,e0,d3));
	outFields->push(HX_("tankSpeed",3d,7c,80,fc));
	outFields->push(HX_("endingOffset",da,16,d7,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TankmenBG_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(TankmenBG_obj,strumTime),HX_("strumTime",f6,2d,21,f4)},
	{::hx::fsBool,(int)offsetof(TankmenBG_obj,goingRight),HX_("goingRight",c2,3d,e0,d3)},
	{::hx::fsFloat,(int)offsetof(TankmenBG_obj,tankSpeed),HX_("tankSpeed",3d,7c,80,fc)},
	{::hx::fsFloat,(int)offsetof(TankmenBG_obj,endingOffset),HX_("endingOffset",da,16,d7,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TankmenBG_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &TankmenBG_obj::animationNotes,HX_("animationNotes",9d,6e,ee,af)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TankmenBG_obj_sMemberFields[] = {
	HX_("strumTime",f6,2d,21,f4),
	HX_("goingRight",c2,3d,e0,d3),
	HX_("tankSpeed",3d,7c,80,fc),
	HX_("endingOffset",da,16,d7,d5),
	HX_("resetShit",2f,d9,3e,92),
	HX_("update",09,86,05,87),
	::String(null()) };

static void TankmenBG_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TankmenBG_obj::animationNotes,"animationNotes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TankmenBG_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TankmenBG_obj::animationNotes,"animationNotes");
};

#endif

::hx::Class TankmenBG_obj::__mClass;

static ::String TankmenBG_obj_sStaticFields[] = {
	HX_("animationNotes",9d,6e,ee,af),
	::String(null())
};

void TankmenBG_obj::__register()
{
	TankmenBG_obj _hx_dummy;
	TankmenBG_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TankmenBG",11,ce,7f,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TankmenBG_obj::__GetStatic;
	__mClass->mSetStaticField = &TankmenBG_obj::__SetStatic;
	__mClass->mMarkFunc = TankmenBG_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TankmenBG_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TankmenBG_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TankmenBG_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TankmenBG_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TankmenBG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TankmenBG_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TankmenBG_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_30fb0b486e2d14a9_9_boot)
HXDLIN(   9)		animationNotes = ::cpp::VirtualArray_obj::__new(0);
            	}
}

