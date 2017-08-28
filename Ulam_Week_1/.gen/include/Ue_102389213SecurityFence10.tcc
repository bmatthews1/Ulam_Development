/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_102323C2D10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_102389213SecurityFence10<EC>::Ue_102389213SecurityFence10() : UlamElement<EC>(MFM_UUID_FOR("Ue102389213SecurityFence10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("S");  // figure this out later
    Element<EC>::SetName("SecurityFence"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102389213SecurityFence10<EC>::~Ue_102389213SecurityFence10(){} //gcnl:NodeBlockClass.cpp:1743


//! SecurityFence.ulam:38:   Void behave(){
  template<class EC>
  void Ue_102389213SecurityFence10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! SecurityFence.ulam:39:     if (mode == 0u){
    {

//! SecurityFence.ulam:39:     if (mode == 0u){
      const u32 Uh_5tlreg42584 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42585 = _Unsigned32ToUnsigned32(Uh_5tlreg42584, 1, 3); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42587 = UlamRef<EC>(ur, 3u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42588 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42587, Uh_5tlreg42585, 3); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42588, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SecurityFence.ulam:40:       Bool needsUpdate = false;
          const u32 Uh_5tlreg42589 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uv_9211needsUpdate(Uh_5tlreg42589); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:41:       for (Unsigned(6) i = 29; i < 37; i += 3){
          {

//! SecurityFence.ulam:41:       for (Unsigned(6) i = 29; i < 37; i += 3){
            const u32 Uh_5tlreg42590 = 29; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42591 = _Int32ToUnsigned32(Uh_5tlreg42590, 6, 6); //gcnl:NodeCast.cpp:748
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg42591); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:41:       for (Unsigned(6) i = 29; i < 37; i += 3){
            while(true)
            {
              const u32 Uh_5tlreg42592 = 37; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42594 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg42595 = _Unsigned32ToInt32(Uh_5tlreg42594, 6, 7); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42596 = _BinOpCompareLessThanInt32(Uh_5tlreg42595, Uh_5tlreg42592, 7); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg42596, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! SecurityFence.ulam:41:       for (Unsigned(6) i = 29; i < 37; i += 3){
              {

//! SecurityFence.ulam:42:         if (i == 35) i -= 2;
                {

//! SecurityFence.ulam:42:         if (i == 35) i -= 2;
                  const u32 Uh_5tlreg42597 = 35; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg42599 = Uv_1i.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg42600 = _Unsigned32ToInt32(Uh_5tlreg42599, 6, 7); //gcnl:NodeCast.cpp:748
                  const u32 Uh_5tlreg42601 = _BinOpCompareEqEqInt32(Uh_5tlreg42600, Uh_5tlreg42597, 7); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg42601, 1)) //gcnl:NodeControl.cpp:213
                  {

//! SecurityFence.ulam:42:         if (i == 35) i -= 2;
                      const u32 Uh_5tlreg42602 = 2; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg42603 = _Int32ToUnsigned32(Uh_5tlreg42602, 3, 6); //gcnl:NodeCast.cpp:748
                      const u32 Uh_5tlreg42605 = Uv_1i.read(); //gcnl:Node.cpp:698
                      const u32 Uh_5tlreg42606 = _BinOpSubtractUnsigned32(Uh_5tlreg42605, Uh_5tlreg42603, 6); //gcnl:NodeBinaryOpEqualArith.cpp:244
                      Uv_1i.write(Uh_5tlreg42606); //gcnl:Node.cpp:892
                  } // end if
                }

//! SecurityFence.ulam:43:         if (!(ew[i] is SecurityFence)) needsUpdate = true;
                {

//! SecurityFence.ulam:43:         if (!(ew[i] is SecurityFence)) needsUpdate = true;
                  UlamRef<EC> Uh_3tur42608(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                  const u32 Uh_5tlreg42610 = Uv_1i.read(); //gcnl:Node.cpp:698
                  Ui_Ut_10161u<EC> Uh_5tlval42611(Uh_5tlreg42610); //gcnl:Node.cpp:1142
                  Ui_Ut_r102961a<EC> Uh_5tuval42613 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42608, Uh_5tlval42611); //gcnl:NodeFunctionCall.cpp:1043
                  const u32 Uh_5tlreg42614 = Ue_102389213SecurityFence10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval42613.read()); //gcnl:NodeConditionalIs.cpp:285
                  const u32 Uh_5tlreg42615 = _LogicalBangBool32(Uh_5tlreg42614, 1); //gcnl:NodeUnaryOp.cpp:507
                  if(_Bool32ToCbool(Uh_5tlreg42615, 1)) //gcnl:NodeControl.cpp:213
                  {

//! SecurityFence.ulam:43:         if (!(ew[i] is SecurityFence)) needsUpdate = true;
                      const u32 Uh_5tlreg42616 = 1u; //gcnl:NodeTerminal.cpp:690
                      Uv_9211needsUpdate.write(Uh_5tlreg42616); //gcnl:Node.cpp:892
                  } // end if
                }
              }

//! SecurityFence.ulam:41:       for (Unsigned(6) i = 29; i < 37; i += 3){
Ul_214endcontrolloop222:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SecurityFence.ulam:41:       for (Unsigned(6) i = 29; i < 37; i += 3){
              const u32 Uh_5tlreg42618 = 3; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42619 = _Int32ToUnsigned32(Uh_5tlreg42618, 3, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42621 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg42622 = _BinOpAddUnsigned32(Uh_5tlreg42621, Uh_5tlreg42619, 6); //gcnl:NodeBinaryOpEqualArith.cpp:244
              Uv_1i.write(Uh_5tlreg42622); //gcnl:Node.cpp:892
            } // end while //gcnl:NodeControlWhile.cpp:145
          }

//! SecurityFence.ulam:45:       if (needsUpdate){
          {

//! SecurityFence.ulam:45:       if (needsUpdate){
            const u32 Uh_5tlreg42624 = Uv_9211needsUpdate.read(); //gcnl:Node.cpp:698
            if(_Bool32ToCbool(Uh_5tlreg42624, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SecurityFence.ulam:46:         for (Unsigned(6) i = 29; i < 37; i += 3){
                {

//! SecurityFence.ulam:46:         for (Unsigned(6) i = 29; i < 37; i += 3){
                  const u32 Uh_5tlreg42625 = 29; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg42626 = _Int32ToUnsigned32(Uh_5tlreg42625, 6, 6); //gcnl:NodeCast.cpp:748
                  Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg42626); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:46:         for (Unsigned(6) i = 29; i < 37; i += 3){
                  while(true)
                  {
                    const u32 Uh_5tlreg42627 = 37; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42629 = Uv_1i.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42630 = _Unsigned32ToInt32(Uh_5tlreg42629, 6, 7); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42631 = _BinOpCompareLessThanInt32(Uh_5tlreg42630, Uh_5tlreg42627, 7); //gcnl:NodeBinaryOpCompare.cpp:441

                    if(!_Bool32ToCbool(Uh_5tlreg42631, 1))
                      break; //gcnl:NodeControlWhile.cpp:135

//! SecurityFence.ulam:46:         for (Unsigned(6) i = 29; i < 37; i += 3){
                    {

//! SecurityFence.ulam:47:           if (i == 35) i -= 2;
                      {

//! SecurityFence.ulam:47:           if (i == 35) i -= 2;
                        const u32 Uh_5tlreg42632 = 35; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg42634 = Uv_1i.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg42635 = _Unsigned32ToInt32(Uh_5tlreg42634, 6, 7); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42636 = _BinOpCompareEqEqInt32(Uh_5tlreg42635, Uh_5tlreg42632, 7); //gcnl:NodeBinaryOpCompare.cpp:441
                        if(_Bool32ToCbool(Uh_5tlreg42636, 1)) //gcnl:NodeControl.cpp:213
                        {

//! SecurityFence.ulam:47:           if (i == 35) i -= 2;
                            const u32 Uh_5tlreg42637 = 2; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg42638 = _Int32ToUnsigned32(Uh_5tlreg42637, 3, 6); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg42640 = Uv_1i.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg42641 = _BinOpSubtractUnsigned32(Uh_5tlreg42640, Uh_5tlreg42638, 6); //gcnl:NodeBinaryOpEqualArith.cpp:244
                            Uv_1i.write(Uh_5tlreg42641); //gcnl:Node.cpp:892
                        } // end if
                      }

//! SecurityFence.ulam:48:           ew[i] = ew[0u];
                      UlamRef<EC> Uh_3tur42643(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg42644 = 0u; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg42645 = _Unsigned32ToUnsigned32(Uh_5tlreg42644, 1, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval42646(Uh_5tlreg42645); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval42648 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42643, Uh_5tlval42646); //gcnl:NodeFunctionCall.cpp:1043
                      UlamRef<EC> Uh_3tur42650(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg42652 = Uv_1i.read(); //gcnl:Node.cpp:698
                      Ui_Ut_10161u<EC> Uh_5tlval42653(Uh_5tlreg42652); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval42655 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42650, Uh_5tlval42653); //gcnl:NodeFunctionCall.cpp:1043
                      Uh_5tuval42655.WriteAtom(Uh_5tuval42648.read()); //write into atomof ref //gcnl:Node.cpp:992
                    }

//! SecurityFence.ulam:46:         for (Unsigned(6) i = 29; i < 37; i += 3){
Ul_214endcontrolloop223:
                    __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SecurityFence.ulam:46:         for (Unsigned(6) i = 29; i < 37; i += 3){
                    const u32 Uh_5tlreg42656 = 3; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42657 = _Int32ToUnsigned32(Uh_5tlreg42656, 3, 6); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42659 = Uv_1i.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42660 = _BinOpAddUnsigned32(Uh_5tlreg42659, Uh_5tlreg42657, 6); //gcnl:NodeBinaryOpEqualArith.cpp:244
                    Uv_1i.write(Uh_5tlreg42660); //gcnl:Node.cpp:892
                  } // end while //gcnl:NodeControlWhile.cpp:145
                }
              }
            } // end if
          }

//! SecurityFence.ulam:51:       mode++;
          const u32 Uh_5tlreg42661 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42662 = _Int32ToUnsigned32(Uh_5tlreg42661, 32, 3); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42664 = UlamRef<EC>(ur, 3u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42665 = _BinOpAddUnsigned32(Uh_5tlreg42664, Uh_5tlreg42662, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
          UlamRef<EC>(ur, 3u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42665); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! SecurityFence.ulam:53:     if (mode == 1u){
    {

//! SecurityFence.ulam:53:     if (mode == 1u){
      const u32 Uh_5tlreg42666 = 1u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42667 = _Unsigned32ToUnsigned32(Uh_5tlreg42666, 1, 3); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42669 = UlamRef<EC>(ur, 3u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42670 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42669, Uh_5tlreg42667, 3); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42670, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SecurityFence.ulam:54:       for (Unsigned(6) i = 29; i < 37; i += 3){
          {

//! SecurityFence.ulam:54:       for (Unsigned(6) i = 29; i < 37; i += 3){
            const u32 Uh_5tlreg42671 = 29; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42672 = _Int32ToUnsigned32(Uh_5tlreg42671, 6, 6); //gcnl:NodeCast.cpp:748
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg42672); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:54:       for (Unsigned(6) i = 29; i < 37; i += 3){
            while(true)
            {
              const u32 Uh_5tlreg42673 = 37; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42675 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg42676 = _Unsigned32ToInt32(Uh_5tlreg42675, 6, 7); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42677 = _BinOpCompareLessThanInt32(Uh_5tlreg42676, Uh_5tlreg42673, 7); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg42677, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! SecurityFence.ulam:54:       for (Unsigned(6) i = 29; i < 37; i += 3){
              {

//! SecurityFence.ulam:55:         if (i == 35) i -= 2;
                {

//! SecurityFence.ulam:55:         if (i == 35) i -= 2;
                  const u32 Uh_5tlreg42678 = 35; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg42680 = Uv_1i.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg42681 = _Unsigned32ToInt32(Uh_5tlreg42680, 6, 7); //gcnl:NodeCast.cpp:748
                  const u32 Uh_5tlreg42682 = _BinOpCompareEqEqInt32(Uh_5tlreg42681, Uh_5tlreg42678, 7); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg42682, 1)) //gcnl:NodeControl.cpp:213
                  {

//! SecurityFence.ulam:55:         if (i == 35) i -= 2;
                      const u32 Uh_5tlreg42683 = 2; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg42684 = _Int32ToUnsigned32(Uh_5tlreg42683, 3, 6); //gcnl:NodeCast.cpp:748
                      const u32 Uh_5tlreg42686 = Uv_1i.read(); //gcnl:Node.cpp:698
                      const u32 Uh_5tlreg42687 = _BinOpSubtractUnsigned32(Uh_5tlreg42686, Uh_5tlreg42684, 6); //gcnl:NodeBinaryOpEqualArith.cpp:244
                      Uv_1i.write(Uh_5tlreg42687); //gcnl:Node.cpp:892
                  } // end if
                }

//! SecurityFence.ulam:57:         if (!(ew[i] is SecurityFence))
                {

//! SecurityFence.ulam:57:         if (!(ew[i] is SecurityFence))
                  UlamRef<EC> Uh_3tur42689(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                  const u32 Uh_5tlreg42691 = Uv_1i.read(); //gcnl:Node.cpp:698
                  Ui_Ut_10161u<EC> Uh_5tlval42692(Uh_5tlreg42691); //gcnl:Node.cpp:1142
                  Ui_Ut_r102961a<EC> Uh_5tuval42694 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42689, Uh_5tlval42692); //gcnl:NodeFunctionCall.cpp:1043
                  const u32 Uh_5tlreg42695 = Ue_102389213SecurityFence10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval42694.read()); //gcnl:NodeConditionalIs.cpp:285
                  const u32 Uh_5tlreg42696 = _LogicalBangBool32(Uh_5tlreg42695, 1); //gcnl:NodeUnaryOp.cpp:507
                  if(_Bool32ToCbool(Uh_5tlreg42696, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SecurityFence.ulam:59:           mode = 3u;
                      const u32 Uh_5tlreg42697 = 3u; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg42698 = _Unsigned32ToUnsigned32(Uh_5tlreg42697, 2, 3); //gcnl:NodeCast.cpp:748
                      UlamRef<EC>(ur, 3u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42698); //gcnl:Node.cpp:892

//! SecurityFence.ulam:60:           if (i == 29) dir = 1;
                      {

//! SecurityFence.ulam:60:           if (i == 29) dir = 1;
                        const u32 Uh_5tlreg42700 = 29; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg42701 = _Int32ToInt32(Uh_5tlreg42700, 6, 7); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42703 = Uv_1i.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg42704 = _Unsigned32ToInt32(Uh_5tlreg42703, 6, 7); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42705 = _BinOpCompareEqEqInt32(Uh_5tlreg42704, Uh_5tlreg42701, 7); //gcnl:NodeBinaryOpCompare.cpp:441
                        if(_Bool32ToCbool(Uh_5tlreg42705, 1)) //gcnl:NodeControl.cpp:213
                        {

//! SecurityFence.ulam:60:           if (i == 29) dir = 1;
                            const u32 Uh_5tlreg42706 = 1; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg42707 = _Int32ToUnsigned32(Uh_5tlreg42706, 2, 3); //gcnl:NodeCast.cpp:748
                            UlamRef<EC>(ur, 0u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42707); //gcnl:Node.cpp:892
                        } // end if
                        else
                        {

//! SecurityFence.ulam:61:           else if (i == 32) dir = 3;
                            {

//! SecurityFence.ulam:61:           else if (i == 32) dir = 3;
                              const u32 Uh_5tlreg42709 = 32; //gcnl:NodeTerminal.cpp:690
                              const u32 Uh_5tlreg42711 = Uv_1i.read(); //gcnl:Node.cpp:698
                              const u32 Uh_5tlreg42712 = _Unsigned32ToInt32(Uh_5tlreg42711, 6, 7); //gcnl:NodeCast.cpp:748
                              const u32 Uh_5tlreg42713 = _BinOpCompareEqEqInt32(Uh_5tlreg42712, Uh_5tlreg42709, 7); //gcnl:NodeBinaryOpCompare.cpp:441
                              if(_Bool32ToCbool(Uh_5tlreg42713, 1)) //gcnl:NodeControl.cpp:213
                              {

//! SecurityFence.ulam:61:           else if (i == 32) dir = 3;
                                  const u32 Uh_5tlreg42714 = 3; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg42715 = _Int32ToUnsigned32(Uh_5tlreg42714, 3, 3); //gcnl:NodeCast.cpp:748
                                  UlamRef<EC>(ur, 0u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42715); //gcnl:Node.cpp:892
                              } // end if
                              else
                              {

//! SecurityFence.ulam:62:           else if (i == 33) dir = 2;
                                  {

//! SecurityFence.ulam:62:           else if (i == 33) dir = 2;
                                    const u32 Uh_5tlreg42717 = 33; //gcnl:NodeTerminal.cpp:690
                                    const u32 Uh_5tlreg42719 = Uv_1i.read(); //gcnl:Node.cpp:698
                                    const u32 Uh_5tlreg42720 = _Unsigned32ToInt32(Uh_5tlreg42719, 6, 7); //gcnl:NodeCast.cpp:748
                                    const u32 Uh_5tlreg42721 = _BinOpCompareEqEqInt32(Uh_5tlreg42720, Uh_5tlreg42717, 7); //gcnl:NodeBinaryOpCompare.cpp:441
                                    if(_Bool32ToCbool(Uh_5tlreg42721, 1)) //gcnl:NodeControl.cpp:213
                                    {

//! SecurityFence.ulam:62:           else if (i == 33) dir = 2;
                                        const u32 Uh_5tlreg42722 = 2; //gcnl:NodeTerminal.cpp:690
                                        const u32 Uh_5tlreg42723 = _Int32ToUnsigned32(Uh_5tlreg42722, 3, 3); //gcnl:NodeCast.cpp:748
                                        UlamRef<EC>(ur, 0u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42723); //gcnl:Node.cpp:892
                                    } // end if
                                    else
                                    {

//! SecurityFence.ulam:63:           else if (i == 36) dir = 4;
                                        {

//! SecurityFence.ulam:63:           else if (i == 36) dir = 4;
                                          const u32 Uh_5tlreg42725 = 36; //gcnl:NodeTerminal.cpp:690
                                          const u32 Uh_5tlreg42727 = Uv_1i.read(); //gcnl:Node.cpp:698
                                          const u32 Uh_5tlreg42728 = _Unsigned32ToInt32(Uh_5tlreg42727, 6, 7); //gcnl:NodeCast.cpp:748
                                          const u32 Uh_5tlreg42729 = _BinOpCompareEqEqInt32(Uh_5tlreg42728, Uh_5tlreg42725, 7); //gcnl:NodeBinaryOpCompare.cpp:441
                                          if(_Bool32ToCbool(Uh_5tlreg42729, 1)) //gcnl:NodeControl.cpp:213
                                          {

//! SecurityFence.ulam:63:           else if (i == 36) dir = 4;
                                              const u32 Uh_5tlreg42730 = 4; //gcnl:NodeTerminal.cpp:690
                                              const u32 Uh_5tlreg42731 = _Int32ToUnsigned32(Uh_5tlreg42730, 4, 3); //gcnl:NodeCast.cpp:748
                                              UlamRef<EC>(ur, 0u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42731); //gcnl:Node.cpp:892
                                          } // end if
                                        }
                                    } //end else
                                  }
                              } //end else
                            }
                        } //end else
                      }
                    }
                  } // end if
                }
              }

//! SecurityFence.ulam:54:       for (Unsigned(6) i = 29; i < 37; i += 3){
Ul_214endcontrolloop224:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SecurityFence.ulam:54:       for (Unsigned(6) i = 29; i < 37; i += 3){
              const u32 Uh_5tlreg42733 = 3; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42734 = _Int32ToUnsigned32(Uh_5tlreg42733, 3, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42736 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg42737 = _BinOpAddUnsigned32(Uh_5tlreg42736, Uh_5tlreg42734, 6); //gcnl:NodeBinaryOpEqualArith.cpp:244
              Uv_1i.write(Uh_5tlreg42737); //gcnl:Node.cpp:892
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }
      } // end if
    }

//! SecurityFence.ulam:67:     if (mode == 3u){
    {

//! SecurityFence.ulam:67:     if (mode == 3u){
      const u32 Uh_5tlreg42738 = 3u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42739 = _Unsigned32ToUnsigned32(Uh_5tlreg42738, 2, 3); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42741 = UlamRef<EC>(ur, 3u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42742 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42741, Uh_5tlreg42739, 3); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42742, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SecurityFence.ulam:68:       if (dir == 1 || dir == 2){ //left up
          {

//! SecurityFence.ulam:68:       if (dir == 1 || dir == 2){ //left up
            u32 Uh_5tlreg42743 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            const u32 Uh_5tlreg42744 = 1; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42745 = _Int32ToInt32(Uh_5tlreg42744, 2, 4); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42747 = UlamRef<EC>(ur, 0u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg42748 = _Unsigned32ToInt32(Uh_5tlreg42747, 3, 4); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42749 = _BinOpCompareEqEqInt32(Uh_5tlreg42748, Uh_5tlreg42745, 4); //gcnl:NodeBinaryOpCompare.cpp:441
            if(!_Bool32ToCbool(Uh_5tlreg42749, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg42750 = 2; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42751 = _Int32ToInt32(Uh_5tlreg42750, 3, 4); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42753 = UlamRef<EC>(ur, 0u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
              const u32 Uh_5tlreg42754 = _Unsigned32ToInt32(Uh_5tlreg42753, 3, 4); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42755 = _BinOpCompareEqEqInt32(Uh_5tlreg42754, Uh_5tlreg42751, 4); //gcnl:NodeBinaryOpCompare.cpp:441
              Uh_5tlreg42743 = Uh_5tlreg42755; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42743 = Uh_5tlreg42749; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(_Bool32ToCbool(Uh_5tlreg42743, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SecurityFence.ulam:69:         for (Int(16) x = -4; x < 1; x++){
                {

//! SecurityFence.ulam:69:         for (Int(16) x = -4; x < 1; x++){
                  const u32 Uh_5tlreg42756 = (u32) -4; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg42757 = _Int32ToInt32(Uh_5tlreg42756, 4, 16); //gcnl:NodeCast.cpp:748
                  Ui_Ut_102161i<EC> Uv_1x(Uh_5tlreg42757); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:69:         for (Int(16) x = -4; x < 1; x++){
                  while(true)
                  {
                    const u32 Uh_5tlreg42758 = 1; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42759 = _Int32ToInt32(Uh_5tlreg42758, 2, 16); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42761 = Uv_1x.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42762 = _BinOpCompareLessThanInt32(Uh_5tlreg42761, Uh_5tlreg42759, 16); //gcnl:NodeBinaryOpCompare.cpp:441

                    if(!_Bool32ToCbool(Uh_5tlreg42762, 1))
                      break; //gcnl:NodeControlWhile.cpp:135

//! SecurityFence.ulam:69:         for (Int(16) x = -4; x < 1; x++){
                    {

//! SecurityFence.ulam:70:           c.x = x;
                      const u32 Uh_5tlreg42764 = Uv_1x.read(); //gcnl:Node.cpp:698
                      UlamRef<EC>(ur, 6u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42764); //gcnl:Node.cpp:892

//! SecurityFence.ulam:71:           for (Int(16) y = (Int(16))((x + 4)*-1); y < 1; y++){
                      {

//! SecurityFence.ulam:71:           for (Int(16) y = (Int(16))((x + 4)*-1); y < 1; y++){
                        const u32 Uh_5tlreg42767 = (u32) -1; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg42768 = _Int32ToInt32(Uh_5tlreg42767, 2, 19); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42769 = 4; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg42770 = _Int32ToInt32(Uh_5tlreg42769, 4, 17); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42772 = Uv_1x.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg42773 = _Int32ToInt32(Uh_5tlreg42772, 16, 17); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42774 = _BinOpAddInt32(Uh_5tlreg42773, Uh_5tlreg42770, 17); //gcnl:NodeBinaryOp.cpp:805
                        const u32 Uh_5tlreg42775 = _Int32ToInt32(Uh_5tlreg42774, 17, 19); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42776 = _BinOpMultiplyInt32(Uh_5tlreg42775, Uh_5tlreg42768, 19); //gcnl:NodeBinaryOp.cpp:805
                        const u32 Uh_5tlreg42777 = _Int32ToInt32(Uh_5tlreg42776, 19, 16); //gcnl:NodeCast.cpp:748
                        Ui_Ut_102161i<EC> Uv_1y(Uh_5tlreg42777); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:71:           for (Int(16) y = (Int(16))((x + 4)*-1); y < 1; y++){
                        while(true)
                        {
                          const u32 Uh_5tlreg42778 = 1; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg42779 = _Int32ToInt32(Uh_5tlreg42778, 2, 16); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg42781 = Uv_1y.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg42782 = _BinOpCompareLessThanInt32(Uh_5tlreg42781, Uh_5tlreg42779, 16); //gcnl:NodeBinaryOpCompare.cpp:441

                          if(!_Bool32ToCbool(Uh_5tlreg42782, 1))
                            break; //gcnl:NodeControlWhile.cpp:135

//! SecurityFence.ulam:71:           for (Int(16) y = (Int(16))((x + 4)*-1); y < 1; y++){
                          {

//! SecurityFence.ulam:72:             c.y = y;
                            const u32 Uh_5tlreg42784 = Uv_1y.read(); //gcnl:Node.cpp:698
                            UlamRef<EC>(ur, 22u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42784); //gcnl:Node.cpp:892

//! SecurityFence.ulam:73:             SiteNumber s = ew.getSiteNumber(c);
                            UlamRef<EC> Uh_3tur42788(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg42790 = UlamRef<EC>(ur, 6u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:664
                            Ui_Uq_102323C2D10<EC> Uh_5tlval42791(Uh_5tlreg42790); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval42793 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur42788, Uh_5tlval42791); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg42794 = Uh_5tlval42793.read(); //gcnl:Node.cpp:1170
                            Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg42794); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:74:             if (s < 41) ew[s] = ew[0];
                            {

//! SecurityFence.ulam:74:             if (s < 41) ew[s] = ew[0];
                              const u32 Uh_5tlreg42795 = 41; //gcnl:NodeTerminal.cpp:690
                              const u32 Uh_5tlreg42797 = Uv_1s.read(); //gcnl:Node.cpp:698
                              const u32 Uh_5tlreg42798 = _Unsigned32ToInt32(Uh_5tlreg42797, 6, 7); //gcnl:NodeCast.cpp:748
                              const u32 Uh_5tlreg42799 = _BinOpCompareLessThanInt32(Uh_5tlreg42798, Uh_5tlreg42795, 7); //gcnl:NodeBinaryOpCompare.cpp:441
                              if(_Bool32ToCbool(Uh_5tlreg42799, 1)) //gcnl:NodeControl.cpp:213
                              {

//! SecurityFence.ulam:74:             if (s < 41) ew[s] = ew[0];
                                  UlamRef<EC> Uh_3tur42801(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg42802 = 0; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg42803 = _Int32ToUnsigned32(Uh_5tlreg42802, 2, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval42804(Uh_5tlreg42803); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval42806 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42801, Uh_5tlval42804); //gcnl:NodeFunctionCall.cpp:1043
                                  UlamRef<EC> Uh_3tur42808(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg42810 = Uv_1s.read(); //gcnl:Node.cpp:698
                                  Ui_Ut_10161u<EC> Uh_5tlval42811(Uh_5tlreg42810); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval42813 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42808, Uh_5tlval42811); //gcnl:NodeFunctionCall.cpp:1043
                                  Uh_5tuval42813.WriteAtom(Uh_5tuval42806.read()); //write into atomof ref //gcnl:Node.cpp:992
                              } // end if
                            }
                          }

//! SecurityFence.ulam:71:           for (Int(16) y = (Int(16))((x + 4)*-1); y < 1; y++){
Ul_214endcontrolloop226:
                          __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SecurityFence.ulam:71:           for (Int(16) y = (Int(16))((x + 4)*-1); y < 1; y++){
                          const u32 Uh_5tlreg42814 = 1; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg42815 = _Int32ToInt32(Uh_5tlreg42814, 32, 16); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg42817 = Uv_1y.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg42818 = _BinOpAddInt32(Uh_5tlreg42817, Uh_5tlreg42815, 16); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                          Uv_1y.write(Uh_5tlreg42818); //gcnl:Node.cpp:892
                        } // end while //gcnl:NodeControlWhile.cpp:145
                      }
                    }

//! SecurityFence.ulam:69:         for (Int(16) x = -4; x < 1; x++){
Ul_214endcontrolloop225:
                    __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SecurityFence.ulam:69:         for (Int(16) x = -4; x < 1; x++){
                    const u32 Uh_5tlreg42819 = 1; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42820 = _Int32ToInt32(Uh_5tlreg42819, 32, 16); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42822 = Uv_1x.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42823 = _BinOpAddInt32(Uh_5tlreg42822, Uh_5tlreg42820, 16); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                    Uv_1x.write(Uh_5tlreg42823); //gcnl:Node.cpp:892
                  } // end while //gcnl:NodeControlWhile.cpp:145
                }
              }
            } // end if
          }

//! SecurityFence.ulam:78:       if (dir == 2 || dir == 4){ //right up
          {

//! SecurityFence.ulam:78:       if (dir == 2 || dir == 4){ //right up
            u32 Uh_5tlreg42824 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            const u32 Uh_5tlreg42825 = 2; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42826 = _Int32ToInt32(Uh_5tlreg42825, 3, 4); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42828 = UlamRef<EC>(ur, 0u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg42829 = _Unsigned32ToInt32(Uh_5tlreg42828, 3, 4); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42830 = _BinOpCompareEqEqInt32(Uh_5tlreg42829, Uh_5tlreg42826, 4); //gcnl:NodeBinaryOpCompare.cpp:441
            if(!_Bool32ToCbool(Uh_5tlreg42830, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg42831 = 4; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42833 = UlamRef<EC>(ur, 0u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
              const u32 Uh_5tlreg42834 = _Unsigned32ToInt32(Uh_5tlreg42833, 3, 4); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42835 = _BinOpCompareEqEqInt32(Uh_5tlreg42834, Uh_5tlreg42831, 4); //gcnl:NodeBinaryOpCompare.cpp:441
              Uh_5tlreg42824 = Uh_5tlreg42835; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42824 = Uh_5tlreg42830; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(_Bool32ToCbool(Uh_5tlreg42824, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SecurityFence.ulam:79:         for (Int(16) x = 0; x < 5; x++){
                {

//! SecurityFence.ulam:79:         for (Int(16) x = 0; x < 5; x++){
                  const u32 Uh_5tlreg42836 = 0; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg42837 = _Int32ToInt32(Uh_5tlreg42836, 2, 16); //gcnl:NodeCast.cpp:748
                  Ui_Ut_102161i<EC> Uv_1x(Uh_5tlreg42837); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:79:         for (Int(16) x = 0; x < 5; x++){
                  while(true)
                  {
                    const u32 Uh_5tlreg42838 = 5; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42839 = _Int32ToInt32(Uh_5tlreg42838, 4, 16); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42841 = Uv_1x.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42842 = _BinOpCompareLessThanInt32(Uh_5tlreg42841, Uh_5tlreg42839, 16); //gcnl:NodeBinaryOpCompare.cpp:441

                    if(!_Bool32ToCbool(Uh_5tlreg42842, 1))
                      break; //gcnl:NodeControlWhile.cpp:135

//! SecurityFence.ulam:79:         for (Int(16) x = 0; x < 5; x++){
                    {

//! SecurityFence.ulam:80:           c.x = x;
                      const u32 Uh_5tlreg42844 = Uv_1x.read(); //gcnl:Node.cpp:698
                      UlamRef<EC>(ur, 6u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42844); //gcnl:Node.cpp:892

//! SecurityFence.ulam:81:           for (Int(16) y = (Int(16))(x-4); y < 1; y++){
                      {

//! SecurityFence.ulam:81:           for (Int(16) y = (Int(16))(x-4); y < 1; y++){
                        const u32 Uh_5tlreg42847 = 4; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg42848 = _Int32ToInt32(Uh_5tlreg42847, 4, 17); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42850 = Uv_1x.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg42851 = _Int32ToInt32(Uh_5tlreg42850, 16, 17); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42852 = _BinOpSubtractInt32(Uh_5tlreg42851, Uh_5tlreg42848, 17); //gcnl:NodeBinaryOp.cpp:805
                        const u32 Uh_5tlreg42853 = _Int32ToInt32(Uh_5tlreg42852, 17, 16); //gcnl:NodeCast.cpp:748
                        Ui_Ut_102161i<EC> Uv_1y(Uh_5tlreg42853); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:81:           for (Int(16) y = (Int(16))(x-4); y < 1; y++){
                        while(true)
                        {
                          const u32 Uh_5tlreg42854 = 1; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg42855 = _Int32ToInt32(Uh_5tlreg42854, 2, 16); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg42857 = Uv_1y.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg42858 = _BinOpCompareLessThanInt32(Uh_5tlreg42857, Uh_5tlreg42855, 16); //gcnl:NodeBinaryOpCompare.cpp:441

                          if(!_Bool32ToCbool(Uh_5tlreg42858, 1))
                            break; //gcnl:NodeControlWhile.cpp:135

//! SecurityFence.ulam:81:           for (Int(16) y = (Int(16))(x-4); y < 1; y++){
                          {

//! SecurityFence.ulam:82:             c.y = y;
                            const u32 Uh_5tlreg42860 = Uv_1y.read(); //gcnl:Node.cpp:698
                            UlamRef<EC>(ur, 22u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42860); //gcnl:Node.cpp:892

//! SecurityFence.ulam:83:             SiteNumber s = ew.getSiteNumber(c);
                            UlamRef<EC> Uh_3tur42864(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg42866 = UlamRef<EC>(ur, 6u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:664
                            Ui_Uq_102323C2D10<EC> Uh_5tlval42867(Uh_5tlreg42866); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval42869 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur42864, Uh_5tlval42867); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg42870 = Uh_5tlval42869.read(); //gcnl:Node.cpp:1170
                            Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg42870); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:84:             if (s < 41) ew[s] = ew[0];
                            {

//! SecurityFence.ulam:84:             if (s < 41) ew[s] = ew[0];
                              const u32 Uh_5tlreg42871 = 41; //gcnl:NodeTerminal.cpp:690
                              const u32 Uh_5tlreg42873 = Uv_1s.read(); //gcnl:Node.cpp:698
                              const u32 Uh_5tlreg42874 = _Unsigned32ToInt32(Uh_5tlreg42873, 6, 7); //gcnl:NodeCast.cpp:748
                              const u32 Uh_5tlreg42875 = _BinOpCompareLessThanInt32(Uh_5tlreg42874, Uh_5tlreg42871, 7); //gcnl:NodeBinaryOpCompare.cpp:441
                              if(_Bool32ToCbool(Uh_5tlreg42875, 1)) //gcnl:NodeControl.cpp:213
                              {

//! SecurityFence.ulam:84:             if (s < 41) ew[s] = ew[0];
                                  UlamRef<EC> Uh_3tur42877(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg42878 = 0; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg42879 = _Int32ToUnsigned32(Uh_5tlreg42878, 2, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval42880(Uh_5tlreg42879); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval42882 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42877, Uh_5tlval42880); //gcnl:NodeFunctionCall.cpp:1043
                                  UlamRef<EC> Uh_3tur42884(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg42886 = Uv_1s.read(); //gcnl:Node.cpp:698
                                  Ui_Ut_10161u<EC> Uh_5tlval42887(Uh_5tlreg42886); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval42889 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42884, Uh_5tlval42887); //gcnl:NodeFunctionCall.cpp:1043
                                  Uh_5tuval42889.WriteAtom(Uh_5tuval42882.read()); //write into atomof ref //gcnl:Node.cpp:992
                              } // end if
                            }
                          }

//! SecurityFence.ulam:81:           for (Int(16) y = (Int(16))(x-4); y < 1; y++){
Ul_214endcontrolloop228:
                          __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SecurityFence.ulam:81:           for (Int(16) y = (Int(16))(x-4); y < 1; y++){
                          const u32 Uh_5tlreg42890 = 1; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg42891 = _Int32ToInt32(Uh_5tlreg42890, 32, 16); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg42893 = Uv_1y.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg42894 = _BinOpAddInt32(Uh_5tlreg42893, Uh_5tlreg42891, 16); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                          Uv_1y.write(Uh_5tlreg42894); //gcnl:Node.cpp:892
                        } // end while //gcnl:NodeControlWhile.cpp:145
                      }
                    }

//! SecurityFence.ulam:79:         for (Int(16) x = 0; x < 5; x++){
Ul_214endcontrolloop227:
                    __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SecurityFence.ulam:79:         for (Int(16) x = 0; x < 5; x++){
                    const u32 Uh_5tlreg42895 = 1; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42896 = _Int32ToInt32(Uh_5tlreg42895, 32, 16); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42898 = Uv_1x.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42899 = _BinOpAddInt32(Uh_5tlreg42898, Uh_5tlreg42896, 16); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                    Uv_1x.write(Uh_5tlreg42899); //gcnl:Node.cpp:892
                  } // end while //gcnl:NodeControlWhile.cpp:145
                }
              }
            } // end if
          }

//! SecurityFence.ulam:88:       if (dir == 4 || dir == 3){ //right down
          {

//! SecurityFence.ulam:88:       if (dir == 4 || dir == 3){ //right down
            u32 Uh_5tlreg42900 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            const u32 Uh_5tlreg42901 = 4; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42903 = UlamRef<EC>(ur, 0u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg42904 = _Unsigned32ToInt32(Uh_5tlreg42903, 3, 4); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42905 = _BinOpCompareEqEqInt32(Uh_5tlreg42904, Uh_5tlreg42901, 4); //gcnl:NodeBinaryOpCompare.cpp:441
            if(!_Bool32ToCbool(Uh_5tlreg42905, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg42906 = 3; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42907 = _Int32ToInt32(Uh_5tlreg42906, 3, 4); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42909 = UlamRef<EC>(ur, 0u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
              const u32 Uh_5tlreg42910 = _Unsigned32ToInt32(Uh_5tlreg42909, 3, 4); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42911 = _BinOpCompareEqEqInt32(Uh_5tlreg42910, Uh_5tlreg42907, 4); //gcnl:NodeBinaryOpCompare.cpp:441
              Uh_5tlreg42900 = Uh_5tlreg42911; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42900 = Uh_5tlreg42905; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(_Bool32ToCbool(Uh_5tlreg42900, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SecurityFence.ulam:89:         for (Int(16) x = 0; x < 5; x++){
                {

//! SecurityFence.ulam:89:         for (Int(16) x = 0; x < 5; x++){
                  const u32 Uh_5tlreg42912 = 0; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg42913 = _Int32ToInt32(Uh_5tlreg42912, 2, 16); //gcnl:NodeCast.cpp:748
                  Ui_Ut_102161i<EC> Uv_1x(Uh_5tlreg42913); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:89:         for (Int(16) x = 0; x < 5; x++){
                  while(true)
                  {
                    const u32 Uh_5tlreg42914 = 5; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42915 = _Int32ToInt32(Uh_5tlreg42914, 4, 16); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42917 = Uv_1x.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42918 = _BinOpCompareLessThanInt32(Uh_5tlreg42917, Uh_5tlreg42915, 16); //gcnl:NodeBinaryOpCompare.cpp:441

                    if(!_Bool32ToCbool(Uh_5tlreg42918, 1))
                      break; //gcnl:NodeControlWhile.cpp:135

//! SecurityFence.ulam:89:         for (Int(16) x = 0; x < 5; x++){
                    {

//! SecurityFence.ulam:90:           c.x = x;
                      const u32 Uh_5tlreg42920 = Uv_1x.read(); //gcnl:Node.cpp:698
                      UlamRef<EC>(ur, 6u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42920); //gcnl:Node.cpp:892

//! SecurityFence.ulam:91:           for (Int(16) y = (Int(16))(4 - x); y > -1; y--){
                      {

//! SecurityFence.ulam:91:           for (Int(16) y = (Int(16))(4 - x); y > -1; y--){
                        const u32 Uh_5tlreg42924 = Uv_1x.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg42925 = _Int32ToInt32(Uh_5tlreg42924, 16, 17); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42926 = 4; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg42927 = _Int32ToInt32(Uh_5tlreg42926, 4, 17); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42928 = _BinOpSubtractInt32(Uh_5tlreg42927, Uh_5tlreg42925, 17); //gcnl:NodeBinaryOp.cpp:805
                        const u32 Uh_5tlreg42929 = _Int32ToInt32(Uh_5tlreg42928, 17, 16); //gcnl:NodeCast.cpp:748
                        Ui_Ut_102161i<EC> Uv_1y(Uh_5tlreg42929); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:91:           for (Int(16) y = (Int(16))(4 - x); y > -1; y--){
                        while(true)
                        {
                          const u32 Uh_5tlreg42930 = (u32) -1; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg42931 = _Int32ToInt32(Uh_5tlreg42930, 2, 16); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg42933 = Uv_1y.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg42934 = _BinOpCompareGreaterThanInt32(Uh_5tlreg42933, Uh_5tlreg42931, 16); //gcnl:NodeBinaryOpCompare.cpp:441

                          if(!_Bool32ToCbool(Uh_5tlreg42934, 1))
                            break; //gcnl:NodeControlWhile.cpp:135

//! SecurityFence.ulam:91:           for (Int(16) y = (Int(16))(4 - x); y > -1; y--){
                          {

//! SecurityFence.ulam:92:             c.y = y;
                            const u32 Uh_5tlreg42936 = Uv_1y.read(); //gcnl:Node.cpp:698
                            UlamRef<EC>(ur, 22u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42936); //gcnl:Node.cpp:892

//! SecurityFence.ulam:93:             SiteNumber s = ew.getSiteNumber(c);
                            UlamRef<EC> Uh_3tur42940(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg42942 = UlamRef<EC>(ur, 6u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:664
                            Ui_Uq_102323C2D10<EC> Uh_5tlval42943(Uh_5tlreg42942); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval42945 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur42940, Uh_5tlval42943); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg42946 = Uh_5tlval42945.read(); //gcnl:Node.cpp:1170
                            Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg42946); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:94:             if (s < 41) ew[s] = ew[0];
                            {

//! SecurityFence.ulam:94:             if (s < 41) ew[s] = ew[0];
                              const u32 Uh_5tlreg42947 = 41; //gcnl:NodeTerminal.cpp:690
                              const u32 Uh_5tlreg42949 = Uv_1s.read(); //gcnl:Node.cpp:698
                              const u32 Uh_5tlreg42950 = _Unsigned32ToInt32(Uh_5tlreg42949, 6, 7); //gcnl:NodeCast.cpp:748
                              const u32 Uh_5tlreg42951 = _BinOpCompareLessThanInt32(Uh_5tlreg42950, Uh_5tlreg42947, 7); //gcnl:NodeBinaryOpCompare.cpp:441
                              if(_Bool32ToCbool(Uh_5tlreg42951, 1)) //gcnl:NodeControl.cpp:213
                              {

//! SecurityFence.ulam:94:             if (s < 41) ew[s] = ew[0];
                                  UlamRef<EC> Uh_3tur42953(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg42954 = 0; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg42955 = _Int32ToUnsigned32(Uh_5tlreg42954, 2, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval42956(Uh_5tlreg42955); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval42958 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42953, Uh_5tlval42956); //gcnl:NodeFunctionCall.cpp:1043
                                  UlamRef<EC> Uh_3tur42960(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg42962 = Uv_1s.read(); //gcnl:Node.cpp:698
                                  Ui_Ut_10161u<EC> Uh_5tlval42963(Uh_5tlreg42962); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval42965 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42960, Uh_5tlval42963); //gcnl:NodeFunctionCall.cpp:1043
                                  Uh_5tuval42965.WriteAtom(Uh_5tuval42958.read()); //write into atomof ref //gcnl:Node.cpp:992
                              } // end if
                            }
                          }

//! SecurityFence.ulam:91:           for (Int(16) y = (Int(16))(4 - x); y > -1; y--){
Ul_214endcontrolloop230:
                          __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SecurityFence.ulam:91:           for (Int(16) y = (Int(16))(4 - x); y > -1; y--){
                          const u32 Uh_5tlreg42966 = 1; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg42967 = _Int32ToInt32(Uh_5tlreg42966, 32, 16); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg42969 = Uv_1y.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg42970 = _BinOpSubtractInt32(Uh_5tlreg42969, Uh_5tlreg42967, 16); //gcnl:NodeBinaryOpEqualArithPostDecr.cpp:196
                          Uv_1y.write(Uh_5tlreg42970); //gcnl:Node.cpp:892
                        } // end while //gcnl:NodeControlWhile.cpp:145
                      }
                    }

//! SecurityFence.ulam:89:         for (Int(16) x = 0; x < 5; x++){
Ul_214endcontrolloop229:
                    __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SecurityFence.ulam:89:         for (Int(16) x = 0; x < 5; x++){
                    const u32 Uh_5tlreg42971 = 1; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42972 = _Int32ToInt32(Uh_5tlreg42971, 32, 16); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42974 = Uv_1x.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42975 = _BinOpAddInt32(Uh_5tlreg42974, Uh_5tlreg42972, 16); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                    Uv_1x.write(Uh_5tlreg42975); //gcnl:Node.cpp:892
                  } // end while //gcnl:NodeControlWhile.cpp:145
                }
              }
            } // end if
          }

//! SecurityFence.ulam:98:       if (dir == 3 || dir == 1){ //left down
          {

//! SecurityFence.ulam:98:       if (dir == 3 || dir == 1){ //left down
            u32 Uh_5tlreg42976 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            const u32 Uh_5tlreg42977 = 3; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42978 = _Int32ToInt32(Uh_5tlreg42977, 3, 4); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42980 = UlamRef<EC>(ur, 0u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg42981 = _Unsigned32ToInt32(Uh_5tlreg42980, 3, 4); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42982 = _BinOpCompareEqEqInt32(Uh_5tlreg42981, Uh_5tlreg42978, 4); //gcnl:NodeBinaryOpCompare.cpp:441
            if(!_Bool32ToCbool(Uh_5tlreg42982, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg42983 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42984 = _Int32ToInt32(Uh_5tlreg42983, 2, 4); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42986 = UlamRef<EC>(ur, 0u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
              const u32 Uh_5tlreg42987 = _Unsigned32ToInt32(Uh_5tlreg42986, 3, 4); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42988 = _BinOpCompareEqEqInt32(Uh_5tlreg42987, Uh_5tlreg42984, 4); //gcnl:NodeBinaryOpCompare.cpp:441
              Uh_5tlreg42976 = Uh_5tlreg42988; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42976 = Uh_5tlreg42982; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(_Bool32ToCbool(Uh_5tlreg42976, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SecurityFence.ulam:99:         for (Int(16) x = -4; x < 1; x++){
                {

//! SecurityFence.ulam:99:         for (Int(16) x = -4; x < 1; x++){
                  const u32 Uh_5tlreg42989 = (u32) -4; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg42990 = _Int32ToInt32(Uh_5tlreg42989, 4, 16); //gcnl:NodeCast.cpp:748
                  Ui_Ut_102161i<EC> Uv_1x(Uh_5tlreg42990); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:99:         for (Int(16) x = -4; x < 1; x++){
                  while(true)
                  {
                    const u32 Uh_5tlreg42991 = 1; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42992 = _Int32ToInt32(Uh_5tlreg42991, 2, 16); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42994 = Uv_1x.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42995 = _BinOpCompareLessThanInt32(Uh_5tlreg42994, Uh_5tlreg42992, 16); //gcnl:NodeBinaryOpCompare.cpp:441

                    if(!_Bool32ToCbool(Uh_5tlreg42995, 1))
                      break; //gcnl:NodeControlWhile.cpp:135

//! SecurityFence.ulam:99:         for (Int(16) x = -4; x < 1; x++){
                    {

//! SecurityFence.ulam:100:           c.x = x;
                      const u32 Uh_5tlreg42997 = Uv_1x.read(); //gcnl:Node.cpp:698
                      UlamRef<EC>(ur, 6u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42997); //gcnl:Node.cpp:892

//! SecurityFence.ulam:101:           for (Int(16) y = (Int(16))(x+4); y > -1; y--){
                      {

//! SecurityFence.ulam:101:           for (Int(16) y = (Int(16))(x+4); y > -1; y--){
                        const u32 Uh_5tlreg43000 = 4; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg43001 = _Int32ToInt32(Uh_5tlreg43000, 4, 17); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg43003 = Uv_1x.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg43004 = _Int32ToInt32(Uh_5tlreg43003, 16, 17); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg43005 = _BinOpAddInt32(Uh_5tlreg43004, Uh_5tlreg43001, 17); //gcnl:NodeBinaryOp.cpp:805
                        const u32 Uh_5tlreg43006 = _Int32ToInt32(Uh_5tlreg43005, 17, 16); //gcnl:NodeCast.cpp:748
                        Ui_Ut_102161i<EC> Uv_1y(Uh_5tlreg43006); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:101:           for (Int(16) y = (Int(16))(x+4); y > -1; y--){
                        while(true)
                        {
                          const u32 Uh_5tlreg43007 = (u32) -1; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg43008 = _Int32ToInt32(Uh_5tlreg43007, 2, 16); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg43010 = Uv_1y.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg43011 = _BinOpCompareGreaterThanInt32(Uh_5tlreg43010, Uh_5tlreg43008, 16); //gcnl:NodeBinaryOpCompare.cpp:441

                          if(!_Bool32ToCbool(Uh_5tlreg43011, 1))
                            break; //gcnl:NodeControlWhile.cpp:135

//! SecurityFence.ulam:101:           for (Int(16) y = (Int(16))(x+4); y > -1; y--){
                          {

//! SecurityFence.ulam:102:             c.y = y;
                            const u32 Uh_5tlreg43013 = Uv_1y.read(); //gcnl:Node.cpp:698
                            UlamRef<EC>(ur, 22u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43013); //gcnl:Node.cpp:892

//! SecurityFence.ulam:103:             SiteNumber s = ew.getSiteNumber(c);
                            UlamRef<EC> Uh_3tur43017(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg43019 = UlamRef<EC>(ur, 6u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:664
                            Ui_Uq_102323C2D10<EC> Uh_5tlval43020(Uh_5tlreg43019); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval43022 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur43017, Uh_5tlval43020); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg43023 = Uh_5tlval43022.read(); //gcnl:Node.cpp:1170
                            Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg43023); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:104:             if (s < 41) ew[s] = ew[0];
                            {

//! SecurityFence.ulam:104:             if (s < 41) ew[s] = ew[0];
                              const u32 Uh_5tlreg43024 = 41; //gcnl:NodeTerminal.cpp:690
                              const u32 Uh_5tlreg43026 = Uv_1s.read(); //gcnl:Node.cpp:698
                              const u32 Uh_5tlreg43027 = _Unsigned32ToInt32(Uh_5tlreg43026, 6, 7); //gcnl:NodeCast.cpp:748
                              const u32 Uh_5tlreg43028 = _BinOpCompareLessThanInt32(Uh_5tlreg43027, Uh_5tlreg43024, 7); //gcnl:NodeBinaryOpCompare.cpp:441
                              if(_Bool32ToCbool(Uh_5tlreg43028, 1)) //gcnl:NodeControl.cpp:213
                              {

//! SecurityFence.ulam:104:             if (s < 41) ew[s] = ew[0];
                                  UlamRef<EC> Uh_3tur43030(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg43031 = 0; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg43032 = _Int32ToUnsigned32(Uh_5tlreg43031, 2, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval43033(Uh_5tlreg43032); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval43035 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43030, Uh_5tlval43033); //gcnl:NodeFunctionCall.cpp:1043
                                  UlamRef<EC> Uh_3tur43037(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg43039 = Uv_1s.read(); //gcnl:Node.cpp:698
                                  Ui_Ut_10161u<EC> Uh_5tlval43040(Uh_5tlreg43039); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval43042 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43037, Uh_5tlval43040); //gcnl:NodeFunctionCall.cpp:1043
                                  Uh_5tuval43042.WriteAtom(Uh_5tuval43035.read()); //write into atomof ref //gcnl:Node.cpp:992
                              } // end if
                            }
                          }

//! SecurityFence.ulam:101:           for (Int(16) y = (Int(16))(x+4); y > -1; y--){
Ul_214endcontrolloop232:
                          __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SecurityFence.ulam:101:           for (Int(16) y = (Int(16))(x+4); y > -1; y--){
                          const u32 Uh_5tlreg43043 = 1; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg43044 = _Int32ToInt32(Uh_5tlreg43043, 32, 16); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg43046 = Uv_1y.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg43047 = _BinOpSubtractInt32(Uh_5tlreg43046, Uh_5tlreg43044, 16); //gcnl:NodeBinaryOpEqualArithPostDecr.cpp:196
                          Uv_1y.write(Uh_5tlreg43047); //gcnl:Node.cpp:892
                        } // end while //gcnl:NodeControlWhile.cpp:145
                      }
                    }

//! SecurityFence.ulam:99:         for (Int(16) x = -4; x < 1; x++){
Ul_214endcontrolloop231:
                    __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SecurityFence.ulam:99:         for (Int(16) x = -4; x < 1; x++){
                    const u32 Uh_5tlreg43048 = 1; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg43049 = _Int32ToInt32(Uh_5tlreg43048, 32, 16); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg43051 = Uv_1x.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg43052 = _BinOpAddInt32(Uh_5tlreg43051, Uh_5tlreg43049, 16); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                    Uv_1x.write(Uh_5tlreg43052); //gcnl:Node.cpp:892
                  } // end while //gcnl:NodeControlWhile.cpp:145
                }
              }
            } // end if
          }
        }
      } // end if
    }

  } // Uf_6behave



//! SecurityFence.ulam:14:   ARGB getColor(Unsigned selector){
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102389213SecurityFence10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! SecurityFence.ulam:15:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! SecurityFence.ulam:16:     ARGB ret=cu.color(0xff00ff00u);
    UlamRef<EC> Uh_3tur43054(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg43055 = 4278255360u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval43056(Uh_5tlreg43055); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval43058 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur43054, Uh_5tlval43056); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg43059 = Uh_5tlval43058.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg43059); //gcnl:NodeVarDecl.cpp:1081

//! SecurityFence.ulam:17:     ret[1]=0;
    const u32 Uh_5tlreg43060 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43061 = _Int32ToUnsigned32(Uh_5tlreg43060, 2, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg43062 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg43062 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref43064(Uv_3ret, Uh_5tlreg43062 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref43064.write(Uh_5tlreg43061);

//! SecurityFence.ulam:18:     ret[2]=0;
    const u32 Uh_5tlreg43065 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43066 = _Int32ToUnsigned32(Uh_5tlreg43065, 2, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg43067 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg43067 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref43069(Uv_3ret, Uh_5tlreg43067 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref43069.write(Uh_5tlreg43066);

//! SecurityFence.ulam:19:     ret[3]=0;
    const u32 Uh_5tlreg43070 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43071 = _Int32ToUnsigned32(Uh_5tlreg43070, 2, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg43072 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg43072 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref43074(Uv_3ret, Uh_5tlreg43072 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref43074.write(Uh_5tlreg43071);

//! SecurityFence.ulam:20:     if (mode == 0u){
    {

//! SecurityFence.ulam:20:     if (mode == 0u){
      const u32 Uh_5tlreg43075 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43076 = _Unsigned32ToUnsigned32(Uh_5tlreg43075, 1, 3); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43078 = UlamRef<EC>(ur, 3u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg43079 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43078, Uh_5tlreg43076, 3); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43079, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SecurityFence.ulam:21:       ret[2] = 255;
          const u32 Uh_5tlreg43080 = 255; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg43081 = _Int32ToUnsigned32(Uh_5tlreg43080, 9, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg43082 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg43082 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref43084(Uv_3ret, Uh_5tlreg43082 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref43084.write(Uh_5tlreg43081);
        }
      } // end if
      else
      {

//! SecurityFence.ulam:23:     else if (mode == 1u){
          {

//! SecurityFence.ulam:23:     else if (mode == 1u){
            const u32 Uh_5tlreg43085 = 1u; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg43086 = _Unsigned32ToUnsigned32(Uh_5tlreg43085, 1, 3); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg43088 = UlamRef<EC>(ur, 3u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg43089 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43088, Uh_5tlreg43086, 3); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg43089, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SecurityFence.ulam:24:       ret[2] = 128;
                const u32 Uh_5tlreg43090 = 128; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg43091 = _Int32ToUnsigned32(Uh_5tlreg43090, 9, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg43092 = 2; //gcnl:NodeTerminal.cpp:690
                if(Uh_5tlreg43092 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10181u<EC> Uh_6tlref43094(Uv_3ret, Uh_5tlreg43092 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                Uh_6tlref43094.write(Uh_5tlreg43091);

//! SecurityFence.ulam:25:       ret[3] = 255;
                const u32 Uh_5tlreg43095 = 255; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg43096 = _Int32ToUnsigned32(Uh_5tlreg43095, 9, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg43097 = 3; //gcnl:NodeTerminal.cpp:690
                if(Uh_5tlreg43097 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10181u<EC> Uh_6tlref43099(Uv_3ret, Uh_5tlreg43097 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                Uh_6tlref43099.write(Uh_5tlreg43096);
              }
            } // end if
            else
            {

//! SecurityFence.ulam:27:     else if (mode == 2u){
                {

//! SecurityFence.ulam:27:     else if (mode == 2u){
                  const u32 Uh_5tlreg43100 = 2u; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg43101 = _Unsigned32ToUnsigned32(Uh_5tlreg43100, 2, 3); //gcnl:NodeCast.cpp:748
                  const u32 Uh_5tlreg43103 = UlamRef<EC>(ur, 3u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                  const u32 Uh_5tlreg43104 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43103, Uh_5tlreg43101, 3); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg43104, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SecurityFence.ulam:28:       ret[1] = 255;
                      const u32 Uh_5tlreg43105 = 255; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg43106 = _Int32ToUnsigned32(Uh_5tlreg43105, 9, 8); //gcnl:NodeCast.cpp:748
                      const u32 Uh_5tlreg43107 = 1; //gcnl:NodeTerminal.cpp:690
                      if(Uh_5tlreg43107 >= 4) //gcnl:NodeSquareBracket.cpp:874
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                      Ui_Ut_r10181u<EC> Uh_6tlref43109(Uv_3ret, Uh_5tlreg43107 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                      Uh_6tlref43109.write(Uh_5tlreg43106);

//! SecurityFence.ulam:29:       ret[2] = 255;
                      const u32 Uh_5tlreg43110 = 255; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg43111 = _Int32ToUnsigned32(Uh_5tlreg43110, 9, 8); //gcnl:NodeCast.cpp:748
                      const u32 Uh_5tlreg43112 = 2; //gcnl:NodeTerminal.cpp:690
                      if(Uh_5tlreg43112 >= 4) //gcnl:NodeSquareBracket.cpp:874
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                      Ui_Ut_r10181u<EC> Uh_6tlref43114(Uv_3ret, Uh_5tlreg43112 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                      Uh_6tlref43114.write(Uh_5tlreg43111);
                    }
                  } // end if
                  else
                  {

//! SecurityFence.ulam:31:     else if (mode == 3u){
                      {

//! SecurityFence.ulam:31:     else if (mode == 3u){
                        const u32 Uh_5tlreg43115 = 3u; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg43116 = _Unsigned32ToUnsigned32(Uh_5tlreg43115, 2, 3); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg43118 = UlamRef<EC>(ur, 3u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                        const u32 Uh_5tlreg43119 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43118, Uh_5tlreg43116, 3); //gcnl:NodeBinaryOpCompare.cpp:441
                        if(_Bool32ToCbool(Uh_5tlreg43119, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! SecurityFence.ulam:32:       ret[1] = 255;
                            const u32 Uh_5tlreg43120 = 255; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg43121 = _Int32ToUnsigned32(Uh_5tlreg43120, 9, 8); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg43122 = 1; //gcnl:NodeTerminal.cpp:690
                            if(Uh_5tlreg43122 >= 4) //gcnl:NodeSquareBracket.cpp:874
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                            Ui_Ut_r10181u<EC> Uh_6tlref43124(Uv_3ret, Uh_5tlreg43122 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                            Uh_6tlref43124.write(Uh_5tlreg43121);
                          }
                        } // end if
                      }
                  } //end else
                }
            } //end else
          }
      } //end else
    }

//! SecurityFence.ulam:35:     return ret;
    const u32 Uh_5tlreg43126 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval43127(Uh_5tlreg43126); //gcnl:Node.cpp:1142
    return (Uh_5tlval43127); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102389213SecurityFence10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Ut_10131u", "dir", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Ut_10131u", "mode", 3u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Uq_102323C2D10", "c", 6u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102389213SecurityFence10<EC>::GetDataMemberCount() const
  {
    return 4; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102389213SecurityFence10<EC>::GetMangledClassName() const
  {
    return "Ue_102389213SecurityFence10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102389213SecurityFence10<EC>::GetClassLength( ) const
  {
    return 38; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102389213SecurityFence10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102389213SecurityFence10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102389213SecurityFence10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102389213SecurityFence10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102389213SecurityFence10<EC>::Uf_6behave10) &Ue_102389213SecurityFence10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102389213SecurityFence10<EC>::Uf_8getColor11102321u) &Ue_102389213SecurityFence10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102389213SecurityFence10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102389213SecurityFence10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102389213SecurityFence10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102389213SecurityFence10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102389213SecurityFence10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102389213SecurityFence10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

