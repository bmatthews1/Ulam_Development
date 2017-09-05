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
    UlamRef<EC> Uh_3tur42101(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42102 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval42103(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42102), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42102)); //gcnl:Node.cpp:1142
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur42101, Uh_5tlval42103); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:20:     return -3;
    const u32 Uh_5tlreg42105 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42106 = _Int32ToInt32(Uh_5tlreg42105, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval42107(Uh_5tlreg42106); //gcnl:Node.cpp:1142
    return (Uh_5tlval42107); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8readByte



//! ByteStream.ulam:36:   virtual Int writeByte(ASCII x) 
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10109210ByteStream10<EC>::Uf_919writeByte(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_1x)
  {

//! ByteStream.ulam:38:     Fail f;
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:39:     f.fail("UNSUPPORTED_OPERATION");
    UlamRef<EC> Uh_3tur42109(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42110 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval42111(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42110), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42110)); //gcnl:Node.cpp:1142
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur42109, Uh_5tlval42111); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:40:     return -3;
    const u32 Uh_5tlreg42113 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42114 = _Int32ToInt32(Uh_5tlreg42113, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval42115(Uh_5tlreg42114); //gcnl:Node.cpp:1142
    return (Uh_5tlval42115); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919writeByte



//! ByteStream.ulam:49:   Self & print(String s)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s) const
  {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
    {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      const u32 Uh_5tlreg42116 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42117 = _Int32ToUnsigned32(Uh_5tlreg42116, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg42117); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      while(true)
      {
        const u32 Uh_5tlreg42119 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42120 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42119))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42119)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg42122 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42123 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42122, Uh_5tlreg42120, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42123, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:52:     {
        {

//! ByteStream.ulam:53:       ASCII a = s[i];
          const u32 Uh_5tlreg42125 = Uv_1i.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42127 = Uv_1s.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42128 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42127))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42127)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg42125 >= Uh_5tlreg42128) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg42129 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42127))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42127)) + Uh_5tlreg42125); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uv_1a(Uh_5tlreg42129); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:54:       writeByte(a);
          const u32 Uh_5tlreg42132 = Uv_1a.read(); //gcnl:Node.cpp:698
          Ui_Ut_10181u<EC> Uh_5tlval42133(Uh_5tlreg42132); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42134 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42135 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42134)) (uc, ur, Uh_5tlval42133); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42136 = Uh_5tlval42135.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
Ul_214endcontrolloop19:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
        const u32 Uh_5tlreg42137 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42138 = _Int32ToUnsigned32(Uh_5tlreg42137, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42140 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42141 = _BinOpAddUnsigned32(Uh_5tlreg42140, Uh_5tlreg42138, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42141); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:56:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42143(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42143); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:85:   Self & print(Int n)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1n) const
  {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
    {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
      const u64 Uh_5tlreg42144 = (u64) HexU64(0xffffffff, 0x80000000); //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42146 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u64 Uh_5tlreg42147 = _Int64ToInt64(Uh_5tlreg42146, 32, 33); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42148 = _BinOpCompareEqEqInt64(Uh_5tlreg42147, Uh_5tlreg42144, 33); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42148, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
          const u32 Uh_5tlreg42150 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 65u); //user string pool index for "-2147483648"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval42151(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42150), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42150)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42153 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42151); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval42153.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42154(Uh_5tlval42153, 0u, Uh_5tlval42153.GetEffectiveSelf()); //gcnl:Node.cpp:1510
          return (Uh_6tlref42154); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:88:     if (n < 0) { 
    {

//! ByteStream.ulam:88:     if (n < 0) { 
      const u32 Uh_5tlreg42155 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42156 = _Int32ToInt32(Uh_5tlreg42155, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42158 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42159 = _BinOpCompareLessThanInt32(Uh_5tlreg42158, Uh_5tlreg42156, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42159, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:89:       print("-");
          const u32 Uh_5tlreg42161 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 78u); //user string pool index for "-"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval42162(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42161), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42161)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42164 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42162); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:90:       n = -n;
          const u32 Uh_5tlreg42166 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42167 = _UnaryMinusInt32(Uh_5tlreg42166, 32); //gcnl:NodeUnaryOp.cpp:507
          Uv_1n.write(Uh_5tlreg42167); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! ByteStream.ulam:92:     return print((Unsigned) n, 10u);
    const u32 Uh_5tlreg42171 = Uv_1n.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42172 = _Int32ToUnsigned32(Uh_5tlreg42171, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42173(Uh_5tlreg42172); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg42174 = 10u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42175 = _Unsigned32ToUnsigned32(Uh_5tlreg42174, 4, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42176(Uh_5tlreg42175); //gcnl:Node.cpp:1142
    Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42178 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42173, Uh_5tlval42176); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tlval42178.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42179(Uh_5tlval42178, 0u, Uh_5tlval42178.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42179); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:67:   Self & print(Unsigned n, Unsigned base)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_1n, Ui_Ut_102321u<EC>& Uv_4base) const
  {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
    {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
      const u32 Uh_5tlreg42180 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42181 = _Unsigned32ToUnsigned32(Uh_5tlreg42180, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42183 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42184 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42183, Uh_5tlreg42181, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42184, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
          const u32 Uh_5tlreg42186 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 24u); //user string pool index for "0"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval42187(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42186), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42186)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42189 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42187); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval42189.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42190(Uh_5tlval42189, 0u, Uh_5tlval42189.GetEffectiveSelf()); //gcnl:Node.cpp:1510
          return (Uh_6tlref42190); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
    {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
      const u32 Uh_5tlreg42191 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42192 = _Unsigned32ToUnsigned32(Uh_5tlreg42191, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42194 = Uv_4base.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42195 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42194, Uh_5tlreg42192, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42195, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
          const u32 Uh_5tlreg42196 = 10u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42197 = _Unsigned32ToUnsigned32(Uh_5tlreg42196, 4, 32); //gcnl:NodeCast.cpp:748
          Uv_4base.write(Uh_5tlreg42197); //gcnl:Node.cpp:892
      } // end if
    }

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
    {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
      const u32 Uh_5tlreg42199 = 2u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42200 = _Unsigned32ToUnsigned32(Uh_5tlreg42199, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42202 = Uv_4base.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42203 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42202, Uh_5tlreg42200, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42203, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          UlamRef<EC> Uh_3tur42205(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur42205); //gcnl:NodeFunctionCall.cpp:1043
        }
      } // end if
    }

//! ByteStream.ulam:75:     String c = "0123456789abcdefghijklmnopqrstuvwxyz";
    const u32 Uh_5tlreg42207 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 27u); //user string pool index for "0123456789abcdefghijklmnopqrstuvwxyz"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uv_1c(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42207), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42207)); //gcnl:NodeVarDecl.cpp:1071

//! ByteStream.ulam:76:     while (n != 0u) {
    {

//! ByteStream.ulam:76:     while (n != 0u) {
      while(true)
      {
        const u32 Uh_5tlreg42208 = 0u; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42209 = _Unsigned32ToUnsigned32(Uh_5tlreg42208, 1, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42211 = Uv_1n.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42212 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg42211, Uh_5tlreg42209, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42212, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:76:     while (n != 0u) {
        {

//! ByteStream.ulam:77:       Unsigned d = n % base;
          const u32 Uh_5tlreg42214 = Uv_4base.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42216 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42217 = _BinOpModUnsigned32(Uh_5tlreg42216, Uh_5tlreg42214, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_1d(Uh_5tlreg42217); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:78:       n = n/base;
          const u32 Uh_5tlreg42219 = Uv_4base.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42221 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42222 = _BinOpDivideUnsigned32(Uh_5tlreg42221, Uh_5tlreg42219, 32); //gcnl:NodeBinaryOp.cpp:805
          Uv_1n.write(Uh_5tlreg42222); //gcnl:Node.cpp:892

//! ByteStream.ulam:79:       writeByte(c[d]);
          const u32 Uh_5tlreg42226 = Uv_1d.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42228 = Uv_1c.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42229 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42228))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42228)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg42226 >= Uh_5tlreg42229) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg42230 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42228))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42228)) + Uh_5tlreg42226); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval42231(Uh_5tlreg42230); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42232 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42233 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42232)) (uc, ur, Uh_5tlval42231); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42234 = Uh_5tlval42233.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:76:     while (n != 0u) {
Ul_214endcontrolloop210:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:82:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42236(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42236); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:59:   Self & print(Bool b)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10111b<EC>& Uv_1b) const
  {

//! ByteStream.ulam:61:     ASCII ch = '0';
    const u32 Uh_5tlreg42237 = 48u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10181u<EC> Uv_2ch(Uh_5tlreg42237); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:62:     if (b) ch = '1';
    {

//! ByteStream.ulam:62:     if (b) ch = '1';
      const u32 Uh_5tlreg42239 = Uv_1b.read(); //gcnl:Node.cpp:698
      if(_Bool32ToCbool(Uh_5tlreg42239, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:62:     if (b) ch = '1';
          const u32 Uh_5tlreg42240 = 49u; //gcnl:NodeTerminal.cpp:690
          Uv_2ch.write(Uh_5tlreg42240); //gcnl:Node.cpp:892
      } // end if
    }

//! ByteStream.ulam:63:     writeByte(ch);
    const u32 Uh_5tlreg42244 = Uv_2ch.read(); //gcnl:Node.cpp:698
    Ui_Ut_10181u<EC> Uh_5tlval42245(Uh_5tlreg42244); //gcnl:Node.cpp:1142
    VfuncPtr Uf_tvfp42246 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321i<EC> Uh_5tlval42247 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42246)) (uc, ur, Uh_5tlval42245); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42248 = Uh_5tlval42247.read(); //gcnl:Node.cpp:1170

//! ByteStream.ulam:64:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42250(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42250); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:113:   virtual Self & writeBytes(String s) 
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s)
  {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
    {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      const u32 Uh_5tlreg42251 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42252 = _Int32ToUnsigned32(Uh_5tlreg42251, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg42252); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42254 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42255 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42254))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42254)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg42257 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42258 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42257, Uh_5tlreg42255, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42258, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:116:       writeByte(s[i]);

//! ByteStream.ulam:116:       writeByte(s[i]);
          const u32 Uh_5tlreg42261 = Uv_1i.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42263 = Uv_1s.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42264 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42263))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42263)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg42261 >= Uh_5tlreg42264) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg42265 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42263))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42263)) + Uh_5tlreg42261); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval42266(Uh_5tlreg42265); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42267 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42268 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42267)) (uc, ur, Uh_5tlval42266); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42269 = Uh_5tlval42268.read(); //gcnl:Node.cpp:1170

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
Ul_214endcontrolloop212:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
        const u32 Uh_5tlreg42270 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42271 = _Int32ToUnsigned32(Uh_5tlreg42270, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42273 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42274 = _BinOpAddUnsigned32(Uh_5tlreg42273, Uh_5tlreg42271, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42274); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:117:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42276(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42276); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9210writeBytes



//! ByteStream.ulam:95:   virtual Unsigned writeBytes(ByteStream & r)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r)
  {

//! ByteStream.ulam:97:     return writeBytes(r, Unsigned.maxof);
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42279(Ur_1r, 0u, Ur_1r.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    const u32 Uh_5tlreg42280 = 4294967295u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval42281(Uh_5tlreg42280); //gcnl:Node.cpp:1142
    VfuncPtr Uf_tvfp42282 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_9210writeBytes12r10109210ByteStream10102321u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321u<EC> Uh_5tlval42283 = ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes12r10109210ByteStream10102321u) (Uf_tvfp42282)) (uc, ur, Uh_6tlref42279, Uh_5tlval42281); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42284 = Uh_5tlval42283.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval42285(Uh_5tlreg42284); //gcnl:Node.cpp:1142
    return (Uh_5tlval42285); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210writeBytes



//! ByteStream.ulam:100:   virtual Unsigned writeBytes(ByteStream & r, Unsigned max)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r, Ui_Ut_102321u<EC>& Uv_3max)
  {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
    {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
      UlamRef<EC> Uh_3tur42287(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
      VfuncPtr Uf_tvfp42288 = Uh_3tur42287.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_7canRead10); //gcnl:NodeFunctionCall.cpp:1186
      const Ui_Ut_10111b<EC> Uh_5tlval42289 = ((typename Uq_10109210ByteStream10<EC>::Uf_7canRead10) (Uf_tvfp42288)) (uc, Uh_3tur42287); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg42290 = Uh_5tlval42289.read(); //gcnl:Node.cpp:1170
      const u32 Uh_5tlreg42291 = _LogicalBangBool32(Uh_5tlreg42290, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg42291, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
          const u32 Uh_5tlreg42292 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42293 = _Int32ToUnsigned32(Uh_5tlreg42292, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval42294(Uh_5tlreg42293); //gcnl:Node.cpp:1142
          return (Uh_5tlval42294); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
    {

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      const u32 Uh_5tlreg42295 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42296 = _Int32ToUnsigned32(Uh_5tlreg42295, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg42296); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42298 = Uv_3max.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42300 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42301 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42300, Uh_5tlreg42298, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42301, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:105:     {
        {

//! ByteStream.ulam:106:       Int ch = r.readByte();
          UlamRef<EC> Uh_3tur42303(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
          VfuncPtr Uf_tvfp42304 = Uh_3tur42303.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_8readByte10); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42305 = ((typename Uq_10109210ByteStream10<EC>::Uf_8readByte10) (Uf_tvfp42304)) (uc, Uh_3tur42303); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42306 = Uh_5tlval42305.read(); //gcnl:Node.cpp:1170
          Ui_Ut_102321i<EC> Uv_2ch(Uh_5tlreg42306); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:107:       if (ch < 0) return i;
          {

//! ByteStream.ulam:107:       if (ch < 0) return i;
            const u32 Uh_5tlreg42307 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42308 = _Int32ToInt32(Uh_5tlreg42307, 2, 32); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42310 = Uv_2ch.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg42311 = _BinOpCompareLessThanInt32(Uh_5tlreg42310, Uh_5tlreg42308, 32); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg42311, 1)) //gcnl:NodeControl.cpp:213
            {

//! ByteStream.ulam:107:       if (ch < 0) return i;
                const u32 Uh_5tlreg42313 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_102321u<EC> Uh_5tlval42314(Uh_5tlreg42313); //gcnl:Node.cpp:1142
                return (Uh_5tlval42314); //gcnl:NodeReturnStatement.cpp:343
            } // end if
          }

//! ByteStream.ulam:108:       writeByte((ASCII) ch);
          const u32 Uh_5tlreg42317 = Uv_2ch.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42318 = _Int32ToUnsigned32(Uh_5tlreg42317, 32, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181u<EC> Uh_5tlval42319(Uh_5tlreg42318); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42320 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42321 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42320)) (uc, ur, Uh_5tlval42319); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42322 = Uh_5tlval42321.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
Ul_214endcontrolloop211:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
        const u32 Uh_5tlreg42323 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42324 = _Int32ToUnsigned32(Uh_5tlreg42323, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42326 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42327 = _BinOpAddUnsigned32(Uh_5tlreg42326, Uh_5tlreg42324, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42327); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:110:     return max;
    const u32 Uh_5tlreg42329 = Uv_3max.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval42330(Uh_5tlreg42329); //gcnl:Node.cpp:1142
    return (Uh_5tlval42330); //gcnl:NodeReturnStatement.cpp:343

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

