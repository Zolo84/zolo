// FUN_0051a2f0 @ 51a2f0 size=98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0051a2f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  float fStack_8;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  if (iVar3 != 0) {
    fStack_8 = 0.0;
    puVar2 = *(undefined4 **)(param_1 + 0x26);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[2];
      fVar4 = (float10)(**(code **)(*(int *)*puVar2 + 0x28))();
      fStack_8 = (float)(fVar4 + (float10)fStack_8);
      puVar2 = puVar1;
    }
    iVar3 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
    return (float10)fStack_8 / (float10)iVar3;
  }
  return (float10)_DAT_007e3380;
}


