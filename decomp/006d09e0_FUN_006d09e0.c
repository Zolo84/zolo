// FUN_006d09e0 @ 6d09e0 size=335

undefined4 __fastcall FUN_006d09e0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  *(undefined1 *)(*(int *)(param_1 + 0xe) + 0x13 + param_1) = 0;
  if (*(int *)(param_1 + 10) == 300) {
    iVar4 = 0;
    local_110 = 0;
    local_108 = DAT_00bd1bac[1] / 2;
    local_10c = 0;
    local_104 = 300;
    FUN_004045f0(&local_110);
    FUN_007a630a(local_100,s___070_s_0086b950,param_1 + 0x12);
    iVar1 = FUN_004133fd(local_100,0,
                         *(int *)(param_1 + 10) - *(int *)(*(int *)(param_1 + 0x7c) + 0x10),
                         DAT_00bd1bac,0xffff,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x7c) + 0x10);
    iVar5 = *(int *)(param_1 + 10) - iVar6;
    if (iVar6 < iVar5) {
      puVar3 = (undefined4 *)(param_1 + 0x86);
      do {
        if (iVar4 < *(int *)(param_1 + 0x6ca)) {
          FUN_004133fd(*puVar3,0,*(int *)(param_1 + 10) - (iVar4 + 2) * iVar6,DAT_00bd1bac,0xffff,0)
          ;
          iVar4 = iVar4 + 1;
          puVar3 = puVar3 + 2;
        }
        iVar6 = *(int *)(*(int *)(param_1 + 0x7c) + 0x10);
        iVar5 = iVar5 - iVar6;
      } while (iVar6 < iVar5);
    }
    uVar2 = *(int *)(param_1 + 0x78) + 1;
    *(uint *)(param_1 + 0x78) = uVar2;
    if ((uVar2 & 4) != 0) {
      iVar4 = (**(code **)(*DAT_00bd1bac + 8))();
      iVar6 = *(int *)(param_1 + 10) + -8;
      if (iVar6 < *(int *)(param_1 + 10)) {
        do {
          iVar5 = FUN_00584190();
          iVar5 = (iVar5 / 2) * iVar6;
          iVar6 = iVar6 + 1;
          puVar3 = (undefined4 *)(iVar4 + (iVar5 + iVar1) * 2);
          *puVar3 = 0xf81ff81f;
          puVar3[1] = 0xf81ff81f;
          puVar3[2] = 0xf81ff81f;
          puVar3[3] = 0xf81ff81f;
        } while (iVar6 < *(int *)(param_1 + 10));
      }
      (**(code **)(*DAT_00bd1bac + 0xc))();
    }
  }
  return 0;
}


