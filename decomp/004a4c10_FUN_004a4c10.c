// FUN_004a4c10 @ 4a4c10 size=100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004a4c10(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float10 fVar9;
  
  fVar1 = *(float *)(param_3 + 0x20);
  fVar2 = *(float *)(param_2 + 8);
  fVar3 = *(float *)(param_2 + 0x20);
  fVar4 = *(float *)(param_3 + 8);
  fVar5 = *(float *)(*(int *)(param_1 + 0x120) + 0x260);
  fVar6 = *(float *)(*(int *)(param_1 + 0x120) + 0x25c);
  iVar8 = _rand();
  fVar7 = (float)(iVar8 % 100) * _DAT_007e46cc;
  fVar9 = (float10)FUN_004ed1a0();
  return fVar9 * (float10)_DAT_007e46cc + (float10)fVar7 +
         (float10)((fVar1 * fVar2 - (fVar3 * fVar4) / fVar5) * fVar6);
}


