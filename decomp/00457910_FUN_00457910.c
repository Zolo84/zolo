// FUN_00457910 @ 457910 size=609

undefined * FUN_00457910(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  if (param_1 == 0) goto switchD_00457964_default;
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
  switch(param_2) {
  case 0:
    uVar2 = FUN_00455890(param_1,0x8c,0,&local_28,&local_14);
    goto LAB_00457998;
  case 1:
    uVar2 = FUN_00455150(param_1,0x8c,&local_28);
LAB_00457998:
    FUN_007a630a(&DAT_0089d138,&DAT_0083a374,uVar2);
    return &DAT_0089d138;
  case 2:
    uVar3 = FUN_00455150(param_1,0x8c,&local_28);
    uVar2 = FUN_00455890(param_1,0x8c,0,&local_28,&local_14);
    break;
  case 3:
    uVar2 = *(undefined4 *)(param_1 + 0x130);
    uVar3 = FUN_00455890(param_1,0x8c,0,&local_28,&local_14);
    uVar2 = FUN_004ff340(uVar2,uVar3);
    break;
  case 4:
    uVar2 = *(undefined4 *)(param_1 + 0x130);
    uVar3 = FUN_00455150(param_1,0x8c,&local_28);
    uVar2 = FUN_004ff340(uVar2,uVar3);
    break;
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 0x130);
    uVar3 = FUN_00455150(param_1,0x8c,&local_28);
    uVar1 = FUN_00455890(param_1,0x8c,0,&local_28,&local_14);
    uVar2 = FUN_004ff340(uVar2,uVar1,uVar3);
    goto LAB_00457b50;
  case 6:
    uVar2 = *(undefined4 *)(param_1 + 0x130);
    uVar3 = FUN_00455890(param_1,0x8c,0,&local_28,&local_14);
    goto LAB_00457ab3;
  case 7:
    uVar2 = *(undefined4 *)(param_1 + 0x130);
    uVar3 = FUN_00455150(param_1,0x8c,&local_28);
LAB_00457ab3:
    uVar2 = FUN_004ff360(uVar2,uVar3);
    break;
  case 8:
    uVar2 = *(undefined4 *)(param_1 + 0x130);
    uVar3 = FUN_00455150(param_1,0x8c,&local_28);
    uVar1 = FUN_00455890(param_1,0x8c,0,&local_28,&local_14);
    uVar2 = FUN_004ff360(uVar2,uVar1,uVar3);
    goto LAB_00457b50;
  case 9:
    uVar2 = FUN_00455150(param_1,0x8c,&local_28);
    uVar3 = FUN_00455890(param_1,0x8c,0,&local_28,&local_14);
    uVar2 = FUN_00506430(uVar3,uVar2);
LAB_00457b50:
    FUN_007a630a(&DAT_0089d138,s__s_s_s_0083ca04,uVar2);
switchD_00457964_default:
    return &DAT_0089d138;
  default:
    goto switchD_00457964_default;
  }
  FUN_007a630a(&DAT_0089d138,&DAT_0083ca0c,uVar2,uVar3);
  return &DAT_0089d138;
}


