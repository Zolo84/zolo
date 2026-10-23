// FUN_00670dd0 @ 670dd0 size=167

void __fastcall FUN_00670dd0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  piVar1 = (int *)FUN_004e9370();
  fVar3 = (float10)(**(code **)(*param_1 + 0x208))();
  uVar2 = (**(code **)(*piVar1 + 0xc))((double)fVar3);
  uVar2 = (**(code **)(*param_1 + 0xf0))(uVar2);
  FUN_00458570(s_Plan___s_Airbase___s_Value___0_2_00867b34,uVar2);
  if (param_1[0x30] != 0) {
    FUN_007918e4(&DAT_00d11040,param_1[0x30] + 4);
    FUN_007918e4(&DAT_00d10f2c,param_1[0x30] + 10);
    piVar1 = (int *)FUN_004e9370(*(undefined4 *)param_1[0x30]);
    uVar2 = (**(code **)(*piVar1 + 0xc))(&DAT_00d11040,&DAT_00d10f2c);
    FUN_00458570(s_Airdrop_target___s_Wished_Date____00867b58,uVar2);
  }
  return;
}


