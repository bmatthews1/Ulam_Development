/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_102323C2D10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10104Wall10.h"
#include "Ue_10108CellWall10.h"

namespace MFM{

  template<class EC>
  Uq_102244Bond10<EC>::Uq_102244Bond10() : UlamQuark<EC>(MFM_UUID_FOR("Uq102244Bond10", 0))
  { }

  template<class EC>
  Uq_102244Bond10<EC>::~Uq_102244Bond10(){} //gcnl:NodeBlockClass.cpp:1784


//! Bond.ulam:26: 	Void setActive(Bool state){
  template<class EC>
  void Uq_102244Bond10<EC>::Uf_919setActive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10111b<EC>& Uv_5state) const
  {

//! Bond.ulam:27: 		active = state;
    const u32 Uh_5tlreg223 = Uv_5state.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg223); //gcnl:Node.cpp:892

  } // Uf_919setActive



//! Bond.ulam:31: 	Void addBond(Coord c){
  template<class EC>
  void Uq_102244Bond10<EC>::Uf_7addBond(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! Bond.ulam:32: 		if (c == 0) return;
    {

//! Bond.ulam:32: 		if (c == 0) return;
      const u32 Uh_5tlreg225 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg226 = _Int32ToInt32(Uh_5tlreg225, 2, 6); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg228 = Uv_1c.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg229 = _Unsigned32ToInt32(Uh_5tlreg228, 5, 6); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg230 = _BinOpCompareEqEqInt32(Uh_5tlreg229, Uh_5tlreg226, 6); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg230, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:32: 		if (c == 0) return;
          return; //gcnl:NodeReturnStatement.cpp:348
      } // end if
    }

//! Bond.ulam:35: 		for (Index i = 0; i < 3; i++){
    {

//! Bond.ulam:35: 		for (Index i = 0; i < 3; i++){
      const u32 Uh_5tlreg231 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg232 = _Int32ToUnsigned32(Uh_5tlreg231, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg232); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:35: 		for (Index i = 0; i < 3; i++){
      while(true)
      {
        const u32 Uh_5tlreg233 = 3; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg234 = _Int32ToInt32(Uh_5tlreg233, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg236 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg237 = _Unsigned32ToInt32(Uh_5tlreg236, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg238 = _BinOpCompareLessThanInt32(Uh_5tlreg237, Uh_5tlreg234, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg238, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:35: 		for (Index i = 0; i < 3; i++){
        {

//! Bond.ulam:36: 			if (bonds[i] == c) return; //already contains this bond
          {

//! Bond.ulam:36: 			if (bonds[i] == c) return; //already contains this bond
            const u32 Uh_5tlreg240 = Uv_1c.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg242 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg242 >= 4) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10151u<EC> Uh_6tlref244(ur, Uh_5tlreg242 * 5u + 4u); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg245 = Uh_6tlref244.read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg246 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg245, Uh_5tlreg240, 5); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg246, 1)) //gcnl:NodeControl.cpp:213
            {

//! Bond.ulam:36: 			if (bonds[i] == c) return; //already contains this bond
                return; //gcnl:NodeReturnStatement.cpp:348
            } // end if
          }

//! Bond.ulam:37: 			if (bonds[i] == 0){
          {

//! Bond.ulam:37: 			if (bonds[i] == 0){
            const u32 Uh_5tlreg247 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg248 = _Int32ToInt32(Uh_5tlreg247, 2, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg250 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg250 >= 4) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10151u<EC> Uh_6tlref252(ur, Uh_5tlreg250 * 5u + 4u); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg253 = Uh_6tlref252.read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg254 = _Unsigned32ToInt32(Uh_5tlreg253, 5, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg255 = _BinOpCompareEqEqInt32(Uh_5tlreg254, Uh_5tlreg248, 6); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg255, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:38: 				bonds[i] = c;
                const u32 Uh_5tlreg257 = Uv_1c.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg259 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg259 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10151u<EC> Uh_6tlref261(ur, Uh_5tlreg259 * 5u + 4u); //gcnl:Node.cpp:1317
                Uh_6tlref261.write(Uh_5tlreg257);

//! Bond.ulam:39: 				bondCount++;
                const u32 Uh_5tlreg262 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg263 = _Int32ToUnsigned32(Uh_5tlreg262, 32, 3); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg265 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                const u32 Uh_5tlreg266 = _BinOpAddUnsigned32(Uh_5tlreg265, Uh_5tlreg263, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg266); //gcnl:Node.cpp:892

//! Bond.ulam:40: 				return;
                return; //gcnl:NodeReturnStatement.cpp:348
              }
            } // end if
          }
        }

//! Bond.ulam:35: 		for (Index i = 0; i < 3; i++){
Ul_214endcontrolloop11:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:35: 		for (Index i = 0; i < 3; i++){
        const u32 Uh_5tlreg267 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg268 = _Int32ToUnsigned32(Uh_5tlreg267, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg270 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg271 = _BinOpAddUnsigned32(Uh_5tlreg270, Uh_5tlreg268, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg271); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Bond.ulam:45: 		for (Index i = 0; i < 3; i++){
    {

//! Bond.ulam:45: 		for (Index i = 0; i < 3; i++){
      const u32 Uh_5tlreg272 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg273 = _Int32ToUnsigned32(Uh_5tlreg272, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg273); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:45: 		for (Index i = 0; i < 3; i++){
      while(true)
      {
        const u32 Uh_5tlreg274 = 3; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg275 = _Int32ToInt32(Uh_5tlreg274, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg277 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg278 = _Unsigned32ToInt32(Uh_5tlreg277, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg279 = _BinOpCompareLessThanInt32(Uh_5tlreg278, Uh_5tlreg275, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg279, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:45: 		for (Index i = 0; i < 3; i++){
        {

//! Bond.ulam:46: 			Coord myCoord = bonds[i];
          const u32 Uh_5tlreg281 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg281 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10151u<EC> Uh_6tlref283(ur, Uh_5tlreg281 * 5u + 4u); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg284 = Uh_6tlref283.read(); //gcnl:Node.cpp:664
          Ui_Ut_10151u<EC> Uv_7myCoord(Uh_5tlreg284); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:47: 			if ((c/4) < (myCoord/4) && myCoord != 0){
          {

//! Bond.ulam:47: 			if ((c/4) < (myCoord/4) && myCoord != 0){
            u32 Uh_5tlreg285 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg286 = 4; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg287 = _Int32ToInt32(Uh_5tlreg286, 4, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg289 = Uv_7myCoord.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg290 = _Unsigned32ToInt32(Uh_5tlreg289, 5, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg291 = _BinOpDivideInt32(Uh_5tlreg290, Uh_5tlreg287, 6); //gcnl:NodeBinaryOp.cpp:805
            const u32 Uh_5tlreg292 = 4; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg293 = _Int32ToInt32(Uh_5tlreg292, 4, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg295 = Uv_1c.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg296 = _Unsigned32ToInt32(Uh_5tlreg295, 5, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg297 = _BinOpDivideInt32(Uh_5tlreg296, Uh_5tlreg293, 6); //gcnl:NodeBinaryOp.cpp:805
            const u32 Uh_5tlreg298 = _BinOpCompareLessThanInt32(Uh_5tlreg297, Uh_5tlreg291, 6); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg298, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg299 = 0; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3100 = _Int32ToInt32(Uh_5tlreg299, 2, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3102 = Uv_7myCoord.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3103 = _Unsigned32ToInt32(Uh_5tlreg3102, 5, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3104 = _BinOpCompareNotEqInt32(Uh_5tlreg3103, Uh_5tlreg3100, 6); //gcnl:NodeBinaryOpCompare.cpp:441
              Uh_5tlreg285 = Uh_5tlreg3104; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg285, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:48: 				Atom a = ew[myCoord];
                UlamRef<EC> Uh_3tur3106(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3108 = Uv_7myCoord.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3109 = _Unsigned32ToUnsigned32(Uh_5tlreg3108, 5, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3110(Uh_5tlreg3109); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3112 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3106, Uh_5tlval3110); //gcnl:NodeFunctionCall.cpp:1043
                Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval3112); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:49: 				if (a as Bond){
                {

//! Bond.ulam:49: 				if (a as Bond){
                  const T Uh_3tut3114 = Uv_1a.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg3115 = UlamClass<EC>::IsMethod(uc, Uh_3tut3114.GetType(), &Uq_102244Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalAs.cpp:453
                  if(_Bool32ToCbool(Uh_5tlreg3115, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Bond.ulam:49: 				if (a as Bond){
                      Ui_Ut_102961a<EC> & Uh_5tuval3116 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Uq_r102244Bond10<EC> Uv_1a(Uh_5tuval3116, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval3116.GetType()), UlamRef<EC>::ELEMENTAL, uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Bond.ulam:50: 					a.removeBond((Coord)reverse(myCoord));
                      UlamRef<EC> Uh_3tur3118(Uv_1a, 24u); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3121 = Uv_7myCoord.read(); //gcnl:Node.cpp:698
                      const u32 Uh_5tlreg3122 = _Unsigned32ToUnsigned32(Uh_5tlreg3121, 5, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3123(Uh_5tlreg3122); //gcnl:Node.cpp:1142
                      const Ui_Ut_10161u<EC> Uh_5tlval3125 = THE_INSTANCE.Uf_7reverse(uc, ur, Uh_5tlval3123); //gcnl:NodeFunctionCall.cpp:1043
                      const u32 Uh_5tlreg3126 = Uh_5tlval3125.read(); //gcnl:Node.cpp:1170
                      const u32 Uh_5tlreg3127 = _Unsigned32ToUnsigned32(Uh_5tlreg3126, 6, 5); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10151u<EC> Uh_5tlval3128(Uh_5tlreg3127); //gcnl:Node.cpp:1142
                      Uq_102244Bond10<EC>::THE_INSTANCE.Uf_9210removeBond(uc, Uh_3tur3118, Uh_5tlval3128); //gcnl:NodeFunctionCall.cpp:1043
                    }
                  } // end if
                }

//! Bond.ulam:53: 				bonds[i] = c;
                const u32 Uh_5tlreg3131 = Uv_1c.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3133 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg3133 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10151u<EC> Uh_6tlref3135(ur, Uh_5tlreg3133 * 5u + 4u); //gcnl:Node.cpp:1317
                Uh_6tlref3135.write(Uh_5tlreg3131);

//! Bond.ulam:54: 				return;
                return; //gcnl:NodeReturnStatement.cpp:348
              }
            } // end if
          }
        }

//! Bond.ulam:45: 		for (Index i = 0; i < 3; i++){
Ul_214endcontrolloop12:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:45: 		for (Index i = 0; i < 3; i++){
        const u32 Uh_5tlreg3136 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3137 = _Int32ToUnsigned32(Uh_5tlreg3136, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3139 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3140 = _BinOpAddUnsigned32(Uh_5tlreg3139, Uh_5tlreg3137, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3140); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_7addBond



//! Bond.ulam:70: 	Void removeBond(Coord c){
  template<class EC>
  void Uq_102244Bond10<EC>::Uf_9210removeBond(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! Bond.ulam:71: 		if (c == 0) return;
    {

//! Bond.ulam:71: 		if (c == 0) return;
      const u32 Uh_5tlreg3141 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3142 = _Int32ToInt32(Uh_5tlreg3141, 2, 6); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3144 = Uv_1c.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3145 = _Unsigned32ToInt32(Uh_5tlreg3144, 5, 6); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3146 = _BinOpCompareEqEqInt32(Uh_5tlreg3145, Uh_5tlreg3142, 6); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3146, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:71: 		if (c == 0) return;
          return; //gcnl:NodeReturnStatement.cpp:348
      } // end if
    }

//! Bond.ulam:72: 		for(Index i = 0; i < 3; i++){
    {

//! Bond.ulam:72: 		for(Index i = 0; i < 3; i++){
      const u32 Uh_5tlreg3147 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3148 = _Int32ToUnsigned32(Uh_5tlreg3147, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3148); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:72: 		for(Index i = 0; i < 3; i++){
      while(true)
      {
        const u32 Uh_5tlreg3149 = 3; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3150 = _Int32ToInt32(Uh_5tlreg3149, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3152 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3153 = _Unsigned32ToInt32(Uh_5tlreg3152, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3154 = _BinOpCompareLessThanInt32(Uh_5tlreg3153, Uh_5tlreg3150, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3154, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:72: 		for(Index i = 0; i < 3; i++){
        {

//! Bond.ulam:73: 			if (bonds[i] == c){
          {

//! Bond.ulam:73: 			if (bonds[i] == c){
            const u32 Uh_5tlreg3156 = Uv_1c.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3158 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg3158 >= 4) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10151u<EC> Uh_6tlref3160(ur, Uh_5tlreg3158 * 5u + 4u); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg3161 = Uh_6tlref3160.read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg3162 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3161, Uh_5tlreg3156, 5); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3162, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:74: 				bonds[i] = 0;
                const u32 Uh_5tlreg3163 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3164 = _Int32ToUnsigned32(Uh_5tlreg3163, 2, 5); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg3166 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg3166 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10151u<EC> Uh_6tlref3168(ur, Uh_5tlreg3166 * 5u + 4u); //gcnl:Node.cpp:1317
                Uh_6tlref3168.write(Uh_5tlreg3164);

//! Bond.ulam:75: 				bondCount--;
                const u32 Uh_5tlreg3169 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3170 = _Int32ToUnsigned32(Uh_5tlreg3169, 32, 3); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg3172 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                const u32 Uh_5tlreg3173 = _BinOpSubtractUnsigned32(Uh_5tlreg3172, Uh_5tlreg3170, 3); //gcnl:NodeBinaryOpEqualArithPostDecr.cpp:196
                UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3173); //gcnl:Node.cpp:892

//! Bond.ulam:76: 				return;
                return; //gcnl:NodeReturnStatement.cpp:348
              }
            } // end if
          }
        }

//! Bond.ulam:72: 		for(Index i = 0; i < 3; i++){
Ul_214endcontrolloop14:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:72: 		for(Index i = 0; i < 3; i++){
        const u32 Uh_5tlreg3174 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3175 = _Int32ToUnsigned32(Uh_5tlreg3174, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3177 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3178 = _BinOpAddUnsigned32(Uh_5tlreg3177, Uh_5tlreg3175, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3178); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9210removeBond



//! Bond.ulam:116: 	SiteNum reverse(SiteNum i){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_102244Bond10<EC>::Uf_7reverse(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1i) const
  {

//! Bond.ulam:117: 		C2D c2d = ew.getCoord(i);
    UlamRef<EC> Uh_3tur3180(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3182 = Uv_1i.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3183(Uh_5tlreg3182); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3185 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3180, Uh_5tlval3183); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_3c2d(Uh_5tlval3185); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:118: 		c2d.x *= -1;
    const u32 Uh_5tlreg3186 = (u32) -1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3187 = _Int32ToInt32(Uh_5tlreg3186, 2, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3190 = UlamRef<EC>(0u, 16u, Uv_3c2d, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3191 = _BinOpMultiplyInt32(Uh_5tlreg3190, Uh_5tlreg3187, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
    UlamRef<EC>(0u, 16u, Uv_3c2d, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3191); //gcnl:Node.cpp:892

//! Bond.ulam:119: 		c2d.y *= -1;
    const u32 Uh_5tlreg3192 = (u32) -1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3193 = _Int32ToInt32(Uh_5tlreg3192, 2, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3196 = UlamRef<EC>(16u, 16u, Uv_3c2d, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3197 = _BinOpMultiplyInt32(Uh_5tlreg3196, Uh_5tlreg3193, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
    UlamRef<EC>(16u, 16u, Uv_3c2d, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3197); //gcnl:Node.cpp:892

//! Bond.ulam:121: 		return ew.getSiteNumber(c2d);
    UlamRef<EC> Uh_3tur3199(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3201 = Uv_3c2d.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3202(Uh_5tlreg3201); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3204 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur3199, Uh_5tlval3202); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3205 = Uh_5tlval3204.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3206(Uh_5tlreg3205); //gcnl:Node.cpp:1142
    return (Uh_5tlval3206); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7reverse



//! Bond.ulam:60: 	Void updateBond(Coord prev, Coord new){
  template<class EC>
  void Uq_102244Bond10<EC>::Uf_9210updateBond(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_4prev, Ui_Ut_10151u<EC>& Uv_3new) const
  {

//! Bond.ulam:61: 		for (Index i = 0; i < 4; i++){
    {

//! Bond.ulam:61: 		for (Index i = 0; i < 4; i++){
      const u32 Uh_5tlreg3207 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3208 = _Int32ToUnsigned32(Uh_5tlreg3207, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3208); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:61: 		for (Index i = 0; i < 4; i++){
      while(true)
      {
        const u32 Uh_5tlreg3209 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3211 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3212 = _Unsigned32ToInt32(Uh_5tlreg3211, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3213 = _BinOpCompareLessThanInt32(Uh_5tlreg3212, Uh_5tlreg3209, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3213, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:61: 		for (Index i = 0; i < 4; i++){
        {

//! Bond.ulam:62: 			if (bonds[i] == prev){
          {

//! Bond.ulam:62: 			if (bonds[i] == prev){
            const u32 Uh_5tlreg3215 = Uv_4prev.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3217 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg3217 >= 4) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10151u<EC> Uh_6tlref3219(ur, Uh_5tlreg3217 * 5u + 4u); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg3220 = Uh_6tlref3219.read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg3221 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3220, Uh_5tlreg3215, 5); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3221, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:63: 				bonds[i] = new;
                const u32 Uh_5tlreg3223 = Uv_3new.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3225 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg3225 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10151u<EC> Uh_6tlref3227(ur, Uh_5tlreg3225 * 5u + 4u); //gcnl:Node.cpp:1317
                Uh_6tlref3227.write(Uh_5tlreg3223);

//! Bond.ulam:64: 				return;
                return; //gcnl:NodeReturnStatement.cpp:348
              }
            } // end if
          }
        }

//! Bond.ulam:61: 		for (Index i = 0; i < 4; i++){
Ul_214endcontrolloop13:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:61: 		for (Index i = 0; i < 4; i++){
        const u32 Uh_5tlreg3228 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3229 = _Int32ToUnsigned32(Uh_5tlreg3228, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3231 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3232 = _BinOpAddUnsigned32(Uh_5tlreg3231, Uh_5tlreg3229, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3232); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9210updateBond



//! Bond.ulam:82: 	Void clearBonds(){
  template<class EC>
  void Uq_102244Bond10<EC>::Uf_9210clearBonds(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Bond.ulam:83: 		for(Index i = 0; i < 3; i++){
    {

//! Bond.ulam:83: 		for(Index i = 0; i < 3; i++){
      const u32 Uh_5tlreg3233 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3234 = _Int32ToUnsigned32(Uh_5tlreg3233, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3234); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:83: 		for(Index i = 0; i < 3; i++){
      while(true)
      {
        const u32 Uh_5tlreg3235 = 3; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3236 = _Int32ToInt32(Uh_5tlreg3235, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3238 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3239 = _Unsigned32ToInt32(Uh_5tlreg3238, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3240 = _BinOpCompareLessThanInt32(Uh_5tlreg3239, Uh_5tlreg3236, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3240, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:83: 		for(Index i = 0; i < 3; i++){
        {

//! Bond.ulam:84: 			bonds[i] = 0;
          const u32 Uh_5tlreg3241 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3242 = _Int32ToUnsigned32(Uh_5tlreg3241, 2, 5); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3244 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3244 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10151u<EC> Uh_6tlref3246(ur, Uh_5tlreg3244 * 5u + 4u); //gcnl:Node.cpp:1317
          Uh_6tlref3246.write(Uh_5tlreg3242);
        }

//! Bond.ulam:83: 		for(Index i = 0; i < 3; i++){
Ul_214endcontrolloop15:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:83: 		for(Index i = 0; i < 3; i++){
        const u32 Uh_5tlreg3247 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3248 = _Int32ToUnsigned32(Uh_5tlreg3247, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3250 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3251 = _BinOpAddUnsigned32(Uh_5tlreg3250, Uh_5tlreg3248, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3251); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Bond.ulam:86: 		bondCount = 0;
    const u32 Uh_5tlreg3252 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3253 = _Int32ToUnsigned32(Uh_5tlreg3252, 2, 3); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3253); //gcnl:Node.cpp:892

  } // Uf_9210clearBonds



//! Bond.ulam:90: 	Void findBonds(){
  template<class EC>
  void Uq_102244Bond10<EC>::Uf_919findBonds(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Bond.ulam:91: 		if (bondCount >= 4) return;
    {

//! Bond.ulam:91: 		if (bondCount >= 4) return;
      const u32 Uh_5tlreg3255 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3257 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3258 = _Unsigned32ToInt32(Uh_5tlreg3257, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3259 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg3258, Uh_5tlreg3255, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3259, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:91: 		if (bondCount >= 4) return;
          return; //gcnl:NodeReturnStatement.cpp:348
      } // end if
    }

//! Bond.ulam:93: 		for (SiteNum s = 1; s <= cMAX; s++){
    {

//! Bond.ulam:93: 		for (SiteNum s = 1; s <= cMAX; s++){
      const u32 Uh_5tlreg3260 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3261 = _Int32ToUnsigned32(Uh_5tlreg3260, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg3261); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:93: 		for (SiteNum s = 1; s <= cMAX; s++){
      while(true)
      {
        const u32 Uh_5tlreg3262 = 24u; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3264 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3265 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg3264, Uh_5tlreg3262, 6); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3265, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:93: 		for (SiteNum s = 1; s <= cMAX; s++){
        {

//! Bond.ulam:94: 			Atom a = ew[s];
          UlamRef<EC> Uh_3tur3267(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3269 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval3270(Uh_5tlreg3269); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3272 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3267, Uh_5tlval3270); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval3272); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:95: 			if (a as Bond){
          {

//! Bond.ulam:95: 			if (a as Bond){
            const T Uh_3tut3274 = Uv_1a.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3275 = UlamClass<EC>::IsMethod(uc, Uh_3tut3274.GetType(), &Uq_102244Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalAs.cpp:453
            if(_Bool32ToCbool(Uh_5tlreg3275, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:95: 			if (a as Bond){
                Ui_Ut_102961a<EC> & Uh_5tuval3276 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Uq_r102244Bond10<EC> Uv_1a(Uh_5tuval3276, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval3276.GetType()), UlamRef<EC>::ELEMENTAL, uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Bond.ulam:96: 				if (a.bondCount < 4){
                {

//! Bond.ulam:96: 				if (a.bondCount < 4){
                  const u32 Uh_5tlreg3277 = 4; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg3280 = UlamRef<EC>(Uv_1a, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg3281 = _Unsigned32ToInt32(Uh_5tlreg3280, 3, 4); //gcnl:NodeCast.cpp:748
                  const u32 Uh_5tlreg3282 = _BinOpCompareLessThanInt32(Uh_5tlreg3281, Uh_5tlreg3277, 4); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg3282, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Bond.ulam:97: 					addBond((Coord)s);
                      const u32 Uh_5tlreg3285 = Uv_1s.read(); //gcnl:Node.cpp:698
                      const u32 Uh_5tlreg3286 = _Unsigned32ToUnsigned32(Uh_5tlreg3285, 6, 5); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10151u<EC> Uh_5tlval3287(Uh_5tlreg3286); //gcnl:Node.cpp:1142
                      THE_INSTANCE.Uf_7addBond(uc, ur, Uh_5tlval3287); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:98: 					a.addBond((Coord) reverse(s));
                      UlamRef<EC> Uh_3tur3290(Uv_1a, 24u); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3293 = Uv_1s.read(); //gcnl:Node.cpp:698
                      Ui_Ut_10161u<EC> Uh_5tlval3294(Uh_5tlreg3293); //gcnl:Node.cpp:1142
                      const Ui_Ut_10161u<EC> Uh_5tlval3296 = THE_INSTANCE.Uf_7reverse(uc, ur, Uh_5tlval3294); //gcnl:NodeFunctionCall.cpp:1043
                      const u32 Uh_5tlreg3297 = Uh_5tlval3296.read(); //gcnl:Node.cpp:1170
                      const u32 Uh_5tlreg3298 = _Unsigned32ToUnsigned32(Uh_5tlreg3297, 6, 5); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10151u<EC> Uh_5tlval3299(Uh_5tlreg3298); //gcnl:Node.cpp:1142
                      Uq_102244Bond10<EC>::THE_INSTANCE.Uf_7addBond(uc, Uh_3tur3290, Uh_5tlval3299); //gcnl:NodeFunctionCall.cpp:1043
                    }
                  } // end if
                }
              }
            } // end if
          }

//! Bond.ulam:103: 			if (bondCount >= 4) return;
          {

//! Bond.ulam:103: 			if (bondCount >= 4) return;
            const u32 Uh_5tlreg3301 = 4; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3303 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg3304 = _Unsigned32ToInt32(Uh_5tlreg3303, 3, 4); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3305 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg3304, Uh_5tlreg3301, 4); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3305, 1)) //gcnl:NodeControl.cpp:213
            {

//! Bond.ulam:103: 			if (bondCount >= 4) return;
                return; //gcnl:NodeReturnStatement.cpp:348
            } // end if
          }
        }

//! Bond.ulam:93: 		for (SiteNum s = 1; s <= cMAX; s++){
Ul_214endcontrolloop16:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:93: 		for (SiteNum s = 1; s <= cMAX; s++){
        const u32 Uh_5tlreg3306 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3307 = _Int32ToUnsigned32(Uh_5tlreg3306, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3309 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3310 = _BinOpAddUnsigned32(Uh_5tlreg3309, Uh_5tlreg3307, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1s.write(Uh_5tlreg3310); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_919findBonds



//! Bond.ulam:108: 	Bool hasBond(Coord c){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102244Bond10<EC>::Uf_7hasBond(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! Bond.ulam:109: 		for (Index i = 0; i < 4; i++){
    {

//! Bond.ulam:109: 		for (Index i = 0; i < 4; i++){
      const u32 Uh_5tlreg3311 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3312 = _Int32ToUnsigned32(Uh_5tlreg3311, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3312); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:109: 		for (Index i = 0; i < 4; i++){
      while(true)
      {
        const u32 Uh_5tlreg3313 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3315 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3316 = _Unsigned32ToInt32(Uh_5tlreg3315, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3317 = _BinOpCompareLessThanInt32(Uh_5tlreg3316, Uh_5tlreg3313, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3317, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:109: 		for (Index i = 0; i < 4; i++){
        {

//! Bond.ulam:110: 			if (bonds[i] == c) return true;
          {

//! Bond.ulam:110: 			if (bonds[i] == c) return true;
            const u32 Uh_5tlreg3319 = Uv_1c.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3321 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg3321 >= 4) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10151u<EC> Uh_6tlref3323(ur, Uh_5tlreg3321 * 5u + 4u); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg3324 = Uh_6tlref3323.read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg3325 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3324, Uh_5tlreg3319, 5); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3325, 1)) //gcnl:NodeControl.cpp:213
            {

//! Bond.ulam:110: 			if (bonds[i] == c) return true;
                const u32 Uh_5tlreg3326 = 1u; //gcnl:NodeTerminal.cpp:690
                Ui_Ut_10111b<EC> Uh_5tlval3327(Uh_5tlreg3326); //gcnl:Node.cpp:1142
                return (Uh_5tlval3327); //gcnl:NodeReturnStatement.cpp:343
            } // end if
          }
        }

//! Bond.ulam:109: 		for (Index i = 0; i < 4; i++){
Ul_214endcontrolloop17:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:109: 		for (Index i = 0; i < 4; i++){
        const u32 Uh_5tlreg3328 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3329 = _Int32ToUnsigned32(Uh_5tlreg3328, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3331 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3332 = _BinOpAddUnsigned32(Uh_5tlreg3331, Uh_5tlreg3329, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3332); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Bond.ulam:112: 		return false;
    const u32 Uh_5tlreg3333 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval3334(Uh_5tlreg3333); //gcnl:Node.cpp:1142
    return (Uh_5tlval3334); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7hasBond



//! Bond.ulam:126: 	SiteNum getDist(SiteNum s1, SiteNum s2){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_102244Bond10<EC>::Uf_7getDist(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2s1, Ui_Ut_10161u<EC>& Uv_2s2) const
  {

//! Bond.ulam:127: 		C2D c1 = ew.getCoord(s1);
    UlamRef<EC> Uh_3tur3336(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3338 = Uv_2s1.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3339(Uh_5tlreg3338); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3341 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3336, Uh_5tlval3339); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_2c1(Uh_5tlval3341); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:128: 		C2D c2 = ew.getCoord(s2);
    UlamRef<EC> Uh_3tur3343(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3345 = Uv_2s2.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3346(Uh_5tlreg3345); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3348 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3343, Uh_5tlval3346); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_2c2(Uh_5tlval3348); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:130: 		Long x = c1.x - c2.x;
    const u32 Uh_5tlreg3351 = UlamRef<EC>(0u, 16u, Uv_2c2, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3352 = _Int32ToInt32(Uh_5tlreg3351, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3355 = UlamRef<EC>(0u, 16u, Uv_2c1, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3356 = _Int32ToInt32(Uh_5tlreg3355, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3357 = _BinOpSubtractInt32(Uh_5tlreg3356, Uh_5tlreg3352, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3358 = _Int32ToInt32(Uh_5tlreg3357, 17, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uv_1x(Uh_5tlreg3358); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:131: 		Long y = c1.y - c2.y;
    const u32 Uh_5tlreg3361 = UlamRef<EC>(16u, 16u, Uv_2c2, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3362 = _Int32ToInt32(Uh_5tlreg3361, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3365 = UlamRef<EC>(16u, 16u, Uv_2c1, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3366 = _Int32ToInt32(Uh_5tlreg3365, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3367 = _BinOpSubtractInt32(Uh_5tlreg3366, Uh_5tlreg3362, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3368 = _Int32ToInt32(Uh_5tlreg3367, 17, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uv_1y(Uh_5tlreg3368); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:133: 		if (x < 0) x *= -1;
    {

//! Bond.ulam:133: 		if (x < 0) x *= -1;
      const u32 Uh_5tlreg3369 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3370 = _Int32ToInt32(Uh_5tlreg3369, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3372 = Uv_1x.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3373 = _BinOpCompareLessThanInt32(Uh_5tlreg3372, Uh_5tlreg3370, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3373, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:133: 		if (x < 0) x *= -1;
          const u32 Uh_5tlreg3374 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3375 = _Int32ToInt32(Uh_5tlreg3374, 2, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3377 = Uv_1x.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3378 = _BinOpMultiplyInt32(Uh_5tlreg3377, Uh_5tlreg3375, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
          Uv_1x.write(Uh_5tlreg3378); //gcnl:Node.cpp:892
      } // end if
    }

//! Bond.ulam:134: 		if (y < 0) y *= -1;
    {

//! Bond.ulam:134: 		if (y < 0) y *= -1;
      const u32 Uh_5tlreg3379 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3380 = _Int32ToInt32(Uh_5tlreg3379, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3382 = Uv_1y.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3383 = _BinOpCompareLessThanInt32(Uh_5tlreg3382, Uh_5tlreg3380, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3383, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:134: 		if (y < 0) y *= -1;
          const u32 Uh_5tlreg3384 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3385 = _Int32ToInt32(Uh_5tlreg3384, 2, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3387 = Uv_1y.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3388 = _BinOpMultiplyInt32(Uh_5tlreg3387, Uh_5tlreg3385, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
          Uv_1y.write(Uh_5tlreg3388); //gcnl:Node.cpp:892
      } // end if
    }

//! Bond.ulam:136: 		return (SiteNum)(x + y);
    const u32 Uh_5tlreg3390 = Uv_1y.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3392 = Uv_1x.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3393 = _BinOpAddInt32(Uh_5tlreg3392, Uh_5tlreg3390, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3394 = _Int32ToUnsigned32(Uh_5tlreg3393, 32, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval3395(Uh_5tlreg3394); //gcnl:Node.cpp:1142
    return (Uh_5tlval3395); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7getDist



//! Bond.ulam:140:   Bool moveTo(SiteNum s){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102244Bond10<EC>::Uf_6moveTo(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1s) const
  {

//! Bond.ulam:141:   	if (s == 0) return false;
    {

//! Bond.ulam:141:   	if (s == 0) return false;
      const u32 Uh_5tlreg3396 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3397 = _Int32ToInt32(Uh_5tlreg3396, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3399 = Uv_1s.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3400 = _Unsigned32ToInt32(Uh_5tlreg3399, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3401 = _BinOpCompareEqEqInt32(Uh_5tlreg3400, Uh_5tlreg3397, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3401, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:141:   	if (s == 0) return false;
          const u32 Uh_5tlreg3402 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval3403(Uh_5tlreg3402); //gcnl:Node.cpp:1142
          return (Uh_5tlval3403); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Bond.ulam:143: 		if (canMoveTo(s)){
    {

//! Bond.ulam:143: 		if (canMoveTo(s)){
      const u32 Uh_5tlreg3406 = Uv_1s.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3407(Uh_5tlreg3406); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3409 = THE_INSTANCE.Uf_919canMoveTo(uc, ur, Uh_5tlval3407); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3410 = Uh_5tlval3409.read(); //gcnl:Node.cpp:1170
      if(_Bool32ToCbool(Uh_5tlreg3410, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Bond.ulam:144: 			clearSurrounding();
          THE_INSTANCE.Uf_9216clearSurrounding(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:146: 			C2D c = ew.getCoord(s);
          UlamRef<EC> Uh_3tur3414(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3416 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval3417(Uh_5tlreg3416); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval3419 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3414, Uh_5tlval3417); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uv_1c(Uh_5tlval3419); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:147: 			Int(5) x = (Int(5))c.x;
          const u32 Uh_5tlreg3422 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3423 = _Int32ToInt32(Uh_5tlreg3422, 16, 5); //gcnl:NodeCast.cpp:748
          Ui_Ut_10151i<EC> Uv_1x(Uh_5tlreg3423); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:148: 			Int(5) y = (Int(5))c.y;
          const u32 Uh_5tlreg3426 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3427 = _Int32ToInt32(Uh_5tlreg3426, 16, 5); //gcnl:NodeCast.cpp:748
          Ui_Ut_10151i<EC> Uv_1y(Uh_5tlreg3427); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:150: 			for (Index i = 0; i < 4; i++){
          {

//! Bond.ulam:150: 			for (Index i = 0; i < 4; i++){
            const u32 Uh_5tlreg3428 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3429 = _Int32ToUnsigned32(Uh_5tlreg3428, 2, 3); //gcnl:NodeCast.cpp:748
            Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3429); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:150: 			for (Index i = 0; i < 4; i++){
            while(true)
            {
              const u32 Uh_5tlreg3430 = 4; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3432 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3433 = _Unsigned32ToInt32(Uh_5tlreg3432, 3, 4); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3434 = _BinOpCompareLessThanInt32(Uh_5tlreg3433, Uh_5tlreg3430, 4); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg3434, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:150: 			for (Index i = 0; i < 4; i++){
              {

//! Bond.ulam:151: 				if (bonds[i] != 0){
                {

//! Bond.ulam:151: 				if (bonds[i] != 0){
                  const u32 Uh_5tlreg3435 = 0; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg3436 = _Int32ToInt32(Uh_5tlreg3435, 2, 6); //gcnl:NodeCast.cpp:748
                  const u32 Uh_5tlreg3438 = Uv_1i.read(); //gcnl:Node.cpp:698
                  if(Uh_5tlreg3438 >= 4) //gcnl:NodeSquareBracket.cpp:874
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                  Ui_Ut_r10151u<EC> Uh_6tlref3440(ur, Uh_5tlreg3438 * 5u + 4u); //gcnl:Node.cpp:1317
                  const u32 Uh_5tlreg3441 = Uh_6tlref3440.read(); //gcnl:Node.cpp:664
                  const u32 Uh_5tlreg3442 = _Unsigned32ToInt32(Uh_5tlreg3441, 5, 6); //gcnl:NodeCast.cpp:748
                  const u32 Uh_5tlreg3443 = _BinOpCompareNotEqInt32(Uh_5tlreg3442, Uh_5tlreg3436, 6); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg3443, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Bond.ulam:152: 					SiteNum s2 = bonds[i];
                      const u32 Uh_5tlreg3445 = Uv_1i.read(); //gcnl:Node.cpp:698
                      if(Uh_5tlreg3445 >= 4) //gcnl:NodeSquareBracket.cpp:874
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                      Ui_Ut_r10151u<EC> Uh_6tlref3447(ur, Uh_5tlreg3445 * 5u + 4u); //gcnl:Node.cpp:1317
                      const u32 Uh_5tlreg3448 = Uh_6tlref3447.read(); //gcnl:Node.cpp:664
                      const u32 Uh_5tlreg3449 = _Unsigned32ToUnsigned32(Uh_5tlreg3448, 5, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uv_2s2(Uh_5tlreg3449); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:153: 					Atom a = ew[s2];
                      UlamRef<EC> Uh_3tur3451(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3453 = Uv_2s2.read(); //gcnl:Node.cpp:698
                      Ui_Ut_10161u<EC> Uh_5tlval3454(Uh_5tlreg3453); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3456 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3451, Uh_5tlval3454); //gcnl:NodeFunctionCall.cpp:1043
                      Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval3456); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:154: 					if (a as Bond){
                      {

//! Bond.ulam:154: 					if (a as Bond){
                        const T Uh_3tut3458 = Uv_1a.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg3459 = UlamClass<EC>::IsMethod(uc, Uh_3tut3458.GetType(), &Uq_102244Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalAs.cpp:453
                        if(_Bool32ToCbool(Uh_5tlreg3459, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Bond.ulam:154: 					if (a as Bond){
                            Ui_Ut_102961a<EC> & Uh_5tuval3460 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                            Ui_Uq_r102244Bond10<EC> Uv_1a(Uh_5tuval3460, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval3460.GetType()), UlamRef<EC>::ELEMENTAL, uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Bond.ulam:155: 						c = ew.getCoord(s2);
                            UlamRef<EC> Uh_3tur3462(0u, 32u, Uv_1c, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
                            UlamRef<EC> Uh_3tur3464(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3466 = Uv_2s2.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval3467(Uh_5tlreg3466); //gcnl:Node.cpp:1142
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3469 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3464, Uh_5tlval3467); //gcnl:NodeFunctionCall.cpp:1043
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3470(Uh_5tlval3469); //gcnl:Node.cpp:1142
                            Ui_Uq_r102323C2D10<EC> Uh_5tlval3472 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, Uh_3tur3462, Uh_5tlval3470); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:156: 						c.x += x;
                            const u32 Uh_5tlreg3474 = Uv_1x.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3475 = _Int32ToInt32(Uh_5tlreg3474, 5, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg3478 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3479 = _BinOpAddInt32(Uh_5tlreg3478, Uh_5tlreg3475, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                            UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3479); //gcnl:Node.cpp:892

//! Bond.ulam:157: 						c.y += y;
                            const u32 Uh_5tlreg3481 = Uv_1y.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3482 = _Int32ToInt32(Uh_5tlreg3481, 5, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg3485 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3486 = _BinOpAddInt32(Uh_5tlreg3485, Uh_5tlreg3482, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                            UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3486); //gcnl:Node.cpp:892

//! Bond.ulam:158: 						SiteNum new = ew.getSiteNumber(c);
                            UlamRef<EC> Uh_3tur3488(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3490 = Uv_1c.read(); //gcnl:Node.cpp:698
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3491(Uh_5tlreg3490); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval3493 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur3488, Uh_5tlval3491); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg3494 = Uh_5tlval3493.read(); //gcnl:Node.cpp:1170
                            Ui_Ut_10161u<EC> Uv_3new(Uh_5tlreg3494); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:160: 						a.updateBond((Coord) reverse(s2), (Coord)reverse(new));
                            UlamRef<EC> Uh_3tur3496(Uv_1a, 24u); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3499 = Uv_2s2.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval3500(Uh_5tlreg3499); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval3502 = THE_INSTANCE.Uf_7reverse(uc, ur, Uh_5tlval3500); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg3503 = Uh_5tlval3502.read(); //gcnl:Node.cpp:1170
                            const u32 Uh_5tlreg3504 = _Unsigned32ToUnsigned32(Uh_5tlreg3503, 6, 5); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10151u<EC> Uh_5tlval3505(Uh_5tlreg3504); //gcnl:Node.cpp:1142
                            const u32 Uh_5tlreg3508 = Uv_3new.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval3509(Uh_5tlreg3508); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval3511 = THE_INSTANCE.Uf_7reverse(uc, ur, Uh_5tlval3509); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg3512 = Uh_5tlval3511.read(); //gcnl:Node.cpp:1170
                            const u32 Uh_5tlreg3513 = _Unsigned32ToUnsigned32(Uh_5tlreg3512, 6, 5); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10151u<EC> Uh_5tlval3514(Uh_5tlreg3513); //gcnl:Node.cpp:1142
                            Uq_102244Bond10<EC>::THE_INSTANCE.Uf_9210updateBond(uc, Uh_3tur3496, Uh_5tlval3505, Uh_5tlval3514); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:162: 						c = ew.getCoord(s2);
                            UlamRef<EC> Uh_3tur3517(0u, 32u, Uv_1c, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
                            UlamRef<EC> Uh_3tur3519(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3521 = Uv_2s2.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval3522(Uh_5tlreg3521); //gcnl:Node.cpp:1142
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3524 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3519, Uh_5tlval3522); //gcnl:NodeFunctionCall.cpp:1043
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3525(Uh_5tlval3524); //gcnl:Node.cpp:1142
                            Ui_Uq_r102323C2D10<EC> Uh_5tlval3527 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, Uh_3tur3517, Uh_5tlval3525); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:163: 						c.x -= x;
                            const u32 Uh_5tlreg3529 = Uv_1x.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3530 = _Int32ToInt32(Uh_5tlreg3529, 5, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg3533 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3534 = _BinOpSubtractInt32(Uh_5tlreg3533, Uh_5tlreg3530, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                            UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3534); //gcnl:Node.cpp:892

//! Bond.ulam:164: 						c.y -= y;
                            const u32 Uh_5tlreg3536 = Uv_1y.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3537 = _Int32ToInt32(Uh_5tlreg3536, 5, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg3540 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3541 = _BinOpSubtractInt32(Uh_5tlreg3540, Uh_5tlreg3537, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                            UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3541); //gcnl:Node.cpp:892

//! Bond.ulam:166: 						updateBond(bonds[i], (Coord) ew.getSiteNumber(c));
                            const u32 Uh_5tlreg3544 = Uv_1i.read(); //gcnl:Node.cpp:698
                            if(Uh_5tlreg3544 >= 4) //gcnl:NodeSquareBracket.cpp:874
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                            Ui_Ut_r10151u<EC> Uh_6tlref3546(ur, Uh_5tlreg3544 * 5u + 4u); //gcnl:Node.cpp:1317
                            const u32 Uh_5tlreg3547 = Uh_6tlref3546.read(); //gcnl:Node.cpp:664
                            Ui_Ut_10151u<EC> Uh_5tlval3548(Uh_5tlreg3547); //gcnl:Node.cpp:1142
                            UlamRef<EC> Uh_3tur3550(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3552 = Uv_1c.read(); //gcnl:Node.cpp:698
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3553(Uh_5tlreg3552); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval3555 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur3550, Uh_5tlval3553); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg3556 = Uh_5tlval3555.read(); //gcnl:Node.cpp:1170
                            const u32 Uh_5tlreg3557 = _Unsigned32ToUnsigned32(Uh_5tlreg3556, 6, 5); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10151u<EC> Uh_5tlval3558(Uh_5tlreg3557); //gcnl:Node.cpp:1142
                            THE_INSTANCE.Uf_9210updateBond(uc, ur, Uh_5tlval3548, Uh_5tlval3558); //gcnl:NodeFunctionCall.cpp:1043
                          }
                        } // end if
                      }
                    }
                  } // end if
                }
              }

//! Bond.ulam:150: 			for (Index i = 0; i < 4; i++){
Ul_214endcontrolloop18:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:150: 			for (Index i = 0; i < 4; i++){
              const u32 Uh_5tlreg3560 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3561 = _Int32ToUnsigned32(Uh_5tlreg3560, 32, 3); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3563 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3564 = _BinOpAddUnsigned32(Uh_5tlreg3563, Uh_5tlreg3561, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
              Uv_1i.write(Uh_5tlreg3564); //gcnl:Node.cpp:892
            } // end while //gcnl:NodeControlWhile.cpp:145
          }

//! Bond.ulam:171: 			ew[s] = ew[0];
          UlamRef<EC> Uh_3tur3566(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3567 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3568 = _Int32ToUnsigned32(Uh_5tlreg3567, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3569(Uh_5tlreg3568); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3571 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3566, Uh_5tlval3569); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur3573(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3575 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval3576(Uh_5tlreg3575); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3578 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3573, Uh_5tlval3576); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3578.WriteAtom(Uh_5tuval3571.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Bond.ulam:172: 			ew[0] = Empty.instanceof;
          Ui_Ue_10105Empty10<EC> Uh_5tuval3579; //gcnl:NodeInstanceof.cpp:113
          UlamRef<EC> Uh_3tur3581(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3582 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3583 = _Int32ToUnsigned32(Uh_5tlreg3582, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3584(Uh_5tlreg3583); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3586 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3581, Uh_5tlval3584); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3586.WriteAtom(Uh_5tuval3579.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Bond.ulam:174: 			fillCellWall();
          THE_INSTANCE.Uf_9212fillCellWall(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:175: 			drawBonds();
          THE_INSTANCE.Uf_919drawBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:176: 			return true;
          const u32 Uh_5tlreg3591 = 1u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval3592(Uh_5tlreg3591); //gcnl:Node.cpp:1142
          return (Uh_5tlval3592); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
    }

//! Bond.ulam:179: 		return false;
    const u32 Uh_5tlreg3593 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval3594(Uh_5tlreg3593); //gcnl:Node.cpp:1142
    return (Uh_5tlval3594); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6moveTo



//! Bond.ulam:186: 	Bool canMoveTo(SiteNum s){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102244Bond10<EC>::Uf_919canMoveTo(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1s) const
  {

//! Bond.ulam:187: 		if (s == 0 || s > 40) return false;
    {

//! Bond.ulam:187: 		if (s == 0 || s > 40) return false;
      u32 Uh_5tlreg3595 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg3596 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3597 = _Int32ToInt32(Uh_5tlreg3596, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3599 = Uv_1s.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3600 = _Unsigned32ToInt32(Uh_5tlreg3599, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3601 = _BinOpCompareEqEqInt32(Uh_5tlreg3600, Uh_5tlreg3597, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg3601, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg3602 = 40; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3604 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3605 = _Unsigned32ToInt32(Uh_5tlreg3604, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3606 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3605, Uh_5tlreg3602, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg3595 = Uh_5tlreg3606; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg3595 = Uh_5tlreg3601; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg3595, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:187: 		if (s == 0 || s > 40) return false;
          const u32 Uh_5tlreg3607 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval3608(Uh_5tlreg3607); //gcnl:Node.cpp:1142
          return (Uh_5tlval3608); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Bond.ulam:188: 		if (ew[s] is Bond) return false;
    {

//! Bond.ulam:188: 		if (ew[s] is Bond) return false;
      UlamRef<EC> Uh_3tur3610(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const u32 Uh_5tlreg3612 = Uv_1s.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3613(Uh_5tlreg3612); //gcnl:Node.cpp:1142
      Ui_Ut_r102961a<EC> Uh_5tuval3615 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3610, Uh_5tlval3613); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3616 = UlamClass<EC>::IsMethod(uc, Uh_5tuval3615.GetType(), &Uq_102244Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalIs.cpp:294
      if(_Bool32ToCbool(Uh_5tlreg3616, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:188: 		if (ew[s] is Bond) return false;
          const u32 Uh_5tlreg3617 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval3618(Uh_5tlreg3617); //gcnl:Node.cpp:1142
          return (Uh_5tlval3618); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Bond.ulam:190: 		for (Index i = 0; i < 4; i++){
    {

//! Bond.ulam:190: 		for (Index i = 0; i < 4; i++){
      const u32 Uh_5tlreg3619 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3620 = _Int32ToUnsigned32(Uh_5tlreg3619, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3620); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:190: 		for (Index i = 0; i < 4; i++){
      while(true)
      {
        const u32 Uh_5tlreg3621 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3623 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3624 = _Unsigned32ToInt32(Uh_5tlreg3623, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3625 = _BinOpCompareLessThanInt32(Uh_5tlreg3624, Uh_5tlreg3621, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3625, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:190: 		for (Index i = 0; i < 4; i++){
        {

//! Bond.ulam:191: 			SiteNum bond = (SiteNum) bonds[i];
          const u32 Uh_5tlreg3627 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3627 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10151u<EC> Uh_6tlref3629(ur, Uh_5tlreg3627 * 5u + 4u); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg3630 = Uh_6tlref3629.read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg3631 = _Unsigned32ToUnsigned32(Uh_5tlreg3630, 5, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uv_4bond(Uh_5tlreg3631); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:192: 			if (getDist(s, bond) > 3) return false;
          {

//! Bond.ulam:192: 			if (getDist(s, bond) > 3) return false;
            const u32 Uh_5tlreg3632 = 3; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3633 = _Int32ToInt32(Uh_5tlreg3632, 3, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3636 = Uv_1s.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3637(Uh_5tlreg3636); //gcnl:Node.cpp:1142
            const u32 Uh_5tlreg3639 = Uv_4bond.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3640(Uh_5tlreg3639); //gcnl:Node.cpp:1142
            const Ui_Ut_10161u<EC> Uh_5tlval3642 = THE_INSTANCE.Uf_7getDist(uc, ur, Uh_5tlval3637, Uh_5tlval3640); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3643 = Uh_5tlval3642.read(); //gcnl:Node.cpp:1170
            const u32 Uh_5tlreg3644 = _Unsigned32ToInt32(Uh_5tlreg3643, 6, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3645 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3644, Uh_5tlreg3633, 7); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3645, 1)) //gcnl:NodeControl.cpp:213
            {

//! Bond.ulam:192: 			if (getDist(s, bond) > 3) return false;
                const u32 Uh_5tlreg3646 = 0u; //gcnl:NodeTerminal.cpp:690
                Ui_Ut_10111b<EC> Uh_5tlval3647(Uh_5tlreg3646); //gcnl:Node.cpp:1142
                return (Uh_5tlval3647); //gcnl:NodeReturnStatement.cpp:343
            } // end if
          }
        }

//! Bond.ulam:190: 		for (Index i = 0; i < 4; i++){
Ul_214endcontrolloop19:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:190: 		for (Index i = 0; i < 4; i++){
        const u32 Uh_5tlreg3648 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3649 = _Int32ToUnsigned32(Uh_5tlreg3648, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3651 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3652 = _BinOpAddUnsigned32(Uh_5tlreg3651, Uh_5tlreg3649, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3652); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Bond.ulam:194: 		return true;
    const u32 Uh_5tlreg3653 = 1u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval3654(Uh_5tlreg3653); //gcnl:Node.cpp:1142
    return (Uh_5tlval3654); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919canMoveTo



//! Bond.ulam:250: 	Void clearSurrounding(){
  template<class EC>
  void Uq_102244Bond10<EC>::Uf_9216clearSurrounding(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Bond.ulam:251: 		for (SiteNum s = 1; s < 41; s++){
    {

//! Bond.ulam:251: 		for (SiteNum s = 1; s < 41; s++){
      const u32 Uh_5tlreg3655 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3656 = _Int32ToUnsigned32(Uh_5tlreg3655, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg3656); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:251: 		for (SiteNum s = 1; s < 41; s++){
      while(true)
      {
        const u32 Uh_5tlreg3657 = 41; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3659 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3660 = _Unsigned32ToInt32(Uh_5tlreg3659, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3661 = _BinOpCompareLessThanInt32(Uh_5tlreg3660, Uh_5tlreg3657, 7); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3661, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:251: 		for (SiteNum s = 1; s < 41; s++){
        {

//! Bond.ulam:252: 			if (!(ew[s] is Bond)){
          {

//! Bond.ulam:252: 			if (!(ew[s] is Bond)){
            UlamRef<EC> Uh_3tur3663(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg3665 = Uv_1s.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3666(Uh_5tlreg3665); //gcnl:Node.cpp:1142
            Ui_Ut_r102961a<EC> Uh_5tuval3668 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3663, Uh_5tlval3666); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3669 = UlamClass<EC>::IsMethod(uc, Uh_5tuval3668.GetType(), &Uq_102244Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalIs.cpp:294
            const u32 Uh_5tlreg3670 = _LogicalBangBool32(Uh_5tlreg3669, 1); //gcnl:NodeUnaryOp.cpp:507
            if(_Bool32ToCbool(Uh_5tlreg3670, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:253: 				ew[s] = Empty.instanceof;
                Ui_Ue_10105Empty10<EC> Uh_5tuval3671; //gcnl:NodeInstanceof.cpp:113
                UlamRef<EC> Uh_3tur3673(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3675 = Uv_1s.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval3676(Uh_5tlreg3675); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3678 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3673, Uh_5tlval3676); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3678.WriteAtom(Uh_5tuval3671.read()); //write into atomof ref //gcnl:Node.cpp:992
              }
            } // end if
          }
        }

//! Bond.ulam:251: 		for (SiteNum s = 1; s < 41; s++){
Ul_214endcontrolloop213:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:251: 		for (SiteNum s = 1; s < 41; s++){
        const u32 Uh_5tlreg3679 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3680 = _Int32ToUnsigned32(Uh_5tlreg3679, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3682 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3683 = _BinOpAddUnsigned32(Uh_5tlreg3682, Uh_5tlreg3680, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1s.write(Uh_5tlreg3683); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9216clearSurrounding



//! Bond.ulam:241: 	Void fillCellWall(){
  template<class EC>
  void Uq_102244Bond10<EC>::Uf_9212fillCellWall(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Bond.ulam:242: 		for (SiteNum s = 1; s < 41; s++){
    {

//! Bond.ulam:242: 		for (SiteNum s = 1; s < 41; s++){
      const u32 Uh_5tlreg3684 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3685 = _Int32ToUnsigned32(Uh_5tlreg3684, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg3685); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:242: 		for (SiteNum s = 1; s < 41; s++){
      while(true)
      {
        const u32 Uh_5tlreg3686 = 41; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3688 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3689 = _Unsigned32ToInt32(Uh_5tlreg3688, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3690 = _BinOpCompareLessThanInt32(Uh_5tlreg3689, Uh_5tlreg3686, 7); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3690, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:242: 		for (SiteNum s = 1; s < 41; s++){
        {

//! Bond.ulam:243: 			if (!(ew[s] is Bond)){
          {

//! Bond.ulam:243: 			if (!(ew[s] is Bond)){
            UlamRef<EC> Uh_3tur3692(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg3694 = Uv_1s.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3695(Uh_5tlreg3694); //gcnl:Node.cpp:1142
            Ui_Ut_r102961a<EC> Uh_5tuval3697 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3692, Uh_5tlval3695); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3698 = UlamClass<EC>::IsMethod(uc, Uh_5tuval3697.GetType(), &Uq_102244Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalIs.cpp:294
            const u32 Uh_5tlreg3699 = _LogicalBangBool32(Uh_5tlreg3698, 1); //gcnl:NodeUnaryOp.cpp:507
            if(_Bool32ToCbool(Uh_5tlreg3699, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:244: 				ew[s] = CellWall.instanceof;
                Ui_Ue_10108CellWall10<EC> Uh_5tuval3700; //gcnl:NodeInstanceof.cpp:113
                UlamRef<EC> Uh_3tur3702(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3704 = Uv_1s.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval3705(Uh_5tlreg3704); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3707 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3702, Uh_5tlval3705); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3707.WriteAtom(Uh_5tuval3700.read()); //write into atomof ref //gcnl:Node.cpp:992
              }
            } // end if
          }
        }

//! Bond.ulam:242: 		for (SiteNum s = 1; s < 41; s++){
Ul_214endcontrolloop212:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:242: 		for (SiteNum s = 1; s < 41; s++){
        const u32 Uh_5tlreg3708 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3709 = _Int32ToUnsigned32(Uh_5tlreg3708, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3711 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3712 = _BinOpAddUnsigned32(Uh_5tlreg3711, Uh_5tlreg3709, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1s.write(Uh_5tlreg3712); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9212fillCellWall



//! Bond.ulam:198: 	Void drawBonds(){
  template<class EC>
  void Uq_102244Bond10<EC>::Uf_919drawBonds(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Bond.ulam:200: 		for(Index i = 0; i < 4; i++){
    {

//! Bond.ulam:200: 		for(Index i = 0; i < 4; i++){
      const u32 Uh_5tlreg3713 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3714 = _Int32ToUnsigned32(Uh_5tlreg3713, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3714); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:200: 		for(Index i = 0; i < 4; i++){
      while(true)
      {
        const u32 Uh_5tlreg3715 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3717 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3718 = _Unsigned32ToInt32(Uh_5tlreg3717, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3719 = _BinOpCompareLessThanInt32(Uh_5tlreg3718, Uh_5tlreg3715, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3719, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:200: 		for(Index i = 0; i < 4; i++){
        {

//! Bond.ulam:201: 			SiteNum s = bonds[i];
          const u32 Uh_5tlreg3721 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3721 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10151u<EC> Uh_6tlref3723(ur, Uh_5tlreg3721 * 5u + 4u); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg3724 = Uh_6tlref3723.read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg3725 = _Unsigned32ToUnsigned32(Uh_5tlreg3724, 5, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg3725); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:202: 			if (!(ew[s] is Bond)){
          {

//! Bond.ulam:202: 			if (!(ew[s] is Bond)){
            UlamRef<EC> Uh_3tur3727(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg3729 = Uv_1s.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3730(Uh_5tlreg3729); //gcnl:Node.cpp:1142
            Ui_Ut_r102961a<EC> Uh_5tuval3732 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3727, Uh_5tlval3730); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3733 = UlamClass<EC>::IsMethod(uc, Uh_5tuval3732.GetType(), &Uq_102244Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalIs.cpp:294
            const u32 Uh_5tlreg3734 = _LogicalBangBool32(Uh_5tlreg3733, 1); //gcnl:NodeUnaryOp.cpp:507
            if(_Bool32ToCbool(Uh_5tlreg3734, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:203: 				removeBond((Coord)s);
                const u32 Uh_5tlreg3737 = Uv_1s.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3738 = _Unsigned32ToUnsigned32(Uh_5tlreg3737, 6, 5); //gcnl:NodeCast.cpp:748
                Ui_Ut_10151u<EC> Uh_5tlval3739(Uh_5tlreg3738); //gcnl:Node.cpp:1142
                THE_INSTANCE.Uf_9210removeBond(uc, ur, Uh_5tlval3739); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:204: 				continue;
                goto Ul_214endcontrolloop210; //continue nearest loop //gcnl:NodeContinueStatement.cpp:64
              }
            } // end if
          }

//! Bond.ulam:206: 			C2D c = ew.getCoord(s);
          UlamRef<EC> Uh_3tur3742(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3744 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval3745(Uh_5tlreg3744); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval3747 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3742, Uh_5tlval3745); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uv_1c(Uh_5tlval3747); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:207: 			line((Short)0, (Short)0, c.x, c.y);
          const u32 Uh_5tlreg3749 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3750 = _Int32ToInt32(Uh_5tlreg3749, 2, 16); //gcnl:NodeCast.cpp:748
          Ui_Ut_102161i<EC> Uh_5tlval3751(Uh_5tlreg3750); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg3752 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3753 = _Int32ToInt32(Uh_5tlreg3752, 2, 16); //gcnl:NodeCast.cpp:748
          Ui_Ut_102161i<EC> Uh_5tlval3754(Uh_5tlreg3753); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg3757 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          Ui_Ut_102161i<EC> Uh_5tlval3758(Uh_5tlreg3757); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg3761 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          Ui_Ut_102161i<EC> Uh_5tlval3762(Uh_5tlreg3761); //gcnl:Node.cpp:1142
          THE_INSTANCE.Uf_4line(uc, ur, Uh_5tlval3751, Uh_5tlval3754, Uh_5tlval3758, Uh_5tlval3762); //gcnl:NodeFunctionCall.cpp:1043
        }

//! Bond.ulam:200: 		for(Index i = 0; i < 4; i++){
Ul_214endcontrolloop210:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:200: 		for(Index i = 0; i < 4; i++){
        const u32 Uh_5tlreg3764 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3765 = _Int32ToUnsigned32(Uh_5tlreg3764, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3767 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3768 = _BinOpAddUnsigned32(Uh_5tlreg3767, Uh_5tlreg3765, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3768); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_919drawBonds



//! Bond.ulam:213: 	Void line(Short x0, Short y0, Short x1, Short y1) {
  template<class EC>
  void Uq_102244Bond10<EC>::Uf_4line(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102161i<EC>& Uv_2x0, Ui_Ut_102161i<EC>& Uv_2y0, Ui_Ut_102161i<EC>& Uv_2x1, Ui_Ut_102161i<EC>& Uv_2y1) const
  {

//! Bond.ulam:214: 		C2D c2d = ew.getCoord(0);
    UlamRef<EC> Uh_3tur3770(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3771 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3772 = _Int32ToUnsigned32(Uh_5tlreg3771, 2, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval3773(Uh_5tlreg3772); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3775 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3770, Uh_5tlval3773); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_3c2d(Uh_5tlval3775); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:216: 	  Short dx = (Short)(x1-x0);
    const u32 Uh_5tlreg3777 = Uv_2x0.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3778 = _Int32ToInt32(Uh_5tlreg3777, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3780 = Uv_2x1.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3781 = _Int32ToInt32(Uh_5tlreg3780, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3782 = _BinOpSubtractInt32(Uh_5tlreg3781, Uh_5tlreg3778, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3783 = _Int32ToInt32(Uh_5tlreg3782, 17, 16); //gcnl:NodeCast.cpp:748
    Ui_Ut_102161i<EC> Uv_2dx(Uh_5tlreg3783); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:217: 	  Short sx = x0<x1 ? 1 : -1;
    u32 Uh_5tlreg3784; //gcnl:NodeQuestionColon.cpp:507
    const u32 Uh_5tlreg3786 = Uv_2x1.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3788 = Uv_2x0.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3789 = _BinOpCompareLessThanInt32(Uh_5tlreg3788, Uh_5tlreg3786, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg3789, 1)) //gcnl:NodeQuestionColon.cpp:655
    {
      const u32 Uh_5tlreg3790 = 1; //gcnl:NodeTerminal.cpp:690
      Uh_5tlreg3784 = Uh_5tlreg3790; //gcnl:NodeQuestionColon.cpp:527
    }
    else
    {
      const u32 Uh_5tlreg3791 = (u32) -1; //gcnl:NodeTerminal.cpp:690
      Uh_5tlreg3784 = Uh_5tlreg3791; //gcnl:NodeQuestionColon.cpp:552
    } //ends?:

    Ui_Ut_10121i<EC> Uh_5tlval3792(Uh_5tlreg3784); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3793 = _Int32ToInt32(Uh_5tlval3792.read(), 2, 16); //gcnl:NodeCast.cpp:748
    Ui_Ut_102161i<EC> Uv_2sx(Uh_5tlreg3793); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:218: 	  Short dy = (Short)(y1-y0);
    const u32 Uh_5tlreg3795 = Uv_2y0.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3796 = _Int32ToInt32(Uh_5tlreg3795, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3798 = Uv_2y1.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3799 = _Int32ToInt32(Uh_5tlreg3798, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3800 = _BinOpSubtractInt32(Uh_5tlreg3799, Uh_5tlreg3796, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3801 = _Int32ToInt32(Uh_5tlreg3800, 17, 16); //gcnl:NodeCast.cpp:748
    Ui_Ut_102161i<EC> Uv_2dy(Uh_5tlreg3801); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:219: 	  Short sy = y0<y1 ? 1 : -1;
    u32 Uh_5tlreg3802; //gcnl:NodeQuestionColon.cpp:507
    const u32 Uh_5tlreg3804 = Uv_2y1.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3806 = Uv_2y0.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3807 = _BinOpCompareLessThanInt32(Uh_5tlreg3806, Uh_5tlreg3804, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg3807, 1)) //gcnl:NodeQuestionColon.cpp:655
    {
      const u32 Uh_5tlreg3808 = 1; //gcnl:NodeTerminal.cpp:690
      Uh_5tlreg3802 = Uh_5tlreg3808; //gcnl:NodeQuestionColon.cpp:527
    }
    else
    {
      const u32 Uh_5tlreg3809 = (u32) -1; //gcnl:NodeTerminal.cpp:690
      Uh_5tlreg3802 = Uh_5tlreg3809; //gcnl:NodeQuestionColon.cpp:552
    } //ends?:

    Ui_Ut_10121i<EC> Uh_5tlval3810(Uh_5tlreg3802); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3811 = _Int32ToInt32(Uh_5tlval3810.read(), 2, 16); //gcnl:NodeCast.cpp:748
    Ui_Ut_102161i<EC> Uv_2sy(Uh_5tlreg3811); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:221: 	  if (dx < 0) dx *= -1;
    {

//! Bond.ulam:221: 	  if (dx < 0) dx *= -1;
      const u32 Uh_5tlreg3812 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3813 = _Int32ToInt32(Uh_5tlreg3812, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3815 = Uv_2dx.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3816 = _BinOpCompareLessThanInt32(Uh_5tlreg3815, Uh_5tlreg3813, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3816, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:221: 	  if (dx < 0) dx *= -1;
          const u32 Uh_5tlreg3817 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3818 = _Int32ToInt32(Uh_5tlreg3817, 2, 16); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3820 = Uv_2dx.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3821 = _BinOpMultiplyInt32(Uh_5tlreg3820, Uh_5tlreg3818, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
          Uv_2dx.write(Uh_5tlreg3821); //gcnl:Node.cpp:892
      } // end if
    }

//! Bond.ulam:222: 	  if (dy < 0) dy *= -1;
    {

//! Bond.ulam:222: 	  if (dy < 0) dy *= -1;
      const u32 Uh_5tlreg3822 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3823 = _Int32ToInt32(Uh_5tlreg3822, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3825 = Uv_2dy.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3826 = _BinOpCompareLessThanInt32(Uh_5tlreg3825, Uh_5tlreg3823, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3826, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:222: 	  if (dy < 0) dy *= -1;
          const u32 Uh_5tlreg3827 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3828 = _Int32ToInt32(Uh_5tlreg3827, 2, 16); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3830 = Uv_2dy.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3831 = _BinOpMultiplyInt32(Uh_5tlreg3830, Uh_5tlreg3828, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
          Uv_2dy.write(Uh_5tlreg3831); //gcnl:Node.cpp:892
      } // end if
    }

//! Bond.ulam:224: 	  Short err = (dx>dy ? dx : -dy);
    u32 Uh_5tlreg3832; //gcnl:NodeQuestionColon.cpp:507
    const u32 Uh_5tlreg3834 = Uv_2dy.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3836 = Uv_2dx.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3837 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3836, Uh_5tlreg3834, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg3837, 1)) //gcnl:NodeQuestionColon.cpp:655
    {
      const u32 Uh_5tlreg3839 = Uv_2dx.read(); //gcnl:Node.cpp:698
      Uh_5tlreg3832 = Uh_5tlreg3839; //gcnl:NodeQuestionColon.cpp:527
    }
    else
    {
      const u32 Uh_5tlreg3841 = Uv_2dy.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3842 = _UnaryMinusInt32(Uh_5tlreg3841, 16); //gcnl:NodeUnaryOp.cpp:507
      Uh_5tlreg3832 = Uh_5tlreg3842; //gcnl:NodeQuestionColon.cpp:552
    } //ends?:

    Ui_Ut_102161i<EC> Uh_5tlval3843(Uh_5tlreg3832); //gcnl:Node.cpp:1142
    Ui_Ut_102161i<EC> Uv_3err(Uh_5tlval3843); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:225: 	  err /= 2;
    const u32 Uh_5tlreg3844 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3845 = _Int32ToInt32(Uh_5tlreg3844, 3, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3847 = Uv_3err.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3848 = _BinOpDivideInt32(Uh_5tlreg3847, Uh_5tlreg3845, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
    Uv_3err.write(Uh_5tlreg3848); //gcnl:Node.cpp:892

//! Bond.ulam:226: 	  Short e2 = 0;
    const u32 Uh_5tlreg3849 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3850 = _Int32ToInt32(Uh_5tlreg3849, 2, 16); //gcnl:NodeCast.cpp:748
    Ui_Ut_102161i<EC> Uv_2e2(Uh_5tlreg3850); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:228: 	  for(;;){
    {

//! Bond.ulam:228: 	  for(;;){
      while(true)
      {
        const u32 Uh_5tlreg3851 = 1u; //gcnl:NodeTerminal.cpp:690

        if(!_Bool32ToCbool(Uh_5tlreg3851, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:228: 	  for(;;){
        {

//! Bond.ulam:229: 	  	c2d.x = x0;
          const u32 Uh_5tlreg3853 = Uv_2x0.read(); //gcnl:Node.cpp:698
          UlamRef<EC>(0u, 16u, Uv_3c2d, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3853); //gcnl:Node.cpp:892

//! Bond.ulam:230: 	  	c2d.y = y0;
          const u32 Uh_5tlreg3857 = Uv_2y0.read(); //gcnl:Node.cpp:698
          UlamRef<EC>(16u, 16u, Uv_3c2d, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3857); //gcnl:Node.cpp:892

//! Bond.ulam:231: 	  	SiteNum site = ew.getSiteNumber(c2d);
          UlamRef<EC> Uh_3tur3861(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3863 = Uv_3c2d.read(); //gcnl:Node.cpp:698
          Ui_Uq_102323C2D10<EC> Uh_5tlval3864(Uh_5tlreg3863); //gcnl:Node.cpp:1142
          const Ui_Ut_10161u<EC> Uh_5tlval3866 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur3861, Uh_5tlval3864); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg3867 = Uh_5tlval3866.read(); //gcnl:Node.cpp:1170
          Ui_Ut_10161u<EC> Uv_4site(Uh_5tlreg3867); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:232: 	  	if (canMoveTo(site)) ew[site] = Wall.instanceof;
          {

//! Bond.ulam:232: 	  	if (canMoveTo(site)) ew[site] = Wall.instanceof;
            const u32 Uh_5tlreg3870 = Uv_4site.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3871(Uh_5tlreg3870); //gcnl:Node.cpp:1142
            const Ui_Ut_10111b<EC> Uh_5tlval3873 = THE_INSTANCE.Uf_919canMoveTo(uc, ur, Uh_5tlval3871); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3874 = Uh_5tlval3873.read(); //gcnl:Node.cpp:1170
            if(_Bool32ToCbool(Uh_5tlreg3874, 1)) //gcnl:NodeControl.cpp:213
            {

//! Bond.ulam:232: 	  	if (canMoveTo(site)) ew[site] = Wall.instanceof;
                Ui_Ue_10104Wall10<EC> Uh_5tuval3875; //gcnl:NodeInstanceof.cpp:113
                UlamRef<EC> Uh_3tur3877(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3879 = Uv_4site.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval3880(Uh_5tlreg3879); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3882 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3877, Uh_5tlval3880); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3882.WriteAtom(Uh_5tuval3875.read()); //write into atomof ref //gcnl:Node.cpp:992
            } // end if
          }

//! Bond.ulam:234: 	    if (x0==x1 && y0==y1) break;
          {

//! Bond.ulam:234: 	    if (x0==x1 && y0==y1) break;
            u32 Uh_5tlreg3883 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg3885 = Uv_2x1.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3887 = Uv_2x0.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3888 = _BinOpCompareEqEqInt32(Uh_5tlreg3887, Uh_5tlreg3885, 16); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3888, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg3890 = Uv_2y1.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3892 = Uv_2y0.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3893 = _BinOpCompareEqEqInt32(Uh_5tlreg3892, Uh_5tlreg3890, 16); //gcnl:NodeBinaryOpCompare.cpp:441
              Uh_5tlreg3883 = Uh_5tlreg3893; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg3883, 1)) //gcnl:NodeControl.cpp:213
            {

//! Bond.ulam:234: 	    if (x0==x1 && y0==y1) break;
                break; //out of nearest loop //gcnl:NodeBreakStatement.cpp:69
            } // end if
          }

//! Bond.ulam:235: 	    e2 = err;
          const u32 Uh_5tlreg3895 = Uv_3err.read(); //gcnl:Node.cpp:698
          Uv_2e2.write(Uh_5tlreg3895); //gcnl:Node.cpp:892

//! Bond.ulam:236: 	    if (e2 >-dx) { err -= dy; x0 += sx; }
          {

//! Bond.ulam:236: 	    if (e2 >-dx) { err -= dy; x0 += sx; }
            const u32 Uh_5tlreg3898 = Uv_2dx.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3899 = _UnaryMinusInt32(Uh_5tlreg3898, 16); //gcnl:NodeUnaryOp.cpp:507
            const u32 Uh_5tlreg3901 = Uv_2e2.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3902 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3901, Uh_5tlreg3899, 16); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3902, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:236: 	    if (e2 >-dx) { err -= dy; x0 += sx; }
                const u32 Uh_5tlreg3904 = Uv_2dy.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3906 = Uv_3err.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3907 = _BinOpSubtractInt32(Uh_5tlreg3906, Uh_5tlreg3904, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                Uv_3err.write(Uh_5tlreg3907); //gcnl:Node.cpp:892

//! Bond.ulam:236: 	    if (e2 >-dx) { err -= dy; x0 += sx; }
                const u32 Uh_5tlreg3909 = Uv_2sx.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3911 = Uv_2x0.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3912 = _BinOpAddInt32(Uh_5tlreg3911, Uh_5tlreg3909, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                Uv_2x0.write(Uh_5tlreg3912); //gcnl:Node.cpp:892
              }
            } // end if
          }

//! Bond.ulam:237: 	    if (e2 < dy) { err += dx; y0 += sy; }
          {

//! Bond.ulam:237: 	    if (e2 < dy) { err += dx; y0 += sy; }
            const u32 Uh_5tlreg3914 = Uv_2dy.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3916 = Uv_2e2.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3917 = _BinOpCompareLessThanInt32(Uh_5tlreg3916, Uh_5tlreg3914, 16); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3917, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:237: 	    if (e2 < dy) { err += dx; y0 += sy; }
                const u32 Uh_5tlreg3919 = Uv_2dx.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3921 = Uv_3err.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3922 = _BinOpAddInt32(Uh_5tlreg3921, Uh_5tlreg3919, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                Uv_3err.write(Uh_5tlreg3922); //gcnl:Node.cpp:892

//! Bond.ulam:237: 	    if (e2 < dy) { err += dx; y0 += sy; }
                const u32 Uh_5tlreg3924 = Uv_2sy.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3926 = Uv_2y0.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3927 = _BinOpAddInt32(Uh_5tlreg3926, Uh_5tlreg3924, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                Uv_2y0.write(Uh_5tlreg3927); //gcnl:Node.cpp:892
              }
            } // end if
          }
        }

//! Bond.ulam:228: 	  for(;;){
Ul_214endcontrolloop211:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_4line


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_102244Bond10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Ut_10111b", "active", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Ut_10131u", "bondCount", 1u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 4: { static UlamClassDataMemberInfo i("Ut_14151u", "bonds", 4u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_102244Bond10<EC>::GetDataMemberCount() const
  {
    return 5; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_102244Bond10<EC>::GetMangledClassName() const
  {
    return "Uq_102244Bond10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_102244Bond10<EC>::GetClassLength( ) const
  {
    return 24; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_102244Bond10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_102244Bond10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_102244Bond10<EC>::getDefaultQuark( ) const
  {
    return 0x800000; //=8388608 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_102244Bond10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_102244Bond10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_102244Bond10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_102244Bond10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

