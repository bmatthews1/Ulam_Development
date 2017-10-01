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
    UlamRef<EC> Uh_3tur41750(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41751 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval41752(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41751), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41751)); //gcnl:Node.cpp:1142
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur41750, Uh_5tlval41752); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:20:     return -3;
    const u32 Uh_5tlreg41754 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41755 = _Int32ToInt32(Uh_5tlreg41754, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41756(Uh_5tlreg41755); //gcnl:Node.cpp:1142
    return (Uh_5tlval41756); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8readByte



//! ByteStream.ulam:36:   virtual Int writeByte(ASCII x) 
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10109210ByteStream10<EC>::Uf_919writeByte(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_1x)
  {

//! ByteStream.ulam:38:     Fail f;
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:39:     f.fail("UNSUPPORTED_OPERATION");
    UlamRef<EC> Uh_3tur41758(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41759 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval41760(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41759), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41759)); //gcnl:Node.cpp:1142
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur41758, Uh_5tlval41760); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:40:     return -3;
    const u32 Uh_5tlreg41762 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41763 = _Int32ToInt32(Uh_5tlreg41762, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41764(Uh_5tlreg41763); //gcnl:Node.cpp:1142
    return (Uh_5tlval41764); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919writeByte



//! ByteStream.ulam:49:   Self & print(String s)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s) const
  {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
    {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      const u32 Uh_5tlreg41765 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41766 = _Int32ToUnsigned32(Uh_5tlreg41765, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg41766); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      while(true)
      {
        const u32 Uh_5tlreg41768 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41769 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41768))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41768)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg41771 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41772 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41771, Uh_5tlreg41769, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41772, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:52:     {
        {

//! ByteStream.ulam:53:       ASCII a = s[i];
          const u32 Uh_5tlreg41774 = Uv_1i.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41776 = Uv_1s.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41777 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41776))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41776)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg41774 >= Uh_5tlreg41777) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg41778 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41776))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41776)) + Uh_5tlreg41774); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uv_1a(Uh_5tlreg41778); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:54:       writeByte(a);
          const u32 Uh_5tlreg41781 = Uv_1a.read(); //gcnl:Node.cpp:698
          Ui_Ut_10181u<EC> Uh_5tlval41782(Uh_5tlreg41781); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp41783 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval41784 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp41783)) (uc, ur, Uh_5tlval41782); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41785 = Uh_5tlval41784.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
Ul_214endcontrolloop18:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
        const u32 Uh_5tlreg41786 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41787 = _Int32ToUnsigned32(Uh_5tlreg41786, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41789 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41790 = _BinOpAddUnsigned32(Uh_5tlreg41789, Uh_5tlreg41787, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg41790); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:56:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref41792(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41792); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:85:   Self & print(Int n)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1n) const
  {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
    {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
      const u64 Uh_5tlreg41793 = (u64) HexU64(0xffffffff, 0x80000000); //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41795 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u64 Uh_5tlreg41796 = _Int64ToInt64(Uh_5tlreg41795, 32, 33); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41797 = _BinOpCompareEqEqInt64(Uh_5tlreg41796, Uh_5tlreg41793, 33); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41797, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
          const u32 Uh_5tlreg41799 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 65u); //user string pool index for "-2147483648"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval41800(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41799), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41799)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval41802 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval41800); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval41802.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref41803(Uh_5tlval41802, 0u, Uh_5tlval41802.GetEffectiveSelf()); //gcnl:Node.cpp:1510
          return (Uh_6tlref41803); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:88:     if (n < 0) { 
    {

//! ByteStream.ulam:88:     if (n < 0) { 
      const u32 Uh_5tlreg41804 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41805 = _Int32ToInt32(Uh_5tlreg41804, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41807 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41808 = _BinOpCompareLessThanInt32(Uh_5tlreg41807, Uh_5tlreg41805, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41808, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:89:       print("-");
          const u32 Uh_5tlreg41810 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 78u); //user string pool index for "-"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval41811(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41810), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41810)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval41813 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval41811); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:90:       n = -n;
          const u32 Uh_5tlreg41815 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41816 = _UnaryMinusInt32(Uh_5tlreg41815, 32); //gcnl:NodeUnaryOp.cpp:507
          Uv_1n.write(Uh_5tlreg41816); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! ByteStream.ulam:92:     return print((Unsigned) n, 10u);
    const u32 Uh_5tlreg41820 = Uv_1n.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41821 = _Int32ToUnsigned32(Uh_5tlreg41820, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41822(Uh_5tlreg41821); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41823 = 10u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41824 = _Unsigned32ToUnsigned32(Uh_5tlreg41823, 4, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41825(Uh_5tlreg41824); //gcnl:Node.cpp:1142
    Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval41827 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval41822, Uh_5tlval41825); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tlval41827.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref41828(Uh_5tlval41827, 0u, Uh_5tlval41827.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41828); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:67:   Self & print(Unsigned n, Unsigned base)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_1n, Ui_Ut_102321u<EC>& Uv_4base) const
  {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
    {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
      const u32 Uh_5tlreg41829 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41830 = _Unsigned32ToUnsigned32(Uh_5tlreg41829, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41832 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41833 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41832, Uh_5tlreg41830, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41833, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
          const u32 Uh_5tlreg41835 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 24u); //user string pool index for "0"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval41836(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41835), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41835)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval41838 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval41836); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval41838.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref41839(Uh_5tlval41838, 0u, Uh_5tlval41838.GetEffectiveSelf()); //gcnl:Node.cpp:1510
          return (Uh_6tlref41839); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
    {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
      const u32 Uh_5tlreg41840 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41841 = _Unsigned32ToUnsigned32(Uh_5tlreg41840, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41843 = Uv_4base.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41844 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41843, Uh_5tlreg41841, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41844, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
          const u32 Uh_5tlreg41845 = 10u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41846 = _Unsigned32ToUnsigned32(Uh_5tlreg41845, 4, 32); //gcnl:NodeCast.cpp:748
          Uv_4base.write(Uh_5tlreg41846); //gcnl:Node.cpp:892
      } // end if
    }

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
    {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
      const u32 Uh_5tlreg41848 = 2u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41849 = _Unsigned32ToUnsigned32(Uh_5tlreg41848, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41851 = Uv_4base.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41852 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41851, Uh_5tlreg41849, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41852, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          UlamRef<EC> Uh_3tur41854(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur41854); //gcnl:NodeFunctionCall.cpp:1043
        }
      } // end if
    }

//! ByteStream.ulam:75:     String c = "0123456789abcdefghijklmnopqrstuvwxyz";
    const u32 Uh_5tlreg41856 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 27u); //user string pool index for "0123456789abcdefghijklmnopqrstuvwxyz"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uv_1c(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41856), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41856)); //gcnl:NodeVarDecl.cpp:1071

//! ByteStream.ulam:76:     while (n != 0u) {
    {

//! ByteStream.ulam:76:     while (n != 0u) {
      while(true)
      {
        const u32 Uh_5tlreg41857 = 0u; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41858 = _Unsigned32ToUnsigned32(Uh_5tlreg41857, 1, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41860 = Uv_1n.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41861 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg41860, Uh_5tlreg41858, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41861, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:76:     while (n != 0u) {
        {

//! ByteStream.ulam:77:       Unsigned d = n % base;
          const u32 Uh_5tlreg41863 = Uv_4base.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41865 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41866 = _BinOpModUnsigned32(Uh_5tlreg41865, Uh_5tlreg41863, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_1d(Uh_5tlreg41866); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:78:       n = n/base;
          const u32 Uh_5tlreg41868 = Uv_4base.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41870 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41871 = _BinOpDivideUnsigned32(Uh_5tlreg41870, Uh_5tlreg41868, 32); //gcnl:NodeBinaryOp.cpp:805
          Uv_1n.write(Uh_5tlreg41871); //gcnl:Node.cpp:892

//! ByteStream.ulam:79:       writeByte(c[d]);
          const u32 Uh_5tlreg41875 = Uv_1d.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41877 = Uv_1c.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41878 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41877))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41877)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg41875 >= Uh_5tlreg41878) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg41879 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41877))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41877)) + Uh_5tlreg41875); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval41880(Uh_5tlreg41879); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp41881 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval41882 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp41881)) (uc, ur, Uh_5tlval41880); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41883 = Uh_5tlval41882.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:76:     while (n != 0u) {
Ul_214endcontrolloop19:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:82:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref41885(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41885); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:59:   Self & print(Bool b)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10111b<EC>& Uv_1b) const
  {

//! ByteStream.ulam:61:     ASCII ch = '0';
    const u32 Uh_5tlreg41886 = 48u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10181u<EC> Uv_2ch(Uh_5tlreg41886); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:62:     if (b) ch = '1';
    {

//! ByteStream.ulam:62:     if (b) ch = '1';
      const u32 Uh_5tlreg41888 = Uv_1b.read(); //gcnl:Node.cpp:698
      if(_Bool32ToCbool(Uh_5tlreg41888, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:62:     if (b) ch = '1';
          const u32 Uh_5tlreg41889 = 49u; //gcnl:NodeTerminal.cpp:690
          Uv_2ch.write(Uh_5tlreg41889); //gcnl:Node.cpp:892
      } // end if
    }

//! ByteStream.ulam:63:     writeByte(ch);
    const u32 Uh_5tlreg41893 = Uv_2ch.read(); //gcnl:Node.cpp:698
    Ui_Ut_10181u<EC> Uh_5tlval41894(Uh_5tlreg41893); //gcnl:Node.cpp:1142
    VfuncPtr Uf_tvfp41895 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321i<EC> Uh_5tlval41896 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp41895)) (uc, ur, Uh_5tlval41894); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41897 = Uh_5tlval41896.read(); //gcnl:Node.cpp:1170

//! ByteStream.ulam:64:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref41899(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41899); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:113:   virtual Self & writeBytes(String s) 
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s)
  {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
    {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      const u32 Uh_5tlreg41900 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41901 = _Int32ToUnsigned32(Uh_5tlreg41900, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg41901); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      while(true)
      {
        const u32 Uh_5tlreg41903 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41904 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41903))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41903)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg41906 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41907 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41906, Uh_5tlreg41904, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41907, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:116:       writeByte(s[i]);

//! ByteStream.ulam:116:       writeByte(s[i]);
          const u32 Uh_5tlreg41910 = Uv_1i.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41912 = Uv_1s.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41913 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41912))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41912)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg41910 >= Uh_5tlreg41913) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg41914 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41912))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41912)) + Uh_5tlreg41910); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval41915(Uh_5tlreg41914); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp41916 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval41917 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp41916)) (uc, ur, Uh_5tlval41915); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41918 = Uh_5tlval41917.read(); //gcnl:Node.cpp:1170

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
Ul_214endcontrolloop211:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
        const u32 Uh_5tlreg41919 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41920 = _Int32ToUnsigned32(Uh_5tlreg41919, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41922 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41923 = _BinOpAddUnsigned32(Uh_5tlreg41922, Uh_5tlreg41920, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg41923); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:117:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref41925(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41925); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9210writeBytes



//! ByteStream.ulam:95:   virtual Unsigned writeBytes(ByteStream & r)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r)
  {

//! ByteStream.ulam:97:     return writeBytes(r, Unsigned.maxof);
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref41928(Ur_1r, 0u, Ur_1r.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    const u32 Uh_5tlreg41929 = 4294967295u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval41930(Uh_5tlreg41929); //gcnl:Node.cpp:1142
    VfuncPtr Uf_tvfp41931 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_9210writeBytes12r10109210ByteStream10102321u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321u<EC> Uh_5tlval41932 = ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes12r10109210ByteStream10102321u) (Uf_tvfp41931)) (uc, ur, Uh_6tlref41928, Uh_5tlval41930); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41933 = Uh_5tlval41932.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41934(Uh_5tlreg41933); //gcnl:Node.cpp:1142
    return (Uh_5tlval41934); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210writeBytes



//! ByteStream.ulam:100:   virtual Unsigned writeBytes(ByteStream & r, Unsigned max)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r, Ui_Ut_102321u<EC>& Uv_3max)
  {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
    {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
      UlamRef<EC> Uh_3tur41936(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
      VfuncPtr Uf_tvfp41937 = Uh_3tur41936.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_7canRead10); //gcnl:NodeFunctionCall.cpp:1186
      const Ui_Ut_10111b<EC> Uh_5tlval41938 = ((typename Uq_10109210ByteStream10<EC>::Uf_7canRead10) (Uf_tvfp41937)) (uc, Uh_3tur41936); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41939 = Uh_5tlval41938.read(); //gcnl:Node.cpp:1170
      const u32 Uh_5tlreg41940 = _LogicalBangBool32(Uh_5tlreg41939, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg41940, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
          const u32 Uh_5tlreg41941 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41942 = _Int32ToUnsigned32(Uh_5tlreg41941, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval41943(Uh_5tlreg41942); //gcnl:Node.cpp:1142
          return (Uh_5tlval41943); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
    {

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      const u32 Uh_5tlreg41944 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41945 = _Int32ToUnsigned32(Uh_5tlreg41944, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg41945); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      while(true)
      {
        const u32 Uh_5tlreg41947 = Uv_3max.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41949 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41950 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41949, Uh_5tlreg41947, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41950, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:105:     {
        {

//! ByteStream.ulam:106:       Int ch = r.readByte();
          UlamRef<EC> Uh_3tur41952(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
          VfuncPtr Uf_tvfp41953 = Uh_3tur41952.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_8readByte10); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval41954 = ((typename Uq_10109210ByteStream10<EC>::Uf_8readByte10) (Uf_tvfp41953)) (uc, Uh_3tur41952); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41955 = Uh_5tlval41954.read(); //gcnl:Node.cpp:1170
          Ui_Ut_102321i<EC> Uv_2ch(Uh_5tlreg41955); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:107:       if (ch < 0) return i;
          {

//! ByteStream.ulam:107:       if (ch < 0) return i;
            const u32 Uh_5tlreg41956 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg41957 = _Int32ToInt32(Uh_5tlreg41956, 2, 32); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg41959 = Uv_2ch.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg41960 = _BinOpCompareLessThanInt32(Uh_5tlreg41959, Uh_5tlreg41957, 32); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg41960, 1)) //gcnl:NodeControl.cpp:213
            {

//! ByteStream.ulam:107:       if (ch < 0) return i;
                const u32 Uh_5tlreg41962 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_102321u<EC> Uh_5tlval41963(Uh_5tlreg41962); //gcnl:Node.cpp:1142
                return (Uh_5tlval41963); //gcnl:NodeReturnStatement.cpp:343
            } // end if
          }

//! ByteStream.ulam:108:       writeByte((ASCII) ch);
          const u32 Uh_5tlreg41966 = Uv_2ch.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41967 = _Int32ToUnsigned32(Uh_5tlreg41966, 32, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181u<EC> Uh_5tlval41968(Uh_5tlreg41967); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp41969 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval41970 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp41969)) (uc, ur, Uh_5tlval41968); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41971 = Uh_5tlval41970.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
Ul_214endcontrolloop210:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
        const u32 Uh_5tlreg41972 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41973 = _Int32ToUnsigned32(Uh_5tlreg41972, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41975 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41976 = _BinOpAddUnsigned32(Uh_5tlreg41975, Uh_5tlreg41973, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg41976); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:110:     return max;
    const u32 Uh_5tlreg41978 = Uv_3max.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval41979(Uh_5tlreg41978); //gcnl:Node.cpp:1142
    return (Uh_5tlval41979); //gcnl:NodeReturnStatement.cpp:343

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

