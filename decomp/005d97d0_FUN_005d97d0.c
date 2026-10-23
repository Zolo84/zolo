// FUN_005d97d0 @ 5d97d0 size=634

undefined * __thiscall FUN_005d97d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  cVar3 = (**(code **)(**(int **)(param_1 + 0xc4) + 0x20))(param_2,param_3);
  if (cVar3 != '\0') {
    puVar4 = (undefined *)FUN_0042b6c9(s_UIW_OFFENSIVE_0085b82c);
    return puVar4;
  }
  cVar3 = FUN_004355a0(param_2,param_3);
  if (cVar3 != '\0') {
    puVar4 = (undefined *)(**(code **)(**(int **)(param_1 + 0xbc) + 0x3c))(param_2,param_3);
    return puVar4;
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 200) + 0x20))(param_2,param_3);
  if (cVar3 != '\0') {
    if (*(char *)(*(int *)(param_1 + 200) + 0x86) != '\0') {
      puVar4 = (undefined *)FUN_0042b6c9(s_UIW_REORG_DIS_IRO_0085b818);
      return puVar4;
    }
    puVar4 = (undefined *)FUN_0042b6c9(s_UIW_REORG_IRO_0085b808);
    return puVar4;
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x20))(param_2,param_3);
  if (cVar3 != '\0') {
    if (*(char *)(*(int *)(param_1 + 0xcc) + 0x86) == '\0') {
      puVar4 = (undefined *)FUN_0042b6c9(s_UIW_MERGE_IRO_0085b7cc);
      return puVar4;
    }
    cVar3 = FUN_00529cc0();
    if (cVar3 != '\0') {
      uVar7 = DAT_00dc1614;
      uVar5 = FUN_0042b6c9(s_UIW_MERGE_AIR_DIS_IRO_0085b7f0);
      FUN_007a630a(&DAT_00cd4a50,uVar5,uVar7);
      return &DAT_00cd4a50;
    }
    puVar4 = (undefined *)FUN_0042b6c9(s_UIW_MERGE_DIS_IRO_0085b7dc);
    return puVar4;
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 0xd0) + 0x20))(param_2,param_3);
  if ((((cVar3 == '\0') ||
       (piVar1 = (int *)**(int **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4), piVar1 == (int *)0x0)) ||
      (cVar3 = (**(code **)(*piVar1 + 0x28))(), cVar3 == '\0')) ||
     (iVar6 = FUN_0051b230(), *(int *)(iVar6 + 0x46a) == 0)) {
    return (undefined *)0x0;
  }
  iVar6 = FUN_0051b230();
  iVar6 = *(int *)(*(int *)(iVar6 + 0x46a) + 0x34);
  do {
    if (iVar6 == 0) {
      puVar4 = (undefined *)FUN_0042b6c9(s_SHIPNOTRANSPORT_0085b7b0);
      return puVar4;
    }
    iVar6 = *(int *)(iVar6 + 8);
    cVar3 = FUN_005170a0(*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x21e5a));
  } while (cVar3 == '\0');
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x90) + 0x21e5a) + 4);
  do {
    if (piVar1 == (int *)0x0) {
      puVar4 = (undefined *)FUN_0042b6c9(s_SHIPOKLOAD_0085b7c0);
      return puVar4;
    }
    piVar2 = (int *)piVar1[2];
    iVar6 = *piVar1;
    cVar3 = FUN_00525720();
    if (cVar3 != '\0') {
      puVar4 = (undefined *)FUN_0042b6c9(s_PARAULOCKED_0085b7a4);
      return puVar4;
    }
    cVar3 = (**(code **)(*(int *)(iVar6 + 0x22e) + 8))();
    if (cVar3 == '\0') {
      puVar4 = (undefined *)FUN_0042b6c9(s_SHIPLMOVING_0085b798);
      return puVar4;
    }
    iVar6 = (**(code **)(*(int *)(iVar6 + 0x11c) + 4))();
    piVar1 = piVar2;
  } while (iVar6 == 0);
  puVar4 = (undefined *)FUN_0042b6c9(s_SHIPLCOMBAT_0085b78c);
  return puVar4;
}


