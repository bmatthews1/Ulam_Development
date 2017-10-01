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


//! ByteStream.ulam:49:   Self & print(String s)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s) const
  {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
    {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      const u32 Uh_5tlreg43372 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43373 = _Int32ToUnsigned32(Uh_5tlreg43372, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg43373); //gcnl:NodeVarDecl.cpp:1095

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      while(true)
      {
        const u32 Uh_5tlreg43375 = Uv_1s.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43376 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43375))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43375)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg43378 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43379 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43378, Uh_5tlreg43376, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg43379, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:52:     {
        {

//! ByteStream.ulam:53:       ASCII a = s[i];
          const u32 Uh_5tlreg43381 = Uv_1i.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg43383 = Uv_1s.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg43384 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43383))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43383)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg43381 >= Uh_5tlreg43384) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg43385 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43383))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43383)) + Uh_5tlreg43381); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uv_1a(Uh_5tlreg43385); //gcnl:NodeVarDecl.cpp:1095

//! ByteStream.ulam:54:       writeByte(a);
          const u32 Uh_5tlreg43388 = Uv_1a.read(); //gcnl:Node.cpp:704
          Ui_Ut_10181u<EC> Uh_5tlval43389(Uh_5tlreg43388); //gcnl:Node.cpp:1148
          VfuncPtr Uf_tvfp43390 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43391 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp43390)) (uc, ur, Uh_5tlval43389); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43392 = Uh_5tlval43391.read(); //gcnl:Node.cpp:1176
        }

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
Ul_214endcontrolloop238:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
        const u32 Uh_5tlreg43393 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43394 = _Int32ToUnsigned32(Uh_5tlreg43393, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43396 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43397 = _BinOpAddUnsigned32(Uh_5tlreg43396, Uh_5tlreg43394, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg43397); //gcnl:Node.cpp:898
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:56:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43399(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1516
    return (Uh_6tlref43399); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:85:   Self & print(Int n)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1n) const
  {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
    {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
      const u64 Uh_5tlreg43400 = (u64) HexU64(0xffffffff, 0x80000000); //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43402 = Uv_1n.read(); //gcnl:Node.cpp:704
      const u64 Uh_5tlreg43403 = _Int64ToInt64(Uh_5tlreg43402, 32, 33); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43404 = _BinOpCompareEqEqInt64(Uh_5tlreg43403, Uh_5tlreg43400, 33); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43404, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
          const u32 Uh_5tlreg43406 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 65u); //user string pool index for "-2147483648"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval43407(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43406), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43406)); //gcnl:Node.cpp:1148
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval43409 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval43407); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval43409.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43410(Uh_5tlval43409, 0u, Uh_5tlval43409.GetEffectiveSelf()); //gcnl:Node.cpp:1516
          return (Uh_6tlref43410); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:88:     if (n < 0) { 
    {

//! ByteStream.ulam:88:     if (n < 0) { 
      const u32 Uh_5tlreg43411 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43412 = _Int32ToInt32(Uh_5tlreg43411, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43414 = Uv_1n.read(); //gcnl:Node.cpp:704
      const u32 Uh_5tlreg43415 = _BinOpCompareLessThanInt32(Uh_5tlreg43414, Uh_5tlreg43412, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43415, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:89:       print("-");
          const u32 Uh_5tlreg43417 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 78u); //user string pool index for "-"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval43418(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43417), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43417)); //gcnl:Node.cpp:1148
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval43420 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval43418); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:90:       n = -n;
          const u32 Uh_5tlreg43422 = Uv_1n.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg43423 = _UnaryMinusInt32(Uh_5tlreg43422, 32); //gcnl:NodeUnaryOp.cpp:507
          Uv_1n.write(Uh_5tlreg43423); //gcnl:Node.cpp:898
        }
      } // end if
    }

//! ByteStream.ulam:92:     return print((Unsigned) n, 10u);
    const u32 Uh_5tlreg43427 = Uv_1n.read(); //gcnl:Node.cpp:704
    const u32 Uh_5tlreg43428 = _Int32ToUnsigned32(Uh_5tlreg43427, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval43429(Uh_5tlreg43428); //gcnl:Node.cpp:1148
    const u32 Uh_5tlreg43430 = 10u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43431 = _Unsigned32ToUnsigned32(Uh_5tlreg43430, 4, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval43432(Uh_5tlreg43431); //gcnl:Node.cpp:1148
    Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval43434 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval43429, Uh_5tlval43432); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tlval43434.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43435(Uh_5tlval43434, 0u, Uh_5tlval43434.GetEffectiveSelf()); //gcnl:Node.cpp:1516
    return (Uh_6tlref43435); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:67:   Self & print(Unsigned n, Unsigned base)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_1n, Ui_Ut_102321u<EC>& Uv_4base) const
  {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
    {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
      const u32 Uh_5tlreg43436 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43437 = _Unsigned32ToUnsigned32(Uh_5tlreg43436, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43439 = Uv_1n.read(); //gcnl:Node.cpp:704
      const u32 Uh_5tlreg43440 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43439, Uh_5tlreg43437, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43440, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
          const u32 Uh_5tlreg43442 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 24u); //user string pool index for "0"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval43443(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43442), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43442)); //gcnl:Node.cpp:1148
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval43445 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval43443); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval43445.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43446(Uh_5tlval43445, 0u, Uh_5tlval43445.GetEffectiveSelf()); //gcnl:Node.cpp:1516
          return (Uh_6tlref43446); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
    {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
      const u32 Uh_5tlreg43447 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43448 = _Unsigned32ToUnsigned32(Uh_5tlreg43447, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43450 = Uv_4base.read(); //gcnl:Node.cpp:704
      const u32 Uh_5tlreg43451 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43450, Uh_5tlreg43448, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43451, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
          const u32 Uh_5tlreg43452 = 10u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg43453 = _Unsigned32ToUnsigned32(Uh_5tlreg43452, 4, 32); //gcnl:NodeCast.cpp:748
          Uv_4base.write(Uh_5tlreg43453); //gcnl:Node.cpp:898
      } // end if
    }

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
    {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
      const u32 Uh_5tlreg43455 = 2u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43456 = _Unsigned32ToUnsigned32(Uh_5tlreg43455, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43458 = Uv_4base.read(); //gcnl:Node.cpp:704
      const u32 Uh_5tlreg43459 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43458, Uh_5tlreg43456, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43459, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1132

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          UlamRef<EC> Uh_3tur43461(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur43461); //gcnl:NodeFunctionCall.cpp:1043
        }
      } // end if
    }

//! ByteStream.ulam:75:     String c = "0123456789abcdefghijklmnopqrstuvwxyz";
    const u32 Uh_5tlreg43463 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 27u); //user string pool index for "0123456789abcdefghijklmnopqrstuvwxyz"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uv_1c(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43463), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43463)); //gcnl:NodeVarDecl.cpp:1085

//! ByteStream.ulam:76:     while (n != 0u) {
    {

//! ByteStream.ulam:76:     while (n != 0u) {
      while(true)
      {
        const u32 Uh_5tlreg43464 = 0u; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43465 = _Unsigned32ToUnsigned32(Uh_5tlreg43464, 1, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43467 = Uv_1n.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43468 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg43467, Uh_5tlreg43465, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg43468, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:76:     while (n != 0u) {
        {

//! ByteStream.ulam:77:       Unsigned d = n % base;
          const u32 Uh_5tlreg43470 = Uv_4base.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg43472 = Uv_1n.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg43473 = _BinOpModUnsigned32(Uh_5tlreg43472, Uh_5tlreg43470, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_1d(Uh_5tlreg43473); //gcnl:NodeVarDecl.cpp:1095

//! ByteStream.ulam:78:       n = n/base;
          const u32 Uh_5tlreg43475 = Uv_4base.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg43477 = Uv_1n.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg43478 = _BinOpDivideUnsigned32(Uh_5tlreg43477, Uh_5tlreg43475, 32); //gcnl:NodeBinaryOp.cpp:805
          Uv_1n.write(Uh_5tlreg43478); //gcnl:Node.cpp:898

//! ByteStream.ulam:79:       writeByte(c[d]);
          const u32 Uh_5tlreg43482 = Uv_1d.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg43484 = Uv_1c.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg43485 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43484))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43484)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg43482 >= Uh_5tlreg43485) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg43486 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43484))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43484)) + Uh_5tlreg43482); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval43487(Uh_5tlreg43486); //gcnl:Node.cpp:1148
          VfuncPtr Uf_tvfp43488 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43489 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp43488)) (uc, ur, Uh_5tlval43487); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43490 = Uh_5tlval43489.read(); //gcnl:Node.cpp:1176
        }

//! ByteStream.ulam:76:     while (n != 0u) {
Ul_214endcontrolloop239:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:82:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43492(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1516
    return (Uh_6tlref43492); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:59:   Self & print(Bool b)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10111b<EC>& Uv_1b) const
  {

//! ByteStream.ulam:61:     ASCII ch = '0';
    const u32 Uh_5tlreg43493 = 48u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10181u<EC> Uv_2ch(Uh_5tlreg43493); //gcnl:NodeVarDecl.cpp:1095

//! ByteStream.ulam:62:     if (b) ch = '1';
    {

//! ByteStream.ulam:62:     if (b) ch = '1';
      const u32 Uh_5tlreg43495 = Uv_1b.read(); //gcnl:Node.cpp:704
      if(_Bool32ToCbool(Uh_5tlreg43495, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:62:     if (b) ch = '1';
          const u32 Uh_5tlreg43496 = 49u; //gcnl:NodeTerminal.cpp:690
          Uv_2ch.write(Uh_5tlreg43496); //gcnl:Node.cpp:898
      } // end if
    }

//! ByteStream.ulam:63:     writeByte(ch);
    const u32 Uh_5tlreg43500 = Uv_2ch.read(); //gcnl:Node.cpp:704
    Ui_Ut_10181u<EC> Uh_5tlval43501(Uh_5tlreg43500); //gcnl:Node.cpp:1148
    VfuncPtr Uf_tvfp43502 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321i<EC> Uh_5tlval43503 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp43502)) (uc, ur, Uh_5tlval43501); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg43504 = Uh_5tlval43503.read(); //gcnl:Node.cpp:1176

//! ByteStream.ulam:64:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43506(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1516
    return (Uh_6tlref43506); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:16:   virtual Int readByte() 
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10109210ByteStream10<EC>::Uf_8readByte(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! ByteStream.ulam:18:     Fail f;
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1132

//! ByteStream.ulam:19:     f.fail("UNSUPPORTED_OPERATION");
    UlamRef<EC> Uh_3tur43508(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg43509 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval43510(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43509), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43509)); //gcnl:Node.cpp:1148
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur43508, Uh_5tlval43510); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:20:     return -3;
    const u32 Uh_5tlreg43512 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43513 = _Int32ToInt32(Uh_5tlreg43512, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval43514(Uh_5tlreg43513); //gcnl:Node.cpp:1148
    return (Uh_5tlval43514); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8readByte



//! ByteStream.ulam:36:   virtual Int writeByte(ASCII x) 
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10109210ByteStream10<EC>::Uf_919writeByte(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_1x)
  {

//! ByteStream.ulam:38:     Fail f;
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1132

//! ByteStream.ulam:39:     f.fail("UNSUPPORTED_OPERATION");
    UlamRef<EC> Uh_3tur43516(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg43517 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval43518(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43517), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43517)); //gcnl:Node.cpp:1148
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur43516, Uh_5tlval43518); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:40:     return -3;
    const u32 Uh_5tlreg43520 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43521 = _Int32ToInt32(Uh_5tlreg43520, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval43522(Uh_5tlreg43521); //gcnl:Node.cpp:1148
    return (Uh_5tlval43522); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919writeByte



//! ByteStream.ulam:113:   virtual Self & writeBytes(String s) 
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s)
  {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
    {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      const u32 Uh_5tlreg43523 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43524 = _Int32ToUnsigned32(Uh_5tlreg43523, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg43524); //gcnl:NodeVarDecl.cpp:1095

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      while(true)
      {
        const u32 Uh_5tlreg43526 = Uv_1s.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43527 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43526))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43526)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg43529 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43530 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43529, Uh_5tlreg43527, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg43530, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:116:       writeByte(s[i]);

//! ByteStream.ulam:116:       writeByte(s[i]);
          const u32 Uh_5tlreg43533 = Uv_1i.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg43535 = Uv_1s.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg43536 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43535))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43535)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg43533 >= Uh_5tlreg43536) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg43537 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43535))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43535)) + Uh_5tlreg43533); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval43538(Uh_5tlreg43537); //gcnl:Node.cpp:1148
          VfuncPtr Uf_tvfp43539 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43540 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp43539)) (uc, ur, Uh_5tlval43538); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43541 = Uh_5tlval43540.read(); //gcnl:Node.cpp:1176

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
Ul_214endcontrolloop241:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
        const u32 Uh_5tlreg43542 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43543 = _Int32ToUnsigned32(Uh_5tlreg43542, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43545 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43546 = _BinOpAddUnsigned32(Uh_5tlreg43545, Uh_5tlreg43543, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg43546); //gcnl:Node.cpp:898
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:117:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43548(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1516
    return (Uh_6tlref43548); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9210writeBytes



//! ByteStream.ulam:95:   virtual Unsigned writeBytes(ByteStream & r)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r)
  {

//! ByteStream.ulam:97:     return writeBytes(r, Unsigned.maxof);
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43551(Ur_1r, 0u, Ur_1r.GetEffectiveSelf()); //gcnl:Node.cpp:1516
    const u32 Uh_5tlreg43552 = 4294967295u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval43553(Uh_5tlreg43552); //gcnl:Node.cpp:1148
    VfuncPtr Uf_tvfp43554 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_9210writeBytes12r10109210ByteStream10102321u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321u<EC> Uh_5tlval43555 = ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes12r10109210ByteStream10102321u) (Uf_tvfp43554)) (uc, ur, Uh_6tlref43551, Uh_5tlval43553); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg43556 = Uh_5tlval43555.read(); //gcnl:Node.cpp:1176
    Ui_Ut_102321u<EC> Uh_5tlval43557(Uh_5tlreg43556); //gcnl:Node.cpp:1148
    return (Uh_5tlval43557); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210writeBytes



//! ByteStream.ulam:100:   virtual Unsigned writeBytes(ByteStream & r, Unsigned max)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r, Ui_Ut_102321u<EC>& Uv_3max)
  {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
    {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
      UlamRef<EC> Uh_3tur43559(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
      VfuncPtr Uf_tvfp43560 = Uh_3tur43559.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_7canRead10); //gcnl:NodeFunctionCall.cpp:1186
      const Ui_Ut_10111b<EC> Uh_5tlval43561 = ((typename Uq_10109210ByteStream10<EC>::Uf_7canRead10) (Uf_tvfp43560)) (uc, Uh_3tur43559); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg43562 = Uh_5tlval43561.read(); //gcnl:Node.cpp:1176
      const u32 Uh_5tlreg43563 = _LogicalBangBool32(Uh_5tlreg43562, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg43563, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
          const u32 Uh_5tlreg43564 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg43565 = _Int32ToUnsigned32(Uh_5tlreg43564, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval43566(Uh_5tlreg43565); //gcnl:Node.cpp:1148
          return (Uh_5tlval43566); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
    {

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      const u32 Uh_5tlreg43567 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43568 = _Int32ToUnsigned32(Uh_5tlreg43567, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg43568); //gcnl:NodeVarDecl.cpp:1095

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      while(true)
      {
        const u32 Uh_5tlreg43570 = Uv_3max.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43572 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43573 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43572, Uh_5tlreg43570, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg43573, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:105:     {
        {

//! ByteStream.ulam:106:       Int ch = r.readByte();
          UlamRef<EC> Uh_3tur43575(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
          VfuncPtr Uf_tvfp43576 = Uh_3tur43575.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_8readByte10); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43577 = ((typename Uq_10109210ByteStream10<EC>::Uf_8readByte10) (Uf_tvfp43576)) (uc, Uh_3tur43575); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43578 = Uh_5tlval43577.read(); //gcnl:Node.cpp:1176
          Ui_Ut_102321i<EC> Uv_2ch(Uh_5tlreg43578); //gcnl:NodeVarDecl.cpp:1095

//! ByteStream.ulam:107:       if (ch < 0) return i;
          {

//! ByteStream.ulam:107:       if (ch < 0) return i;
            const u32 Uh_5tlreg43579 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg43580 = _Int32ToInt32(Uh_5tlreg43579, 2, 32); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg43582 = Uv_2ch.read(); //gcnl:Node.cpp:704
            const u32 Uh_5tlreg43583 = _BinOpCompareLessThanInt32(Uh_5tlreg43582, Uh_5tlreg43580, 32); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg43583, 1)) //gcnl:NodeControl.cpp:213
            {

//! ByteStream.ulam:107:       if (ch < 0) return i;
                const u32 Uh_5tlreg43585 = Uv_1i.read(); //gcnl:Node.cpp:704
                Ui_Ut_102321u<EC> Uh_5tlval43586(Uh_5tlreg43585); //gcnl:Node.cpp:1148
                return (Uh_5tlval43586); //gcnl:NodeReturnStatement.cpp:343
            } // end if
          }

//! ByteStream.ulam:108:       writeByte((ASCII) ch);
          const u32 Uh_5tlreg43589 = Uv_2ch.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg43590 = _Int32ToUnsigned32(Uh_5tlreg43589, 32, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181u<EC> Uh_5tlval43591(Uh_5tlreg43590); //gcnl:Node.cpp:1148
          VfuncPtr Uf_tvfp43592 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval43593 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp43592)) (uc, ur, Uh_5tlval43591); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg43594 = Uh_5tlval43593.read(); //gcnl:Node.cpp:1176
        }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
Ul_214endcontrolloop240:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
        const u32 Uh_5tlreg43595 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43596 = _Int32ToUnsigned32(Uh_5tlreg43595, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43598 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43599 = _BinOpAddUnsigned32(Uh_5tlreg43598, Uh_5tlreg43596, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg43599); //gcnl:Node.cpp:898
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:110:     return max;
    const u32 Uh_5tlreg43601 = Uv_3max.read(); //gcnl:Node.cpp:704
    Ui_Ut_102321u<EC> Uh_5tlval43602(Uh_5tlreg43601); //gcnl:Node.cpp:1148
    return (Uh_5tlval43602); //gcnl:NodeReturnStatement.cpp:343

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

