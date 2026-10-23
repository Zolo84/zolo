// FUN_006720f0 @ 6720f0 size=91

void __fastcall FUN_006720f0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  piVar2 = (int *)FUN_004e9370();
  piVar1 = (int *)param_1[0x31];
  fVar4 = (float10)(**(code **)(*param_1 + 0x208))();
  uVar3 = (**(code **)(*piVar1 + 0xc))((double)fVar4);
  uVar3 = (**(code **)(*piVar2 + 0xc))(uVar3);
  uVar3 = (**(code **)(*param_1 + 0xf0))(uVar3);
  FUN_00458570(s_Plan___s_Airbase___s_Target___s_V_00867b90,uVar3);
  return;
}


