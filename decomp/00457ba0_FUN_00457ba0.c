// FUN_00457ba0 @ 457ba0 size=581

undefined *
FUN_00457ba0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  DAT_0089d138 = 0;
  if (param_1 == 0x8c) {
    puVar1 = (undefined *)FUN_00457670(*param_3,*(undefined2 *)param_4,param_5);
    return puVar1;
  }
  switch(param_5) {
  case 0:
    uVar2 = FUN_00455890(0,param_1,param_2,param_3,param_4);
    goto LAB_00457c16;
  case 1:
    uVar2 = FUN_00455150(0,param_1,param_3);
LAB_00457c16:
    FUN_007a630a(&DAT_0089d138,&DAT_0083a374,uVar2);
    return &DAT_0089d138;
  case 2:
    uVar2 = FUN_00455150(0,param_1,param_3);
    uVar3 = FUN_00455890(0,param_1,param_2,param_3,param_4);
    break;
  case 3:
    uVar2 = FUN_00455890(0,param_1,param_2,param_3,param_4);
    uVar3 = FUN_004ff340(param_1,uVar2);
    break;
  case 4:
    uVar2 = FUN_00455150(0,param_1,param_3);
    uVar3 = FUN_004ff340(param_1,uVar2);
    break;
  case 5:
    uVar2 = FUN_00455150(0,param_1,param_3);
    uVar3 = FUN_00455890(0,param_1,param_2,param_3,param_4);
    uVar2 = FUN_004ff340(param_1,uVar3,uVar2);
    goto LAB_00457d44;
  case 6:
    uVar2 = FUN_00455890(0,param_1,param_2,param_3,param_4);
    goto LAB_00457cf0;
  case 7:
    uVar2 = FUN_00455150(0,param_1,param_3);
LAB_00457cf0:
    uVar3 = FUN_004ff360(param_1,uVar2);
    break;
  case 8:
    uVar2 = FUN_00455150(0,param_1,param_3);
    uVar3 = FUN_00455890(0,param_1,param_2,param_3,param_4);
    uVar2 = FUN_004ff360(param_1,uVar3,uVar2);
LAB_00457d44:
    FUN_007a630a(&DAT_0089d138,s__s_s_s_0083ca04,uVar2);
    return &DAT_0089d138;
  case 9:
    uVar2 = FUN_00455150(0,param_1,param_3);
    uVar3 = FUN_00455890(0,param_1,param_2,param_3,param_4);
    uVar2 = FUN_005068d0(param_1,param_2,0x42c80000,*param_3,*param_4,param_3[1],param_4[1],
                         param_3[2],param_4[2],param_3[3],param_4[3],param_3[4],param_4[4],uVar3,
                         uVar2);
    FUN_007a630a(&DAT_0089d138,s__s_s_s_0083ca04,uVar2);
  default:
    return &DAT_0089d138;
  }
  FUN_007a630a(&DAT_0089d138,&DAT_0083ca0c,uVar3,uVar2);
  return &DAT_0089d138;
}


