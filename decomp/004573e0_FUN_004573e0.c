// FUN_004573e0 @ 4573e0 size=613

undefined * FUN_004573e0(int param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_0089d138 = 0;
  if (param_1 == 0x8c) goto switchD_00457437_default;
  local_14 = 0;
  local_28 = 0;
  local_10 = 0;
  local_24 = 0;
  local_c = 0;
  local_20 = 0;
  local_8 = 0;
  local_1c = 0;
  local_4 = 0;
  local_18 = 0;
  switch(param_3) {
  case 0:
    uVar1 = FUN_00455890(0,param_1,(int)param_2,&local_28,&local_14);
    goto LAB_00457469;
  case 1:
    uVar1 = FUN_00455150(0,param_1,&local_28);
LAB_00457469:
    FUN_007a630a(&DAT_0089d138,&DAT_0083a374,uVar1);
    return &DAT_0089d138;
  case 2:
    uVar1 = FUN_00455150(0,param_1,&local_28);
    uVar2 = FUN_00455890(0,param_1,(int)param_2,&local_28,&local_14);
    break;
  case 3:
    uVar1 = FUN_00455890(0,param_1,(int)param_2,&local_28,&local_14);
    uVar2 = FUN_004ff340(param_1,uVar1);
    break;
  case 4:
    uVar1 = FUN_00455150(0,param_1,&local_28);
    uVar2 = FUN_004ff340(param_1,uVar1);
    break;
  case 5:
    uVar1 = FUN_00455150(0,param_1,&local_28);
    uVar2 = FUN_00455890(0,param_1,(int)param_2,&local_28,&local_14);
    uVar1 = FUN_004ff340(param_1,uVar2,uVar1);
    goto LAB_004575b2;
  case 6:
    uVar1 = FUN_00455890(0,param_1,(int)param_2,&local_28,&local_14);
    goto LAB_00457557;
  case 7:
    uVar1 = FUN_00455150(0,param_1,&local_28);
LAB_00457557:
    uVar2 = FUN_004ff360(param_1,uVar1);
    break;
  case 8:
    uVar1 = FUN_00455150(0,param_1,&local_28);
    uVar2 = FUN_00455890(0,param_1,(int)param_2,&local_28,&local_14);
    uVar1 = FUN_004ff360(param_1,uVar2,uVar1);
LAB_004575b2:
    FUN_007a630a(&DAT_0089d138,s__s_s_s_0083ca04,uVar1);
    return &DAT_0089d138;
  case 9:
    uVar1 = FUN_00455150(0,param_1,&local_28);
    uVar2 = FUN_00455890(0,param_1,(int)param_2,&local_28,&local_14);
    uVar1 = FUN_005068d0(param_1,(int)param_2,0x42c80000,0,0,0,0,0,0,0,0,0,0,uVar2,uVar1);
    FUN_007a630a(&DAT_0089d138,s__s_s_s_0083ca04,uVar1);
  default:
switchD_00457437_default:
    return &DAT_0089d138;
  }
  FUN_007a630a(&DAT_0089d138,&DAT_0083ca0c,uVar2,uVar1);
  return &DAT_0089d138;
}


