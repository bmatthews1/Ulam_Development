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
    UlamRef<EC> Uh_3tur42839(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42840 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval42841(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42840), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42840)); //gcnl:Node.cpp:1142
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur42839, Uh_5tlval42841); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:20:     return -3;
    const u32 Uh_5tlreg42843 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42844 = _Int32ToInt32(Uh_5tlreg42843, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval42845(Uh_5tlreg42844); //gcnl:Node.cpp:1142
    return (Uh_5tlval42845); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8readByte



//! ByteStream.ulam:36:   virtual Int writeByte(ASCII x) 
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10109210ByteStream10<EC>::Uf_919writeByte(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_1x)
  {

//! ByteStream.ulam:38:     Fail f;
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:39:     f.fail("UNSUPPORTED_OPERATION");
    UlamRef<EC> Uh_3tur42847(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42848 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval42849(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42848), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42848)); //gcnl:Node.cpp:1142
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur42847, Uh_5tlval42849); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:40:     return -3;
    const u32 Uh_5tlreg42851 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42852 = _Int32ToInt32(Uh_5tlreg42851, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval42853(Uh_5tlreg42852); //gcnl:Node.cpp:1142
    return (Uh_5tlval42853); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919writeByte



//! ByteStream.ulam:49:   Self & print(String s)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s) const
  {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
    {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      const u32 Uh_5tlreg42854 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42855 = _Int32ToUnsigned32(Uh_5tlreg42854, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg42855); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      while(true)
      {
        const u32 Uh_5tlreg42857 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42858 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42857))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42857)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg42860 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42861 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42860, Uh_5tlreg42858, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42861, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:52:     {
        {

//! ByteStream.ulam:53:       ASCII a = s[i];
          const u32 Uh_5tlreg42863 = Uv_1i.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42865 = Uv_1s.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42866 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42865))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42865)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg42863 >= Uh_5tlreg42866) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg42867 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42865))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42865)) + Uh_5tlreg42863); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uv_1a(Uh_5tlreg42867); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:54:       writeByte(a);
          const u32 Uh_5tlreg42870 = Uv_1a.read(); //gcnl:Node.cpp:698
          Ui_Ut_10181u<EC> Uh_5tlval42871(Uh_5tlreg42870); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42872 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42873 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42872)) (uc, ur, Uh_5tlval42871); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42874 = Uh_5tlval42873.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
Ul_214endcontrolloop220:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
        const u32 Uh_5tlreg42875 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42876 = _Int32ToUnsigned32(Uh_5tlreg42875, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42878 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42879 = _BinOpAddUnsigned32(Uh_5tlreg42878, Uh_5tlreg42876, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42879); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:56:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42881(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42881); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:85:   Self & print(Int n)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1n) const
  {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
    {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
      const u64 Uh_5tlreg42882 = (u64) HexU64(0xffffffff, 0x80000000); //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42884 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u64 Uh_5tlreg42885 = _Int64ToInt64(Uh_5tlreg42884, 32, 33); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42886 = _BinOpCompareEqEqInt64(Uh_5tlreg42885, Uh_5tlreg42882, 33); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42886, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
          const u32 Uh_5tlreg42888 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 65u); //user string pool index for "-2147483648"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval42889(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42888), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42888)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42891 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42889); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval42891.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42892(Uh_5tlval42891, 0u, Uh_5tlval42891.GetEffectiveSelf()); //gcnl:Node.cpp:1510
          return (Uh_6tlref42892); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:88:     if (n < 0) { 
    {

//! ByteStream.ulam:88:     if (n < 0) { 
      const u32 Uh_5tlreg42893 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42894 = _Int32ToInt32(Uh_5tlreg42893, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42896 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42897 = _BinOpCompareLessThanInt32(Uh_5tlreg42896, Uh_5tlreg42894, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42897, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:89:       print("-");
          const u32 Uh_5tlreg42899 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 78u); //user string pool index for "-"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval42900(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42899), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42899)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42902 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42900); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:90:       n = -n;
          const u32 Uh_5tlreg42904 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42905 = _UnaryMinusInt32(Uh_5tlreg42904, 32); //gcnl:NodeUnaryOp.cpp:507
          Uv_1n.write(Uh_5tlreg42905); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! ByteStream.ulam:92:     return print((Unsigned) n, 10u);
    const u32 Uh_5tlreg42909 = Uv_1n.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42910 = _Int32ToUnsigned32(Uh_5tlreg42909, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42911(Uh_5tlreg42910); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg42912 = 10u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42913 = _Unsigned32ToUnsigned32(Uh_5tlreg42912, 4, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42914(Uh_5tlreg42913); //gcnl:Node.cpp:1142
    Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42916 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42911, Uh_5tlval42914); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tlval42916.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42917(Uh_5tlval42916, 0u, Uh_5tlval42916.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42917); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:67:   Self & print(Unsigned n, Unsigned base)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_1n, Ui_Ut_102321u<EC>& Uv_4base) const
  {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
    {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
      const u32 Uh_5tlreg42918 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42919 = _Unsigned32ToUnsigned32(Uh_5tlreg42918, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42921 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42922 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42921, Uh_5tlreg42919, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42922, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
          const u32 Uh_5tlreg42924 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 24u); //user string pool index for "0"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval42925(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42924), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42924)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42927 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42925); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval42927.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42928(Uh_5tlval42927, 0u, Uh_5tlval42927.GetEffectiveSelf()); //gcnl:Node.cpp:1510
          return (Uh_6tlref42928); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
    {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
      const u32 Uh_5tlreg42929 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42930 = _Unsigned32ToUnsigned32(Uh_5tlreg42929, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42932 = Uv_4base.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42933 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42932, Uh_5tlreg42930, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42933, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
          const u32 Uh_5tlreg42934 = 10u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42935 = _Unsigned32ToUnsigned32(Uh_5tlreg42934, 4, 32); //gcnl:NodeCast.cpp:748
          Uv_4base.write(Uh_5tlreg42935); //gcnl:Node.cpp:892
      } // end if
    }

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
    {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
      const u32 Uh_5tlreg42937 = 2u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42938 = _Unsigned32ToUnsigned32(Uh_5tlreg42937, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42940 = Uv_4base.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42941 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42940, Uh_5tlreg42938, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42941, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          UlamRef<EC> Uh_3tur42943(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur42943); //gcnl:NodeFunctionCall.cpp:1043
        }
      } // end if
    }

//! ByteStream.ulam:75:     String c = "0123456789abcdefghijklmnopqrstuvwxyz";
    const u32 Uh_5tlreg42945 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 27u); //user string pool index for "0123456789abcdefghijklmnopqrstuvwxyz"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uv_1c(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42945), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42945)); //gcnl:NodeVarDecl.cpp:1071

//! ByteStream.ulam:76:     while (n != 0u) {
    {

//! ByteStream.ulam:76:     while (n != 0u) {
      while(true)
      {
        const u32 Uh_5tlreg42946 = 0u; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42947 = _Unsigned32ToUnsigned32(Uh_5tlreg42946, 1, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42949 = Uv_1n.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42950 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg42949, Uh_5tlreg42947, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42950, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:76:     while (n != 0u) {
        {

//! ByteStream.ulam:77:       Unsigned d = n % base;
          const u32 Uh_5tlreg42952 = Uv_4base.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42954 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42955 = _BinOpModUnsigned32(Uh_5tlreg42954, Uh_5tlreg42952, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_1d(Uh_5tlreg42955); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:78:       n = n/base;
          const u32 Uh_5tlreg42957 = Uv_4base.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42959 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42960 = _BinOpDivideUnsigned32(Uh_5tlreg42959, Uh_5tlreg42957, 32); //gcnl:NodeBinaryOp.cpp:805
          Uv_1n.write(Uh_5tlreg42960); //gcnl:Node.cpp:892

//! ByteStream.ulam:79:       writeByte(c[d]);
          const u32 Uh_5tlreg42964 = Uv_1d.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42966 = Uv_1c.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42967 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42966))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42966)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg42964 >= Uh_5tlreg42967) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg42968 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42966))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42966)) + Uh_5tlreg42964); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval42969(Uh_5tlreg42968); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42970 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42971 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42970)) (uc, ur, Uh_5tlval42969); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42972 = Uh_5tlval42971.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:76:     while (n != 0u) {
Ul_214endcontrolloop221:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:82:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42974(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42974); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:59:   Self & print(Bool b)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10111b<EC>& Uv_1b) const
  {

//! ByteStream.ulam:61:     ASCII ch = '0';
    const u32 Uh_5tlreg42975 = 48u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10181u<EC> Uv_2ch(Uh_5tlreg42975); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:62:     if (b) ch = '1';
    {

//! ByteStream.ulam:62:     if (b) ch = '1';
      const u32 Uh_5tlreg42977 = Uv_1b.read(); //gcnl:Node.cpp:698
      if(_Bool32ToCbool(Uh_5tlreg42977, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:62:     if (b) ch = '1';
          const u32 Uh_5tlreg42978 = 49u; //gcnl:NodeTerminal.cpp:690
          Uv_2ch.write(Uh_5tlreg42978); //gcnl:Node.cpp:892
      } // end if
    }

//! ByteStream.ulam:63:     writeByte(ch);
    const u32 Uh_5tlreg42982 = Uv_2ch.read(); //gcnl:Node.cpp:698
    Ui_Ut_10181u<EC> Uh_5tlval42983(Uh_5tlreg42982); //gcnl:Node.cpp:1142
    VfuncPtr Uf_tvfp42984 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321i<EC> Uh_5tlval42985 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42984)) (uc, ur, Uh_5tlval42983); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42986 = Uh_5tlval42985.read(); //gcnl:Node.cpp:1170

//! ByteStream.ulam:64:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42988(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42988); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:113:   virtual Self & writeBytes(String s) 
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s)
  {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
    {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      const u32 Uh_5tlreg42989 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42990 = _Int32ToUnsigned32(Uh_5tlreg42989, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg42990); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42992 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42993 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42992))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42992)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg42995 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42996 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42995, Uh_5tlreg42993, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42996, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:116:       writeByte(s[i]);

//! ByteStream.ulam:116:       writeByte(s[i]);
          const u32 Uh_5tlreg42999 = Uv_1i.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43001 = Uv_1s.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43002 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43001))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43001)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg42999 >= Uh_5tlreg43002) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg43003 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43001))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43001)) + Uh_5tlreg42999); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval43004(Uh_5tlreg43003); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp43005 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43006 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp43005)) (uc, ur, Uh_5tlval43004); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43007 = Uh_5tlval43006.read(); //gcnl:Node.cpp:1170

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
Ul_214endcontrolloop223:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
        const u32 Uh_5tlreg43008 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43009 = _Int32ToUnsigned32(Uh_5tlreg43008, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43011 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43012 = _BinOpAddUnsigned32(Uh_5tlreg43011, Uh_5tlreg43009, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg43012); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:117:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43014(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref43014); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9210writeBytes



//! ByteStream.ulam:95:   virtual Unsigned writeBytes(ByteStream & r)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r)
  {

//! ByteStream.ulam:97:     return writeBytes(r, Unsigned.maxof);
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43017(Ur_1r, 0u, Ur_1r.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    const u32 Uh_5tlreg43018 = 4294967295u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval43019(Uh_5tlreg43018); //gcnl:Node.cpp:1142
    VfuncPtr Uf_tvfp43020 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_9210writeBytes12r10109210ByteStream10102321u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321u<EC> Uh_5tlval43021 = ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes12r10109210ByteStream10102321u) (Uf_tvfp43020)) (uc, ur, Uh_6tlref43017, Uh_5tlval43019); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg43022 = Uh_5tlval43021.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval43023(Uh_5tlreg43022); //gcnl:Node.cpp:1142
    return (Uh_5tlval43023); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210writeBytes



//! ByteStream.ulam:100:   virtual Unsigned writeBytes(ByteStream & r, Unsigned max)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r, Ui_Ut_102321u<EC>& Uv_3max)
  {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
    {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
      UlamRef<EC> Uh_3tur43025(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
      VfuncPtr Uf_tvfp43026 = Uh_3tur43025.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_7canRead10); //gcnl:NodeFunctionCall.cpp:1186
      const Ui_Ut_10111b<EC> Uh_5tlval43027 = ((typename Uq_10109210ByteStream10<EC>::Uf_7canRead10) (Uf_tvfp43026)) (uc, Uh_3tur43025); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg43028 = Uh_5tlval43027.read(); //gcnl:Node.cpp:1170
      const u32 Uh_5tlreg43029 = _LogicalBangBool32(Uh_5tlreg43028, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg43029, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
          const u32 Uh_5tlreg43030 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg43031 = _Int32ToUnsigned32(Uh_5tlreg43030, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval43032(Uh_5tlreg43031); //gcnl:Node.cpp:1142
          return (Uh_5tlval43032); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
    {

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      const u32 Uh_5tlreg43033 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43034 = _Int32ToUnsigned32(Uh_5tlreg43033, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg43034); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      while(true)
      {
        const u32 Uh_5tlreg43036 = Uv_3max.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43038 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43039 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43038, Uh_5tlreg43036, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg43039, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:105:     {
        {

//! ByteStream.ulam:106:       Int ch = r.readByte();
          UlamRef<EC> Uh_3tur43041(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
          VfuncPtr Uf_tvfp43042 = Uh_3tur43041.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_8readByte10); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43043 = ((typename Uq_10109210ByteStream10<EC>::Uf_8readByte10) (Uf_tvfp43042)) (uc, Uh_3tur43041); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43044 = Uh_5tlval43043.read(); //gcnl:Node.cpp:1170
          Ui_Ut_102321i<EC> Uv_2ch(Uh_5tlreg43044); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:107:       if (ch < 0) return i;
          {

//! ByteStream.ulam:107:       if (ch < 0) return i;
            const u32 Uh_5tlreg43045 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg43046 = _Int32ToInt32(Uh_5tlreg43045, 2, 32); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg43048 = Uv_2ch.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg43049 = _BinOpCompareLessThanInt32(Uh_5tlreg43048, Uh_5tlreg43046, 32); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg43049, 1)) //gcnl:NodeControl.cpp:213
            {

//! ByteStream.ulam:107:       if (ch < 0) return i;
                const u32 Uh_5tlreg43051 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_102321u<EC> Uh_5tlval43052(Uh_5tlreg43051); //gcnl:Node.cpp:1142
                return (Uh_5tlval43052); //gcnl:NodeReturnStatement.cpp:343
            } // end if
          }

//! ByteStream.ulam:108:       writeByte((ASCII) ch);
          const u32 Uh_5tlreg43055 = Uv_2ch.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43056 = _Int32ToUnsigned32(Uh_5tlreg43055, 32, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181u<EC> Uh_5tlval43057(Uh_5tlreg43056); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp43058 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43059 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp43058)) (uc, ur, Uh_5tlval43057); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43060 = Uh_5tlval43059.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
Ul_214endcontrolloop222:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
        const u32 Uh_5tlreg43061 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43062 = _Int32ToUnsigned32(Uh_5tlreg43061, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43064 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43065 = _BinOpAddUnsigned32(Uh_5tlreg43064, Uh_5tlreg43062, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg43065); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:110:     return max;
    const u32 Uh_5tlreg43067 = Uv_3max.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval43068(Uh_5tlreg43067); //gcnl:Node.cpp:1142
    return (Uh_5tlval43068); //gcnl:NodeReturnStatement.cpp:343

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

