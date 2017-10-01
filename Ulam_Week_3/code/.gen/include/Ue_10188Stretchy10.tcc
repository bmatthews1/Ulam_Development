/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Ue_10105Empty10.h"
#include "Uq_1010919AtomUtils10.h"

namespace MFM{

  template<class EC>
  Ue_10188Stretchy10<EC>::Ue_10188Stretchy10() : UlamElement<EC>(MFM_UUID_FOR("Ue10188Stretchy10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("S");  // figure this out later
    Element<EC>::SetName("Stretchy"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_10188Stretchy10<EC>::~Ue_10188Stretchy10(){} //gcnl:NodeBlockClass.cpp:1743


//! Stretchy.ulam:15:   Void behave() {
  template<class EC>
  void Ue_10188Stretchy10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Stretchy.ulam:16:     Byte neighbors = 0;
    const u32 Uh_5tlreg3755 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3756 = _Int32ToUnsigned32(Uh_5tlreg3755, 2, 8); //gcnl:NodeCast.cpp:748
    Ui_Ut_10181u<EC> Uv_919neighbors(Uh_5tlreg3756); //gcnl:NodeVarDecl.cpp:1081

//! Stretchy.ulam:17: 		Byte adjacent = 0;
    const u32 Uh_5tlreg3757 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3758 = _Int32ToUnsigned32(Uh_5tlreg3757, 2, 8); //gcnl:NodeCast.cpp:748
    Ui_Ut_10181u<EC> Uv_8adjacent(Uh_5tlreg3758); //gcnl:NodeVarDecl.cpp:1081

//! Stretchy.ulam:18:     Byte tempAdjacent = 0;
    const u32 Uh_5tlreg3759 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3760 = _Int32ToUnsigned32(Uh_5tlreg3759, 2, 8); //gcnl:NodeCast.cpp:748
    Ui_Ut_10181u<EC> Uv_9212tempAdjacent(Uh_5tlreg3760); //gcnl:NodeVarDecl.cpp:1081

//! Stretchy.ulam:20:     for (SiteNumber i = 1; i < 41; i++){
    {

//! Stretchy.ulam:20:     for (SiteNumber i = 1; i < 41; i++){
      const u32 Uh_5tlreg3761 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3762 = _Int32ToUnsigned32(Uh_5tlreg3761, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg3762); //gcnl:NodeVarDecl.cpp:1081

//! Stretchy.ulam:20:     for (SiteNumber i = 1; i < 41; i++){
      while(true)
      {
        const u32 Uh_5tlreg3763 = 41; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3765 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3766 = _Unsigned32ToInt32(Uh_5tlreg3765, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3767 = _BinOpCompareLessThanInt32(Uh_5tlreg3766, Uh_5tlreg3763, 7); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3767, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Stretchy.ulam:20:     for (SiteNumber i = 1; i < 41; i++){
        {

//! Stretchy.ulam:21:       if (ew[i] is Stretchy){
          {

//! Stretchy.ulam:21:       if (ew[i] is Stretchy){
            UlamRef<EC> Uh_3tur3769(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg3771 = Uv_1i.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3772(Uh_5tlreg3771); //gcnl:Node.cpp:1142
            Ui_Ut_r102961a<EC> Uh_5tuval3774 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3769, Uh_5tlval3772); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3775 = Ue_10188Stretchy10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval3774.read()); //gcnl:NodeConditionalIs.cpp:285
            if(_Bool32ToCbool(Uh_5tlreg3775, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Stretchy.ulam:22:         neighbors++;
                const u32 Uh_5tlreg3776 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3777 = _Int32ToUnsigned32(Uh_5tlreg3776, 32, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg3779 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3780 = _BinOpAddUnsigned32(Uh_5tlreg3779, Uh_5tlreg3777, 8); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                Uv_919neighbors.write(Uh_5tlreg3780); //gcnl:Node.cpp:892
              }
            } // end if
          }
        }

//! Stretchy.ulam:20:     for (SiteNumber i = 1; i < 41; i++){
Ul_214endcontrolloop12:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Stretchy.ulam:20:     for (SiteNumber i = 1; i < 41; i++){
        const u32 Uh_5tlreg3781 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3782 = _Int32ToUnsigned32(Uh_5tlreg3781, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3784 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3785 = _BinOpAddUnsigned32(Uh_5tlreg3784, Uh_5tlreg3782, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3785); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Stretchy.ulam:26:     for (SiteNumber i = 0; i < 16; i++){
    {

//! Stretchy.ulam:26:     for (SiteNumber i = 0; i < 16; i++){
      const u32 Uh_5tlreg3786 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3787 = _Int32ToUnsigned32(Uh_5tlreg3786, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg3787); //gcnl:NodeVarDecl.cpp:1081

//! Stretchy.ulam:26:     for (SiteNumber i = 0; i < 16; i++){
      while(true)
      {
        const u32 Uh_5tlreg3788 = 16; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3789 = _Int32ToInt32(Uh_5tlreg3788, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3791 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3792 = _Unsigned32ToInt32(Uh_5tlreg3791, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3793 = _BinOpCompareLessThanInt32(Uh_5tlreg3792, Uh_5tlreg3789, 7); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3793, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Stretchy.ulam:26:     for (SiteNumber i = 0; i < 16; i++){
        {

//! Stretchy.ulam:27:       if (ew[(SiteNumber)((i%8u) + 1u)] is Stretchy){
          {

//! Stretchy.ulam:27:       if (ew[(SiteNumber)((i%8u) + 1u)] is Stretchy){
            UlamRef<EC> Uh_3tur3795(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg3796 = 1u; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3797 = _Unsigned32ToUnsigned32(Uh_5tlreg3796, 1, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3798 = 8u; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3799 = _Unsigned32ToUnsigned32(Uh_5tlreg3798, 4, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3801 = Uv_1i.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3802 = _BinOpModUnsigned32(Uh_5tlreg3801, Uh_5tlreg3799, 6); //gcnl:NodeBinaryOp.cpp:805
            const u32 Uh_5tlreg3803 = _Unsigned32ToUnsigned32(Uh_5tlreg3802, 6, 4); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3804 = _Unsigned32ToUnsigned32(Uh_5tlreg3803, 4, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3805 = _BinOpAddUnsigned32(Uh_5tlreg3804, Uh_5tlreg3797, 7); //gcnl:NodeBinaryOp.cpp:805
            const u32 Uh_5tlreg3806 = _Unsigned32ToUnsigned32(Uh_5tlreg3805, 7, 6); //gcnl:NodeCast.cpp:748
            Ui_Ut_10161u<EC> Uh_5tlval3807(Uh_5tlreg3806); //gcnl:Node.cpp:1142
            Ui_Ut_r102961a<EC> Uh_5tuval3809 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3795, Uh_5tlval3807); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3810 = Ue_10188Stretchy10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval3809.read()); //gcnl:NodeConditionalIs.cpp:285
            if(_Bool32ToCbool(Uh_5tlreg3810, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Stretchy.ulam:28:         tempAdjacent++;
                const u32 Uh_5tlreg3811 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3812 = _Int32ToUnsigned32(Uh_5tlreg3811, 32, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg3814 = Uv_9212tempAdjacent.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3815 = _BinOpAddUnsigned32(Uh_5tlreg3814, Uh_5tlreg3812, 8); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                Uv_9212tempAdjacent.write(Uh_5tlreg3815); //gcnl:Node.cpp:892
              }
            } // end if
            else
            {
              {

//! Stretchy.ulam:31:         if (tempAdjacent > adjacent) adjacent = tempAdjacent;
                {

//! Stretchy.ulam:31:         if (tempAdjacent > adjacent) adjacent = tempAdjacent;
                  const u32 Uh_5tlreg3817 = Uv_8adjacent.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg3819 = Uv_9212tempAdjacent.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg3820 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg3819, Uh_5tlreg3817, 8); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg3820, 1)) //gcnl:NodeControl.cpp:213
                  {

//! Stretchy.ulam:31:         if (tempAdjacent > adjacent) adjacent = tempAdjacent;
                      const u32 Uh_5tlreg3822 = Uv_9212tempAdjacent.read(); //gcnl:Node.cpp:698
                      Uv_8adjacent.write(Uh_5tlreg3822); //gcnl:Node.cpp:892
                  } // end if
                }

//! Stretchy.ulam:32:         tempAdjacent = 0;
                const u32 Uh_5tlreg3824 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3825 = _Int32ToUnsigned32(Uh_5tlreg3824, 2, 8); //gcnl:NodeCast.cpp:748
                Uv_9212tempAdjacent.write(Uh_5tlreg3825); //gcnl:Node.cpp:892
              }
            } //end else
          }
        }

//! Stretchy.ulam:26:     for (SiteNumber i = 0; i < 16; i++){
Ul_214endcontrolloop13:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Stretchy.ulam:26:     for (SiteNumber i = 0; i < 16; i++){
        const u32 Uh_5tlreg3827 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3828 = _Int32ToUnsigned32(Uh_5tlreg3827, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3830 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3831 = _BinOpAddUnsigned32(Uh_5tlreg3830, Uh_5tlreg3828, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3831); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Stretchy.ulam:36:     if (adjacent < 3 || adjacent > 5) return;
    {

//! Stretchy.ulam:36:     if (adjacent < 3 || adjacent > 5) return;
      u32 Uh_5tlreg3832 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg3833 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3834 = _Int32ToInt32(Uh_5tlreg3833, 3, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3836 = Uv_8adjacent.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3837 = _Unsigned32ToInt32(Uh_5tlreg3836, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3838 = _BinOpCompareLessThanInt32(Uh_5tlreg3837, Uh_5tlreg3834, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg3838, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg3839 = 5; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3840 = _Int32ToInt32(Uh_5tlreg3839, 4, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3842 = Uv_8adjacent.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3843 = _Unsigned32ToInt32(Uh_5tlreg3842, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3844 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3843, Uh_5tlreg3840, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg3832 = Uh_5tlreg3844; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg3832 = Uh_5tlreg3838; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg3832, 1)) //gcnl:NodeControl.cpp:213
      {

//! Stretchy.ulam:36:     if (adjacent < 3 || adjacent > 5) return;
          return; //gcnl:NodeReturnStatement.cpp:348
      } // end if
    }

//! Stretchy.ulam:38:     if (neighbors < max){
    {

//! Stretchy.ulam:38:     if (neighbors < max){
      const u32 Uh_5tlreg3846 = UlamRef<EC>(ur, 0u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3848 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3849 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3848, Uh_5tlreg3846, 8); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3849, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Stretchy.ulam:39:       for (SiteNumber i = 1; i < 5; i++){
          {

//! Stretchy.ulam:39:       for (SiteNumber i = 1; i < 5; i++){
            const u32 Uh_5tlreg3850 = 1; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3851 = _Int32ToUnsigned32(Uh_5tlreg3850, 2, 6); //gcnl:NodeCast.cpp:748
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg3851); //gcnl:NodeVarDecl.cpp:1081

//! Stretchy.ulam:39:       for (SiteNumber i = 1; i < 5; i++){
            while(true)
            {
              const u32 Uh_5tlreg3852 = 5; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3853 = _Int32ToInt32(Uh_5tlreg3852, 4, 7); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3855 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3856 = _Unsigned32ToInt32(Uh_5tlreg3855, 6, 7); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3857 = _BinOpCompareLessThanInt32(Uh_5tlreg3856, Uh_5tlreg3853, 7); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg3857, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! Stretchy.ulam:39:       for (SiteNumber i = 1; i < 5; i++){
              {

//! Stretchy.ulam:40:         if (ew[i] is Empty){
                {

//! Stretchy.ulam:40:         if (ew[i] is Empty){
                  UlamRef<EC> Uh_3tur3859(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                  const u32 Uh_5tlreg3861 = Uv_1i.read(); //gcnl:Node.cpp:698
                  Ui_Ut_10161u<EC> Uh_5tlval3862(Uh_5tlreg3861); //gcnl:Node.cpp:1142
                  Ui_Ut_r102961a<EC> Uh_5tuval3864 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3859, Uh_5tlval3862); //gcnl:NodeFunctionCall.cpp:1043
                  const u32 Uh_5tlreg3865 = Ue_10105Empty10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval3864.read()); //gcnl:NodeConditionalIs.cpp:285
                  if(_Bool32ToCbool(Uh_5tlreg3865, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Stretchy.ulam:41:           ew[i] = Stretchy.instanceof;
                      Ui_Ue_10188Stretchy10<EC> Uh_5tuval3866; //gcnl:NodeInstanceof.cpp:113
                      UlamRef<EC> Uh_3tur3868(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3870 = Uv_1i.read(); //gcnl:Node.cpp:698
                      Ui_Ut_10161u<EC> Uh_5tlval3871(Uh_5tlreg3870); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3873 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3868, Uh_5tlval3871); //gcnl:NodeFunctionCall.cpp:1043
                      Uh_5tuval3873.WriteAtom(Uh_5tuval3866.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Stretchy.ulam:42: 					break;
                      break; //out of nearest loop //gcnl:NodeBreakStatement.cpp:69
                    }
                  } // end if
                }
              }

//! Stretchy.ulam:39:       for (SiteNumber i = 1; i < 5; i++){
Ul_214endcontrolloop14:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Stretchy.ulam:39:       for (SiteNumber i = 1; i < 5; i++){
              const u32 Uh_5tlreg3874 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3875 = _Int32ToUnsigned32(Uh_5tlreg3874, 32, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3877 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3878 = _BinOpAddUnsigned32(Uh_5tlreg3877, Uh_5tlreg3875, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
              Uv_1i.write(Uh_5tlreg3878); //gcnl:Node.cpp:892
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }
      } // end if
    }

//! Stretchy.ulam:47:     if (neighbors >= max){
    {

//! Stretchy.ulam:47:     if (neighbors >= max){
      const u32 Uh_5tlreg3880 = UlamRef<EC>(ur, 0u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3882 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3883 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3882, Uh_5tlreg3880, 8); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3883, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Stretchy.ulam:48:       ew[0] = Empty.instanceof;
          Ui_Ue_10105Empty10<EC> Uh_5tuval3884; //gcnl:NodeInstanceof.cpp:113
          UlamRef<EC> Uh_3tur3886(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3887 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3888 = _Int32ToUnsigned32(Uh_5tlreg3887, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3889(Uh_5tlreg3888); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3891 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3886, Uh_5tlval3889); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3891.WriteAtom(Uh_5tuval3884.read()); //write into atomof ref //gcnl:Node.cpp:992
        }
      } // end if
    }

  } // Uf_6behave


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10188Stretchy10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Ut_10181u", "max", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10188Stretchy10<EC>::GetDataMemberCount() const
  {
    return 3; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10188Stretchy10<EC>::GetMangledClassName() const
  {
    return "Ue_10188Stretchy10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_10188Stretchy10<EC>::GetClassLength( ) const
  {
    return 8; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_10188Stretchy10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_10188Stretchy10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_10188Stretchy10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    static const u32 vales[(96 + 31)/32] = { 0xa, 0x0, 0x0 }; //gcnl:CompilerState.cpp:1395
    static BitVector<96> initBV; //gcnl:CompilerState.cpp:1401
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1417
      //correct runtime regnum for strings
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_10188Stretchy10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_10188Stretchy10<EC>::Uf_6behave10) &Ue_10188Stretchy10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_10188Stretchy10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_10188Stretchy10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_10188Stretchy10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_10188Stretchy10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_10188Stretchy10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_10188Stretchy10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

