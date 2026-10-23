// FUN_00468560 @ 468560 size=295

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00468560(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_c;
  int local_8;
  undefined1 local_4 [4];
  
  local_c = 0.0;
  cVar2 = FUN_0044beb0();
  if (cVar2 == '\0') goto LAB_0046867e;
  puVar8 = *(undefined4 **)(param_1 + 0xe8b6);
  local_c = 0.0;
  local_8 = 0;
  if (puVar8 == (undefined4 *)0x0) {
LAB_00468643:
    local_c = 1.4013e-45;
  }
  else {
    do {
      puVar1 = (undefined4 *)puVar8[2];
      iVar3 = FUN_004e9370(*puVar8);
      iVar7 = *(int *)(iVar3 + 0x482);
      if ((iVar7 != 0) && (*(int *)(iVar3 + 0x3d4) == param_1)) {
        iVar4 = FUN_0044e1d0();
        if (iVar7 != iVar4) {
          uVar5 = FUN_0044e1d0();
          piVar6 = (int *)FUN_004c7fad(local_4,uVar5);
          if (*piVar6 == 0) goto LAB_00468630;
        }
        if ((*(int *)(iVar3 + 0x3d8) != 0) &&
           ((*(int *)(iVar3 + 0x3d8) == param_1 ||
            (cVar2 = FUN_0044b280(*(undefined4 *)(param_1 + 6)), cVar2 != '\0')))) {
          FUN_004ed140();
          local_c = (float)__ftol();
        }
        if (*(int *)(iVar3 + 0x3d8) == param_1) {
          FUN_004ed140();
          local_8 = __ftol();
        }
      }
LAB_00468630:
      puVar8 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
    if ((int)local_c < 1) goto LAB_00468643;
  }
  local_c = _DAT_007e3374 - (float)local_8 / (float)(int)local_c;
  iVar7 = FUN_004a0750();
  if (*(int *)(iVar7 + 0x3d8) != param_1) {
    return (float10)local_c + (float10)_DAT_007e34e0;
  }
LAB_0046867e:
  return (float10)local_c;
}


