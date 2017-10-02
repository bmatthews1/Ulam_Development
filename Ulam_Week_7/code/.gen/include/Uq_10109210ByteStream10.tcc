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
    UlamRef<EC> Uh_3tur43070(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg43071 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval43072(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43071), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43071)); //gcnl:Node.cpp:1142
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur43070, Uh_5tlval43072); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:20:     return -3;
    const u32 Uh_5tlreg43074 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43075 = _Int32ToInt32(Uh_5tlreg43074, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval43076(Uh_5tlreg43075); //gcnl:Node.cpp:1142
    return (Uh_5tlval43076); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8readByte



//! ByteStream.ulam:36:   virtual Int writeByte(ASCII x) 
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10109210ByteStream10<EC>::Uf_919writeByte(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_1x)
  {

//! ByteStream.ulam:38:     Fail f;
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:39:     f.fail("UNSUPPORTED_OPERATION");
    UlamRef<EC> Uh_3tur43078(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg43079 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval43080(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43079), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43079)); //gcnl:Node.cpp:1142
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur43078, Uh_5tlval43080); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:40:     return -3;
    const u32 Uh_5tlreg43082 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43083 = _Int32ToInt32(Uh_5tlreg43082, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval43084(Uh_5tlreg43083); //gcnl:Node.cpp:1142
    return (Uh_5tlval43084); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919writeByte



//! ByteStream.ulam:49:   Self & print(String s)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s) const
  {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
    {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      const u32 Uh_5tlreg43085 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43086 = _Int32ToUnsigned32(Uh_5tlreg43085, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg43086); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      while(true)
      {
        const u32 Uh_5tlreg43088 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43089 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43088))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43088)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg43091 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43092 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43091, Uh_5tlreg43089, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg43092, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:52:     {
        {

//! ByteStream.ulam:53:       ASCII a = s[i];
          const u32 Uh_5tlreg43094 = Uv_1i.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43096 = Uv_1s.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43097 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43096))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43096)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg43094 >= Uh_5tlreg43097) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg43098 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43096))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43096)) + Uh_5tlreg43094); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uv_1a(Uh_5tlreg43098); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:54:       writeByte(a);
          const u32 Uh_5tlreg43101 = Uv_1a.read(); //gcnl:Node.cpp:698
          Ui_Ut_10181u<EC> Uh_5tlval43102(Uh_5tlreg43101); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp43103 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43104 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp43103)) (uc, ur, Uh_5tlval43102); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43105 = Uh_5tlval43104.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
Ul_214endcontrolloop220:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
        const u32 Uh_5tlreg43106 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43107 = _Int32ToUnsigned32(Uh_5tlreg43106, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43109 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43110 = _BinOpAddUnsigned32(Uh_5tlreg43109, Uh_5tlreg43107, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg43110); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:56:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43112(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref43112); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:85:   Self & print(Int n)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1n) const
  {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
    {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
      const u64 Uh_5tlreg43113 = (u64) HexU64(0xffffffff, 0x80000000); //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43115 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u64 Uh_5tlreg43116 = _Int64ToInt64(Uh_5tlreg43115, 32, 33); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43117 = _BinOpCompareEqEqInt64(Uh_5tlreg43116, Uh_5tlreg43113, 33); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43117, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
          const u32 Uh_5tlreg43119 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 65u); //user string pool index for "-2147483648"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval43120(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43119), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43119)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval43122 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval43120); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval43122.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43123(Uh_5tlval43122, 0u, Uh_5tlval43122.GetEffectiveSelf()); //gcnl:Node.cpp:1510
          return (Uh_6tlref43123); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:88:     if (n < 0) { 
    {

//! ByteStream.ulam:88:     if (n < 0) { 
      const u32 Uh_5tlreg43124 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43125 = _Int32ToInt32(Uh_5tlreg43124, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43127 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg43128 = _BinOpCompareLessThanInt32(Uh_5tlreg43127, Uh_5tlreg43125, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43128, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:89:       print("-");
          const u32 Uh_5tlreg43130 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 78u); //user string pool index for "-"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval43131(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43130), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43130)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval43133 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval43131); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:90:       n = -n;
          const u32 Uh_5tlreg43135 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43136 = _UnaryMinusInt32(Uh_5tlreg43135, 32); //gcnl:NodeUnaryOp.cpp:507
          Uv_1n.write(Uh_5tlreg43136); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! ByteStream.ulam:92:     return print((Unsigned) n, 10u);
    const u32 Uh_5tlreg43140 = Uv_1n.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg43141 = _Int32ToUnsigned32(Uh_5tlreg43140, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval43142(Uh_5tlreg43141); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg43143 = 10u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43144 = _Unsigned32ToUnsigned32(Uh_5tlreg43143, 4, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval43145(Uh_5tlreg43144); //gcnl:Node.cpp:1142
    Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval43147 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval43142, Uh_5tlval43145); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tlval43147.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43148(Uh_5tlval43147, 0u, Uh_5tlval43147.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref43148); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:67:   Self & print(Unsigned n, Unsigned base)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_1n, Ui_Ut_102321u<EC>& Uv_4base) const
  {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
    {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
      const u32 Uh_5tlreg43149 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43150 = _Unsigned32ToUnsigned32(Uh_5tlreg43149, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43152 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg43153 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43152, Uh_5tlreg43150, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43153, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
          const u32 Uh_5tlreg43155 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 24u); //user string pool index for "0"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval43156(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43155), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43155)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval43158 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval43156); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval43158.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43159(Uh_5tlval43158, 0u, Uh_5tlval43158.GetEffectiveSelf()); //gcnl:Node.cpp:1510
          return (Uh_6tlref43159); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
    {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
      const u32 Uh_5tlreg43160 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43161 = _Unsigned32ToUnsigned32(Uh_5tlreg43160, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43163 = Uv_4base.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg43164 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43163, Uh_5tlreg43161, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43164, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
          const u32 Uh_5tlreg43165 = 10u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg43166 = _Unsigned32ToUnsigned32(Uh_5tlreg43165, 4, 32); //gcnl:NodeCast.cpp:748
          Uv_4base.write(Uh_5tlreg43166); //gcnl:Node.cpp:892
      } // end if
    }

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
    {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
      const u32 Uh_5tlreg43168 = 2u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43169 = _Unsigned32ToUnsigned32(Uh_5tlreg43168, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43171 = Uv_4base.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg43172 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43171, Uh_5tlreg43169, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43172, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          UlamRef<EC> Uh_3tur43174(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur43174); //gcnl:NodeFunctionCall.cpp:1043
        }
      } // end if
    }

//! ByteStream.ulam:75:     String c = "0123456789abcdefghijklmnopqrstuvwxyz";
    const u32 Uh_5tlreg43176 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 27u); //user string pool index for "0123456789abcdefghijklmnopqrstuvwxyz"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uv_1c(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43176), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43176)); //gcnl:NodeVarDecl.cpp:1071

//! ByteStream.ulam:76:     while (n != 0u) {
    {

//! ByteStream.ulam:76:     while (n != 0u) {
      while(true)
      {
        const u32 Uh_5tlreg43177 = 0u; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43178 = _Unsigned32ToUnsigned32(Uh_5tlreg43177, 1, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43180 = Uv_1n.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43181 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg43180, Uh_5tlreg43178, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg43181, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:76:     while (n != 0u) {
        {

//! ByteStream.ulam:77:       Unsigned d = n % base;
          const u32 Uh_5tlreg43183 = Uv_4base.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43185 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43186 = _BinOpModUnsigned32(Uh_5tlreg43185, Uh_5tlreg43183, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_1d(Uh_5tlreg43186); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:78:       n = n/base;
          const u32 Uh_5tlreg43188 = Uv_4base.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43190 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43191 = _BinOpDivideUnsigned32(Uh_5tlreg43190, Uh_5tlreg43188, 32); //gcnl:NodeBinaryOp.cpp:805
          Uv_1n.write(Uh_5tlreg43191); //gcnl:Node.cpp:892

//! ByteStream.ulam:79:       writeByte(c[d]);
          const u32 Uh_5tlreg43195 = Uv_1d.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43197 = Uv_1c.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43198 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43197))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43197)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg43195 >= Uh_5tlreg43198) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg43199 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43197))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43197)) + Uh_5tlreg43195); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval43200(Uh_5tlreg43199); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp43201 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43202 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp43201)) (uc, ur, Uh_5tlval43200); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43203 = Uh_5tlval43202.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:76:     while (n != 0u) {
Ul_214endcontrolloop221:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:82:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43205(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref43205); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:59:   Self & print(Bool b)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10111b<EC>& Uv_1b) const
  {

//! ByteStream.ulam:61:     ASCII ch = '0';
    const u32 Uh_5tlreg43206 = 48u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10181u<EC> Uv_2ch(Uh_5tlreg43206); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:62:     if (b) ch = '1';
    {

//! ByteStream.ulam:62:     if (b) ch = '1';
      const u32 Uh_5tlreg43208 = Uv_1b.read(); //gcnl:Node.cpp:698
      if(_Bool32ToCbool(Uh_5tlreg43208, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:62:     if (b) ch = '1';
          const u32 Uh_5tlreg43209 = 49u; //gcnl:NodeTerminal.cpp:690
          Uv_2ch.write(Uh_5tlreg43209); //gcnl:Node.cpp:892
      } // end if
    }

//! ByteStream.ulam:63:     writeByte(ch);
    const u32 Uh_5tlreg43213 = Uv_2ch.read(); //gcnl:Node.cpp:698
    Ui_Ut_10181u<EC> Uh_5tlval43214(Uh_5tlreg43213); //gcnl:Node.cpp:1142
    VfuncPtr Uf_tvfp43215 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321i<EC> Uh_5tlval43216 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp43215)) (uc, ur, Uh_5tlval43214); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg43217 = Uh_5tlval43216.read(); //gcnl:Node.cpp:1170

//! ByteStream.ulam:64:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43219(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref43219); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:113:   virtual Self & writeBytes(String s) 
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s)
  {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
    {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      const u32 Uh_5tlreg43220 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43221 = _Int32ToUnsigned32(Uh_5tlreg43220, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg43221); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      while(true)
      {
        const u32 Uh_5tlreg43223 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43224 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43223))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43223)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg43226 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43227 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43226, Uh_5tlreg43224, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg43227, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:116:       writeByte(s[i]);

//! ByteStream.ulam:116:       writeByte(s[i]);
          const u32 Uh_5tlreg43230 = Uv_1i.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43232 = Uv_1s.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43233 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43232))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43232)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg43230 >= Uh_5tlreg43233) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg43234 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43232))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43232)) + Uh_5tlreg43230); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval43235(Uh_5tlreg43234); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp43236 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43237 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp43236)) (uc, ur, Uh_5tlval43235); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43238 = Uh_5tlval43237.read(); //gcnl:Node.cpp:1170

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
Ul_214endcontrolloop223:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
        const u32 Uh_5tlreg43239 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43240 = _Int32ToUnsigned32(Uh_5tlreg43239, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43242 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43243 = _BinOpAddUnsigned32(Uh_5tlreg43242, Uh_5tlreg43240, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg43243); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:117:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43245(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref43245); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9210writeBytes



//! ByteStream.ulam:95:   virtual Unsigned writeBytes(ByteStream & r)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r)
  {

//! ByteStream.ulam:97:     return writeBytes(r, Unsigned.maxof);
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43248(Ur_1r, 0u, Ur_1r.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    const u32 Uh_5tlreg43249 = 4294967295u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval43250(Uh_5tlreg43249); //gcnl:Node.cpp:1142
    VfuncPtr Uf_tvfp43251 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_9210writeBytes12r10109210ByteStream10102321u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321u<EC> Uh_5tlval43252 = ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes12r10109210ByteStream10102321u) (Uf_tvfp43251)) (uc, ur, Uh_6tlref43248, Uh_5tlval43250); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg43253 = Uh_5tlval43252.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval43254(Uh_5tlreg43253); //gcnl:Node.cpp:1142
    return (Uh_5tlval43254); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210writeBytes



//! ByteStream.ulam:100:   virtual Unsigned writeBytes(ByteStream & r, Unsigned max)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r, Ui_Ut_102321u<EC>& Uv_3max)
  {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
    {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
      UlamRef<EC> Uh_3tur43256(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
      VfuncPtr Uf_tvfp43257 = Uh_3tur43256.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_7canRead10); //gcnl:NodeFunctionCall.cpp:1186
      const Ui_Ut_10111b<EC> Uh_5tlval43258 = ((typename Uq_10109210ByteStream10<EC>::Uf_7canRead10) (Uf_tvfp43257)) (uc, Uh_3tur43256); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg43259 = Uh_5tlval43258.read(); //gcnl:Node.cpp:1170
      const u32 Uh_5tlreg43260 = _LogicalBangBool32(Uh_5tlreg43259, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg43260, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
          const u32 Uh_5tlreg43261 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg43262 = _Int32ToUnsigned32(Uh_5tlreg43261, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval43263(Uh_5tlreg43262); //gcnl:Node.cpp:1142
          return (Uh_5tlval43263); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
    {

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      const u32 Uh_5tlreg43264 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43265 = _Int32ToUnsigned32(Uh_5tlreg43264, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg43265); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      while(true)
      {
        const u32 Uh_5tlreg43267 = Uv_3max.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43269 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43270 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43269, Uh_5tlreg43267, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg43270, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:105:     {
        {

//! ByteStream.ulam:106:       Int ch = r.readByte();
          UlamRef<EC> Uh_3tur43272(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
          VfuncPtr Uf_tvfp43273 = Uh_3tur43272.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_8readByte10); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43274 = ((typename Uq_10109210ByteStream10<EC>::Uf_8readByte10) (Uf_tvfp43273)) (uc, Uh_3tur43272); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43275 = Uh_5tlval43274.read(); //gcnl:Node.cpp:1170
          Ui_Ut_102321i<EC> Uv_2ch(Uh_5tlreg43275); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:107:       if (ch < 0) return i;
          {

//! ByteStream.ulam:107:       if (ch < 0) return i;
            const u32 Uh_5tlreg43276 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg43277 = _Int32ToInt32(Uh_5tlreg43276, 2, 32); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg43279 = Uv_2ch.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg43280 = _BinOpCompareLessThanInt32(Uh_5tlreg43279, Uh_5tlreg43277, 32); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg43280, 1)) //gcnl:NodeControl.cpp:213
            {

//! ByteStream.ulam:107:       if (ch < 0) return i;
                const u32 Uh_5tlreg43282 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_102321u<EC> Uh_5tlval43283(Uh_5tlreg43282); //gcnl:Node.cpp:1142
                return (Uh_5tlval43283); //gcnl:NodeReturnStatement.cpp:343
            } // end if
          }

//! ByteStream.ulam:108:       writeByte((ASCII) ch);
          const u32 Uh_5tlreg43286 = Uv_2ch.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg43287 = _Int32ToUnsigned32(Uh_5tlreg43286, 32, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181u<EC> Uh_5tlval43288(Uh_5tlreg43287); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp43289 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43290 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp43289)) (uc, ur, Uh_5tlval43288); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43291 = Uh_5tlval43290.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
Ul_214endcontrolloop222:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
        const u32 Uh_5tlreg43292 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43293 = _Int32ToUnsigned32(Uh_5tlreg43292, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43295 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg43296 = _BinOpAddUnsigned32(Uh_5tlreg43295, Uh_5tlreg43293, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg43296); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:110:     return max;
    const u32 Uh_5tlreg43298 = Uv_3max.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval43299(Uh_5tlreg43298); //gcnl:Node.cpp:1142
    return (Uh_5tlval43299); //gcnl:NodeReturnStatement.cpp:343

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

