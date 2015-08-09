// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cGen2DBundleEgProj_Deg7.h"


cGen2DBundleEgProj_Deg7::cGen2DBundleEgProj_Deg7():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("CX",3,39));
   AddIntRef (cIncIntervale("CY",39,75));
   AddIntRef (cIncIntervale("Tmp_PTer",0,3));
   Close(false);
}



void cGen2DBundleEgProj_Deg7::ComputeVal()
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
   double tmp30_ = VPow6(tmp13_);
   double tmp31_ = VPow6(tmp21_);
   double tmp32_ = VPow7(tmp13_);
   double tmp33_ = VPow7(tmp21_);

  mVal[0] = tmp11_+mCompCoord[3]+mCompCoord[4]+mCompCoord[5]*(tmp13_)*(tmp21_)+mCompCoord[6]+mCompCoord[7]*(tmp13_)*(tmp21_)+mCompCoord[8]*tmp22_*tmp23_+mCompCoord[9]+mCompCoord[10]*(tmp13_)*(tmp21_)+mCompCoord[11]*tmp22_*tmp23_+mCompCoord[12]*tmp24_*tmp25_+mCompCoord[13]+mCompCoord[14]*(tmp13_)*(tmp21_)+mCompCoord[15]*tmp22_*tmp23_+mCompCoord[16]*tmp24_*tmp25_+mCompCoord[17]*tmp26_*tmp27_+mCompCoord[18]+mCompCoord[19]*(tmp13_)*(tmp21_)+mCompCoord[20]*tmp22_*tmp23_+mCompCoord[21]*tmp24_*tmp25_+mCompCoord[22]*tmp26_*tmp27_+mCompCoord[23]*tmp28_*tmp29_+mCompCoord[24]+mCompCoord[25]*(tmp13_)*(tmp21_)+mCompCoord[26]*tmp22_*tmp23_+mCompCoord[27]*tmp24_*tmp25_+mCompCoord[28]*tmp26_*tmp27_+mCompCoord[29]*tmp28_*tmp29_+mCompCoord[30]*tmp30_*tmp31_+mCompCoord[31]+mCompCoord[32]*(tmp13_)*(tmp21_)+mCompCoord[33]*tmp22_*tmp23_+mCompCoord[34]*tmp24_*tmp25_+mCompCoord[35]*tmp26_*tmp27_+mCompCoord[36]*tmp28_*tmp29_+mCompCoord[37]*tmp30_*tmp31_+mCompCoord[38]*tmp32_*tmp33_;

  mVal[1] = tmp19_+mCompCoord[39]+mCompCoord[40]+mCompCoord[41]*(tmp13_)*(tmp21_)+mCompCoord[42]+mCompCoord[43]*(tmp13_)*(tmp21_)+mCompCoord[44]*tmp22_*tmp23_+mCompCoord[45]+mCompCoord[46]*(tmp13_)*(tmp21_)+mCompCoord[47]*tmp22_*tmp23_+mCompCoord[48]*tmp24_*tmp25_+mCompCoord[49]+mCompCoord[50]*(tmp13_)*(tmp21_)+mCompCoord[51]*tmp22_*tmp23_+mCompCoord[52]*tmp24_*tmp25_+mCompCoord[53]*tmp26_*tmp27_+mCompCoord[54]+mCompCoord[55]*(tmp13_)*(tmp21_)+mCompCoord[56]*tmp22_*tmp23_+mCompCoord[57]*tmp24_*tmp25_+mCompCoord[58]*tmp26_*tmp27_+mCompCoord[59]*tmp28_*tmp29_+mCompCoord[60]+mCompCoord[61]*(tmp13_)*(tmp21_)+mCompCoord[62]*tmp22_*tmp23_+mCompCoord[63]*tmp24_*tmp25_+mCompCoord[64]*tmp26_*tmp27_+mCompCoord[65]*tmp28_*tmp29_+mCompCoord[66]*tmp30_*tmp31_+mCompCoord[67]+mCompCoord[68]*(tmp13_)*(tmp21_)+mCompCoord[69]*tmp22_*tmp23_+mCompCoord[70]*tmp24_*tmp25_+mCompCoord[71]*tmp26_*tmp27_+mCompCoord[72]*tmp28_*tmp29_+mCompCoord[73]*tmp30_*tmp31_+mCompCoord[74]*tmp32_*tmp33_;

}


void cGen2DBundleEgProj_Deg7::ComputeValDeriv()
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
   double tmp30_ = VPow6(tmp13_);
   double tmp31_ = VPow6(tmp21_);
   double tmp32_ = mCompCoord[5];
   double tmp33_ = ElSquare(mLocAmpl);
   double tmp34_ = tmp32_*(tmp13_);
   double tmp35_ = mLocGradX_x*mLocAmpl;
   double tmp36_ = (tmp35_)/tmp33_;
   double tmp37_ = mCompCoord[7];
   double tmp38_ = mLocGradX_y*mLocAmpl;
   double tmp39_ = (tmp38_)/tmp33_;
   double tmp40_ = tmp37_*(tmp13_);
   double tmp41_ = mCompCoord[8];
   double tmp42_ = tmp41_*tmp22_;
   double tmp43_ = mCompCoord[10];
   double tmp44_ = tmp43_*(tmp13_);
   double tmp45_ = 2*(tmp36_);
   double tmp46_ = tmp45_*(tmp13_);
   double tmp47_ = mCompCoord[11];
   double tmp48_ = 2*(tmp39_);
   double tmp49_ = tmp48_*(tmp21_);
   double tmp50_ = tmp47_*tmp22_;
   double tmp51_ = mCompCoord[12];
   double tmp52_ = tmp51_*tmp24_;
   double tmp53_ = mCompCoord[14];
   double tmp54_ = tmp53_*(tmp13_);
   double tmp55_ = mCompCoord[15];
   double tmp56_ = tmp55_*tmp22_;
   double tmp57_ = 3*(tmp36_);
   double tmp58_ = tmp57_*tmp22_;
   double tmp59_ = mCompCoord[16];
   double tmp60_ = 3*(tmp39_);
   double tmp61_ = tmp60_*tmp23_;
   double tmp62_ = tmp59_*tmp24_;
   double tmp63_ = mCompCoord[17];
   double tmp64_ = tmp63_*tmp26_;
   double tmp65_ = mCompCoord[19];
   double tmp66_ = tmp65_*(tmp13_);
   double tmp67_ = mCompCoord[20];
   double tmp68_ = tmp67_*tmp22_;
   double tmp69_ = mCompCoord[21];
   double tmp70_ = tmp69_*tmp24_;
   double tmp71_ = 4*(tmp36_);
   double tmp72_ = tmp71_*tmp24_;
   double tmp73_ = mCompCoord[22];
   double tmp74_ = 4*(tmp39_);
   double tmp75_ = tmp74_*tmp25_;
   double tmp76_ = tmp73_*tmp26_;
   double tmp77_ = mCompCoord[23];
   double tmp78_ = tmp77_*tmp28_;
   double tmp79_ = mCompCoord[25];
   double tmp80_ = tmp79_*(tmp13_);
   double tmp81_ = mCompCoord[26];
   double tmp82_ = tmp81_*tmp22_;
   double tmp83_ = mCompCoord[27];
   double tmp84_ = tmp83_*tmp24_;
   double tmp85_ = mCompCoord[28];
   double tmp86_ = tmp85_*tmp26_;
   double tmp87_ = 5*(tmp36_);
   double tmp88_ = tmp87_*tmp26_;
   double tmp89_ = mCompCoord[29];
   double tmp90_ = 5*(tmp39_);
   double tmp91_ = tmp90_*tmp27_;
   double tmp92_ = tmp89_*tmp28_;
   double tmp93_ = mCompCoord[30];
   double tmp94_ = tmp93_*tmp30_;
   double tmp95_ = mCompCoord[32];
   double tmp96_ = tmp95_*(tmp13_);
   double tmp97_ = mCompCoord[33];
   double tmp98_ = tmp97_*tmp22_;
   double tmp99_ = mCompCoord[34];
   double tmp100_ = tmp99_*tmp24_;
   double tmp101_ = mCompCoord[35];
   double tmp102_ = tmp101_*tmp26_;
   double tmp103_ = mCompCoord[36];
   double tmp104_ = tmp103_*tmp28_;
   double tmp105_ = 6*(tmp36_);
   double tmp106_ = tmp105_*tmp28_;
   double tmp107_ = mCompCoord[37];
   double tmp108_ = 6*(tmp39_);
   double tmp109_ = tmp108_*tmp29_;
   double tmp110_ = tmp107_*tmp30_;
   double tmp111_ = mCompCoord[38];
   double tmp112_ = VPow7(tmp21_);
   double tmp113_ = VPow7(tmp13_);
   double tmp114_ = tmp111_*tmp113_;
   double tmp115_ = mLocGradY_x*mLocAmpl;
   double tmp116_ = (tmp115_)/tmp33_;
   double tmp117_ = mLocGradY_y*mLocAmpl;
   double tmp118_ = (tmp117_)/tmp33_;
   double tmp119_ = 2*(tmp116_);
   double tmp120_ = tmp119_*(tmp13_);
   double tmp121_ = 2*(tmp118_);
   double tmp122_ = tmp121_*(tmp21_);
   double tmp123_ = 3*(tmp116_);
   double tmp124_ = tmp123_*tmp22_;
   double tmp125_ = 3*(tmp118_);
   double tmp126_ = tmp125_*tmp23_;
   double tmp127_ = 4*(tmp116_);
   double tmp128_ = tmp127_*tmp24_;
   double tmp129_ = 4*(tmp118_);
   double tmp130_ = tmp129_*tmp25_;
   double tmp131_ = 5*(tmp116_);
   double tmp132_ = tmp131_*tmp26_;
   double tmp133_ = 5*(tmp118_);
   double tmp134_ = tmp133_*tmp27_;
   double tmp135_ = 6*(tmp116_);
   double tmp136_ = tmp135_*tmp28_;
   double tmp137_ = 6*(tmp118_);
   double tmp138_ = tmp137_*tmp29_;
   double tmp139_ = mLocGradZ_x*mLocAmpl;
   double tmp140_ = (tmp139_)/tmp33_;
   double tmp141_ = mLocGradZ_y*mLocAmpl;
   double tmp142_ = (tmp141_)/tmp33_;
   double tmp143_ = 2*(tmp140_);
   double tmp144_ = tmp143_*(tmp13_);
   double tmp145_ = 2*(tmp142_);
   double tmp146_ = tmp145_*(tmp21_);
   double tmp147_ = 3*(tmp140_);
   double tmp148_ = tmp147_*tmp22_;
   double tmp149_ = 3*(tmp142_);
   double tmp150_ = tmp149_*tmp23_;
   double tmp151_ = 4*(tmp140_);
   double tmp152_ = tmp151_*tmp24_;
   double tmp153_ = 4*(tmp142_);
   double tmp154_ = tmp153_*tmp25_;
   double tmp155_ = 5*(tmp140_);
   double tmp156_ = tmp155_*tmp26_;
   double tmp157_ = 5*(tmp142_);
   double tmp158_ = tmp157_*tmp27_;
   double tmp159_ = 6*(tmp140_);
   double tmp160_ = tmp159_*tmp28_;
   double tmp161_ = 6*(tmp142_);
   double tmp162_ = tmp161_*tmp29_;
   double tmp163_ = (tmp13_)*(tmp21_);
   double tmp164_ = tmp22_*tmp23_;
   double tmp165_ = tmp24_*tmp25_;
   double tmp166_ = tmp26_*tmp27_;
   double tmp167_ = tmp28_*tmp29_;
   double tmp168_ = tmp30_*tmp31_;
   double tmp169_ = mCompCoord[41];
   double tmp170_ = tmp169_*(tmp13_);
   double tmp171_ = mCompCoord[43];
   double tmp172_ = tmp171_*(tmp13_);
   double tmp173_ = mCompCoord[44];
   double tmp174_ = tmp173_*tmp22_;
   double tmp175_ = mCompCoord[46];
   double tmp176_ = tmp175_*(tmp13_);
   double tmp177_ = mCompCoord[47];
   double tmp178_ = tmp177_*tmp22_;
   double tmp179_ = mCompCoord[48];
   double tmp180_ = tmp179_*tmp24_;
   double tmp181_ = mCompCoord[50];
   double tmp182_ = tmp181_*(tmp13_);
   double tmp183_ = mCompCoord[51];
   double tmp184_ = tmp183_*tmp22_;
   double tmp185_ = mCompCoord[52];
   double tmp186_ = tmp185_*tmp24_;
   double tmp187_ = mCompCoord[53];
   double tmp188_ = tmp187_*tmp26_;
   double tmp189_ = mCompCoord[55];
   double tmp190_ = tmp189_*(tmp13_);
   double tmp191_ = mCompCoord[56];
   double tmp192_ = tmp191_*tmp22_;
   double tmp193_ = mCompCoord[57];
   double tmp194_ = tmp193_*tmp24_;
   double tmp195_ = mCompCoord[58];
   double tmp196_ = tmp195_*tmp26_;
   double tmp197_ = mCompCoord[59];
   double tmp198_ = tmp197_*tmp28_;
   double tmp199_ = mCompCoord[61];
   double tmp200_ = tmp199_*(tmp13_);
   double tmp201_ = mCompCoord[62];
   double tmp202_ = tmp201_*tmp22_;
   double tmp203_ = mCompCoord[63];
   double tmp204_ = tmp203_*tmp24_;
   double tmp205_ = mCompCoord[64];
   double tmp206_ = tmp205_*tmp26_;
   double tmp207_ = mCompCoord[65];
   double tmp208_ = tmp207_*tmp28_;
   double tmp209_ = mCompCoord[66];
   double tmp210_ = tmp209_*tmp30_;
   double tmp211_ = mCompCoord[68];
   double tmp212_ = tmp211_*(tmp13_);
   double tmp213_ = mCompCoord[69];
   double tmp214_ = tmp213_*tmp22_;
   double tmp215_ = mCompCoord[70];
   double tmp216_ = tmp215_*tmp24_;
   double tmp217_ = mCompCoord[71];
   double tmp218_ = tmp217_*tmp26_;
   double tmp219_ = mCompCoord[72];
   double tmp220_ = tmp219_*tmp28_;
   double tmp221_ = mCompCoord[73];
   double tmp222_ = tmp221_*tmp30_;
   double tmp223_ = 7*(tmp36_);
   double tmp224_ = tmp223_*tmp30_;
   double tmp225_ = mCompCoord[74];
   double tmp226_ = 7*(tmp39_);
   double tmp227_ = tmp226_*tmp31_;
   double tmp228_ = tmp225_*tmp113_;
   double tmp229_ = 7*(tmp116_);
   double tmp230_ = tmp229_*tmp30_;
   double tmp231_ = 7*(tmp118_);
   double tmp232_ = tmp231_*tmp31_;
   double tmp233_ = 7*(tmp140_);
   double tmp234_ = tmp233_*tmp30_;
   double tmp235_ = 7*(tmp142_);
   double tmp236_ = tmp235_*tmp31_;
   double tmp237_ = tmp113_*tmp112_;

  mVal[0] = tmp11_+mCompCoord[3]+mCompCoord[4]+tmp34_*(tmp21_)+mCompCoord[6]+tmp40_*(tmp21_)+tmp42_*tmp23_+mCompCoord[9]+tmp44_*(tmp21_)+tmp50_*tmp23_+tmp52_*tmp25_+mCompCoord[13]+tmp54_*(tmp21_)+tmp56_*tmp23_+tmp62_*tmp25_+tmp64_*tmp27_+mCompCoord[18]+tmp66_*(tmp21_)+tmp68_*tmp23_+tmp70_*tmp25_+tmp76_*tmp27_+tmp78_*tmp29_+mCompCoord[24]+tmp80_*(tmp21_)+tmp82_*tmp23_+tmp84_*tmp25_+tmp86_*tmp27_+tmp92_*tmp29_+tmp94_*tmp31_+mCompCoord[31]+tmp96_*(tmp21_)+tmp98_*tmp23_+tmp100_*tmp25_+tmp102_*tmp27_+tmp104_*tmp29_+tmp110_*tmp31_+tmp114_*tmp112_;

  mCompDer[0][0] = mLocGradX_x+(tmp36_)*tmp32_*(tmp21_)+(tmp39_)*tmp34_+(tmp36_)*tmp37_*(tmp21_)+(tmp39_)*tmp40_+tmp46_*tmp41_*tmp23_+tmp49_*tmp42_+(tmp36_)*tmp43_*(tmp21_)+(tmp39_)*tmp44_+tmp46_*tmp47_*tmp23_+tmp49_*tmp50_+tmp58_*tmp51_*tmp25_+tmp61_*tmp52_+(tmp36_)*tmp53_*(tmp21_)+(tmp39_)*tmp54_+tmp46_*tmp55_*tmp23_+tmp49_*tmp56_+tmp58_*tmp59_*tmp25_+tmp61_*tmp62_+tmp72_*tmp63_*tmp27_+tmp75_*tmp64_+(tmp36_)*tmp65_*(tmp21_)+(tmp39_)*tmp66_+tmp46_*tmp67_*tmp23_+tmp49_*tmp68_+tmp58_*tmp69_*tmp25_+tmp61_*tmp70_+tmp72_*tmp73_*tmp27_+tmp75_*tmp76_+tmp88_*tmp77_*tmp29_+tmp91_*tmp78_+(tmp36_)*tmp79_*(tmp21_)+(tmp39_)*tmp80_+tmp46_*tmp81_*tmp23_+tmp49_*tmp82_+tmp58_*tmp83_*tmp25_+tmp61_*tmp84_+tmp72_*tmp85_*tmp27_+tmp75_*tmp86_+tmp88_*tmp89_*tmp29_+tmp91_*tmp92_+tmp106_*tmp93_*tmp31_+tmp109_*tmp94_+(tmp36_)*tmp95_*(tmp21_)+(tmp39_)*tmp96_+tmp46_*tmp97_*tmp23_+tmp49_*tmp98_+tmp58_*tmp99_*tmp25_+tmp61_*tmp100_+tmp72_*tmp101_*tmp27_+tmp75_*tmp102_+tmp88_*tmp103_*tmp29_+tmp91_*tmp104_+tmp106_*tmp107_*tmp31_+tmp109_*tmp110_+tmp224_*tmp111_*tmp112_+tmp227_*tmp114_;
  mCompDer[0][1] = mLocGradY_x+(tmp116_)*tmp32_*(tmp21_)+(tmp118_)*tmp34_+(tmp116_)*tmp37_*(tmp21_)+(tmp118_)*tmp40_+tmp120_*tmp41_*tmp23_+tmp122_*tmp42_+(tmp116_)*tmp43_*(tmp21_)+(tmp118_)*tmp44_+tmp120_*tmp47_*tmp23_+tmp122_*tmp50_+tmp124_*tmp51_*tmp25_+tmp126_*tmp52_+(tmp116_)*tmp53_*(tmp21_)+(tmp118_)*tmp54_+tmp120_*tmp55_*tmp23_+tmp122_*tmp56_+tmp124_*tmp59_*tmp25_+tmp126_*tmp62_+tmp128_*tmp63_*tmp27_+tmp130_*tmp64_+(tmp116_)*tmp65_*(tmp21_)+(tmp118_)*tmp66_+tmp120_*tmp67_*tmp23_+tmp122_*tmp68_+tmp124_*tmp69_*tmp25_+tmp126_*tmp70_+tmp128_*tmp73_*tmp27_+tmp130_*tmp76_+tmp132_*tmp77_*tmp29_+tmp134_*tmp78_+(tmp116_)*tmp79_*(tmp21_)+(tmp118_)*tmp80_+tmp120_*tmp81_*tmp23_+tmp122_*tmp82_+tmp124_*tmp83_*tmp25_+tmp126_*tmp84_+tmp128_*tmp85_*tmp27_+tmp130_*tmp86_+tmp132_*tmp89_*tmp29_+tmp134_*tmp92_+tmp136_*tmp93_*tmp31_+tmp138_*tmp94_+(tmp116_)*tmp95_*(tmp21_)+(tmp118_)*tmp96_+tmp120_*tmp97_*tmp23_+tmp122_*tmp98_+tmp124_*tmp99_*tmp25_+tmp126_*tmp100_+tmp128_*tmp101_*tmp27_+tmp130_*tmp102_+tmp132_*tmp103_*tmp29_+tmp134_*tmp104_+tmp136_*tmp107_*tmp31_+tmp138_*tmp110_+tmp230_*tmp111_*tmp112_+tmp232_*tmp114_;
  mCompDer[0][2] = mLocGradZ_x+(tmp140_)*tmp32_*(tmp21_)+(tmp142_)*tmp34_+(tmp140_)*tmp37_*(tmp21_)+(tmp142_)*tmp40_+tmp144_*tmp41_*tmp23_+tmp146_*tmp42_+(tmp140_)*tmp43_*(tmp21_)+(tmp142_)*tmp44_+tmp144_*tmp47_*tmp23_+tmp146_*tmp50_+tmp148_*tmp51_*tmp25_+tmp150_*tmp52_+(tmp140_)*tmp53_*(tmp21_)+(tmp142_)*tmp54_+tmp144_*tmp55_*tmp23_+tmp146_*tmp56_+tmp148_*tmp59_*tmp25_+tmp150_*tmp62_+tmp152_*tmp63_*tmp27_+tmp154_*tmp64_+(tmp140_)*tmp65_*(tmp21_)+(tmp142_)*tmp66_+tmp144_*tmp67_*tmp23_+tmp146_*tmp68_+tmp148_*tmp69_*tmp25_+tmp150_*tmp70_+tmp152_*tmp73_*tmp27_+tmp154_*tmp76_+tmp156_*tmp77_*tmp29_+tmp158_*tmp78_+(tmp140_)*tmp79_*(tmp21_)+(tmp142_)*tmp80_+tmp144_*tmp81_*tmp23_+tmp146_*tmp82_+tmp148_*tmp83_*tmp25_+tmp150_*tmp84_+tmp152_*tmp85_*tmp27_+tmp154_*tmp86_+tmp156_*tmp89_*tmp29_+tmp158_*tmp92_+tmp160_*tmp93_*tmp31_+tmp162_*tmp94_+(tmp140_)*tmp95_*(tmp21_)+(tmp142_)*tmp96_+tmp144_*tmp97_*tmp23_+tmp146_*tmp98_+tmp148_*tmp99_*tmp25_+tmp150_*tmp100_+tmp152_*tmp101_*tmp27_+tmp154_*tmp102_+tmp156_*tmp103_*tmp29_+tmp158_*tmp104_+tmp160_*tmp107_*tmp31_+tmp162_*tmp110_+tmp234_*tmp111_*tmp112_+tmp236_*tmp114_;
  mCompDer[0][3] = 1;
  mCompDer[0][4] = 1;
  mCompDer[0][5] = tmp163_;
  mCompDer[0][6] = 1;
  mCompDer[0][7] = tmp163_;
  mCompDer[0][8] = tmp164_;
  mCompDer[0][9] = 1;
  mCompDer[0][10] = tmp163_;
  mCompDer[0][11] = tmp164_;
  mCompDer[0][12] = tmp165_;
  mCompDer[0][13] = 1;
  mCompDer[0][14] = tmp163_;
  mCompDer[0][15] = tmp164_;
  mCompDer[0][16] = tmp165_;
  mCompDer[0][17] = tmp166_;
  mCompDer[0][18] = 1;
  mCompDer[0][19] = tmp163_;
  mCompDer[0][20] = tmp164_;
  mCompDer[0][21] = tmp165_;
  mCompDer[0][22] = tmp166_;
  mCompDer[0][23] = tmp167_;
  mCompDer[0][24] = 1;
  mCompDer[0][25] = tmp163_;
  mCompDer[0][26] = tmp164_;
  mCompDer[0][27] = tmp165_;
  mCompDer[0][28] = tmp166_;
  mCompDer[0][29] = tmp167_;
  mCompDer[0][30] = tmp168_;
  mCompDer[0][31] = 1;
  mCompDer[0][32] = tmp163_;
  mCompDer[0][33] = tmp164_;
  mCompDer[0][34] = tmp165_;
  mCompDer[0][35] = tmp166_;
  mCompDer[0][36] = tmp167_;
  mCompDer[0][37] = tmp168_;
  mCompDer[0][38] = tmp237_;
  mCompDer[0][39] = 0;
  mCompDer[0][40] = 0;
  mCompDer[0][41] = 0;
  mCompDer[0][42] = 0;
  mCompDer[0][43] = 0;
  mCompDer[0][44] = 0;
  mCompDer[0][45] = 0;
  mCompDer[0][46] = 0;
  mCompDer[0][47] = 0;
  mCompDer[0][48] = 0;
  mCompDer[0][49] = 0;
  mCompDer[0][50] = 0;
  mCompDer[0][51] = 0;
  mCompDer[0][52] = 0;
  mCompDer[0][53] = 0;
  mCompDer[0][54] = 0;
  mCompDer[0][55] = 0;
  mCompDer[0][56] = 0;
  mCompDer[0][57] = 0;
  mCompDer[0][58] = 0;
  mCompDer[0][59] = 0;
  mCompDer[0][60] = 0;
  mCompDer[0][61] = 0;
  mCompDer[0][62] = 0;
  mCompDer[0][63] = 0;
  mCompDer[0][64] = 0;
  mCompDer[0][65] = 0;
  mCompDer[0][66] = 0;
  mCompDer[0][67] = 0;
  mCompDer[0][68] = 0;
  mCompDer[0][69] = 0;
  mCompDer[0][70] = 0;
  mCompDer[0][71] = 0;
  mCompDer[0][72] = 0;
  mCompDer[0][73] = 0;
  mCompDer[0][74] = 0;
  mVal[1] = tmp19_+mCompCoord[39]+mCompCoord[40]+tmp170_*(tmp21_)+mCompCoord[42]+tmp172_*(tmp21_)+tmp174_*tmp23_+mCompCoord[45]+tmp176_*(tmp21_)+tmp178_*tmp23_+tmp180_*tmp25_+mCompCoord[49]+tmp182_*(tmp21_)+tmp184_*tmp23_+tmp186_*tmp25_+tmp188_*tmp27_+mCompCoord[54]+tmp190_*(tmp21_)+tmp192_*tmp23_+tmp194_*tmp25_+tmp196_*tmp27_+tmp198_*tmp29_+mCompCoord[60]+tmp200_*(tmp21_)+tmp202_*tmp23_+tmp204_*tmp25_+tmp206_*tmp27_+tmp208_*tmp29_+tmp210_*tmp31_+mCompCoord[67]+tmp212_*(tmp21_)+tmp214_*tmp23_+tmp216_*tmp25_+tmp218_*tmp27_+tmp220_*tmp29_+tmp222_*tmp31_+tmp228_*tmp112_;

  mCompDer[1][0] = mLocGradX_y+(tmp36_)*tmp169_*(tmp21_)+(tmp39_)*tmp170_+(tmp36_)*tmp171_*(tmp21_)+(tmp39_)*tmp172_+tmp46_*tmp173_*tmp23_+tmp49_*tmp174_+(tmp36_)*tmp175_*(tmp21_)+(tmp39_)*tmp176_+tmp46_*tmp177_*tmp23_+tmp49_*tmp178_+tmp58_*tmp179_*tmp25_+tmp61_*tmp180_+(tmp36_)*tmp181_*(tmp21_)+(tmp39_)*tmp182_+tmp46_*tmp183_*tmp23_+tmp49_*tmp184_+tmp58_*tmp185_*tmp25_+tmp61_*tmp186_+tmp72_*tmp187_*tmp27_+tmp75_*tmp188_+(tmp36_)*tmp189_*(tmp21_)+(tmp39_)*tmp190_+tmp46_*tmp191_*tmp23_+tmp49_*tmp192_+tmp58_*tmp193_*tmp25_+tmp61_*tmp194_+tmp72_*tmp195_*tmp27_+tmp75_*tmp196_+tmp88_*tmp197_*tmp29_+tmp91_*tmp198_+(tmp36_)*tmp199_*(tmp21_)+(tmp39_)*tmp200_+tmp46_*tmp201_*tmp23_+tmp49_*tmp202_+tmp58_*tmp203_*tmp25_+tmp61_*tmp204_+tmp72_*tmp205_*tmp27_+tmp75_*tmp206_+tmp88_*tmp207_*tmp29_+tmp91_*tmp208_+tmp106_*tmp209_*tmp31_+tmp109_*tmp210_+(tmp36_)*tmp211_*(tmp21_)+(tmp39_)*tmp212_+tmp46_*tmp213_*tmp23_+tmp49_*tmp214_+tmp58_*tmp215_*tmp25_+tmp61_*tmp216_+tmp72_*tmp217_*tmp27_+tmp75_*tmp218_+tmp88_*tmp219_*tmp29_+tmp91_*tmp220_+tmp106_*tmp221_*tmp31_+tmp109_*tmp222_+tmp224_*tmp225_*tmp112_+tmp227_*tmp228_;
  mCompDer[1][1] = mLocGradY_y+(tmp116_)*tmp169_*(tmp21_)+(tmp118_)*tmp170_+(tmp116_)*tmp171_*(tmp21_)+(tmp118_)*tmp172_+tmp120_*tmp173_*tmp23_+tmp122_*tmp174_+(tmp116_)*tmp175_*(tmp21_)+(tmp118_)*tmp176_+tmp120_*tmp177_*tmp23_+tmp122_*tmp178_+tmp124_*tmp179_*tmp25_+tmp126_*tmp180_+(tmp116_)*tmp181_*(tmp21_)+(tmp118_)*tmp182_+tmp120_*tmp183_*tmp23_+tmp122_*tmp184_+tmp124_*tmp185_*tmp25_+tmp126_*tmp186_+tmp128_*tmp187_*tmp27_+tmp130_*tmp188_+(tmp116_)*tmp189_*(tmp21_)+(tmp118_)*tmp190_+tmp120_*tmp191_*tmp23_+tmp122_*tmp192_+tmp124_*tmp193_*tmp25_+tmp126_*tmp194_+tmp128_*tmp195_*tmp27_+tmp130_*tmp196_+tmp132_*tmp197_*tmp29_+tmp134_*tmp198_+(tmp116_)*tmp199_*(tmp21_)+(tmp118_)*tmp200_+tmp120_*tmp201_*tmp23_+tmp122_*tmp202_+tmp124_*tmp203_*tmp25_+tmp126_*tmp204_+tmp128_*tmp205_*tmp27_+tmp130_*tmp206_+tmp132_*tmp207_*tmp29_+tmp134_*tmp208_+tmp136_*tmp209_*tmp31_+tmp138_*tmp210_+(tmp116_)*tmp211_*(tmp21_)+(tmp118_)*tmp212_+tmp120_*tmp213_*tmp23_+tmp122_*tmp214_+tmp124_*tmp215_*tmp25_+tmp126_*tmp216_+tmp128_*tmp217_*tmp27_+tmp130_*tmp218_+tmp132_*tmp219_*tmp29_+tmp134_*tmp220_+tmp136_*tmp221_*tmp31_+tmp138_*tmp222_+tmp230_*tmp225_*tmp112_+tmp232_*tmp228_;
  mCompDer[1][2] = mLocGradZ_y+(tmp140_)*tmp169_*(tmp21_)+(tmp142_)*tmp170_+(tmp140_)*tmp171_*(tmp21_)+(tmp142_)*tmp172_+tmp144_*tmp173_*tmp23_+tmp146_*tmp174_+(tmp140_)*tmp175_*(tmp21_)+(tmp142_)*tmp176_+tmp144_*tmp177_*tmp23_+tmp146_*tmp178_+tmp148_*tmp179_*tmp25_+tmp150_*tmp180_+(tmp140_)*tmp181_*(tmp21_)+(tmp142_)*tmp182_+tmp144_*tmp183_*tmp23_+tmp146_*tmp184_+tmp148_*tmp185_*tmp25_+tmp150_*tmp186_+tmp152_*tmp187_*tmp27_+tmp154_*tmp188_+(tmp140_)*tmp189_*(tmp21_)+(tmp142_)*tmp190_+tmp144_*tmp191_*tmp23_+tmp146_*tmp192_+tmp148_*tmp193_*tmp25_+tmp150_*tmp194_+tmp152_*tmp195_*tmp27_+tmp154_*tmp196_+tmp156_*tmp197_*tmp29_+tmp158_*tmp198_+(tmp140_)*tmp199_*(tmp21_)+(tmp142_)*tmp200_+tmp144_*tmp201_*tmp23_+tmp146_*tmp202_+tmp148_*tmp203_*tmp25_+tmp150_*tmp204_+tmp152_*tmp205_*tmp27_+tmp154_*tmp206_+tmp156_*tmp207_*tmp29_+tmp158_*tmp208_+tmp160_*tmp209_*tmp31_+tmp162_*tmp210_+(tmp140_)*tmp211_*(tmp21_)+(tmp142_)*tmp212_+tmp144_*tmp213_*tmp23_+tmp146_*tmp214_+tmp148_*tmp215_*tmp25_+tmp150_*tmp216_+tmp152_*tmp217_*tmp27_+tmp154_*tmp218_+tmp156_*tmp219_*tmp29_+tmp158_*tmp220_+tmp160_*tmp221_*tmp31_+tmp162_*tmp222_+tmp234_*tmp225_*tmp112_+tmp236_*tmp228_;
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
  mCompDer[1][24] = 0;
  mCompDer[1][25] = 0;
  mCompDer[1][26] = 0;
  mCompDer[1][27] = 0;
  mCompDer[1][28] = 0;
  mCompDer[1][29] = 0;
  mCompDer[1][30] = 0;
  mCompDer[1][31] = 0;
  mCompDer[1][32] = 0;
  mCompDer[1][33] = 0;
  mCompDer[1][34] = 0;
  mCompDer[1][35] = 0;
  mCompDer[1][36] = 0;
  mCompDer[1][37] = 0;
  mCompDer[1][38] = 0;
  mCompDer[1][39] = 1;
  mCompDer[1][40] = 1;
  mCompDer[1][41] = tmp163_;
  mCompDer[1][42] = 1;
  mCompDer[1][43] = tmp163_;
  mCompDer[1][44] = tmp164_;
  mCompDer[1][45] = 1;
  mCompDer[1][46] = tmp163_;
  mCompDer[1][47] = tmp164_;
  mCompDer[1][48] = tmp165_;
  mCompDer[1][49] = 1;
  mCompDer[1][50] = tmp163_;
  mCompDer[1][51] = tmp164_;
  mCompDer[1][52] = tmp165_;
  mCompDer[1][53] = tmp166_;
  mCompDer[1][54] = 1;
  mCompDer[1][55] = tmp163_;
  mCompDer[1][56] = tmp164_;
  mCompDer[1][57] = tmp165_;
  mCompDer[1][58] = tmp166_;
  mCompDer[1][59] = tmp167_;
  mCompDer[1][60] = 1;
  mCompDer[1][61] = tmp163_;
  mCompDer[1][62] = tmp164_;
  mCompDer[1][63] = tmp165_;
  mCompDer[1][64] = tmp166_;
  mCompDer[1][65] = tmp167_;
  mCompDer[1][66] = tmp168_;
  mCompDer[1][67] = 1;
  mCompDer[1][68] = tmp163_;
  mCompDer[1][69] = tmp164_;
  mCompDer[1][70] = tmp165_;
  mCompDer[1][71] = tmp166_;
  mCompDer[1][72] = tmp167_;
  mCompDer[1][73] = tmp168_;
  mCompDer[1][74] = tmp237_;
}


void cGen2DBundleEgProj_Deg7::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cGen2DBundleEgProj_Deg7 Has no Der Sec");
}

void cGen2DBundleEgProj_Deg7::SetAmpl(double aVal){ mLocAmpl = aVal;}
void cGen2DBundleEgProj_Deg7::SetCentr_x(double aVal){ mLocCentr_x = aVal;}
void cGen2DBundleEgProj_Deg7::SetCentr_y(double aVal){ mLocCentr_y = aVal;}
void cGen2DBundleEgProj_Deg7::SetGradX_x(double aVal){ mLocGradX_x = aVal;}
void cGen2DBundleEgProj_Deg7::SetGradX_y(double aVal){ mLocGradX_y = aVal;}
void cGen2DBundleEgProj_Deg7::SetGradY_x(double aVal){ mLocGradY_x = aVal;}
void cGen2DBundleEgProj_Deg7::SetGradY_y(double aVal){ mLocGradY_y = aVal;}
void cGen2DBundleEgProj_Deg7::SetGradZ_x(double aVal){ mLocGradZ_x = aVal;}
void cGen2DBundleEgProj_Deg7::SetGradZ_y(double aVal){ mLocGradZ_y = aVal;}
void cGen2DBundleEgProj_Deg7::SetPTerInit_x(double aVal){ mLocPTerInit_x = aVal;}
void cGen2DBundleEgProj_Deg7::SetPTerInit_y(double aVal){ mLocPTerInit_y = aVal;}
void cGen2DBundleEgProj_Deg7::SetPTerInit_z(double aVal){ mLocPTerInit_z = aVal;}
void cGen2DBundleEgProj_Deg7::SetProjInit_x(double aVal){ mLocProjInit_x = aVal;}
void cGen2DBundleEgProj_Deg7::SetProjInit_y(double aVal){ mLocProjInit_y = aVal;}



double * cGen2DBundleEgProj_Deg7::AdrVarLocFromString(const std::string & aName)
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


cElCompiledFonc::cAutoAddEntry cGen2DBundleEgProj_Deg7::mTheAuto("cGen2DBundleEgProj_Deg7",cGen2DBundleEgProj_Deg7::Alloc);


cElCompiledFonc *  cGen2DBundleEgProj_Deg7::Alloc()
{  return new cGen2DBundleEgProj_Deg7();
}


