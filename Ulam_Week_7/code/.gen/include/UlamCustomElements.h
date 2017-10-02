#ifndef ULAMCUSTOMELEMENTS_H
#define ULAMCUSTOMELEMENTS_H

#include "AbstractDriver.h"

#include "Ue_10104Wall10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10109214BondParameters10.h"
#include "Ue_10109214CellParameters10.h"
#include "Ue_10168CellWall10.h"
#include "Ue_102299210RandomCell10.h"
#include "Ue_102364Cell10.h"
#include "Ue_102369210JumperCell10.h"
#include "Ue_102369213DirectionCell10.h"
#include "Uq_10104Fail10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10106Random10.h"
#include "Uq_10106UrSelf10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10109210ByteStream10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10114Once10.h"
#include "Uq_10115OnceT11102151y10.h"
#include "Uq_102294Bond10.h"
#include "Uq_102323C2D10.h"
#include "Un_102649216ByteStreamString10.h"

/* Metadata for UlamElementInfoForUe_10104Wall10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in '/usr/bin/../lib/ulam/ULAM/bin/../share/ulam/core/Wall.ulam'.
   Make any desired changes there!

   Generated on Mon Oct  2 02:37:48 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10104Wall10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10104Wall10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_10104Wall10() { }
    const char * GetName() const { return "Wall"; }
    const char * GetSymbol() const { return "W"; }
    const char * GetSummary() const { return "Wall"; }
    const char * GetDetails() const { return "A thing that doesn't want to move or be moved"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 2; }
    virtual const u32 GetPercentDiffusability() const
    {
      return 0;
    }

    const u32 GetElementColor() const { return 0xffffffff; }
    const u32 GetEventWindowBoundary() const { return 0 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_10105Empty10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in '/usr/bin/../lib/ulam/ULAM/bin/../share/ulam/stdlib/Empty.ulam'.
   Make any desired changes there!

   Generated on Mon Oct  2 02:37:48 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10105Empty10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10105Empty10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_10105Empty10() { }
    const char * GetName() const { return "Empty"; }
    const char * GetSymbol() const { return "E"; }
    const char * GetSummary() const { return "This stub is linked to the actual Element_Empty by special-case setup code"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff000000; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_10109214BondParameters10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Bond.ulam'.
   Make any desired changes there!

   Generated on Mon Oct  2 02:37:48 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10109214BondParameters10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10109214BondParameters10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_10109214BondParameters10() { }
    const char * GetName() const { return "BondParameters"; }
    const char * GetSymbol() const { return "BP"; }
    const char * GetSummary() const { return "a small element for Bond Paramters"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xFFFFFFFF; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    {
        u32 _min = (u32) 4;
        u32 _def = (u32) 0x18;
        u32 _max = (u32) 40;
        static UlamTypeInfoModelParameterU32<EC> parm(
            m_ulamElement,
            "Ut_102321u",
            "cMAX",
            "bonding distance:",
            "(no details provided)",
            &_min,
            &_def,
            &_max,
            "Site Number");
        //ctor registers itself on element..
        Ue_10109214BondParameters10<EC>::THE_INSTANCE.Up_4cMAX.init(parm.GetAtom());
    }
    {
        u32 _min = (u32) 1;
        u32 _def = (u32) 0x2;
        u32 _max = (u32) 5;
        static UlamTypeInfoModelParameterU32<EC> parm(
            m_ulamElement,
            "Ut_102321u",
            "cMAX_BONDS",
            "max # of bonds",
            "(no details provided)",
            &_min,
            &_def,
            &_max,
            "Bond Number");
        //ctor registers itself on element..
        Ue_10109214BondParameters10<EC>::THE_INSTANCE.Up_9210cMAX_BONDS.init(parm.GetAtom());
    }
    {
        static UlamTypeInfoModelParameterBool<EC> parm(
            m_ulamElement,
            "Ut_10111b",
            "cSHOW_BONDS",
            "Show Bonds as Walls",
            "(no details provided)",
            0x0);
        Ue_10109214BondParameters10<EC>::THE_INSTANCE.Up_9211cSHOW_BONDS.init(parm.GetAtom());
    }
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_10109214CellParameters10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Cell.ulam'.
   Make any desired changes there!

   Generated on Mon Oct  2 02:37:48 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10109214CellParameters10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10109214CellParameters10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_10109214CellParameters10() { }
    const char * GetName() const { return "CellParameters"; }
    const char * GetSymbol() const { return "CP"; }
    const char * GetSummary() const { return "CellParameters (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xFFFFFFFF; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    {
        u32 _min = (u32) 0;
        u32 _def = (u32) 0x64;
        u32 _max = (u32) 100;
        static UlamTypeInfoModelParameterU32<EC> parm(
            m_ulamElement,
            "Ut_102321u",
            "bRED",
            "north: ",
            "(no details provided)",
            &_min,
            &_def,
            &_max,
            "");
        //ctor registers itself on element..
        Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_4bRED.init(parm.GetAtom());
    }
    {
        u32 _min = (u32) 0;
        u32 _def = (u32) 0x64;
        u32 _max = (u32) 100;
        static UlamTypeInfoModelParameterU32<EC> parm(
            m_ulamElement,
            "Ut_102321u",
            "cBLUE",
            "south: ",
            "(no details provided)",
            &_min,
            &_def,
            &_max,
            "");
        //ctor registers itself on element..
        Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_5cBLUE.init(parm.GetAtom());
    }
    {
        u32 _min = (u32) 0;
        u32 _def = (u32) 0x64;
        u32 _max = (u32) 100;
        static UlamTypeInfoModelParameterU32<EC> parm(
            m_ulamElement,
            "Ut_102321u",
            "eGREEN",
            "east: ",
            "(no details provided)",
            &_min,
            &_def,
            &_max,
            "");
        //ctor registers itself on element..
        Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_6eGREEN.init(parm.GetAtom());
    }
    {
        u32 _min = (u32) 0;
        u32 _def = (u32) 0x64;
        u32 _max = (u32) 100;
        static UlamTypeInfoModelParameterU32<EC> parm(
            m_ulamElement,
            "Ut_102321u",
            "aRANDOM",
            "random: ",
            "(no details provided)",
            &_min,
            &_def,
            &_max,
            "");
        //ctor registers itself on element..
        Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_7aRANDOM.init(parm.GetAtom());
    }
    {
        u32 _min = (u32) 0;
        u32 _def = (u32) 0x64;
        u32 _max = (u32) 100;
        static UlamTypeInfoModelParameterU32<EC> parm(
            m_ulamElement,
            "Ut_102321u",
            "dYELLOW",
            "west: ",
            "(no details provided)",
            &_min,
            &_def,
            &_max,
            "");
        //ctor registers itself on element..
        Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_7dYELLOW.init(parm.GetAtom());
    }
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_10168CellWall10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './CellWall.ulam'.
   Make any desired changes there!

   Generated on Mon Oct  2 02:37:48 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10168CellWall10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10168CellWall10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_10168CellWall10() { }
    const char * GetName() const { return "CellWall"; }
    const char * GetSymbol() const { return "CW"; }
    const char * GetSummary() const { return "CellWall (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff442211; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102299210RandomCell10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './RandomCell.ulam'.
   Make any desired changes there!

   Generated on Mon Oct  2 02:37:48 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102299210RandomCell10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102299210RandomCell10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102299210RandomCell10() { }
    const char * GetName() const { return "RandomCell"; }
    const char * GetSymbol() const { return "CR"; }
    const char * GetSummary() const { return "RandomCell (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xffaa00aa; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102364Cell10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Cell.ulam'.
   Make any desired changes there!

   Generated on Mon Oct  2 02:37:48 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102364Cell10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102364Cell10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102364Cell10() { }
    const char * GetName() const { return "Cell"; }
    const char * GetSymbol() const { return "C"; }
    const char * GetSummary() const { return "Cell (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xffaa5500; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102369210JumperCell10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './JumperCell.ulam'.
   Make any desired changes there!

   Generated on Mon Oct  2 02:37:48 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102369210JumperCell10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102369210JumperCell10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102369210JumperCell10() { }
    const char * GetName() const { return "JumperCell"; }
    const char * GetSymbol() const { return "CJ"; }
    const char * GetSummary() const { return "JumperCell (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff00aaff; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102369213DirectionCell10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './DirectionCell.ulam'.
   Make any desired changes there!

   Generated on Mon Oct  2 02:37:48 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102369213DirectionCell10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102369213DirectionCell10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102369213DirectionCell10() { }
    const char * GetName() const { return "DirectionCell"; }
    const char * GetSymbol() const { return "CD"; }
    const char * GetSummary() const { return "DirectionCell (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xffff0000; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


#endif /* ULAMCUSTOMELEMENTS_H */
