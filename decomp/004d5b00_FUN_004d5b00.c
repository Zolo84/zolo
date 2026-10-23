// FUN_004d5b00 @ 4d5b00 size=215

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d5b00(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x10a) + 4))();
  fVar4 = (float)(iVar3 + 1);
  iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
  if (*(int *)(iVar3 + 0x3d4) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x12a) + 6);
    FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
    cVar2 = FUN_0044b280(uVar1);
    if (cVar2 != '\0') {
      fVar4 = fVar4 * _DAT_007e3650;
    }
  }
  iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
  if (*(int *)(iVar3 + 0x3d4) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x12a) + 6);
    FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    FUN_0044b280(uVar1);
  }
  __ftol(fVar4);
  return;
}


