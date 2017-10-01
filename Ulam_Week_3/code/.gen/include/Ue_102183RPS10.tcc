/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10106Random10.h"
#include "Uq_10114Once10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_102183RPS10<EC>::Ue_102183RPS10() : UlamElement<EC>(MFM_UUID_FOR("Ue102183RPS10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("R");  // figure this out later
    Element<EC>::SetName("RPS"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102183RPS10<EC>::~Ue_102183RPS10(){} //gcnl:NodeBlockClass.cpp:1743


//! RPS.ulam:30:   Void behave(){
  template<class EC>
  void Ue_102183RPS10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! RPS.ulam:31:     if (once.new() && !preInit){
    {

//! RPS.ulam:31:     if (once.new() && !preInit){
      u32 Uh_5tlreg212 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      UlamRef<EC> Uh_3tur214(ur, 0u, 1u, &Uq_10114Once10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const Ui_Ut_10111b<EC> Uh_5tlval216 = Uq_10115OnceT11102151y10<EC>::THE_INSTANCE.Uf_3new(uc, Uh_3tur214); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg217 = Uh_5tlval216.read(); //gcnl:Node.cpp:1170
      if(_Bool32ToCbool(Uh_5tlreg217, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg219 = UlamRef<EC>(ur, 9u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg220 = _LogicalBangBool32(Uh_5tlreg219, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg212 = Uh_5tlreg220; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg212, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! RPS.ulam:32:       type = (Byte)rm.between(0, 2);
          UlamRef<EC> Uh_3tur222(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg223 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg224 = _Int32ToInt32(Uh_5tlreg223, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval225(Uh_5tlreg224); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg226 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg227 = _Int32ToInt32(Uh_5tlreg226, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval228(Uh_5tlreg227); //gcnl:Node.cpp:1142
          const Ui_Ut_102321i<EC> Uh_5tlval230 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur222, Uh_5tlval225, Uh_5tlval228); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg231 = Uh_5tlval230.read(); //gcnl:Node.cpp:1170
          const u32 Uh_5tlreg232 = _Int32ToUnsigned32(Uh_5tlreg231, 32, 8); //gcnl:NodeCast.cpp:748
          UlamRef<EC>(ur, 10u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg232); //gcnl:Node.cpp:892
        }
      } // end if
      else
      {
        {

//! RPS.ulam:35:       for (SiteNum i = 1; i < 5; i++){
          {

//! RPS.ulam:35:       for (SiteNum i = 1; i < 5; i++){
            const u32 Uh_5tlreg234 = 1; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg235 = _Int32ToUnsigned32(Uh_5tlreg234, 2, 6); //gcnl:NodeCast.cpp:748
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg235); //gcnl:NodeVarDecl.cpp:1081

//! RPS.ulam:35:       for (SiteNum i = 1; i < 5; i++){
            while(true)
            {
              const u32 Uh_5tlreg236 = 5; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg237 = _Int32ToInt32(Uh_5tlreg236, 4, 7); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg239 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg240 = _Unsigned32ToInt32(Uh_5tlreg239, 6, 7); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg241 = _BinOpCompareLessThanInt32(Uh_5tlreg240, Uh_5tlreg237, 7); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg241, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! RPS.ulam:35:       for (SiteNum i = 1; i < 5; i++){
              {

//! RPS.ulam:36:         if (ew[i] is Empty) ew[i] = clone();
                {

//! RPS.ulam:36:         if (ew[i] is Empty) ew[i] = clone();
                  UlamRef<EC> Uh_3tur243(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                  const u32 Uh_5tlreg245 = Uv_1i.read(); //gcnl:Node.cpp:698
                  Ui_Ut_10161u<EC> Uh_5tlval246(Uh_5tlreg245); //gcnl:Node.cpp:1142
                  Ui_Ut_r102961a<EC> Uh_5tuval248 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur243, Uh_5tlval246); //gcnl:NodeFunctionCall.cpp:1043
                  const u32 Uh_5tlreg249 = Ue_10105Empty10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval248.read()); //gcnl:NodeConditionalIs.cpp:285
                  if(_Bool32ToCbool(Uh_5tlreg249, 1)) //gcnl:NodeControl.cpp:213
                  {

//! RPS.ulam:36:         if (ew[i] is Empty) ew[i] = clone();
                      Ui_Ue_102183RPS10<EC> Uh_5tuval252 = THE_INSTANCE.Uf_5clone(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
                      UlamRef<EC> Uh_3tur254(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg256 = Uv_1i.read(); //gcnl:Node.cpp:698
                      Ui_Ut_10161u<EC> Uh_5tlval257(Uh_5tlreg256); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval259 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur254, Uh_5tlval257); //gcnl:NodeFunctionCall.cpp:1043
                      Uh_5tuval259.WriteAtom(Uh_5tuval252.read()); //write into atomof ref //gcnl:Node.cpp:992
                  } // end if
                }

//! RPS.ulam:37:         Atom a = (Atom)ew[i];
                UlamRef<EC> Uh_3tur261(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg263 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval264(Uh_5tlreg263); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval266 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur261, Uh_5tlval264); //gcnl:NodeFunctionCall.cpp:1043
                Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval266.read()); //gcnl:NodeVarDecl.cpp:1081

//! RPS.ulam:38:         if (a as RPS){
                {

//! RPS.ulam:38:         if (a as RPS){
                  const T Uh_3tut268 = Uv_1a.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg269 = Ue_102183RPS10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut268); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg269, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! RPS.ulam:38:         if (a as RPS){
                      Ui_Ut_102961a<EC> & Uh_5tuval270 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102183RPS10<EC> Uv_1a(Uh_5tuval270, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval270.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! RPS.ulam:39:           if (a.type == (type+1)%3) a.life--;
                      {

//! RPS.ulam:39:           if (a.type == (type+1)%3) a.life--;
                        const u32 Uh_5tlreg271 = 3; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg272 = _Int32ToInt32(Uh_5tlreg271, 3, 10); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg273 = 1; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg274 = _Int32ToInt32(Uh_5tlreg273, 2, 10); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg276 = UlamRef<EC>(ur, 10u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                        const u32 Uh_5tlreg277 = _Unsigned32ToInt32(Uh_5tlreg276, 8, 10); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg278 = _BinOpAddInt32(Uh_5tlreg277, Uh_5tlreg274, 10); //gcnl:NodeBinaryOp.cpp:805
                        const u32 Uh_5tlreg279 = _BinOpModInt32(Uh_5tlreg278, Uh_5tlreg272, 10); //gcnl:NodeBinaryOp.cpp:805
                        const u32 Uh_5tlreg280 = _Int32ToInt32(Uh_5tlreg279, 10, 3); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg281 = _Int32ToInt32(Uh_5tlreg280, 3, 9); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg284 = UlamRef<EC>(Uv_1a, 10u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg285 = _Unsigned32ToInt32(Uh_5tlreg284, 8, 9); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg286 = _BinOpCompareEqEqInt32(Uh_5tlreg285, Uh_5tlreg281, 9); //gcnl:NodeBinaryOpCompare.cpp:441
                        if(_Bool32ToCbool(Uh_5tlreg286, 1)) //gcnl:NodeControl.cpp:213
                        {

//! RPS.ulam:39:           if (a.type == (type+1)%3) a.life--;
                            const u32 Uh_5tlreg287 = 1; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg288 = _Int32ToUnsigned32(Uh_5tlreg287, 32, 8); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg291 = UlamRef<EC>(Uv_1a, 1u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg292 = _BinOpSubtractUnsigned32(Uh_5tlreg291, Uh_5tlreg288, 8); //gcnl:NodeBinaryOpEqualArithPostDecr.cpp:196
                            UlamRef<EC>(Uv_1a, 1u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg292); //gcnl:Node.cpp:892
                        } // end if
                      }

//! RPS.ulam:40:           if (a.life == 0)ew[i] = clone();
                      {

//! RPS.ulam:40:           if (a.life == 0)ew[i] = clone();
                        const u32 Uh_5tlreg293 = 0; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg294 = _Int32ToInt32(Uh_5tlreg293, 2, 9); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg297 = UlamRef<EC>(Uv_1a, 1u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg298 = _Unsigned32ToInt32(Uh_5tlreg297, 8, 9); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg299 = _BinOpCompareEqEqInt32(Uh_5tlreg298, Uh_5tlreg294, 9); //gcnl:NodeBinaryOpCompare.cpp:441
                        if(_Bool32ToCbool(Uh_5tlreg299, 1)) //gcnl:NodeControl.cpp:213
                        {

//! RPS.ulam:40:           if (a.life == 0)ew[i] = clone();
                            Ui_Ue_102183RPS10<EC> Uh_5tuval3102 = THE_INSTANCE.Uf_5clone(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
                            UlamRef<EC> Uh_3tur3104(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3106 = Uv_1i.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval3107(Uh_5tlreg3106); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3109 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3104, Uh_5tlval3107); //gcnl:NodeFunctionCall.cpp:1043
                            Uh_5tuval3109.WriteAtom(Uh_5tuval3102.read()); //write into atomof ref //gcnl:Node.cpp:992
                        } // end if
                        else
                        {

//! RPS.ulam:41:           else ew[i] = a;
                            const T Uh_3tut3111 = Uv_1a.read(); //gcnl:Node.cpp:698
                            UlamRef<EC> Uh_3tur3113(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3115 = Uv_1i.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval3116(Uh_5tlreg3115); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3118 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3113, Uh_5tlval3116); //gcnl:NodeFunctionCall.cpp:1043
                            Uh_5tuval3118.WriteAtom(Uh_3tut3111); //write into atomof ref //gcnl:Node.cpp:992
                        } //end else
                      }
                    }
                  } // end if
                }
              }

//! RPS.ulam:35:       for (SiteNum i = 1; i < 5; i++){
Ul_214endcontrolloop11:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! RPS.ulam:35:       for (SiteNum i = 1; i < 5; i++){
              const u32 Uh_5tlreg3119 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3120 = _Int32ToUnsigned32(Uh_5tlreg3119, 32, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3122 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3123 = _BinOpAddUnsigned32(Uh_5tlreg3122, Uh_5tlreg3120, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
              Uv_1i.write(Uh_5tlreg3123); //gcnl:Node.cpp:892
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }
      } //end else
    }

  } // Uf_6behave



//! RPS.ulam:18:   ARGB getColor(Unsigned selector){
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102183RPS10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! RPS.ulam:19:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! RPS.ulam:20:     ARGB ret=cu.color(0xff00ff00u);
    UlamRef<EC> Uh_3tur3125(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3126 = 4278255360u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval3127(Uh_5tlreg3126); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval3129 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur3125, Uh_5tlval3127); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3130 = Uh_5tlval3129.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg3130); //gcnl:NodeVarDecl.cpp:1081

//! RPS.ulam:21:     ret[1]=0;
    const u32 Uh_5tlreg3131 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3132 = _Int32ToUnsigned32(Uh_5tlreg3131, 2, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3133 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3133 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3135(Uv_3ret, Uh_5tlreg3133 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3135.write(Uh_5tlreg3132);

//! RPS.ulam:22:     ret[2]=0;
    const u32 Uh_5tlreg3136 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3137 = _Int32ToUnsigned32(Uh_5tlreg3136, 2, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3138 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3138 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3140(Uv_3ret, Uh_5tlreg3138 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3140.write(Uh_5tlreg3137);

//! RPS.ulam:23:     ret[3]=0;
    const u32 Uh_5tlreg3141 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3142 = _Int32ToUnsigned32(Uh_5tlreg3141, 2, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3143 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3143 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3145(Uv_3ret, Uh_5tlreg3143 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3145.write(Uh_5tlreg3142);

//! RPS.ulam:24:     if(type==0) ret[1]=255;
    {

//! RPS.ulam:24:     if(type==0) ret[1]=255;
      const u32 Uh_5tlreg3146 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3147 = _Int32ToInt32(Uh_5tlreg3146, 2, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3149 = UlamRef<EC>(ur, 10u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3150 = _Unsigned32ToInt32(Uh_5tlreg3149, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3151 = _BinOpCompareEqEqInt32(Uh_5tlreg3150, Uh_5tlreg3147, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3151, 1)) //gcnl:NodeControl.cpp:213
      {

//! RPS.ulam:24:     if(type==0) ret[1]=255;
          const u32 Uh_5tlreg3152 = 255; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3153 = _Int32ToUnsigned32(Uh_5tlreg3152, 9, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3154 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg3154 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3156(Uv_3ret, Uh_5tlreg3154 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3156.write(Uh_5tlreg3153);
      } // end if
    }

//! RPS.ulam:25:     if(type==1) ret[2]=255;
    {

//! RPS.ulam:25:     if(type==1) ret[2]=255;
      const u32 Uh_5tlreg3157 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3158 = _Int32ToInt32(Uh_5tlreg3157, 2, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3160 = UlamRef<EC>(ur, 10u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3161 = _Unsigned32ToInt32(Uh_5tlreg3160, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3162 = _BinOpCompareEqEqInt32(Uh_5tlreg3161, Uh_5tlreg3158, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3162, 1)) //gcnl:NodeControl.cpp:213
      {

//! RPS.ulam:25:     if(type==1) ret[2]=255;
          const u32 Uh_5tlreg3163 = 255; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3164 = _Int32ToUnsigned32(Uh_5tlreg3163, 9, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3165 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg3165 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3167(Uv_3ret, Uh_5tlreg3165 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3167.write(Uh_5tlreg3164);
      } // end if
    }

//! RPS.ulam:26:     if(type==2) ret[3]=255;
    {

//! RPS.ulam:26:     if(type==2) ret[3]=255;
      const u32 Uh_5tlreg3168 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3169 = _Int32ToInt32(Uh_5tlreg3168, 3, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3171 = UlamRef<EC>(ur, 10u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3172 = _Unsigned32ToInt32(Uh_5tlreg3171, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3173 = _BinOpCompareEqEqInt32(Uh_5tlreg3172, Uh_5tlreg3169, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3173, 1)) //gcnl:NodeControl.cpp:213
      {

//! RPS.ulam:26:     if(type==2) ret[3]=255;
          const u32 Uh_5tlreg3174 = 255; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3175 = _Int32ToUnsigned32(Uh_5tlreg3174, 9, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3176 = 3; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg3176 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3178(Uv_3ret, Uh_5tlreg3176 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3178.write(Uh_5tlreg3175);
      } // end if
    }

//! RPS.ulam:27:     return ret;
    const u32 Uh_5tlreg3180 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3181(Uh_5tlreg3180); //gcnl:Node.cpp:1142
    return (Uh_5tlval3181); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor



//! RPS.ulam:47:   RPS clone(){
  template<class EC>
  Ui_Ue_102183RPS10<EC> Ue_102183RPS10<EC>::Uf_5clone(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! RPS.ulam:48:     RPS rps = RPS.instanceof;
    Ui_Ue_102183RPS10<EC> Uh_5tuval3182; //gcnl:NodeInstanceof.cpp:113
    Ui_Ue_102183RPS10<EC> Uv_3rps(Uh_5tuval3182); //gcnl:NodeVarDecl.cpp:1081

//! RPS.ulam:49:     rps.preInit = true;
    const u32 Uh_5tlreg3183 = 1u; //gcnl:NodeTerminal.cpp:690
    UlamRef<EC>(34u, 1u, Uv_3rps, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3183); //gcnl:Node.cpp:892

//! RPS.ulam:50:     rps.type = type;
    const u32 Uh_5tlreg3187 = UlamRef<EC>(ur, 10u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    UlamRef<EC>(35u, 8u, Uv_3rps, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3187); //gcnl:Node.cpp:892

//! RPS.ulam:51:     return rps;
    const T Uh_3tut3191 = Uv_3rps.read(); //gcnl:Node.cpp:698
    Ui_Ue_102183RPS10<EC> Uh_5tuval3192(Uh_3tut3191); //gcnl:Node.cpp:1142
    return (Uh_5tuval3192); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5clone


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102183RPS10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Uq_10106Random10", "rm", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Uq_10114Once10", "once", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Ut_10181u", "life", 1u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 4: { static UlamClassDataMemberInfo i("Ut_10111b", "preInit", 9u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 5: { static UlamClassDataMemberInfo i("Ut_10181u", "type", 10u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102183RPS10<EC>::GetDataMemberCount() const
  {
    return 6; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102183RPS10<EC>::GetMangledClassName() const
  {
    return "Ue_102183RPS10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102183RPS10<EC>::GetClassLength( ) const
  {
    return 18; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102183RPS10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102183RPS10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102183RPS10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    static const u32 vales[(96 + 31)/32] = { 0x2, 0x80000000, 0x0 }; //gcnl:CompilerState.cpp:1395
    static BitVector<96> initBV; //gcnl:CompilerState.cpp:1401
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1417
      //correct runtime regnum for strings
      const Ui_Uq_10114Once10<EC> Uh_5tlreg3193; //gcnl:NodeVarDeclDM.cpp:801
      const u32 Uh_5tlreg3194(Uh_5tlreg3193.read()); //gcnl:NodeVarDeclDM.cpp:811
      initBV.Write(25u, 1, Uh_5tlreg3194); //Um_4once //gcnl:NodeVarDeclDM.cpp:832
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102183RPS10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102183RPS10<EC>::Uf_6behave10) &Ue_102183RPS10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102183RPS10<EC>::Uf_8getColor11102321u) &Ue_102183RPS10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102183RPS10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102183RPS10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102183RPS10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102183RPS10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102183RPS10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102183RPS10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

