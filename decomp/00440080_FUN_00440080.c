// FUN_00440080 @ 440080 size=242

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00440080(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  float local_c;
  
  fVar1 = *(float *)((int)param_1 + 0x12);
  iVar5 = (**(code **)(*param_1 + 4))();
  iVar5 = iVar5 + -1;
  piVar6 = (int *)param_1[1];
  for (piVar2 = piVar6; piVar4 = piVar6, piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    fVar1 = fVar1 - *(float *)(*piVar2 + 0xa0);
  }
  while (piVar4 != (int *)0x0) {
    piVar2 = piVar4 + 2;
    iVar3 = *piVar4;
    piVar4 = (int *)*piVar2;
    if (*(char *)(*(int *)(iVar3 + 0x8c) + 0x86) != '\0') {
      iVar5 = iVar5 + -1;
    }
  }
  local_c = fVar1;
  if (iVar5 < 1) {
    for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
      if (local_c != _DAT_007e3380) {
        fVar7 = (float10)FUN_00440180(*piVar6,fVar1);
        local_c = (float)((float10)local_c - fVar7);
      }
    }
  }
  else if (piVar6 != (int *)0x0) {
    do {
      if ((local_c != _DAT_007e3380) && (*(char *)(*piVar6 + 0xb4) == '\0')) {
        fVar7 = (float10)FUN_00440180(*piVar6,fVar1 / (float)iVar5);
        local_c = (float)((float10)local_c - fVar7);
      }
      piVar6 = (int *)piVar6[2];
    } while (piVar6 != (int *)0x0);
    return;
  }
  return;
}


