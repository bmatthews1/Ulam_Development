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
    UlamRef<EC> Uh_3tur41957(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41958 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval41959(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41958), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41958)); //gcnl:Node.cpp:1142
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur41957, Uh_5tlval41959); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:20:     return -3;
    const u32 Uh_5tlreg41961 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41962 = _Int32ToInt32(Uh_5tlreg41961, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41963(Uh_5tlreg41962); //gcnl:Node.cpp:1142
    return (Uh_5tlval41963); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8readByte



//! ByteStream.ulam:36:   virtual Int writeByte(ASCII x) 
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10109210ByteStream10<EC>::Uf_919writeByte(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_1x)
  {

//! ByteStream.ulam:38:     Fail f;
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:39:     f.fail("UNSUPPORTED_OPERATION");
    UlamRef<EC> Uh_3tur41965(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41966 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 1u); //user string pool index for "UNSUPPORTED_OPERATION"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uh_5tlval41967(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41966), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41966)); //gcnl:Node.cpp:1142
    Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur41965, Uh_5tlval41967); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:40:     return -3;
    const u32 Uh_5tlreg41969 = (u32) -3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41970 = _Int32ToInt32(Uh_5tlreg41969, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41971(Uh_5tlreg41970); //gcnl:Node.cpp:1142
    return (Uh_5tlval41971); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919writeByte



//! ByteStream.ulam:49:   Self & print(String s)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s) const
  {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
    {

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      const u32 Uh_5tlreg41972 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41973 = _Int32ToUnsigned32(Uh_5tlreg41972, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg41973); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
      while(true)
      {
        const u32 Uh_5tlreg41975 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41976 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41975))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41975)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg41978 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41979 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41978, Uh_5tlreg41976, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41979, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:52:     {
        {

//! ByteStream.ulam:53:       ASCII a = s[i];
          const u32 Uh_5tlreg41981 = Uv_1i.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41983 = Uv_1s.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41984 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41983))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41983)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg41981 >= Uh_5tlreg41984) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg41985 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg41983))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg41983)) + Uh_5tlreg41981); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uv_1a(Uh_5tlreg41985); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:54:       writeByte(a);
          const u32 Uh_5tlreg41988 = Uv_1a.read(); //gcnl:Node.cpp:698
          Ui_Ut_10181u<EC> Uh_5tlval41989(Uh_5tlreg41988); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp41990 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval41991 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp41990)) (uc, ur, Uh_5tlval41989); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41992 = Uh_5tlval41991.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
Ul_214endcontrolloop16:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:51:     for (Unsigned i = 0; i < s.lengthof; ++i) 
        const u32 Uh_5tlreg41993 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41994 = _Int32ToUnsigned32(Uh_5tlreg41993, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41996 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41997 = _BinOpAddUnsigned32(Uh_5tlreg41996, Uh_5tlreg41994, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg41997); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:56:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref41999(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41999); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:85:   Self & print(Int n)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1n) const
  {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
    {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
      const u64 Uh_5tlreg42000 = (u64) HexU64(0xffffffff, 0x80000000); //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42002 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u64 Uh_5tlreg42003 = _Int64ToInt64(Uh_5tlreg42002, 32, 33); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42004 = _BinOpCompareEqEqInt64(Uh_5tlreg42003, Uh_5tlreg42000, 33); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42004, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:87:     if (n == -2147483648) return print("-2147483648");
          const u32 Uh_5tlreg42006 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 65u); //user string pool index for "-2147483648"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval42007(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42006), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42006)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42009 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42007); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval42009.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42010(Uh_5tlval42009, 0u, Uh_5tlval42009.GetEffectiveSelf()); //gcnl:Node.cpp:1510
          return (Uh_6tlref42010); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:88:     if (n < 0) { 
    {

//! ByteStream.ulam:88:     if (n < 0) { 
      const u32 Uh_5tlreg42011 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42012 = _Int32ToInt32(Uh_5tlreg42011, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42014 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42015 = _BinOpCompareLessThanInt32(Uh_5tlreg42014, Uh_5tlreg42012, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42015, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:89:       print("-");
          const u32 Uh_5tlreg42017 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 78u); //user string pool index for "-"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval42018(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42017), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42017)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42020 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42018); //gcnl:NodeFunctionCall.cpp:1043

//! ByteStream.ulam:90:       n = -n;
          const u32 Uh_5tlreg42022 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42023 = _UnaryMinusInt32(Uh_5tlreg42022, 32); //gcnl:NodeUnaryOp.cpp:507
          Uv_1n.write(Uh_5tlreg42023); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! ByteStream.ulam:92:     return print((Unsigned) n, 10u);
    const u32 Uh_5tlreg42027 = Uv_1n.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42028 = _Int32ToUnsigned32(Uh_5tlreg42027, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42029(Uh_5tlreg42028); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg42030 = 10u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42031 = _Unsigned32ToUnsigned32(Uh_5tlreg42030, 4, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42032(Uh_5tlreg42031); //gcnl:Node.cpp:1142
    Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42034 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42029, Uh_5tlval42032); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tlval42034.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42035(Uh_5tlval42034, 0u, Uh_5tlval42034.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42035); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:67:   Self & print(Unsigned n, Unsigned base)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_1n, Ui_Ut_102321u<EC>& Uv_4base) const
  {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
    {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
      const u32 Uh_5tlreg42036 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42037 = _Unsigned32ToUnsigned32(Uh_5tlreg42036, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42039 = Uv_1n.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42040 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42039, Uh_5tlreg42037, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42040, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:69:     if (n == 0u) return print("0");
          const u32 Uh_5tlreg42042 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 24u); //user string pool index for "0"; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_102321s<EC> Uh_5tlval42043(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42042), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42042)); //gcnl:Node.cpp:1142
          Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval42045 = THE_INSTANCE.Uf_5print(uc, ur, Uh_5tlval42043); //gcnl:NodeFunctionCall.cpp:1043
          if(_IsLocal((void *) &Uh_5tlval42045.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
            FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
          Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42046(Uh_5tlval42045, 0u, Uh_5tlval42045.GetEffectiveSelf()); //gcnl:Node.cpp:1510
          return (Uh_6tlref42046); //gcnl:NodeReturnStatement.cpp:407
      } // end if
    }

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
    {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
      const u32 Uh_5tlreg42047 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42048 = _Unsigned32ToUnsigned32(Uh_5tlreg42047, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42050 = Uv_4base.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42051 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42050, Uh_5tlreg42048, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42051, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:71:     if (base == 0u) base = 10u;
          const u32 Uh_5tlreg42052 = 10u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42053 = _Unsigned32ToUnsigned32(Uh_5tlreg42052, 4, 32); //gcnl:NodeCast.cpp:748
          Uv_4base.write(Uh_5tlreg42053); //gcnl:Node.cpp:892
      } // end if
    }

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
    {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
      const u32 Uh_5tlreg42055 = 2u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42056 = _Unsigned32ToUnsigned32(Uh_5tlreg42055, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42058 = Uv_4base.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42059 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42058, Uh_5tlreg42056, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42059, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! ByteStream.ulam:73:     if (base < 2u) { Fail f; f.fail(); }
          UlamRef<EC> Uh_3tur42061(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur42061); //gcnl:NodeFunctionCall.cpp:1043
        }
      } // end if
    }

//! ByteStream.ulam:75:     String c = "0123456789abcdefghijklmnopqrstuvwxyz";
    const u32 Uh_5tlreg42063 = Ui_Ut_102321s<EC>::makeCombinedIdx(Uq_10109210ByteStream10<EC>::THE_INSTANCE.GetRegistrationNumber(), 27u); //user string pool index for "0123456789abcdefghijklmnopqrstuvwxyz"; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321s<EC> Uv_1c(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42063), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42063)); //gcnl:NodeVarDecl.cpp:1071

//! ByteStream.ulam:76:     while (n != 0u) {
    {

//! ByteStream.ulam:76:     while (n != 0u) {
      while(true)
      {
        const u32 Uh_5tlreg42064 = 0u; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42065 = _Unsigned32ToUnsigned32(Uh_5tlreg42064, 1, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42067 = Uv_1n.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42068 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg42067, Uh_5tlreg42065, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42068, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:76:     while (n != 0u) {
        {

//! ByteStream.ulam:77:       Unsigned d = n % base;
          const u32 Uh_5tlreg42070 = Uv_4base.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42072 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42073 = _BinOpModUnsigned32(Uh_5tlreg42072, Uh_5tlreg42070, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_1d(Uh_5tlreg42073); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:78:       n = n/base;
          const u32 Uh_5tlreg42075 = Uv_4base.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42077 = Uv_1n.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42078 = _BinOpDivideUnsigned32(Uh_5tlreg42077, Uh_5tlreg42075, 32); //gcnl:NodeBinaryOp.cpp:805
          Uv_1n.write(Uh_5tlreg42078); //gcnl:Node.cpp:892

//! ByteStream.ulam:79:       writeByte(c[d]);
          const u32 Uh_5tlreg42082 = Uv_1d.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42084 = Uv_1c.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42085 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42084))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42084)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg42082 >= Uh_5tlreg42085) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg42086 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42084))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42084)) + Uh_5tlreg42082); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval42087(Uh_5tlreg42086); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42088 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42089 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42088)) (uc, ur, Uh_5tlval42087); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42090 = Uh_5tlval42089.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:76:     while (n != 0u) {
Ul_214endcontrolloop17:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:82:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42092(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42092); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:59:   Self & print(Bool b)
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10111b<EC>& Uv_1b) const
  {

//! ByteStream.ulam:61:     ASCII ch = '0';
    const u32 Uh_5tlreg42093 = 48u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10181u<EC> Uv_2ch(Uh_5tlreg42093); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:62:     if (b) ch = '1';
    {

//! ByteStream.ulam:62:     if (b) ch = '1';
      const u32 Uh_5tlreg42095 = Uv_1b.read(); //gcnl:Node.cpp:698
      if(_Bool32ToCbool(Uh_5tlreg42095, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:62:     if (b) ch = '1';
          const u32 Uh_5tlreg42096 = 49u; //gcnl:NodeTerminal.cpp:690
          Uv_2ch.write(Uh_5tlreg42096); //gcnl:Node.cpp:892
      } // end if
    }

//! ByteStream.ulam:63:     writeByte(ch);
    const u32 Uh_5tlreg42100 = Uv_2ch.read(); //gcnl:Node.cpp:698
    Ui_Ut_10181u<EC> Uh_5tlval42101(Uh_5tlreg42100); //gcnl:Node.cpp:1142
    VfuncPtr Uf_tvfp42102 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321i<EC> Uh_5tlval42103 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42102)) (uc, ur, Uh_5tlval42101); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42104 = Uh_5tlval42103.read(); //gcnl:Node.cpp:1170

//! ByteStream.ulam:64:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42106(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42106); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_5print



//! ByteStream.ulam:113:   virtual Self & writeBytes(String s) 
  template<class EC>
  Ui_Uq_r10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s)
  {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
    {

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      const u32 Uh_5tlreg42107 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42108 = _Int32ToUnsigned32(Uh_5tlreg42107, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg42108); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42110 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42111 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42110))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42110)); //gcnl:NodeTerminalProxy.cpp:455
        const u32 Uh_5tlreg42113 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42114 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42113, Uh_5tlreg42111, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42114, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:116:       writeByte(s[i]);

//! ByteStream.ulam:116:       writeByte(s[i]);
          const u32 Uh_5tlreg42117 = Uv_1i.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42119 = Uv_1s.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42120 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42119))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42119)); //gcnl:NodeSquareBracket.cpp:983
          if(Uh_5tlreg42117 >= Uh_5tlreg42120) //gcnl:NodeSquareBracket.cpp:1014
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
          const unsigned char Uh_5tlreg42121 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg42119))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg42119)) + Uh_5tlreg42117); //gcnl:NodeSquareBracket.cpp:1058
          Ui_Ut_10181u<EC> Uh_5tlval42122(Uh_5tlreg42121); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42123 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42124 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42123)) (uc, ur, Uh_5tlval42122); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42125 = Uh_5tlval42124.read(); //gcnl:Node.cpp:1170

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
Ul_214endcontrolloop19:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:115:     for (Unsigned i = 0; i < s.lengthof; ++i)
        const u32 Uh_5tlreg42126 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42127 = _Int32ToUnsigned32(Uh_5tlreg42126, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42129 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42130 = _BinOpAddUnsigned32(Uh_5tlreg42129, Uh_5tlreg42127, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42130); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:117:     return self;
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42132(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref42132); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9210writeBytes



//! ByteStream.ulam:95:   virtual Unsigned writeBytes(ByteStream & r)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r)
  {

//! ByteStream.ulam:97:     return writeBytes(r, Unsigned.maxof);
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref42135(Ur_1r, 0u, Ur_1r.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    const u32 Uh_5tlreg42136 = 4294967295u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval42137(Uh_5tlreg42136); //gcnl:Node.cpp:1142
    VfuncPtr Uf_tvfp42138 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_9210writeBytes12r10109210ByteStream10102321u); //gcnl:NodeFunctionCall.cpp:1186
    const Ui_Ut_102321u<EC> Uh_5tlval42139 = ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes12r10109210ByteStream10102321u) (Uf_tvfp42138)) (uc, ur, Uh_6tlref42135, Uh_5tlval42137); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42140 = Uh_5tlval42139.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval42141(Uh_5tlreg42140); //gcnl:Node.cpp:1142
    return (Uh_5tlval42141); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210writeBytes



//! ByteStream.ulam:100:   virtual Unsigned writeBytes(ByteStream & r, Unsigned max)
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10109210ByteStream10<EC>::Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r, Ui_Ut_102321u<EC>& Uv_3max)
  {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
    {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
      UlamRef<EC> Uh_3tur42143(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
      VfuncPtr Uf_tvfp42144 = Uh_3tur42143.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_7canRead10); //gcnl:NodeFunctionCall.cpp:1186
      const Ui_Ut_10111b<EC> Uh_5tlval42145 = ((typename Uq_10109210ByteStream10<EC>::Uf_7canRead10) (Uf_tvfp42144)) (uc, Uh_3tur42143); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg42146 = Uh_5tlval42145.read(); //gcnl:Node.cpp:1170
      const u32 Uh_5tlreg42147 = _LogicalBangBool32(Uh_5tlreg42146, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg42147, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStream.ulam:102:     if (!r.canRead()) return 0;
          const u32 Uh_5tlreg42148 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42149 = _Int32ToUnsigned32(Uh_5tlreg42148, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval42150(Uh_5tlreg42149); //gcnl:Node.cpp:1142
          return (Uh_5tlval42150); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
    {

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      const u32 Uh_5tlreg42151 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42152 = _Int32ToUnsigned32(Uh_5tlreg42151, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg42152); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42154 = Uv_3max.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42156 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42157 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42156, Uh_5tlreg42154, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42157, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ByteStream.ulam:105:     {
        {

//! ByteStream.ulam:106:       Int ch = r.readByte();
          UlamRef<EC> Uh_3tur42159(Ur_1r, 0u); //gcnl:NodeFunctionCall.cpp:960
          VfuncPtr Uf_tvfp42160 = Uh_3tur42159.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_8readByte10); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42161 = ((typename Uq_10109210ByteStream10<EC>::Uf_8readByte10) (Uf_tvfp42160)) (uc, Uh_3tur42159); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42162 = Uh_5tlval42161.read(); //gcnl:Node.cpp:1170
          Ui_Ut_102321i<EC> Uv_2ch(Uh_5tlreg42162); //gcnl:NodeVarDecl.cpp:1081

//! ByteStream.ulam:107:       if (ch < 0) return i;
          {

//! ByteStream.ulam:107:       if (ch < 0) return i;
            const u32 Uh_5tlreg42163 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42164 = _Int32ToInt32(Uh_5tlreg42163, 2, 32); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42166 = Uv_2ch.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg42167 = _BinOpCompareLessThanInt32(Uh_5tlreg42166, Uh_5tlreg42164, 32); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg42167, 1)) //gcnl:NodeControl.cpp:213
            {

//! ByteStream.ulam:107:       if (ch < 0) return i;
                const u32 Uh_5tlreg42169 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_102321u<EC> Uh_5tlval42170(Uh_5tlreg42169); //gcnl:Node.cpp:1142
                return (Uh_5tlval42170); //gcnl:NodeReturnStatement.cpp:343
            } // end if
          }

//! ByteStream.ulam:108:       writeByte((ASCII) ch);
          const u32 Uh_5tlreg42173 = Uv_2ch.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42174 = _Int32ToUnsigned32(Uh_5tlreg42173, 32, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181u<EC> Uh_5tlval42175(Uh_5tlreg42174); //gcnl:Node.cpp:1142
          VfuncPtr Uf_tvfp42176 = ur.GetEffectiveSelf()->getVTableEntry(Uq_10109210ByteStream10<EC>::VTABLE_IDX_Uf_919writeByte1110181u); //gcnl:NodeFunctionCall.cpp:1186
          const Ui_Ut_102321i<EC> Uh_5tlval42177 = ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) (Uf_tvfp42176)) (uc, ur, Uh_5tlval42175); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42178 = Uh_5tlval42177.read(); //gcnl:Node.cpp:1170
        }

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
Ul_214endcontrolloop18:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ByteStream.ulam:104:     for (Unsigned i = 0; i < max; ++i)
        const u32 Uh_5tlreg42179 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42180 = _Int32ToUnsigned32(Uh_5tlreg42179, 32, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42182 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42183 = _BinOpAddUnsigned32(Uh_5tlreg42182, Uh_5tlreg42180, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42183); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ByteStream.ulam:110:     return max;
    const u32 Uh_5tlreg42185 = Uv_3max.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval42186(Uh_5tlreg42185); //gcnl:Node.cpp:1142
    return (Uh_5tlval42186); //gcnl:NodeReturnStatement.cpp:343

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

