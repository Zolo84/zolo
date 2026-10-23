// FUN_00457670 @ 457670 size=620

undefined * FUN_00457670(int param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_28 [6];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_0089d138 = 0;
  if (param_1 == 0) goto switchD_004576c9_default;
  iVar3 = (int)param_2;
  local_10 = 0;
  local_28[1] = 0;
  local_c = 0;
  local_28[2] = 0;
  local_8 = 0;
  local_28[3] = 0;
  local_4 = 0;
  local_28[0] = param_1;
  local_28[4] = 0;
  local_28[5] = iVar3;
  switch(param_3) {
  case 0:
    uVar1 = FUN_00455890(0,0x8c,0,local_28,local_28 + 5);
    goto LAB_004576ff;
  case 1:
    uVar1 = FUN_00455150(0,0x8c,local_28);
LAB_004576ff:
    FUN_007a630a(&DAT_0089d138,&DAT_0083a374,uVar1);
    return &DAT_0089d138;
  case 2:
    uVar1 = FUN_00455150(0,0x8c,local_28);
    uVar2 = FUN_00455890(0,0x8c,0,local_28,local_28 + 5);
    break;
  case 3:
    uVar1 = FUN_00455890(0,0x8c,0,local_28,local_28 + 5);
    uVar2 = FUN_004ff3c0(param_1,uVar1);
    break;
  case 4:
    uVar1 = FUN_00455150(0,0x8c,local_28);
    uVar2 = FUN_004ff3c0(param_1,uVar1);
    break;
  case 5:
    uVar1 = FUN_00455150(0,0x8c,local_28);
    uVar2 = FUN_00455890(0,0x8c,0,local_28,local_28 + 5);
    uVar1 = FUN_004ff3c0(param_1,uVar2,uVar1);
    goto LAB_004578bb;
  case 6:
    uVar1 = FUN_00455890(0,0x8c,0,local_28,local_28 + 5);
    goto LAB_00457801;
  case 7:
    uVar1 = FUN_00455150(0,0x8c,local_28);
LAB_00457801:
    uVar2 = FUN_004ff3e0(param_1,uVar1);
    break;
  case 8:
    uVar1 = FUN_00455150(0,0x8c,local_28);
    uVar2 = FUN_00455890(0,0x8c,0,local_28,local_28 + 5);
    uVar1 = FUN_004ff3e0(param_1,uVar2,uVar1);
    goto LAB_004578bb;
  case 9:
    uVar1 = FUN_00455150(0,0x8c,local_28);
    uVar2 = FUN_00455890(0,0x8c,0,local_28,local_28 + 5);
    uVar1 = FUN_005068d0(0x8c,0,0x42c80000,param_1,iVar3,0,0,0,0,0,0,0,0,uVar2,uVar1);
LAB_004578bb:
    FUN_007a630a(&DAT_0089d138,s__s_s_s_0083ca04,uVar1);
switchD_004576c9_default:
    return &DAT_0089d138;
  default:
    goto switchD_004576c9_default;
  }
  FUN_007a630a(&DAT_0089d138,&DAT_0083ca0c,uVar2,uVar1);
  return &DAT_0089d138;
}


