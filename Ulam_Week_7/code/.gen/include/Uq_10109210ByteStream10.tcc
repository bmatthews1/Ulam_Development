/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10104Fail10.h"

namespace MFM{

  template<class EC>
  Uq_10109210ByteStream10<EC>::Uq_10109210ByteStream10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10109210ByteStream10", 0))
  { }

  template<class EC>
  Uq_10109210ByteStream10<EC>::~Uq_10109210ByteStream10(){} //gcnl:NodeBlockClass.cpp:1784


//! ByteStream.ulam:16:   virtual Int readByte() 
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10109210ByteStream10<EC>::Uf_8readByte(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! ByteStream.ulam:18:     Fail f;
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:19:     f.fail("UNSUPPORTED_OPERATION");
    UlamRef<EC> Uh_3tur42697(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42698 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval42699(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42698), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42698)); //gcnl:Node.cpp:1142
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur42697, Uh_5tlval42699); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:20:     return -3;
    const u32 Uh_5tlreg42701 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42702 = _Int32ToInt32(Uh_5tlreg42701, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval42703(Uh_5tlreg42702); //gcnl:Node.cpp:1142
    return (Uh_5tlval42703); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8readByte



//! ByteStream.ulam:36:   virtual Int writeByte(ASCII x) 
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10109210ByteStream10<EC>::Uf_919writeByte(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_1x)
  {

//! ByteStream.ulam:38:     Fail f;
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:39:     f.fail("UNSUPPORTED_OPERATION");
    UlamRef<EC> Uh_3tur42705(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42706 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval42707(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42706), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42706)); //gcnl:Node.cpp:1142
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur42705, Uh_5tlval42707); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:40:     return -3;
    const u32 Uh_5tlreg42709 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42710 = _Int32ToInt32(Uh_5tlreg42709, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval42711(Uh_5tlreg42710); //gcnl:Node.cpp:1142
    return (Uh_5tlval42711); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919writeByte



//! ByteStream.ulam:49:   Self & print(String s)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s) const
  {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
    {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      const u32 Uh_5tlreg42712 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42713 = _Int32ToUnsigned32(Uh_5tlreg42712, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg42713); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      while(true)
      {
        const u32 Uh_5tlreg42715 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42716 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42715))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42715)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg42718 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42719 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42718, Uh_5tlreg42716, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42719, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:52:     {
        {

//! ByteStream.ulam:53:       ASCII a = s[i];
          const u32 Uh_5tlreg42721 = Uv_1i.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42723 = Uv_1s.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42724 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42723))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42723)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg42721 >= Uh_5tlreg42724) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg42725 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42723))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42723)) + Uh_5tlreg42721); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uv_1a(Uh_5tlreg42725); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:54:       writeByte(a);
          const u32 Uh_5tlreg42728 = Uv_1a.read(); //gcnl:Node.cpp:698
          Ui_Ut_10181u<EC> Uh_5tlval42729(Uh_5tlreg42728); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42730 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42731 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42730)) (uc, ur, Uh_5tlval42729); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42732 = Uh_5tlval42731.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
Ul_214endcontrolloop218:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
        const u32 Uh_5tlreg42733 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42734 = _Int32ToUnsigned32(Uh_5tlreg42733, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42736 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42737 = _BinOpAddUnsigned32(Uh_5tlreg42736, Uh_5tlreg42734, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42737); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:56:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42739(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42739); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:85:   Self & print(Int n)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1n) const
  {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
    {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
      const u64 Uh_5tlreg42740 = (u64) HexU64(0xffffffff, 0x80000000); //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42742 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u64 Uh_5tlreg42743 = _Int64ToInt64(Uh_5tlreg42742, 32, 33); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42744 = _BinOpCompareEqEqInt64(Uh_5tlreg42743, Uh_5tlreg42740, 33); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42744, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
          const u32 Uh_5tlreg42746 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 65u); //user string pool index for "-2147483648"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval42747(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42746), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42746)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42749 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42747); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval42749.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42750(Uh_5tlval42749, 0u, Uh_5tlval42749.GetEffectiveSelf()); //gcnl:Node.cpp:1510
          return (Uh_6tlref42750); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:88:     if (n < 0) { 
    {

//! ByteStream.ulam:88:     if (n < 0) { 
      const u32 Uh_5tlreg42751 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42752 = _Int32ToInt32(Uh_5tlreg42751, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42754 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42755 = _BinOpCompareLessThanInt32(Uh_5tlreg42754, Uh_5tlreg42752, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42755, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:89:       print("-");
          const u32 Uh_5tlreg42757 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 78u); //user string pool index for "-"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval42758(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42757), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42757)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42760 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42758); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:90:       n = -n;
          const u32 Uh_5tlreg42762 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42763 = _UnaryMinusInt32(Uh_5tlreg42762, 32); //gcnl:NodeUnaryOp.cpp:507
          Uv_1n.write(Uh_5tlreg42763); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! ByteStream.ulam:92:     return print((Unsigned) n, 10u);
    const u32 Uh_5tlreg42767 = Uv_1n.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42768 = _Int32ToUnsigned32(Uh_5tlreg42767, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42769(Uh_5tlreg42768); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg42770 = 10u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42771 = _Unsigned32ToUnsigned32(Uh_5tlreg42770, 4, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42772(Uh_5tlreg42771); //gcnl:Node.cpp:1142
    Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42774 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42769, Uh_5tlval42772); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tlval42774.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42775(Uh_5tlval42774, 0u, Uh_5tlval42774.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42775); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:67:   Self & print(Unsigned n, Unsigned base)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_1n, Ui_Ut_102321u<EC>& Uv_4base) const
  {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
    {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
      const u32 Uh_5tlreg42776 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42777 = _Unsigned32ToUnsigned32(Uh_5tlreg42776, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42779 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42780 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42779, Uh_5tlreg42777, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42780, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
          const u32 Uh_5tlreg42782 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 24u); //user string pool index for "0"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval42783(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42782), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42782)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42785 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42783); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval42785.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42786(Uh_5tlval42785, 0u, Uh_5tlval42785.GetEffectiveSelf()); //gcnl:Node.cpp:1510
          return (Uh_6tlref42786); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
    {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
      const u32 Uh_5tlreg42787 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42788 = _Unsigned32ToUnsigned32(Uh_5tlreg42787, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42790 = Uv_4base.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42791 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42790, Uh_5tlreg42788, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42791, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
          const u32 Uh_5tlreg42792 = 10u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42793 = _Unsigned32ToUnsigned32(Uh_5tlreg42792, 4, 32); //gcnl:NodeCast.cpp:748
          Uv_4base.write(Uh_5tlreg42793); //gcnl:Node.cpp:892
      } // end if
    }

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
    {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
      const u32 Uh_5tlreg42795 = 2u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42796 = _Unsigned32ToUnsigned32(Uh_5tlreg42795, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42798 = Uv_4base.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42799 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42798, Uh_5tlreg42796, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42799, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          UlamRef<EC> Uh_3tur42801(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur42801); //gcnl:NodeFunctionCall.cpp:1043
        }
      } // end if
    }

//! ByteStream.ulam:75:     String c = "0123456789abcdefghijklmnopqrstuvwxyz";
    const u32 Uh_5tlreg42803 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 27u); //user string pool index for "0123456789abcdefghijklmnopqrstuvwxyz"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uv_1c(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42803), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42803)); //gcnl:NodeVarDecl.cpp:1071

//! ByteStream.ulam:76:     while (n != 0u) {
    {

//! ByteStream.ulam:76:     while (n != 0u) {
      while(true)
      {
        const u32 Uh_5tlreg42804 = 0u; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42805 = _Unsigned32ToUnsigned32(Uh_5tlreg42804, 1, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42807 = Uv_1n.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42808 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg42807, Uh_5tlreg42805, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42808, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:76:     while (n != 0u) {
        {

//! ByteStream.ulam:77:       Unsigned d = n % base;
          const u32 Uh_5tlreg42810 = Uv_4base.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42812 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42813 = _BinOpModUnsigned32(Uh_5tlreg42812, Uh_5tlreg42810, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_1d(Uh_5tlreg42813); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:78:       n = n/base;
          const u32 Uh_5tlreg42815 = Uv_4base.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42817 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42818 = _BinOpDivideUnsigned32(Uh_5tlreg42817, Uh_5tlreg42815, 32); //gcnl:NodeBinaryOp.cpp:805
          Uv_1n.write(Uh_5tlreg42818); //gcnl:Node.cpp:892

//! ByteStream.ulam:79:       writeByte(c[d]);
          const u32 Uh_5tlreg42822 = Uv_1d.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42824 = Uv_1c.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42825 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42824))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42824)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg42822 >= Uh_5tlreg42825) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg42826 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42824))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42824)) + Uh_5tlreg42822); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval42827(Uh_5tlreg42826); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42828 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42829 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42828)) (uc, ur, Uh_5tlval42827); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42830 = Uh_5tlval42829.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:76:     while (n != 0u) {
Ul_214endcontrolloop219:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:82:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42832(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42832); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:59:   Self & print(Bool b)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10111b<EC>& Uv_1b) const
  {

//! ByteStream.ulam:61:     ASCII ch = '0';
    const u32 Uh_5tlreg42833 = 48u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10181u<EC> Uv_2ch(Uh_5tlreg42833); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:62:     if (b) ch = '1';
    {

//! ByteStream.ulam:62:     if (b) ch = '1';
      const u32 Uh_5tlreg42835 = Uv_1b.read(); //gcnl:Node.cpp:698
      if(_Bool32ToCbool(Uh_5tlreg42835, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:62:     if (b) ch = '1';
          const u32 Uh_5tlreg42836 = 49u; //gcnl:NodeTerminal.cpp:690
          Uv_2ch.write(Uh_5tlreg42836); //gcnl:Node.cpp:892
      } // end if
    }

//! ByteStream.ulam:63:     writeByte(ch);
    const u32 Uh_5tlreg42840 = Uv_2ch.read(); //gcnl:Node.cpp:698
    Ui_Ut_10181u<EC> Uh_5tlval42841(Uh_5tlreg42840); //gcnl:Node.cpp:1142
    VfuncPtr Uf_tvfp42842 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321i<EC> Uh_5tlval42843 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42842)) (uc, ur, Uh_5tlval42841); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42844 = Uh_5tlval42843.read(); //gcnl:Node.cpp:1170

//! ByteStream.ulam:64:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42846(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42846); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:113:   virtual Self & writeBytes(String s) 
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s)
  {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
    {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      const u32 Uh_5tlreg42847 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42848 = _Int32ToUnsigned32(Uh_5tlreg42847, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg42848); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42850 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42851 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42850))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42850)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg42853 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42854 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42853, Uh_5tlreg42851, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42854, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:116:       writeByte(s[i]);

//! ByteStream.ulam:116:       writeByte(s[i]);
          const u32 Uh_5tlreg42857 = Uv_1i.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42859 = Uv_1s.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42860 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42859))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42859)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg42857 >= Uh_5tlreg42860) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg42861 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42859))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42859)) + Uh_5tlreg42857); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval42862(Uh_5tlreg42861); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42863 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42864 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42863)) (uc, ur, Uh_5tlval42862); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42865 = Uh_5tlval42864.read(); //gcnl:Node.cpp:1170

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
Ul_214endcontrolloop221:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
        const u32 Uh_5tlreg42866 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42867 = _Int32ToUnsigned32(Uh_5tlreg42866, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42869 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42870 = _BinOpAddUnsigned32(Uh_5tlreg42869, Uh_5tlreg42867, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42870); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:117:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42872(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42872); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9210writeBytes



//! ByteStream.ulam:95:   virtual Unsigned writeBytes(ByteStream & r)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r)
  {

//! ByteStream.ulam:97:     return writeBytes(r, Unsigned.maxof);
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42875(Ur_1r, 0u, Ur_1r.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    const u32 Uh_5tlreg42876 = 4294967295u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval42877(Uh_5tlreg42876); //gcnl:Node.cpp:1142
    VfuncPtr Uf_tvfp42878 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_9210writeBytes12r10109210ByteStream10102321u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321u<EC> Uh_5tlval42879 = ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes12r10109210ByteStream10102321u) (Uf_tvfp42878)) (uc, ur, Uh_6tlref42875, Uh_5tlval42877); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42880 = Uh_5tlval42879.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval42881(Uh_5tlreg42880); //gcnl:Node.cpp:1142
    return (Uh_5tlval42881); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210writeBytes



//! ByteStream.ulam:100:   virtual Unsigned writeBytes(ByteStream & r, Unsigned max)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r, Ui_Ut_102321u<EC>& Uv_3max)
  {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
    {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
      UlamRef<EC> Uh_3tur42883(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
      VfuncPtr Uf_tvfp42884 = Uh_3tur42883.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_7canRead10); //gcnl:NodeFunctionCall.cpp:1186
      const Ui_Ut_10111b<EC> Uh_5tlval42885 = ((typename Uq_10109210ByteStream10<EC>::Uf_7canRead10) (Uf_tvfp42884)) (uc, Uh_3tur42883); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg42886 = Uh_5tlval42885.read(); //gcnl:Node.cpp:1170
      const u32 Uh_5tlreg42887 = _LogicalBangBool32(Uh_5tlreg42886, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg42887, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
          const u32 Uh_5tlreg42888 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42889 = _Int32ToUnsigned32(Uh_5tlreg42888, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval42890(Uh_5tlreg42889); //gcnl:Node.cpp:1142
          return (Uh_5tlval42890); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
    {

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      const u32 Uh_5tlreg42891 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42892 = _Int32ToUnsigned32(Uh_5tlreg42891, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg42892); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42894 = Uv_3max.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42896 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42897 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42896, Uh_5tlreg42894, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42897, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:105:     {
        {

//! ByteStream.ulam:106:       Int ch = r.readByte();
          UlamRef<EC> Uh_3tur42899(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
          VfuncPtr Uf_tvfp42900 = Uh_3tur42899.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_8readByte10); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42901 = ((typename Uq_10109210ByteStream10<EC>::Uf_8readByte10) (Uf_tvfp42900)) (uc, Uh_3tur42899); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42902 = Uh_5tlval42901.read(); //gcnl:Node.cpp:1170
          Ui_Ut_102321i<EC> Uv_2ch(Uh_5tlreg42902); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:107:       if (ch < 0) return i;
          {

//! ByteStream.ulam:107:       if (ch < 0) return i;
            const u32 Uh_5tlreg42903 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42904 = _Int32ToInt32(Uh_5tlreg42903, 2, 32); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42906 = Uv_2ch.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg42907 = _BinOpCompareLessThanInt32(Uh_5tlreg42906, Uh_5tlreg42904, 32); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg42907, 1)) //gcnl:NodeControl.cpp:213
            {

//! ByteStream.ulam:107:       if (ch < 0) return i;
                const u32 Uh_5tlreg42909 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_102321u<EC> Uh_5tlval42910(Uh_5tlreg42909); //gcnl:Node.cpp:1142
                return (Uh_5tlval42910); //gcnl:NodeReturnStatement.cpp:343
            } // end if
          }

//! ByteStream.ulam:108:       writeByte((ASCII) ch);
          const u32 Uh_5tlreg42913 = Uv_2ch.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42914 = _Int32ToUnsigned32(Uh_5tlreg42913, 32, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181u<EC> Uh_5tlval42915(Uh_5tlreg42914); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42916 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42917 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42916)) (uc, ur, Uh_5tlval42915); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42918 = Uh_5tlval42917.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
Ul_214endcontrolloop220:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
        const u32 Uh_5tlreg42919 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42920 = _Int32ToUnsigned32(Uh_5tlreg42919, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42922 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42923 = _BinOpAddUnsigned32(Uh_5tlreg42922, Uh_5tlreg42920, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42923); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:110:     return max;
    const u32 Uh_5tlreg42925 = Uv_3max.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval42926(Uh_5tlreg42925); //gcnl:Node.cpp:1142
    return (Uh_5tlval42926); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210writeBytes


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10109210ByteStream10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10109210ByteStream10<EC>::GetDataMemberCount() const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10109210ByteStream10<EC>::GetMangledClassName() const
  {
    return "Uq_10109210ByteStream10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10109210ByteStream10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10109210ByteStream10<EC>::GetString(u32 sidx)  const
  {
    const u32 USERSTRINGPOOLSIZE = 81; //gcnl:NodeBlockClass.cpp:2537
    static unsigned char UserStringPool[USERSTRINGPOOLSIZE + 1] = 
      "\000"
      "\025UNSUPPORTED_OPERATION\000"
      "\0010\000"
      "$0123456789abcdefghijklmnopqrstuvwxyz\000"
      "\013-2147483648\000"
      "\001-\000"
    ; //gcnl:StringPoolUser.cpp:127

    if(sidx == 0)
      FAIL(UNINITIALIZED_VALUE); //gcnl:NodeBlockClass.cpp:2546
    if(sidx >= USERSTRINGPOOLSIZE)
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2555
    return UserStringPool + sidx + 1; //gcnl:NodeBlockClass.cpp:2561
  } //GetString

  template<class EC>
  u32 Uq_10109210ByteStream10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_10109210ByteStream10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10109210ByteStream10<EC>::m_vtable[9] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor),
    &UlamClass<EC>::PureVirtualFunctionCalled,
    &UlamClass<EC>::PureVirtualFunctionCalled,
    (VfuncPtr) ((typename Uq_10109210ByteStream10<EC>::Uf_8readByte10) &Uq_10109210ByteStream10<EC>::Uf_8readByte),
    (VfuncPtr) ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) &Uq_10109210ByteStream10<EC>::Uf_919writeByte),
    (VfuncPtr) ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes11102321s) &Uq_10109210ByteStream10<EC>::Uf_9210writeBytes),
    (VfuncPtr) ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes11r10109210ByteStream10) &Uq_10109210ByteStream10<EC>::Uf_9210writeBytes),
    (VfuncPtr) ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes12r10109210ByteStream10102321u) &Uq_10109210ByteStream10<EC>::Uf_9210writeBytes)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_10109210ByteStream10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 9) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_10109210ByteStream10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109210ByteStream10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

