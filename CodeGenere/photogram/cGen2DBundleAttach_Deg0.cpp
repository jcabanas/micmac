// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cGen2DBundleAttach_Deg0.h"


cGen2DBundleAttach_Deg0::cGen2DBundleAttach_Deg0():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("CX",0,1));
   AddIntRef (cIncIntervale("CY",1,2));
   Close(false);
}



void cGen2DBundleAttach_Deg0::ComputeVal()
{

  mVal[0] = mCompCoord[0]-mLocFixedV_x;

  mVal[1] = mCompCoord[1]-mLocFixedV_y;

}


void cGen2DBundleAttach_Deg0::ComputeValDeriv()
{

  mVal[0] = mCompCoord[0]-mLocFixedV_x;

  mCompDer[0][0] = 1;
  mCompDer[0][1] = 0;
  mVal[1] = mCompCoord[1]-mLocFixedV_y;

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 1;
}


void cGen2DBundleAttach_Deg0::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cGen2DBundleAttach_Deg0 Has no Der Sec");
}

void cGen2DBundleAttach_Deg0::SetFixedV_x(double aVal){ mLocFixedV_x = aVal;}
void cGen2DBundleAttach_Deg0::SetFixedV_y(double aVal){ mLocFixedV_y = aVal;}



double * cGen2DBundleAttach_Deg0::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "FixedV_x") return & mLocFixedV_x;
   if (aName == "FixedV_y") return & mLocFixedV_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cGen2DBundleAttach_Deg0::mTheAuto("cGen2DBundleAttach_Deg0",cGen2DBundleAttach_Deg0::Alloc);


cElCompiledFonc *  cGen2DBundleAttach_Deg0::Alloc()
{  return new cGen2DBundleAttach_Deg0();
}

