// FUN_0051a4c0 @ 51a4c0 size=512

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0051a4c0(int *param_1)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fStack_c;
  undefined1 auStack_4 [4];
  
  if (*(char *)((int)param_1 + 0x17b) != '\0') {
    return 1;
  }
  iVar4 = (**(code **)(param_1[0x47] + 4))();
  if (iVar4 != 0) {
    return 1;
  }
  cVar3 = (**(code **)(*param_1 + 0x28))();
  if ((cVar3 == '\0') || (iVar4 = FUN_004e9370(param_1[3]), *(int *)(iVar4 + 0x3d8) == 0))
  goto LAB_0051a58d;
  uVar6 = *(undefined4 *)(param_1[0x92] + 6);
  FUN_004e9370(param_1[3]);
  cVar3 = FUN_0044b280(uVar6);
  if (cVar3 == '\0') {
    if (param_1[0x92] == 0) goto LAB_0051a58d;
    iVar4 = FUN_004e9370(param_1[3]);
    cVar3 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar4 + 0x3d8) + 6));
    if (cVar3 == '\0') goto LAB_0051a58d;
  }
  piVar2 = *(int **)((int)param_1 + 0x26);
  while (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
    piVar2 = (int *)piVar2[2];
    if (*(char *)(iVar4 + 0x157) != '\0') {
      return 0;
    }
  }
LAB_0051a58d:
  iVar4 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
  if (iVar4 < 1) {
    return 0;
  }
  cVar3 = (**(code **)(*param_1 + 0x2c))();
  if (cVar3 == '\0') {
    iVar4 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    fVar1 = _DAT_007e3380;
    if (iVar4 != 0) {
      iVar4 = *(int *)((int)param_1 + 0x26);
      fStack_c = 0.0;
      while (iVar4 != 0) {
        puVar5 = (undefined4 *)FUN_00499730(auStack_4,0);
        fStack_c = *(float *)(*(int *)*puVar5 + 0xf4) + fStack_c;
      }
      iVar4 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
      fVar1 = fStack_c / (float)iVar4;
    }
    if (fVar1 < (float)_DAT_007e7828) {
      iVar4 = FUN_004e9370(param_1[3]);
      if (*(int *)(iVar4 + 0x3d8) != 0) {
        uVar6 = FUN_004e9370(param_1[3]);
        cVar3 = FUN_00522a60(uVar6);
        if (cVar3 == '\0') {
          iVar4 = FUN_004e9370(param_1[3]);
          cVar3 = FUN_0044b280(*(undefined4 *)(*(int *)(iVar4 + 0x3d8) + 6));
          if (cVar3 == '\0') {
            if (param_1[0x92] == 0) {
              return 1;
            }
            iVar4 = FUN_004e9370(param_1[3]);
            cVar3 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar4 + 0x3d8) + 6));
            if (cVar3 == '\0') {
              return 1;
            }
            return 0;
          }
        }
      }
      return 0;
    }
  }
  return 1;
}


