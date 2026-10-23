// FUN_00606790 @ 606790 size=489

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_00606790(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  int *piVar8;
  float fVar9;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x17a) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_00657cd0(0);
    return puVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x17e) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_00657cd0(5);
    return puVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x182) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_00657cd0(1);
    return puVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x186) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_00657cd0(2);
    return puVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x18a) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_00657cd0(3);
    return puVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x18e) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_00657cd0();
    return puVar2;
  }
  piVar8 = (int *)(param_1 + 0x162);
  iVar4 = 0;
  do {
    if (*(int **)(*piVar8 + 0x8c) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(*piVar8 + 0x8c) + 0x20))(param_2,param_3);
      if (cVar1 != '\0') {
        FUN_005f8440();
        fVar5 = (float10)FUN_004a45e0();
        fVar9 = (float)fVar5;
        if ((float10)_DAT_007e3380 <= fVar5) {
          if (_DAT_007e4088 < fVar9) {
            fVar9 = 100.0;
          }
        }
        else {
          fVar9 = 0.0;
        }
        fVar5 = (float10)FUN_004a45e0();
        if (fVar5 < (float10)_DAT_007e3380) {
          fVar5 = (float10)_DAT_007e3380;
        }
        if (((iVar4 == 4) || (iVar4 == 5)) || ((float10)_DAT_007e4088 < fVar5)) {
          fVar5 = (float10)_DAT_007e4088;
        }
        dVar7 = (double)fVar5;
        dVar6 = (double)fVar9;
        uVar3 = FUN_0042b6c9(s_TRADE_SLIDE_LIMIT_0085e82c);
        FUN_007a630a(&DAT_00ce7e98,uVar3,dVar6,dVar7);
        return &DAT_00ce7e98;
      }
    }
    iVar4 = iVar4 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar4 < 6);
  return (undefined *)0x0;
}


