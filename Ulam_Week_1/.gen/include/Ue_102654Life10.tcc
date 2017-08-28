/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_102323C2D10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10109210DebugUtils10.h"

namespace MFM{

  template<class EC>
  Ue_102654Life10<EC>::Ue_102654Life10() : UlamElement<EC>(MFM_UUID_FOR("Ue102654Life10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("L");  // figure this out later
    Element<EC>::SetName("Life"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102654Life10<EC>::~Ue_102654Life10(){} //gcnl:NodeBlockClass.cpp:1743


//! Life.ulam:34:   Void behave(){
  template<class EC>
  void Ue_102654Life10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Life.ulam:35:     updateColor();
    THE_INSTANCE.Uf_9211updateColor(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! Life.ulam:36:     for (Int(15) x = -1; x < 2; x++){
    {

//! Life.ulam:36:     for (Int(15) x = -1; x < 2; x++){
      const u32 Uh_5tlreg41746 = (u32) -1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41747 = _Int32ToInt32(Uh_5tlreg41746, 2, 15); //gcnl:NodeCast.cpp:748
      Ui_Ut_102151i<EC> Uv_1x(Uh_5tlreg41747); //gcnl:NodeVarDecl.cpp:1081

//! Life.ulam:36:     for (Int(15) x = -1; x < 2; x++){
      while(true)
      {
        const u32 Uh_5tlreg41748 = 2; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41749 = _Int32ToInt32(Uh_5tlreg41748, 3, 15); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41751 = Uv_1x.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41752 = _BinOpCompareLessThanInt32(Uh_5tlreg41751, Uh_5tlreg41749, 15); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41752, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Life.ulam:36:     for (Int(15) x = -1; x < 2; x++){
        {

//! Life.ulam:37:       for (Int(15) y = -1; y < 2; y++){
          {

//! Life.ulam:37:       for (Int(15) y = -1; y < 2; y++){
            const u32 Uh_5tlreg41753 = (u32) -1; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg41754 = _Int32ToInt32(Uh_5tlreg41753, 2, 15); //gcnl:NodeCast.cpp:748
            Ui_Ut_102151i<EC> Uv_1y(Uh_5tlreg41754); //gcnl:NodeVarDecl.cpp:1081

//! Life.ulam:37:       for (Int(15) y = -1; y < 2; y++){
            while(true)
            {
              const u32 Uh_5tlreg41755 = 2; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg41756 = _Int32ToInt32(Uh_5tlreg41755, 3, 15); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg41758 = Uv_1y.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg41759 = _BinOpCompareLessThanInt32(Uh_5tlreg41758, Uh_5tlreg41756, 15); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg41759, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! Life.ulam:37:       for (Int(15) y = -1; y < 2; y++){
              {

//! Life.ulam:38:         Unsigned neighbors = 0;
                const u32 Uh_5tlreg41760 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg41761 = _Int32ToUnsigned32(Uh_5tlreg41760, 2, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321u<EC> Uv_919neighbors(Uh_5tlreg41761); //gcnl:NodeVarDecl.cpp:1081

//! Life.ulam:39:       	for (Int(15) dx = -1; dx < 2; dx++){
                {

//! Life.ulam:39:       	for (Int(15) dx = -1; dx < 2; dx++){
                  const u32 Uh_5tlreg41762 = (u32) -1; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg41763 = _Int32ToInt32(Uh_5tlreg41762, 2, 15); //gcnl:NodeCast.cpp:748
                  Ui_Ut_102151i<EC> Uv_2dx(Uh_5tlreg41763); //gcnl:NodeVarDecl.cpp:1081

//! Life.ulam:39:       	for (Int(15) dx = -1; dx < 2; dx++){
                  while(true)
                  {
                    const u32 Uh_5tlreg41764 = 2; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg41765 = _Int32ToInt32(Uh_5tlreg41764, 3, 15); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg41767 = Uv_2dx.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg41768 = _BinOpCompareLessThanInt32(Uh_5tlreg41767, Uh_5tlreg41765, 15); //gcnl:NodeBinaryOpCompare.cpp:441

                    if(!_Bool32ToCbool(Uh_5tlreg41768, 1))
                      break; //gcnl:NodeControlWhile.cpp:135

//! Life.ulam:39:       	for (Int(15) dx = -1; dx < 2; dx++){
                    {

//! Life.ulam:40:           for (Int(15) dy = -1; dy < 2; dy++){
                      {

//! Life.ulam:40:           for (Int(15) dy = -1; dy < 2; dy++){
                        const u32 Uh_5tlreg41769 = (u32) -1; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg41770 = _Int32ToInt32(Uh_5tlreg41769, 2, 15); //gcnl:NodeCast.cpp:748
                        Ui_Ut_102151i<EC> Uv_2dy(Uh_5tlreg41770); //gcnl:NodeVarDecl.cpp:1081

//! Life.ulam:40:           for (Int(15) dy = -1; dy < 2; dy++){
                        while(true)
                        {
                          const u32 Uh_5tlreg41771 = 2; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg41772 = _Int32ToInt32(Uh_5tlreg41771, 3, 15); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg41774 = Uv_2dy.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg41775 = _BinOpCompareLessThanInt32(Uh_5tlreg41774, Uh_5tlreg41772, 15); //gcnl:NodeBinaryOpCompare.cpp:441

                          if(!_Bool32ToCbool(Uh_5tlreg41775, 1))
                            break; //gcnl:NodeControlWhile.cpp:135

//! Life.ulam:40:           for (Int(15) dy = -1; dy < 2; dy++){
                          {

//! Life.ulam:41:             if (dx == 0 && dy == 0) continue;
                            {

//! Life.ulam:41:             if (dx == 0 && dy == 0) continue;
                              u32 Uh_5tlreg41776 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                              const u32 Uh_5tlreg41777 = 0; //gcnl:NodeTerminal.cpp:690
                              const u32 Uh_5tlreg41778 = _Int32ToInt32(Uh_5tlreg41777, 2, 15); //gcnl:NodeCast.cpp:748
                              const u32 Uh_5tlreg41780 = Uv_2dx.read(); //gcnl:Node.cpp:698
                              const u32 Uh_5tlreg41781 = _BinOpCompareEqEqInt32(Uh_5tlreg41780, Uh_5tlreg41778, 15); //gcnl:NodeBinaryOpCompare.cpp:441
                              if(_Bool32ToCbool(Uh_5tlreg41781, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                              {
                                const u32 Uh_5tlreg41782 = 0; //gcnl:NodeTerminal.cpp:690
                                const u32 Uh_5tlreg41783 = _Int32ToInt32(Uh_5tlreg41782, 2, 15); //gcnl:NodeCast.cpp:748
                                const u32 Uh_5tlreg41785 = Uv_2dy.read(); //gcnl:Node.cpp:698
                                const u32 Uh_5tlreg41786 = _BinOpCompareEqEqInt32(Uh_5tlreg41785, Uh_5tlreg41783, 15); //gcnl:NodeBinaryOpCompare.cpp:441
                                Uh_5tlreg41776 = Uh_5tlreg41786; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                              }
                              if(_Bool32ToCbool(Uh_5tlreg41776, 1)) //gcnl:NodeControl.cpp:213
                              {

//! Life.ulam:41:             if (dx == 0 && dy == 0) continue;
                                  goto Ul_214endcontrolloop211; //continue nearest loop //gcnl:NodeContinueStatement.cpp:64
                              } // end if
                            }

//! Life.ulam:42:             c.x = x + dx;
                            const u32 Uh_5tlreg41788 = Uv_2dx.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg41789 = _Int32ToInt32(Uh_5tlreg41788, 15, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg41791 = Uv_1x.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg41792 = _Int32ToInt32(Uh_5tlreg41791, 15, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg41793 = _BinOpAddInt32(Uh_5tlreg41792, Uh_5tlreg41789, 16); //gcnl:NodeBinaryOp.cpp:805
                            UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41793); //gcnl:Node.cpp:892

//! Life.ulam:43:             c.y = y + dy;
                            const u32 Uh_5tlreg41797 = Uv_2dy.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg41798 = _Int32ToInt32(Uh_5tlreg41797, 15, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg41800 = Uv_1y.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg41801 = _Int32ToInt32(Uh_5tlreg41800, 15, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg41802 = _BinOpAddInt32(Uh_5tlreg41801, Uh_5tlreg41798, 16); //gcnl:NodeBinaryOp.cpp:805
                            UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41802); //gcnl:Node.cpp:892

//! Life.ulam:44:             Unsigned(6) s = ew.getSiteNumber(c);
                            UlamRef<EC> Uh_3tur41806(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg41808 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:664
                            Ui_Uq_102323C2D10<EC> Uh_5tlval41809(Uh_5tlreg41808); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval41811 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur41806, Uh_5tlval41809); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg41812 = Uh_5tlval41811.read(); //gcnl:Node.cpp:1170
                            Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg41812); //gcnl:NodeVarDecl.cpp:1081

//! Life.ulam:45:             if (!ew.isEmpty(s){neighbors++;}
                            {

//! Life.ulam:45:             if (!ew.isEmpty(s){neighbors++;}
                              const u32 Uh_5tlreg41813 = 1; //gcnl:NodeTerminal.cpp:690
                              const u32 Uh_5tlreg41814 = _Int32ToUnsigned32(Uh_5tlreg41813, 32, 32); //gcnl:NodeCast.cpp:748
                              const u32 Uh_5tlreg41816 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                              const u32 Uh_5tlreg41817 = _BinOpAddUnsigned32(Uh_5tlreg41816, Uh_5tlreg41814, 32); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                              Uv_919neighbors.write(Uh_5tlreg41817); //gcnl:Node.cpp:892
                            }
                          }

//! Life.ulam:40:           for (Int(15) dy = -1; dy < 2; dy++){
Ul_214endcontrolloop211:
                          __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Life.ulam:40:           for (Int(15) dy = -1; dy < 2; dy++){
                          const u32 Uh_5tlreg41818 = 1; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg41819 = _Int32ToInt32(Uh_5tlreg41818, 32, 15); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg41821 = Uv_2dy.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg41822 = _BinOpAddInt32(Uh_5tlreg41821, Uh_5tlreg41819, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                          Uv_2dy.write(Uh_5tlreg41822); //gcnl:Node.cpp:892
                        } // end while //gcnl:NodeControlWhile.cpp:145
                      }
                    }

//! Life.ulam:39:       	for (Int(15) dx = -1; dx < 2; dx++){
Ul_214endcontrolloop210:
                    __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Life.ulam:39:       	for (Int(15) dx = -1; dx < 2; dx++){
                    const u32 Uh_5tlreg41823 = 1; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg41824 = _Int32ToInt32(Uh_5tlreg41823, 32, 15); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg41826 = Uv_2dx.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg41827 = _BinOpAddInt32(Uh_5tlreg41826, Uh_5tlreg41824, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                    Uv_2dx.write(Uh_5tlreg41827); //gcnl:Node.cpp:892
                  } // end while //gcnl:NodeControlWhile.cpp:145
                }

//! Life.ulam:48:         c.x = x;
                const u32 Uh_5tlreg41829 = Uv_1x.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg41830 = _Int32ToInt32(Uh_5tlreg41829, 15, 16); //gcnl:NodeCast.cpp:748
                UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41830); //gcnl:Node.cpp:892

//! Life.ulam:49:         c.y = y;
                const u32 Uh_5tlreg41834 = Uv_1y.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg41835 = _Int32ToInt32(Uh_5tlreg41834, 15, 16); //gcnl:NodeCast.cpp:748
                UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41835); //gcnl:Node.cpp:892

//! Life.ulam:50:         Unsigned(6) s = ew.getSiteNumber(c);
                UlamRef<EC> Uh_3tur41839(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg41841 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:664
                Ui_Uq_102323C2D10<EC> Uh_5tlval41842(Uh_5tlreg41841); //gcnl:Node.cpp:1142
                const Ui_Ut_10161u<EC> Uh_5tlval41844 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur41839, Uh_5tlval41842); //gcnl:NodeFunctionCall.cpp:1043
                const u32 Uh_5tlreg41845 = Uh_5tlval41844.read(); //gcnl:Node.cpp:1170
                Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg41845); //gcnl:NodeVarDecl.cpp:1081

//! Life.ulam:52:         if (ew[s] is Life){
                {

//! Life.ulam:52:         if (ew[s] is Life){
                  UlamRef<EC> Uh_3tur41847(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                  const u32 Uh_5tlreg41849 = Uv_1s.read(); //gcnl:Node.cpp:698
                  Ui_Ut_10161u<EC> Uh_5tlval41850(Uh_5tlreg41849); //gcnl:Node.cpp:1142
                  Ui_Ut_r102961a<EC> Uh_5tuval41852 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41847, Uh_5tlval41850); //gcnl:NodeFunctionCall.cpp:1043
                  const u32 Uh_5tlreg41853 = Ue_102654Life10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval41852.read()); //gcnl:NodeConditionalIs.cpp:285
                  if(_Bool32ToCbool(Uh_5tlreg41853, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Life.ulam:53:           if (neighbors < 2u || neighbors > 3u) status[s] = false;
                      {

//! Life.ulam:53:           if (neighbors < 2u || neighbors > 3u) status[s] = false;
                        u32 Uh_5tlreg41854 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
                        const u32 Uh_5tlreg41855 = 2u; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg41856 = _Unsigned32ToUnsigned32(Uh_5tlreg41855, 2, 32); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg41858 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg41859 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41858, Uh_5tlreg41856, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                        if(!_Bool32ToCbool(Uh_5tlreg41859, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
                        {
                          const u32 Uh_5tlreg41860 = 3u; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg41861 = _Unsigned32ToUnsigned32(Uh_5tlreg41860, 2, 32); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg41863 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg41864 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg41863, Uh_5tlreg41861, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                          Uh_5tlreg41854 = Uh_5tlreg41864; //gcnl:NodeBinaryOpLogicalOr.cpp:146
                        }
                        else
                        {
                          Uh_5tlreg41854 = Uh_5tlreg41859; //gcnl:NodeBinaryOpLogicalOr.cpp:163
                        }
                        if(_Bool32ToCbool(Uh_5tlreg41854, 1)) //gcnl:NodeControl.cpp:213
                        {

//! Life.ulam:53:           if (neighbors < 2u || neighbors > 3u) status[s] = false;
                            const u32 Uh_5tlreg41865 = 0u; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg41867 = Uv_1s.read(); //gcnl:Node.cpp:698
                            if(Uh_5tlreg41867 >= 9) //gcnl:NodeSquareBracket.cpp:874
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                            Ui_Ut_r10111b<EC> Uh_6tlref41869(ur, Uh_5tlreg41867 * 1u + 32u); //gcnl:Node.cpp:1317
                            Uh_6tlref41869.write(Uh_5tlreg41865);
                        } // end if
                        else
                        {

//! Life.ulam:54:           else status[s] = true;
                            const u32 Uh_5tlreg41870 = 1u; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg41872 = Uv_1s.read(); //gcnl:Node.cpp:698
                            if(Uh_5tlreg41872 >= 9) //gcnl:NodeSquareBracket.cpp:874
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                            Ui_Ut_r10111b<EC> Uh_6tlref41874(ur, Uh_5tlreg41872 * 1u + 32u); //gcnl:Node.cpp:1317
                            Uh_6tlref41874.write(Uh_5tlreg41870);
                        } //end else
                      }
                    }
                  } // end if
                  else
                  {

//! Life.ulam:56:         else if (neighbors == 3u) status[s] = true;
                      {

//! Life.ulam:56:         else if (neighbors == 3u) status[s] = true;
                        const u32 Uh_5tlreg41875 = 3u; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg41876 = _Unsigned32ToUnsigned32(Uh_5tlreg41875, 2, 32); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg41878 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg41879 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41878, Uh_5tlreg41876, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                        if(_Bool32ToCbool(Uh_5tlreg41879, 1)) //gcnl:NodeControl.cpp:213
                        {

//! Life.ulam:56:         else if (neighbors == 3u) status[s] = true;
                            const u32 Uh_5tlreg41880 = 1u; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg41882 = Uv_1s.read(); //gcnl:Node.cpp:698
                            if(Uh_5tlreg41882 >= 9) //gcnl:NodeSquareBracket.cpp:874
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                            Ui_Ut_r10111b<EC> Uh_6tlref41884(ur, Uh_5tlreg41882 * 1u + 32u); //gcnl:Node.cpp:1317
                            Uh_6tlref41884.write(Uh_5tlreg41880);
                        } // end if
                      }
                  } //end else
                }
              }

//! Life.ulam:37:       for (Int(15) y = -1; y < 2; y++){
Ul_214endcontrolloop19:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Life.ulam:37:       for (Int(15) y = -1; y < 2; y++){
              const u32 Uh_5tlreg41885 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg41886 = _Int32ToInt32(Uh_5tlreg41885, 32, 15); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg41888 = Uv_1y.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg41889 = _BinOpAddInt32(Uh_5tlreg41888, Uh_5tlreg41886, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
              Uv_1y.write(Uh_5tlreg41889); //gcnl:Node.cpp:892
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }

//! Life.ulam:36:     for (Int(15) x = -1; x < 2; x++){
Ul_214endcontrolloop18:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Life.ulam:36:     for (Int(15) x = -1; x < 2; x++){
        const u32 Uh_5tlreg41890 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41891 = _Int32ToInt32(Uh_5tlreg41890, 32, 15); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41893 = Uv_1x.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41894 = _BinOpAddInt32(Uh_5tlreg41893, Uh_5tlreg41891, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1x.write(Uh_5tlreg41894); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Life.ulam:59:     for (Unsigned(6) i = 0; i < 9; i++){
    {

//! Life.ulam:59:     for (Unsigned(6) i = 0; i < 9; i++){
      const u32 Uh_5tlreg41895 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41896 = _Int32ToUnsigned32(Uh_5tlreg41895, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg41896); //gcnl:NodeVarDecl.cpp:1081

//! Life.ulam:59:     for (Unsigned(6) i = 0; i < 9; i++){
      while(true)
      {
        const u32 Uh_5tlreg41897 = 9; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41898 = _Int32ToInt32(Uh_5tlreg41897, 5, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41900 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41901 = _Unsigned32ToInt32(Uh_5tlreg41900, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41902 = _BinOpCompareLessThanInt32(Uh_5tlreg41901, Uh_5tlreg41898, 7); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41902, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Life.ulam:59:     for (Unsigned(6) i = 0; i < 9; i++){
        {

//! Life.ulam:60:       if (status[i]) ew[i] = Life.instanceof;
          {

//! Life.ulam:60:       if (status[i]) ew[i] = Life.instanceof;
            const u32 Uh_5tlreg41904 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg41904 >= 9) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10111b<EC> Uh_6tlref41906(ur, Uh_5tlreg41904 * 1u + 32u); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg41907 = Uh_6tlref41906.read(); //gcnl:Node.cpp:664
            if(_Bool32ToCbool(Uh_5tlreg41907, 1)) //gcnl:NodeControl.cpp:213
            {

//! Life.ulam:60:       if (status[i]) ew[i] = Life.instanceof;
                Ui_Ue_102654Life10<EC> Uh_5tuval41908; //gcnl:NodeInstanceof.cpp:113
                UlamRef<EC> Uh_3tur41910(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg41912 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval41913(Uh_5tlreg41912); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval41915 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41910, Uh_5tlval41913); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval41915.WriteAtom(Uh_5tuval41908.read()); //write into atomof ref //gcnl:Node.cpp:992
            } // end if
            else
            {

//! Life.ulam:61:       else ew[i] = Empty.instanceof;
                Ui_Ue_10105Empty10<EC> Uh_5tuval41916; //gcnl:NodeInstanceof.cpp:113
                UlamRef<EC> Uh_3tur41918(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg41920 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval41921(Uh_5tlreg41920); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval41923 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41918, Uh_5tlval41921); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval41923.WriteAtom(Uh_5tuval41916.read()); //write into atomof ref //gcnl:Node.cpp:992
            } //end else
          }
        }

//! Life.ulam:59:     for (Unsigned(6) i = 0; i < 9; i++){
Ul_214endcontrolloop212:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Life.ulam:59:     for (Unsigned(6) i = 0; i < 9; i++){
        const u32 Uh_5tlreg41924 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41925 = _Int32ToUnsigned32(Uh_5tlreg41924, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41927 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41928 = _BinOpAddUnsigned32(Uh_5tlreg41927, Uh_5tlreg41925, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg41928); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_6behave



//! Life.ulam:24:   ARGB getColor(Unsigned selector){
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102654Life10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! Life.ulam:25:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! Life.ulam:26:     ARGB ret=cu.color(0xff00ff00u);
    UlamRef<EC> Uh_3tur41930(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41931 = 4278255360u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval41932(Uh_5tlreg41931); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval41934 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur41930, Uh_5tlval41932); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41935 = Uh_5tlval41934.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg41935); //gcnl:NodeVarDecl.cpp:1081

//! Life.ulam:27:     ret[1]=red;
    const u32 Uh_5tlreg41937 = UlamRef<EC>(ur, 41u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41938 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41938 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41940(Uv_3ret, Uh_5tlreg41938 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41940.write(Uh_5tlreg41937);

//! Life.ulam:28:     ret[2]=green;
    const u32 Uh_5tlreg41942 = UlamRef<EC>(ur, 49u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41943 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41943 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41945(Uv_3ret, Uh_5tlreg41943 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41945.write(Uh_5tlreg41942);

//! Life.ulam:29:     ret[3]=blue;
    const u32 Uh_5tlreg41947 = UlamRef<EC>(ur, 57u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41948 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41948 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41950(Uv_3ret, Uh_5tlreg41948 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41950.write(Uh_5tlreg41947);

//! Life.ulam:31:     return ret;
    const u32 Uh_5tlreg41952 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval41953(Uh_5tlreg41952); //gcnl:Node.cpp:1142
    return (Uh_5tlval41953); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor



//! Life.ulam:19:   Void updateColor(){
  template<class EC>
  void Ue_102654Life10<EC>::Uf_9211updateColor(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Life.ulam:20:     if (green > 0u) green -= 2;
    {

//! Life.ulam:20:     if (green > 0u) green -= 2;
      const u32 Uh_5tlreg41954 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41955 = _Unsigned32ToUnsigned32(Uh_5tlreg41954, 1, 8); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41957 = UlamRef<EC>(ur, 49u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41958 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg41957, Uh_5tlreg41955, 8); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41958, 1)) //gcnl:NodeControl.cpp:213
      {

//! Life.ulam:20:     if (green > 0u) green -= 2;
          const u32 Uh_5tlreg41959 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41960 = _Int32ToUnsigned32(Uh_5tlreg41959, 3, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41962 = UlamRef<EC>(ur, 49u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg41963 = _BinOpSubtractUnsigned32(Uh_5tlreg41962, Uh_5tlreg41960, 8); //gcnl:NodeBinaryOpEqualArith.cpp:244
          UlamRef<EC>(ur, 49u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41963); //gcnl:Node.cpp:892
      } // end if
    }

//! Life.ulam:21:     if (red < 255u) red += 4;
    {

//! Life.ulam:21:     if (red < 255u) red += 4;
      const u32 Uh_5tlreg41964 = 255u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41966 = UlamRef<EC>(ur, 41u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41967 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41966, Uh_5tlreg41964, 8); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41967, 1)) //gcnl:NodeControl.cpp:213
      {

//! Life.ulam:21:     if (red < 255u) red += 4;
          const u32 Uh_5tlreg41968 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41969 = _Int32ToUnsigned32(Uh_5tlreg41968, 4, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41971 = UlamRef<EC>(ur, 41u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg41972 = _BinOpAddUnsigned32(Uh_5tlreg41971, Uh_5tlreg41969, 8); //gcnl:NodeBinaryOpEqualArith.cpp:244
          UlamRef<EC>(ur, 41u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41972); //gcnl:Node.cpp:892
      } // end if
    }

  } // Uf_9211updateColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102654Life10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Uq_10109210DebugUtils10", "du", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Uq_102323C2D10", "c", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Ut_19111b", "status", 32u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 4: { static UlamClassDataMemberInfo i("Ut_10181u", "red", 41u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 5: { static UlamClassDataMemberInfo i("Ut_10181u", "green", 49u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 6: { static UlamClassDataMemberInfo i("Ut_10181u", "blue", 57u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102654Life10<EC>::GetDataMemberCount() const
  {
    return 7; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102654Life10<EC>::GetMangledClassName() const
  {
    return "Ue_102654Life10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102654Life10<EC>::GetClassLength( ) const
  {
    return 65; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102654Life10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102654Life10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102654Life10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    static const u32 vales[(96 + 31)/32] = { 0x0, 0x0, 0x200000 }; //gcnl:CompilerState.cpp:1395
    static BitVector<96> initBV; //gcnl:CompilerState.cpp:1401
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1417
      //correct runtime regnum for strings
      const Ui_Uq_102323C2D10<EC> Uh_5tlreg41973; //gcnl:NodeVarDeclDM.cpp:801
      const u32 Uh_5tlreg41974(Uh_5tlreg41973.read()); //gcnl:NodeVarDeclDM.cpp:811
      initBV.Write(25u, 32, Uh_5tlreg41974); //Um_1c //gcnl:NodeVarDeclDM.cpp:832
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102654Life10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102654Life10<EC>::Uf_6behave10) &Ue_102654Life10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102654Life10<EC>::Uf_8getColor11102321u) &Ue_102654Life10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102654Life10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102654Life10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102654Life10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102654Life10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102654Life10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102654Life10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

