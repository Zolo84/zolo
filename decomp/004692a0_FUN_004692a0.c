// FUN_004692a0 @ 4692a0 size=528

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004692a0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  int local_c;
  float local_8;
  
  piVar1 = (int *)(&DAT_0089cad8)[param_2];
  if (piVar1 != (int *)0x0) {
    if (((DAT_00d610e6 != '\0') && (piVar1 != (int *)0x0)) &&
       (cVar4 = (**(code **)(*piVar1 + 0x1c))(), cVar4 == '\0')) {
      return 100;
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30);
    if ((iVar5 == 0) || (iVar5 == param_2)) {
      local_c = 0;
      puVar6 = *(undefined4 **)(param_1 + 0xe892);
      while (puVar6 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar6[2];
        uVar3 = *puVar6;
        cVar4 = (**(code **)(*(int *)((int)piVar1 + 0xe8b2) + 0x24))(uVar3);
        puVar6 = puVar2;
        if ((cVar4 != '\0') || (cVar4 = (**(code **)(piVar1[0x3a31] + 0x24))(uVar3), cVar4 != '\0'))
        {
          local_c = local_c + 1;
        }
      }
      local_8 = 0.0;
      iVar5 = *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30);
      if ((iVar5 != 0) && (iVar5 == param_2)) {
        local_8 = 50.0;
      }
      fVar7 = (float10)FUN_004687f0(1,param_1);
      fVar8 = (float10)FUN_004687f0(0,piVar1);
      if ((float10)_DAT_007e3374 < (float10)(float)fVar7 / fVar8) {
        local_8 = (float)(((float10)(float)fVar7 / fVar8 - (float10)_DAT_007e3374) *
                          (float10)_DAT_007e681c + (float10)local_8);
      }
      if (*(char *)(param_2 + 0xe8d6 + param_1) == '\0') {
        local_8 = local_8 - _DAT_007e681c;
      }
      iVar5 = FUN_0044dc80(5);
      puVar6 = &DAT_0089cad8;
      local_8 = local_8 - (float)(iVar5 + -4) * _DAT_007e4090;
      do {
        if ((((int *)*puVar6 != (int *)0x0) && (piVar1 != (int *)*puVar6)) &&
           (cVar4 = FUN_005861c0(*(undefined4 *)(param_1 + 6)), cVar4 != '\0')) {
          local_8 = local_8 - _DAT_007e4090;
        }
        puVar6 = puVar6 + 1;
      } while ((int)puVar6 < 0x89d038);
      fVar7 = (float10)FUN_0044c670(0x11,*(undefined4 *)(param_1 + 6));
      fVar7 = ((float10)local_8 - (float10)local_c) + fVar7;
      local_8 = (float)fVar7;
      if ((float10)_DAT_007e681c < fVar7) {
        local_8 = 50.0;
      }
      iVar5 = (**(code **)(*(int *)(param_1 + 0xe88e) + 4))();
      if ((local_c == iVar5) && (_DAT_007e4090 < local_8)) {
        local_8 = 10.0;
      }
      iVar5 = (int)ROUND((float)*(int *)(*(int *)(param_1 + 0x120) + 0xb82) + local_8);
      if (-1 < iVar5) {
        if (iVar5 < 0x65) {
          return iVar5;
        }
        return 100;
      }
    }
  }
  return 0;
}


