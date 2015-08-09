// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cGen2DBundleEgProj_Deg5.h"


cGen2DBundleEgProj_Deg5::cGen2DBundleEgProj_Deg5():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("CX",3,24));
   AddIntRef (cIncIntervale("CY",24,45));
   AddIntRef (cIncIntervale("Tmp_PTer",0,3));
   Close(false);
}



void cGen2DBundleEgProj_Deg5::ComputeVal()
{
   double tmp0_ = mCompCoord[0];
   double tmp1_ = tmp0_-mLocPTerInit_x;
   double tmp2_ = mLocGradX_x*(tmp1_);
   double tmp3_ = mLocProjInit_x+tmp2_;
   double tmp4_ = mCompCoord[1];
   double tmp5_ = tmp4_-mLocPTerInit_y;
   double tmp6_ = mLocGradY_x*(tmp5_);
   double tmp7_ = tmp3_+tmp6_;
   double tmp8_ = mCompCoord[2];
   double tmp9_ = tmp8_-mLocPTerInit_z;
   double tmp10_ = mLocGradZ_x*(tmp9_);
   double tmp11_ = tmp7_+tmp10_;
   double tmp12_ = (tmp11_)-mLocCentr_x;
   double tmp13_ = (tmp12_)/mLocAmpl;
   double tmp14_ = mLocGradX_y*(tmp1_);
   double tmp15_ = mLocProjInit_y+tmp14_;
   double tmp16_ = mLocGradY_y*(tmp5_);
   double tmp17_ = tmp15_+tmp16_;
   double tmp18_ = mLocGradZ_y*(tmp9_);
   double tmp19_ = tmp17_+tmp18_;
   double tmp20_ = (tmp19_)-mLocCentr_y;
   double tmp21_ = (tmp20_)/mLocAmpl;
   double tmp22_ = ElSquare(tmp13_);
   double tmp23_ = ElSquare(tmp21_);
   double tmp24_ = VCube(tmp13_);
   double tmp25_ = VCube(tmp21_);
   double tmp26_ = VPow4(tmp13_);
   double tmp27_ = VPow4(tmp21_);
   double tmp28_ = VPow5(tmp13_);
   double tmp29_ = VPow5(tmp21_);

  mVal[0] = tmp11_+mCompCoord[3]+mCompCoord[4]+mCompCoord[5]*(tmp13_)*(tmp21_)+mCompCoord[6]+mCompCoord[7]*(tmp13_)*(tmp21_)+mCompCoord[8]*tmp22_*tmp23_+mCompCoord[9]+mCompCoord[10]*(tmp13_)*(tmp21_)+mCompCoord[11]*tmp22_*tmp23_+mCompCoord[12]*tmp24_*tmp25_+mCompCoord[13]+mCompCoord[14]*(tmp13_)*(tmp21_)+mCompCoord[15]*tmp22_*tmp23_+mCompCoord[16]*tmp24_*tmp25_+mCompCoord[17]*tmp26_*tmp27_+mCompCoord[18]+mCompCoord[19]*(tmp13_)*(tmp21_)+mCompCoord[20]*tmp22_*tmp23_+mCompCoord[21]*tmp24_*tmp25_+mCompCoord[22]*tmp26_*tmp27_+mCompCoord[23]*tmp28_*tmp29_;

  mVal[1] = tmp19_+mCompCoord[24]+mCompCoord[25]+mCompCoord[26]*(tmp13_)*(tmp21_)+mCompCoord[27]+mCompCoord[28]*(tmp13_)*(tmp21_)+mCompCoord[29]*tmp22_*tmp23_+mCompCoord[30]+mCompCoord[31]*(tmp13_)*(tmp21_)+mCompCoord[32]*tmp22_*tmp23_+mCompCoord[33]*tmp24_*tmp25_+mCompCoord[34]+mCompCoord[35]*(tmp13_)*(tmp21_)+mCompCoord[36]*tmp22_*tmp23_+mCompCoord[37]*tmp24_*tmp25_+mCompCoord[38]*tmp26_*tmp27_+mCompCoord[39]+mCompCoord[40]*(tmp13_)*(tmp21_)+mCompCoord[41]*tmp22_*tmp23_+mCompCoord[42]*tmp24_*tmp25_+mCompCoord[43]*tmp26_*tmp27_+mCompCoord[44]*tmp28_*tmp29_;

}


void cGen2DBundleEgProj_Deg5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[0];
   double tmp1_ = tmp0_-mLocPTerInit_x;
   double tmp2_ = mLocGradX_x*(tmp1_);
   double tmp3_ = mLocProjInit_x+tmp2_;
   double tmp4_ = mCompCoord[1];
   double tmp5_ = tmp4_-mLocPTerInit_y;
   double tmp6_ = mLocGradY_x*(tmp5_);
   double tmp7_ = tmp3_+tmp6_;
   double tmp8_ = mCompCoord[2];
   double tmp9_ = tmp8_-mLocPTerInit_z;
   double tmp10_ = mLocGradZ_x*(tmp9_);
   double tmp11_ = tmp7_+tmp10_;
   double tmp12_ = (tmp11_)-mLocCentr_x;
   double tmp13_ = (tmp12_)/mLocAmpl;
   double tmp14_ = mLocGradX_y*(tmp1_);
   double tmp15_ = mLocProjInit_y+tmp14_;
   double tmp16_ = mLocGradY_y*(tmp5_);
   double tmp17_ = tmp15_+tmp16_;
   double tmp18_ = mLocGradZ_y*(tmp9_);
   double tmp19_ = tmp17_+tmp18_;
   double tmp20_ = (tmp19_)-mLocCentr_y;
   double tmp21_ = (tmp20_)/mLocAmpl;
   double tmp22_ = ElSquare(tmp13_);
   double tmp23_ = ElSquare(tmp21_);
   double tmp24_ = VCube(tmp13_);
   double tmp25_ = VCube(tmp21_);
   double tmp26_ = VPow4(tmp13_);
   double tmp27_ = VPow4(tmp21_);
   double tmp28_ = mCompCoord[5];
   double tmp29_ = ElSquare(mLocAmpl);
   double tmp30_ = tmp28_*(tmp13_);
   double tmp31_ = mLocGradX_x*mLocAmpl;
   double tmp32_ = (tmp31_)/tmp29_;
   double tmp33_ = mCompCoord[7];
   double tmp34_ = mLocGradX_y*mLocAmpl;
   double tmp35_ = (tmp34_)/tmp29_;
   double tmp36_ = tmp33_*(tmp13_);
   double tmp37_ = mCompCoord[8];
   double tmp38_ = tmp37_*tmp22_;
   double tmp39_ = mCompCoord[10];
   double tmp40_ = tmp39_*(tmp13_);
   double tmp41_ = 2*(tmp32_);
   double tmp42_ = tmp41_*(tmp13_);
   double tmp43_ = mCompCoord[11];
   double tmp44_ = 2*(tmp35_);
   double tmp45_ = tmp44_*(tmp21_);
   double tmp46_ = tmp43_*tmp22_;
   double tmp47_ = mCompCoord[12];
   double tmp48_ = tmp47_*tmp24_;
   double tmp49_ = mCompCoord[14];
   double tmp50_ = tmp49_*(tmp13_);
   double tmp51_ = mCompCoord[15];
   double tmp52_ = tmp51_*tmp22_;
   double tmp53_ = 3*(tmp32_);
   double tmp54_ = tmp53_*tmp22_;
   double tmp55_ = mCompCoord[16];
   double tmp56_ = 3*(tmp35_);
   double tmp57_ = tmp56_*tmp23_;
   double tmp58_ = tmp55_*tmp24_;
   double tmp59_ = mCompCoord[17];
   double tmp60_ = tmp59_*tmp26_;
   double tmp61_ = mCompCoord[19];
   double tmp62_ = tmp61_*(tmp13_);
   double tmp63_ = mCompCoord[20];
   double tmp64_ = tmp63_*tmp22_;
   double tmp65_ = mCompCoord[21];
   double tmp66_ = tmp65_*tmp24_;
   double tmp67_ = 4*(tmp32_);
   double tmp68_ = tmp67_*tmp24_;
   double tmp69_ = mCompCoord[22];
   double tmp70_ = 4*(tmp35_);
   double tmp71_ = tmp70_*tmp25_;
   double tmp72_ = tmp69_*tmp26_;
   double tmp73_ = mCompCoord[23];
   double tmp74_ = VPow5(tmp21_);
   double tmp75_ = VPow5(tmp13_);
   double tmp76_ = tmp73_*tmp75_;
   double tmp77_ = mLocGradY_x*mLocAmpl;
   double tmp78_ = (tmp77_)/tmp29_;
   double tmp79_ = mLocGradY_y*mLocAmpl;
   double tmp80_ = (tmp79_)/tmp29_;
   double tmp81_ = 2*(tmp78_);
   double tmp82_ = tmp81_*(tmp13_);
   double tmp83_ = 2*(tmp80_);
   double tmp84_ = tmp83_*(tmp21_);
   double tmp85_ = 3*(tmp78_);
   double tmp86_ = tmp85_*tmp22_;
   double tmp87_ = 3*(tmp80_);
   double tmp88_ = tmp87_*tmp23_;
   double tmp89_ = 4*(tmp78_);
   double tmp90_ = tmp89_*tmp24_;
   double tmp91_ = 4*(tmp80_);
   double tmp92_ = tmp91_*tmp25_;
   double tmp93_ = mLocGradZ_x*mLocAmpl;
   double tmp94_ = (tmp93_)/tmp29_;
   double tmp95_ = mLocGradZ_y*mLocAmpl;
   double tmp96_ = (tmp95_)/tmp29_;
   double tmp97_ = 2*(tmp94_);
   double tmp98_ = tmp97_*(tmp13_);
   double tmp99_ = 2*(tmp96_);
   double tmp100_ = tmp99_*(tmp21_);
   double tmp101_ = 3*(tmp94_);
   double tmp102_ = tmp101_*tmp22_;
   double tmp103_ = 3*(tmp96_);
   double tmp104_ = tmp103_*tmp23_;
   double tmp105_ = 4*(tmp94_);
   double tmp106_ = tmp105_*tmp24_;
   double tmp107_ = 4*(tmp96_);
   double tmp108_ = tmp107_*tmp25_;
   double tmp109_ = (tmp13_)*(tmp21_);
   double tmp110_ = tmp22_*tmp23_;
   double tmp111_ = tmp24_*tmp25_;
   double tmp112_ = tmp26_*tmp27_;
   double tmp113_ = mCompCoord[26];
   double tmp114_ = tmp113_*(tmp13_);
   double tmp115_ = mCompCoord[28];
   double tmp116_ = tmp115_*(tmp13_);
   double tmp117_ = mCompCoord[29];
   double tmp118_ = tmp117_*tmp22_;
   double tmp119_ = mCompCoord[31];
   double tmp120_ = tmp119_*(tmp13_);
   double tmp121_ = mCompCoord[32];
   double tmp122_ = tmp121_*tmp22_;
   double tmp123_ = mCompCoord[33];
   double tmp124_ = tmp123_*tmp24_;
   double tmp125_ = mCompCoord[35];
   double tmp126_ = tmp125_*(tmp13_);
   double tmp127_ = mCompCoord[36];
   double tmp128_ = tmp127_*tmp22_;
   double tmp129_ = mCompCoord[37];
   double tmp130_ = tmp129_*tmp24_;
   double tmp131_ = mCompCoord[38];
   double tmp132_ = tmp131_*tmp26_;
   double tmp133_ = mCompCoord[40];
   double tmp134_ = tmp133_*(tmp13_);
   double tmp135_ = mCompCoord[41];
   double tmp136_ = tmp135_*tmp22_;
   double tmp137_ = mCompCoord[42];
   double tmp138_ = tmp137_*tmp24_;
   double tmp139_ = mCompCoord[43];
   double tmp140_ = tmp139_*tmp26_;
   double tmp141_ = 5*(tmp32_);
   double tmp142_ = tmp141_*tmp26_;
   double tmp143_ = mCompCoord[44];
   double tmp144_ = 5*(tmp35_);
   double tmp145_ = tmp144_*tmp27_;
   double tmp146_ = tmp143_*tmp75_;
   double tmp147_ = 5*(tmp78_);
   double tmp148_ = tmp147_*tmp26_;
   double tmp149_ = 5*(tmp80_);
   double tmp150_ = tmp149_*tmp27_;
   double tmp151_ = 5*(tmp94_);
   double tmp152_ = tmp151_*tmp26_;
   double tmp153_ = 5*(tmp96_);
   double tmp154_ = tmp153_*tmp27_;
   double tmp155_ = tmp75_*tmp74_;

  mVal[0] = tmp11_+mCompCoord[3]+mCompCoord[4]+tmp30_*(tmp21_)+mCompCoord[6]+tmp36_*(tmp21_)+tmp38_*tmp23_+mCompCoord[9]+tmp40_*(tmp21_)+tmp46_*tmp23_+tmp48_*tmp25_+mCompCoord[13]+tmp50_*(tmp21_)+tmp52_*tmp23_+tmp58_*tmp25_+tmp60_*tmp27_+mCompCoord[18]+tmp62_*(tmp21_)+tmp64_*tmp23_+tmp66_*tmp25_+tmp72_*tmp27_+tmp76_*tmp74_;

  mCompDer[0][0] = mLocGradX_x+(tmp32_)*tmp28_*(tmp21_)+(tmp35_)*tmp30_+(tmp32_)*tmp33_*(tmp21_)+(tmp35_)*tmp36_+tmp42_*tmp37_*tmp23_+tmp45_*tmp38_+(tmp32_)*tmp39_*(tmp21_)+(tmp35_)*tmp40_+tmp42_*tmp43_*tmp23_+tmp45_*tmp46_+tmp54_*tmp47_*tmp25_+tmp57_*tmp48_+(tmp32_)*tmp49_*(tmp21_)+(tmp35_)*tmp50_+tmp42_*tmp51_*tmp23_+tmp45_*tmp52_+tmp54_*tmp55_*tmp25_+tmp57_*tmp58_+tmp68_*tmp59_*tmp27_+tmp71_*tmp60_+(tmp32_)*tmp61_*(tmp21_)+(tmp35_)*tmp62_+tmp42_*tmp63_*tmp23_+tmp45_*tmp64_+tmp54_*tmp65_*tmp25_+tmp57_*tmp66_+tmp68_*tmp69_*tmp27_+tmp71_*tmp72_+tmp142_*tmp73_*tmp74_+tmp145_*tmp76_;
  mCompDer[0][1] = mLocGradY_x+(tmp78_)*tmp28_*(tmp21_)+(tmp80_)*tmp30_+(tmp78_)*tmp33_*(tmp21_)+(tmp80_)*tmp36_+tmp82_*tmp37_*tmp23_+tmp84_*tmp38_+(tmp78_)*tmp39_*(tmp21_)+(tmp80_)*tmp40_+tmp82_*tmp43_*tmp23_+tmp84_*tmp46_+tmp86_*tmp47_*tmp25_+tmp88_*tmp48_+(tmp78_)*tmp49_*(tmp21_)+(tmp80_)*tmp50_+tmp82_*tmp51_*tmp23_+tmp84_*tmp52_+tmp86_*tmp55_*tmp25_+tmp88_*tmp58_+tmp90_*tmp59_*tmp27_+tmp92_*tmp60_+(tmp78_)*tmp61_*(tmp21_)+(tmp80_)*tmp62_+tmp82_*tmp63_*tmp23_+tmp84_*tmp64_+tmp86_*tmp65_*tmp25_+tmp88_*tmp66_+tmp90_*tmp69_*tmp27_+tmp92_*tmp72_+tmp148_*tmp73_*tmp74_+tmp150_*tmp76_;
  mCompDer[0][2] = mLocGradZ_x+(tmp94_)*tmp28_*(tmp21_)+(tmp96_)*tmp30_+(tmp94_)*tmp33_*(tmp21_)+(tmp96_)*tmp36_+tmp98_*tmp37_*tmp23_+tmp100_*tmp38_+(tmp94_)*tmp39_*(tmp21_)+(tmp96_)*tmp40_+tmp98_*tmp43_*tmp23_+tmp100_*tmp46_+tmp102_*tmp47_*tmp25_+tmp104_*tmp48_+(tmp94_)*tmp49_*(tmp21_)+(tmp96_)*tmp50_+tmp98_*tmp51_*tmp23_+tmp100_*tmp52_+tmp102_*tmp55_*tmp25_+tmp104_*tmp58_+tmp106_*tmp59_*tmp27_+tmp108_*tmp60_+(tmp94_)*tmp61_*(tmp21_)+(tmp96_)*tmp62_+tmp98_*tmp63_*tmp23_+tmp100_*tmp64_+tmp102_*tmp65_*tmp25_+tmp104_*tmp66_+tmp106_*tmp69_*tmp27_+tmp108_*tmp72_+tmp152_*tmp73_*tmp74_+tmp154_*tmp76_;
  mCompDer[0][3] = 1;
  mCompDer[0][4] = 1;
  mCompDer[0][5] = tmp109_;
  mCompDer[0][6] = 1;
  mCompDer[0][7] = tmp109_;
  mCompDer[0][8] = tmp110_;
  mCompDer[0][9] = 1;
  mCompDer[0][10] = tmp109_;
  mCompDer[0][11] = tmp110_;
  mCompDer[0][12] = tmp111_;
  mCompDer[0][13] = 1;
  mCompDer[0][14] = tmp109_;
  mCompDer[0][15] = tmp110_;
  mCompDer[0][16] = tmp111_;
  mCompDer[0][17] = tmp112_;
  mCompDer[0][18] = 1;
  mCompDer[0][19] = tmp109_;
  mCompDer[0][20] = tmp110_;
  mCompDer[0][21] = tmp111_;
  mCompDer[0][22] = tmp112_;
  mCompDer[0][23] = tmp155_;
  mCompDer[0][24] = 0;
  mCompDer[0][25] = 0;
  mCompDer[0][26] = 0;
  mCompDer[0][27] = 0;
  mCompDer[0][28] = 0;
  mCompDer[0][29] = 0;
  mCompDer[0][30] = 0;
  mCompDer[0][31] = 0;
  mCompDer[0][32] = 0;
  mCompDer[0][33] = 0;
  mCompDer[0][34] = 0;
  mCompDer[0][35] = 0;
  mCompDer[0][36] = 0;
  mCompDer[0][37] = 0;
  mCompDer[0][38] = 0;
  mCompDer[0][39] = 0;
  mCompDer[0][40] = 0;
  mCompDer[0][41] = 0;
  mCompDer[0][42] = 0;
  mCompDer[0][43] = 0;
  mCompDer[0][44] = 0;
  mVal[1] = tmp19_+mCompCoord[24]+mCompCoord[25]+tmp114_*(tmp21_)+mCompCoord[27]+tmp116_*(tmp21_)+tmp118_*tmp23_+mCompCoord[30]+tmp120_*(tmp21_)+tmp122_*tmp23_+tmp124_*tmp25_+mCompCoord[34]+tmp126_*(tmp21_)+tmp128_*tmp23_+tmp130_*tmp25_+tmp132_*tmp27_+mCompCoord[39]+tmp134_*(tmp21_)+tmp136_*tmp23_+tmp138_*tmp25_+tmp140_*tmp27_+tmp146_*tmp74_;

  mCompDer[1][0] = mLocGradX_y+(tmp32_)*tmp113_*(tmp21_)+(tmp35_)*tmp114_+(tmp32_)*tmp115_*(tmp21_)+(tmp35_)*tmp116_+tmp42_*tmp117_*tmp23_+tmp45_*tmp118_+(tmp32_)*tmp119_*(tmp21_)+(tmp35_)*tmp120_+tmp42_*tmp121_*tmp23_+tmp45_*tmp122_+tmp54_*tmp123_*tmp25_+tmp57_*tmp124_+(tmp32_)*tmp125_*(tmp21_)+(tmp35_)*tmp126_+tmp42_*tmp127_*tmp23_+tmp45_*tmp128_+tmp54_*tmp129_*tmp25_+tmp57_*tmp130_+tmp68_*tmp131_*tmp27_+tmp71_*tmp132_+(tmp32_)*tmp133_*(tmp21_)+(tmp35_)*tmp134_+tmp42_*tmp135_*tmp23_+tmp45_*tmp136_+tmp54_*tmp137_*tmp25_+tmp57_*tmp138_+tmp68_*tmp139_*tmp27_+tmp71_*tmp140_+tmp142_*tmp143_*tmp74_+tmp145_*tmp146_;
  mCompDer[1][1] = mLocGradY_y+(tmp78_)*tmp113_*(tmp21_)+(tmp80_)*tmp114_+(tmp78_)*tmp115_*(tmp21_)+(tmp80_)*tmp116_+tmp82_*tmp117_*tmp23_+tmp84_*tmp118_+(tmp78_)*tmp119_*(tmp21_)+(tmp80_)*tmp120_+tmp82_*tmp121_*tmp23_+tmp84_*tmp122_+tmp86_*tmp123_*tmp25_+tmp88_*tmp124_+(tmp78_)*tmp125_*(tmp21_)+(tmp80_)*tmp126_+tmp82_*tmp127_*tmp23_+tmp84_*tmp128_+tmp86_*tmp129_*tmp25_+tmp88_*tmp130_+tmp90_*tmp131_*tmp27_+tmp92_*tmp132_+(tmp78_)*tmp133_*(tmp21_)+(tmp80_)*tmp134_+tmp82_*tmp135_*tmp23_+tmp84_*tmp136_+tmp86_*tmp137_*tmp25_+tmp88_*tmp138_+tmp90_*tmp139_*tmp27_+tmp92_*tmp140_+tmp148_*tmp143_*tmp74_+tmp150_*tmp146_;
  mCompDer[1][2] = mLocGradZ_y+(tmp94_)*tmp113_*(tmp21_)+(tmp96_)*tmp114_+(tmp94_)*tmp115_*(tmp21_)+(tmp96_)*tmp116_+tmp98_*tmp117_*tmp23_+tmp100_*tmp118_+(tmp94_)*tmp119_*(tmp21_)+(tmp96_)*tmp120_+tmp98_*tmp121_*tmp23_+tmp100_*tmp122_+tmp102_*tmp123_*tmp25_+tmp104_*tmp124_+(tmp94_)*tmp125_*(tmp21_)+(tmp96_)*tmp126_+tmp98_*tmp127_*tmp23_+tmp100_*tmp128_+tmp102_*tmp129_*tmp25_+tmp104_*tmp130_+tmp106_*tmp131_*tmp27_+tmp108_*tmp132_+(tmp94_)*tmp133_*(tmp21_)+(tmp96_)*tmp134_+tmp98_*tmp135_*tmp23_+tmp100_*tmp136_+tmp102_*tmp137_*tmp25_+tmp104_*tmp138_+tmp106_*tmp139_*tmp27_+tmp108_*tmp140_+tmp152_*tmp143_*tmp74_+tmp154_*tmp146_;
  mCompDer[1][3] = 0;
  mCompDer[1][4] = 0;
  mCompDer[1][5] = 0;
  mCompDer[1][6] = 0;
  mCompDer[1][7] = 0;
  mCompDer[1][8] = 0;
  mCompDer[1][9] = 0;
  mCompDer[1][10] = 0;
  mCompDer[1][11] = 0;
  mCompDer[1][12] = 0;
  mCompDer[1][13] = 0;
  mCompDer[1][14] = 0;
  mCompDer[1][15] = 0;
  mCompDer[1][16] = 0;
  mCompDer[1][17] = 0;
  mCompDer[1][18] = 0;
  mCompDer[1][19] = 0;
  mCompDer[1][20] = 0;
  mCompDer[1][21] = 0;
  mCompDer[1][22] = 0;
  mCompDer[1][23] = 0;
  mCompDer[1][24] = 1;
  mCompDer[1][25] = 1;
  mCompDer[1][26] = tmp109_;
  mCompDer[1][27] = 1;
  mCompDer[1][28] = tmp109_;
  mCompDer[1][29] = tmp110_;
  mCompDer[1][30] = 1;
  mCompDer[1][31] = tmp109_;
  mCompDer[1][32] = tmp110_;
  mCompDer[1][33] = tmp111_;
  mCompDer[1][34] = 1;
  mCompDer[1][35] = tmp109_;
  mCompDer[1][36] = tmp110_;
  mCompDer[1][37] = tmp111_;
  mCompDer[1][38] = tmp112_;
  mCompDer[1][39] = 1;
  mCompDer[1][40] = tmp109_;
  mCompDer[1][41] = tmp110_;
  mCompDer[1][42] = tmp111_;
  mCompDer[1][43] = tmp112_;
  mCompDer[1][44] = tmp155_;
}


void cGen2DBundleEgProj_Deg5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cGen2DBundleEgProj_Deg5 Has no Der Sec");
}

void cGen2DBundleEgProj_Deg5::SetAmpl(double aVal){ mLocAmpl = aVal;}
void cGen2DBundleEgProj_Deg5::SetCentr_x(double aVal){ mLocCentr_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetCentr_y(double aVal){ mLocCentr_y = aVal;}
void cGen2DBundleEgProj_Deg5::SetGradX_x(double aVal){ mLocGradX_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetGradX_y(double aVal){ mLocGradX_y = aVal;}
void cGen2DBundleEgProj_Deg5::SetGradY_x(double aVal){ mLocGradY_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetGradY_y(double aVal){ mLocGradY_y = aVal;}
void cGen2DBundleEgProj_Deg5::SetGradZ_x(double aVal){ mLocGradZ_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetGradZ_y(double aVal){ mLocGradZ_y = aVal;}
void cGen2DBundleEgProj_Deg5::SetPTerInit_x(double aVal){ mLocPTerInit_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetPTerInit_y(double aVal){ mLocPTerInit_y = aVal;}
void cGen2DBundleEgProj_Deg5::SetPTerInit_z(double aVal){ mLocPTerInit_z = aVal;}
void cGen2DBundleEgProj_Deg5::SetProjInit_x(double aVal){ mLocProjInit_x = aVal;}
void cGen2DBundleEgProj_Deg5::SetProjInit_y(double aVal){ mLocProjInit_y = aVal;}



double * cGen2DBundleEgProj_Deg5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Ampl") return & mLocAmpl;
   if (aName == "Centr_x") return & mLocCentr_x;
   if (aName == "Centr_y") return & mLocCentr_y;
   if (aName == "GradX_x") return & mLocGradX_x;
   if (aName == "GradX_y") return & mLocGradX_y;
   if (aName == "GradY_x") return & mLocGradY_x;
   if (aName == "GradY_y") return & mLocGradY_y;
   if (aName == "GradZ_x") return & mLocGradZ_x;
   if (aName == "GradZ_y") return & mLocGradZ_y;
   if (aName == "PTerInit_x") return & mLocPTerInit_x;
   if (aName == "PTerInit_y") return & mLocPTerInit_y;
   if (aName == "PTerInit_z") return & mLocPTerInit_z;
   if (aName == "ProjInit_x") return & mLocProjInit_x;
   if (aName == "ProjInit_y") return & mLocProjInit_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cGen2DBundleEgProj_Deg5::mTheAuto("cGen2DBundleEgProj_Deg5",cGen2DBundleEgProj_Deg5::Alloc);


cElCompiledFonc *  cGen2DBundleEgProj_Deg5::Alloc()
{  return new cGen2DBundleEgProj_Deg5();
}


