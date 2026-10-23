// FUN_006a4f40 @ 6a4f40 size=184

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a4f40(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  *(undefined4 *)(param_1 + 0x94) = 0;
  if ((*(int *)(param_1 + 0x90) != 0) &&
     (cVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x90) + 0x3a) + 8))(), cVar3 == '\0')) {
    iVar1 = *(int *)(param_1 + 10);
    iVar2 = *(int *)(*(int *)(param_1 + 0x90) + 0x3e);
    while (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 8);
      iVar4 = FUN_004c9f81();
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 6);
        fVar5 = (float10)FUN_00527d00();
        fVar7 = (float10)_DAT_007e3380;
        fVar6 = fVar5;
        if (*(char *)(*(int *)(iVar1 + 0x12da) + 0x31 + iVar4 * 0x2c) != '\0') {
          fVar6 = fVar5 * (float10)_DAT_007e34e0;
          fVar7 = fVar5;
        }
        *(float *)(param_1 + 0x94) =
             (float)((fVar6 - fVar7 * (float10)_DAT_007e34c0) + (float10)*(float *)(param_1 + 0x94))
        ;
      }
    }
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) * _DAT_007e40b8;
  }
  return;
}


