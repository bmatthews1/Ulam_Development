/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10114Once10.h"
#include "Uq_10106Random10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_102108Majority10<EC>::Ue_102108Majority10() : UlamElement<EC>(MFM_UUID_FOR("Ue102108Majority10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("M");  // figure this out later
    Element<EC>::SetName("Majority"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102108Majority10<EC>::~Ue_102108Majority10(){} //gcnl:NodeBlockClass.cpp:1743


//! Majority.ulam:51:   Void behave() {
  template<class EC>
  void Ue_102108Majority10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Majority.ulam:52:     if (mOnce.new()) {
    {

//! Majority.ulam:52:     if (mOnce.new()) {
      UlamRef<EC> Uh_3tur3610(ur, 0u, 1u, &Uq_10114Once10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const Ui_Ut_10111b<EC> Uh_5tlval3612 = Uq_10115OnceT11102151y10<EC>::THE_INSTANCE.Uf_3new(uc, Uh_3tur3610); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3613 = Uh_5tlval3612.read(); //gcnl:Node.cpp:1170
      if(_Bool32ToCbool(Uh_5tlreg3613, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Majority.ulam:53:       mUp = random.oneIn(2);
          UlamRef<EC> Uh_3tur3615(ur, 10u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3616 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3617 = _Int32ToUnsigned32(Uh_5tlreg3616, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval3618(Uh_5tlreg3617); //gcnl:Node.cpp:1142
          const Ui_Ut_10111b<EC> Uh_5tlval3620 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur3615, Uh_5tlval3618); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg3621 = Uh_5tlval3620.read(); //gcnl:Node.cpp:1170
          UlamRef<EC>(ur, 1u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3621); //gcnl:Node.cpp:892
        }
      } // end if
      else
      {

//! Majority.ulam:54:     } else if (cd == 0){
          {

//! Majority.ulam:54:     } else if (cd == 0){
            const u32 Uh_5tlreg3623 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3624 = _Int32ToInt32(Uh_5tlreg3623, 2, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3626 = UlamRef<EC>(ur, 2u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg3627 = _Unsigned32ToInt32(Uh_5tlreg3626, 8, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3628 = _BinOpCompareEqEqInt32(Uh_5tlreg3627, Uh_5tlreg3624, 9); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3628, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Majority.ulam:55: 	  SiteCount up = 0;
                const u32 Uh_5tlreg3629 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3630 = _Int32ToUnsigned32(Uh_5tlreg3629, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uv_2up(Uh_5tlreg3630); //gcnl:NodeVarDecl.cpp:1081

//! Majority.ulam:56:       SiteCount down = 0;
                const u32 Uh_5tlreg3631 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3632 = _Int32ToUnsigned32(Uh_5tlreg3631, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uv_4down(Uh_5tlreg3632); //gcnl:NodeVarDecl.cpp:1081

//! Majority.ulam:57:       for (SiteNumber i = 1; i < 41; i++){
                {

//! Majority.ulam:57:       for (SiteNumber i = 1; i < 41; i++){
                  const u32 Uh_5tlreg3633 = 1; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg3634 = _Int32ToUnsigned32(Uh_5tlreg3633, 2, 6); //gcnl:NodeCast.cpp:748
                  Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg3634); //gcnl:NodeVarDecl.cpp:1081

//! Majority.ulam:57:       for (SiteNumber i = 1; i < 41; i++){
                  while(true)
                  {
                    const u32 Uh_5tlreg3635 = 41; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg3637 = Uv_1i.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg3638 = _Unsigned32ToInt32(Uh_5tlreg3637, 6, 7); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg3639 = _BinOpCompareLessThanInt32(Uh_5tlreg3638, Uh_5tlreg3635, 7); //gcnl:NodeBinaryOpCompare.cpp:441

                    if(!_Bool32ToCbool(Uh_5tlreg3639, 1))
                      break; //gcnl:NodeControlWhile.cpp:135

//! Majority.ulam:57:       for (SiteNumber i = 1; i < 41; i++){
                    {

//! Majority.ulam:58:         if (ew[i] is Majority){
                      {

//! Majority.ulam:58:         if (ew[i] is Majority){
                        UlamRef<EC> Uh_3tur3641(ur, 10u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                        const u32 Uh_5tlreg3643 = Uv_1i.read(); //gcnl:Node.cpp:698
                        Ui_Ut_10161u<EC> Uh_5tlval3644(Uh_5tlreg3643); //gcnl:Node.cpp:1142
                        Ui_Ut_r102961a<EC> Uh_5tuval3646 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3641, Uh_5tlval3644); //gcnl:NodeFunctionCall.cpp:1043
                        const u32 Uh_5tlreg3647 = Ue_102108Majority10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval3646.read()); //gcnl:NodeConditionalIs.cpp:285
                        if(_Bool32ToCbool(Uh_5tlreg3647, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Majority.ulam:59:           Majority m = (Majority)ew[i];
                            UlamRef<EC> Uh_3tur3649(ur, 10u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3651 = Uv_1i.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval3652(Uh_5tlreg3651); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3654 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3649, Uh_5tlval3652); //gcnl:NodeFunctionCall.cpp:1043
                            if(!Ue_102108Majority10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval3654.ReadAtom())) //gcnl:NodeCast.cpp:872
                              FAIL(BAD_CAST); //gcnl:NodeCast.cpp:876
                            Ui_Ue_102108Majority10<EC> Uv_1m(Uh_5tuval3654.read()); //gcnl:NodeVarDecl.cpp:1081

//! Majority.ulam:60:           if (m.mUp) up++;
                            {

//! Majority.ulam:60:           if (m.mUp) up++;
                              const u32 Uh_5tlreg3657 = UlamRef<EC>(26u, 1u, Uv_1m, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
                              if(_Bool32ToCbool(Uh_5tlreg3657, 1)) //gcnl:NodeControl.cpp:213
                              {

//! Majority.ulam:60:           if (m.mUp) up++;
                                  const u32 Uh_5tlreg3658 = 1; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg3659 = _Int32ToUnsigned32(Uh_5tlreg3658, 32, 6); //gcnl:NodeCast.cpp:748
                                  const u32 Uh_5tlreg3661 = Uv_2up.read(); //gcnl:Node.cpp:698
                                  const u32 Uh_5tlreg3662 = _BinOpAddUnsigned32(Uh_5tlreg3661, Uh_5tlreg3659, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                                  Uv_2up.write(Uh_5tlreg3662); //gcnl:Node.cpp:892
                              } // end if
                              else
                              {

//! Majority.ulam:61:           else down++;
                                  const u32 Uh_5tlreg3663 = 1; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg3664 = _Int32ToUnsigned32(Uh_5tlreg3663, 32, 6); //gcnl:NodeCast.cpp:748
                                  const u32 Uh_5tlreg3666 = Uv_4down.read(); //gcnl:Node.cpp:698
                                  const u32 Uh_5tlreg3667 = _BinOpAddUnsigned32(Uh_5tlreg3666, Uh_5tlreg3664, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                                  Uv_4down.write(Uh_5tlreg3667); //gcnl:Node.cpp:892
                              } //end else
                            }
                          }
                        } // end if
                      }
                    }

//! Majority.ulam:57:       for (SiteNumber i = 1; i < 41; i++){
Ul_214endcontrolloop12:
                    __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Majority.ulam:57:       for (SiteNumber i = 1; i < 41; i++){
                    const u32 Uh_5tlreg3668 = 1; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg3669 = _Int32ToUnsigned32(Uh_5tlreg3668, 32, 6); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg3671 = Uv_1i.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg3672 = _BinOpAddUnsigned32(Uh_5tlreg3671, Uh_5tlreg3669, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                    Uv_1i.write(Uh_5tlreg3672); //gcnl:Node.cpp:892
                  } // end while //gcnl:NodeControlWhile.cpp:145
                }

//! Majority.ulam:64:       if (up == down){
                {

//! Majority.ulam:64:       if (up == down){
                  const u32 Uh_5tlreg3674 = Uv_4down.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg3676 = Uv_2up.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg3677 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3676, Uh_5tlreg3674, 6); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg3677, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Majority.ulam:65:         mUp = random.oneIn(2);
                      UlamRef<EC> Uh_3tur3679(ur, 10u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3680 = 2; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3681 = _Int32ToUnsigned32(Uh_5tlreg3680, 3, 32); //gcnl:NodeCast.cpp:748
                      Ui_Ut_102321u<EC> Uh_5tlval3682(Uh_5tlreg3681); //gcnl:Node.cpp:1142
                      const Ui_Ut_10111b<EC> Uh_5tlval3684 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur3679, Uh_5tlval3682); //gcnl:NodeFunctionCall.cpp:1043
                      const u32 Uh_5tlreg3685 = Uh_5tlval3684.read(); //gcnl:Node.cpp:1170
                      UlamRef<EC>(ur, 1u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3685); //gcnl:Node.cpp:892
                    }
                  } // end if
                  else
                  {

//! Majority.ulam:67:       else mUp = (up >= down);
                      const u32 Uh_5tlreg3688 = Uv_4down.read(); //gcnl:Node.cpp:698
                      const u32 Uh_5tlreg3690 = Uv_2up.read(); //gcnl:Node.cpp:698
                      const u32 Uh_5tlreg3691 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3690, Uh_5tlreg3688, 6); //gcnl:NodeBinaryOpCompare.cpp:441
                      UlamRef<EC>(ur, 1u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3691); //gcnl:Node.cpp:892
                  } //end else
                }
              }
            } // end if
            else
            {
              {

//! Majority.ulam:69:       cd--;
                const u32 Uh_5tlreg3693 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3694 = _Int32ToUnsigned32(Uh_5tlreg3693, 32, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg3696 = UlamRef<EC>(ur, 2u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                const u32 Uh_5tlreg3697 = _BinOpSubtractUnsigned32(Uh_5tlreg3696, Uh_5tlreg3694, 8); //gcnl:NodeBinaryOpEqualArithPostDecr.cpp:196
                UlamRef<EC>(ur, 2u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3697); //gcnl:Node.cpp:892
              }
            } //end else
          }
      } //end else
    }

  } // Uf_6behave



//! Majority.ulam:74:   ARGB getColor(Unsigned selector) {
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102108Majority10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! Majority.ulam:75:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! Majority.ulam:76:     if (mUp) return cu.color(0x0,0xff,0x0);
    {

//! Majority.ulam:76:     if (mUp) return cu.color(0x0,0xff,0x0);
      const u32 Uh_5tlreg3699 = UlamRef<EC>(ur, 1u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg3699, 1)) //gcnl:NodeControl.cpp:213
      {

//! Majority.ulam:76:     if (mUp) return cu.color(0x0,0xff,0x0);
          UlamRef<EC> Uh_3tur3701(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3702 = 0u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3703 = _Unsigned32ToBits32(Uh_5tlreg3702, 1, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181t<EC> Uh_5tlval3704(Uh_5tlreg3703); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg3705 = 255u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3706 = _Unsigned32ToBits32(Uh_5tlreg3705, 8, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181t<EC> Uh_5tlval3707(Uh_5tlreg3706); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg3708 = 0u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3709 = _Unsigned32ToBits32(Uh_5tlreg3708, 1, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181t<EC> Uh_5tlval3710(Uh_5tlreg3709); //gcnl:Node.cpp:1142
          const Ui_Ut_14181u<EC> Uh_5tlval3712 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur3701, Uh_5tlval3704, Uh_5tlval3707, Uh_5tlval3710); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg3713 = Uh_5tlval3712.read(); //gcnl:Node.cpp:1170
          Ui_Ut_14181u<EC> Uh_5tlval3714(Uh_5tlreg3713); //gcnl:Node.cpp:1142
          return (Uh_5tlval3714); //gcnl:NodeReturnStatement.cpp:343
      } // end if
      else
      {

//! Majority.ulam:77:     else  return cu.color(0xff,0x0,0x0);
          UlamRef<EC> Uh_3tur3716(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3717 = 255u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3718 = _Unsigned32ToBits32(Uh_5tlreg3717, 8, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181t<EC> Uh_5tlval3719(Uh_5tlreg3718); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg3720 = 0u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3721 = _Unsigned32ToBits32(Uh_5tlreg3720, 1, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181t<EC> Uh_5tlval3722(Uh_5tlreg3721); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg3723 = 0u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3724 = _Unsigned32ToBits32(Uh_5tlreg3723, 1, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181t<EC> Uh_5tlval3725(Uh_5tlreg3724); //gcnl:Node.cpp:1142
          const Ui_Ut_14181u<EC> Uh_5tlval3727 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur3716, Uh_5tlval3719, Uh_5tlval3722, Uh_5tlval3725); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg3728 = Uh_5tlval3727.read(); //gcnl:Node.cpp:1170
          Ui_Ut_14181u<EC> Uh_5tlval3729(Uh_5tlreg3728); //gcnl:Node.cpp:1142
          return (Uh_5tlval3729); //gcnl:NodeReturnStatement.cpp:343
      } //end else
    }

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102108Majority10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10114Once10", "mOnce", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Ut_10111b", "mUp", 1u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Ut_10181u", "cd", 2u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 10u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 4: { static UlamClassDataMemberInfo i("Uq_10106Random10", "random", 10u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102108Majority10<EC>::GetDataMemberCount() const
  {
    return 5; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102108Majority10<EC>::GetMangledClassName() const
  {
    return "Ue_102108Majority10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102108Majority10<EC>::GetClassLength( ) const
  {
    return 10; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102108Majority10<EC>::GetString(u32 sidx)  const
  {
    const u32 USERSTRINGPOOLSIZE = 1; //gcnl:NodeBlockClass.cpp:2537
    static unsigned char UserStringPool[USERSTRINGPOOLSIZE + 1] = 
      "\000"
    ; //gcnl:StringPoolUser.cpp:127

    if(sidx == 0)
      FAIL(UNINITIALIZED_VALUE); //gcnl:NodeBlockClass.cpp:2546
    if(sidx >= USERSTRINGPOOLSIZE)
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2555
    return UserStringPool + sidx + 1; //gcnl:NodeBlockClass.cpp:2561
  } //GetString

  template<class EC>
  u32 Ue_102108Majority10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102108Majority10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    static const u32 vales[(96 + 31)/32] = { 0x4, 0x0, 0x0 }; //gcnl:CompilerState.cpp:1395
    static BitVector<96> initBV; //gcnl:CompilerState.cpp:1401
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1417
      //correct runtime regnum for strings
      const Ui_Uq_10114Once10<EC> Uh_5tlreg3730; //gcnl:NodeVarDeclDM.cpp:801
      const u32 Uh_5tlreg3731(Uh_5tlreg3730.read()); //gcnl:NodeVarDeclDM.cpp:811
      initBV.Write(25u, 1, Uh_5tlreg3731); //Um_5mOnce //gcnl:NodeVarDeclDM.cpp:832
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102108Majority10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102108Majority10<EC>::Uf_6behave10) &Ue_102108Majority10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102108Majority10<EC>::Uf_8getColor11102321u) &Ue_102108Majority10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102108Majority10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102108Majority10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102108Majority10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102108Majority10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102108Majority10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102108Majority10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

