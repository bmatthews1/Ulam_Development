
#include "UlamCustomElements.h"

#ifdef ELEMENT_PLUG_IN

#include "StdEventConfig.h"
#include "ElementLibraryLoader.h"

extern "C" {

  static MFM::UlamElementInfoForUe_10104Wall10<MFM::StdEventConfig> _ueinfo10(MFM::Ue_10104Wall10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub10 (
      MFM::Ue_10104Wall10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo10);

  static MFM::UlamElementInfoForUe_10105Empty10<MFM::StdEventConfig> _ueinfo11(MFM::Ue_10105Empty10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub11 (
      MFM::Ue_10105Empty10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo11);

  static MFM::UlamElementInfoForUe_10109214BondParameters10<MFM::StdEventConfig> _ueinfo12(MFM::Ue_10109214BondParameters10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub12 (
      MFM::Ue_10109214BondParameters10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo12);

  static MFM::UlamElementInfoForUe_10109214CellParameters10<MFM::StdEventConfig> _ueinfo13(MFM::Ue_10109214CellParameters10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub13 (
      MFM::Ue_10109214CellParameters10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo13);

  static MFM::UlamElementInfoForUe_10168CellWall10<MFM::StdEventConfig> _ueinfo14(MFM::Ue_10168CellWall10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub14 (
      MFM::Ue_10168CellWall10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo14);

  static MFM::UlamElementInfoForUe_102299210RandomCell10<MFM::StdEventConfig> _ueinfo15(MFM::Ue_102299210RandomCell10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub15 (
      MFM::Ue_102299210RandomCell10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo15);

  static MFM::UlamElementInfoForUe_102364Cell10<MFM::StdEventConfig> _ueinfo16(MFM::Ue_102364Cell10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub16 (
      MFM::Ue_102364Cell10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo16);

  static MFM::UlamElementInfoForUe_102369210JumperCell10<MFM::StdEventConfig> _ueinfo17(MFM::Ue_102369210JumperCell10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub17 (
      MFM::Ue_102369210JumperCell10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo17);

  static MFM::UlamElementInfoForUe_102369213DirectionCell10<MFM::StdEventConfig> _ueinfo18(MFM::Ue_102369213DirectionCell10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub18 (
      MFM::Ue_102369213DirectionCell10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo18);

  static MFM::ElementLibraryStub<MFM::StdEventConfig> * (_elementStubPtrArray_[]) = {
    &_uelstub10,
    &_uelstub11,
    &_uelstub12,
    &_uelstub13,
    &_uelstub14,
    &_uelstub15,
    &_uelstub16,
    &_uelstub17,
    &_uelstub18
  };

  static MFM::UlamClass<MFM::StdEventConfig> * (_otherUlamClassPtrArray_[]) = {
    &MFM::Uq_10104Fail10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10105MDist10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10106Random10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10106UrSelf10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_1010919AtomUtils10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10109210ByteStream10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10109210ColorUtils10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10109211EventWindow10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10114Once10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10115OnceT11102151y10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_102294Bond10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_102323C2D10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Un_102649216ByteStreamString10<MFM::StdEventConfig>::THE_INSTANCE
  };
  static MFM::ElementLibrary<MFM::StdEventConfig> el = {
    MFM::ELEMENT_LIBRARY_MAGIC,
    MFM::ELEMENT_LIBRARY_VERSION,
    MFM::ELEMENT_LIBRARY_SUBVERSION,
    0,
    MFM_BUILD_DATE,
    MFM_BUILD_TIME,
    9,
    _elementStubPtrArray_,
    13,
    _otherUlamClassPtrArray_
  };
  void * MFM_ELEMENT_LIBRARY_LOADER_SYMBOL =  &el;
}

#endif /* ELEMENT_PLUG_IN */

