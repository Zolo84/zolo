// FUN_004bd9e0 @ 4bd9e0 size=256

void __thiscall FUN_004bd9e0(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  
  if (*(char *)((int)param_1 + 0x4e) == param_3) {
    pcVar5 = s_Attackers_0083f258;
    if (param_3 == '\0') {
      pcVar5 = s_Defenders_0083f24c;
    }
    piVar6 = (int *)param_1[0x10];
    uVar3 = (**(code **)(*(int *)(param_2[0x92] + 0xe) + 0xc))(pcVar5);
    uVar3 = (**(code **)(*piVar6 + 0xc))(*(undefined4 *)((int)param_2 + 0x1a),uVar3);
    FUN_00405ad0(s__s__Unit___d___s__joined_the__s__0083f228,uVar3);
    uVar3 = *(undefined4 *)(param_2[0x92] + 6);
    cVar2 = (**(code **)(param_1[10] + 0x24))(uVar3);
    if (cVar2 == '\0') {
      FUN_00459f50(uVar3);
    }
    iVar4 = FUN_0051c480();
    if ((*(int *)((int)param_1 + 0x46) == 0) ||
       (*(int *)(iVar4 + 0x22) < *(int *)(*(int *)((int)param_1 + 0x46) + 0x22))) {
      (**(code **)(*param_1 + 0x20))(iVar4);
    }
    iVar4 = (**(code **)(*param_2 + 0xa8))();
    param_1[8] = param_1[8] + iVar4;
    piVar6 = param_2;
    (**(code **)(*param_1 + 0xc))(param_2);
    FUN_00459df0(piVar6);
    iVar4 = param_1[0x10];
    iVar1 = *(int *)(iVar4 + 0x74);
    if ((((iVar1 != 4) && (iVar1 != 5)) && (iVar1 != 6)) && ((iVar1 != 7 && (iVar1 != 8)))) {
      FUN_0051a9c0(iVar4 + 0xc,param_2);
      return;
    }
    FUN_0051a790(iVar4 + 0xc,param_2);
  }
  return;
}


