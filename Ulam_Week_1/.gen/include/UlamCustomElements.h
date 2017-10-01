#ifndef ULAMCUSTOMELEMENTS_H
#define ULAMCUSTOMELEMENTS_H

#include "AbstractDriver.h"

#include "Ue_10104Wall10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10105UWall10.h"
#include "Ue_10108MoveLeft10.h"
#include "Ue_10197DCancer10.h"
#include "Ue_102125SwapE10.h"
#include "Ue_102125SwapX10.h"
#include "Ue_102167UCancer10.h"
#include "Ue_102324Cool10.h"
#include "Ue_102327NotLife10.h"
#include "Ue_102338SandPile10.h"
#include "Ue_102389213SecurityFence10.h"
#include "Ue_102568NotLife210.h"
#include "Ue_102654Life10.h"
#include "Uq_10104Fail10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10106Random10.h"
#include "Uq_10106UrSelf10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10109210ByteStream10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_102323C2D10.h"
#include "Un_102649216ByteStreamString10.h"

/* Metadata for UlamElementInfoForUe_10104Wall10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in '/usr/bin/../lib/ulam/ULAM/bin/../share/ulam/core/Wall.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
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

   Generated on Fri Sep 22 23:49:46 2017 UTC
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


/* Metadata for UlamElementInfoForUe_10105UWall10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in 'UWall.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10105UWall10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10105UWall10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_10105UWall10() { }
    const char * GetName() const { return "UWall"; }
    const char * GetSymbol() const { return "UW"; }
    const char * GetSummary() const { return "UWall (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xffffaaaa; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_10108MoveLeft10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in 'MoveLeft.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10108MoveLeft10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10108MoveLeft10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_10108MoveLeft10() { }
    const char * GetName() const { return "MoveLeft"; }
    const char * GetSymbol() const { return "Mo"; }
    const char * GetSummary() const { return "MoveLeft (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff00aaaa; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_10197DCancer10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in 'DCancer.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10197DCancer10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10197DCancer10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_10197DCancer10() { }
    const char * GetName() const { return "DCancer"; }
    const char * GetSymbol() const { return "DC"; }
    const char * GetSummary() const { return "NONE"; }
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
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102125SwapE10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in 'SwapE.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102125SwapE10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102125SwapE10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102125SwapE10() { }
    const char * GetName() const { return "SwapE"; }
    const char * GetSymbol() const { return "Sw"; }
    const char * GetSummary() const { return "SwapE (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff0000ff; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      Random & r = const_cast<UlamContext<EC> &>(uc).GetRandom();
      return r.Create(8);
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102125SwapX10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in 'SwapX.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102125SwapX10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102125SwapX10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102125SwapX10() { }
    const char * GetName() const { return "SwapX"; }
    const char * GetSymbol() const { return "Sw"; }
    const char * GetSummary() const { return "SwapX (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xffff0000; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      Random & r = const_cast<UlamContext<EC> &>(uc).GetRandom();
      return r.Create(8);
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102167UCancer10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in 'UCancer.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102167UCancer10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102167UCancer10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102167UCancer10() { }
    const char * GetName() const { return "UCancer"; }
    const char * GetSymbol() const { return "UC"; }
    const char * GetSummary() const { return "NONE"; }
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
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102324Cool10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in 'Cool.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102324Cool10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102324Cool10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102324Cool10() { }
    const char * GetName() const { return "Cool"; }
    const char * GetSymbol() const { return "Co"; }
    const char * GetSummary() const { return "Cool (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xffff00ff; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102327NotLife10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in 'NotLife.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102327NotLife10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102327NotLife10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102327NotLife10() { }
    const char * GetName() const { return "NotLife"; }
    const char * GetSymbol() const { return "No"; }
    const char * GetSummary() const { return "NotLife (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff00ffff; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102338SandPile10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in 'SandPile.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102338SandPile10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102338SandPile10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102338SandPile10() { }
    const char * GetName() const { return "SandPile"; }
    const char * GetSymbol() const { return "Sa"; }
    const char * GetSummary() const { return "NONE"; }
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
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102389213SecurityFence10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in 'SecurityFence.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102389213SecurityFence10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102389213SecurityFence10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102389213SecurityFence10() { }
    const char * GetName() const { return "SecurityFence"; }
    const char * GetSymbol() const { return "XX"; }
    const char * GetSummary() const { return "SecurityFence (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff008800; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102568NotLife210 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in 'NotLife2.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102568NotLife210 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102568NotLife210(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102568NotLife210() { }
    const char * GetName() const { return "NotLife2"; }
    const char * GetSymbol() const { return "No"; }
    const char * GetSummary() const { return "NotLife2 (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff00ffff; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102654Life10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in 'Life.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 22 23:49:46 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102654Life10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102654Life10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102654Life10() { }
    const char * GetName() const { return "Life"; }
    const char * GetSymbol() const { return "Li"; }
    const char * GetSummary() const { return "Life (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff00ffff; }
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
