// FUN_004d1350 @ 4d1350 size=51

float10 __fastcall FUN_004d1350(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar1 = *(int *)(param_1 + 0x36); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    iVar2 = FUN_0066eff0();
    iVar3 = iVar3 + iVar2;
  }
  return (float10)iVar3 / (float10)*(float *)(param_1 + 0x10);
}


