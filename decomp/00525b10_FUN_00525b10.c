// FUN_00525b10 @ 525b10 size=138

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00525b10(int param_1)

{
  int *piVar1;
  float fVar2;
  float10 fVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack_c;
  
  iVar5 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  if (iVar5 < 1) {
    return (float10)_DAT_007e3380;
  }
  fStack_c = 0.0;
  piVar4 = *(int **)(param_1 + 0x26);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    fVar2 = *(float *)(*piVar4 + 0xf4);
    fVar6 = (float10)FUN_004fd510();
    fVar3 = (float10)_DAT_007e4088;
    fVar7 = (float10)FUN_004fd510();
    fStack_c = (float)((float10)(float)((fVar6 - (float10)fVar2) * fVar3) / fVar7 +
                      (float10)fStack_c);
    piVar4 = piVar1;
  }
  iVar5 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  return (float10)fStack_c / (float10)iVar5;
}


