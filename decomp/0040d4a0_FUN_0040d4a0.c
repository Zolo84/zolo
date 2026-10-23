// FUN_0040d4a0 @ 40d4a0 size=664

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040d4a0(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iStack_14;
  
  if (*(int *)(param_1 + 0x36) == 0) {
    *(undefined4 *)(param_1 + 0x32) = 0;
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 4))();
    *(int *)(param_1 + 0x36) = iVar1 + -1;
  }
  FUN_00796cd8(*(undefined4 *)(param_1 + 0x1e));
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 4))();
  if (1 < iVar1) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 4))();
    iVar1 = iVar1 * 0xc + -0xc;
    *(int *)(param_1 + 0x22) = iVar1;
    pvVar2 = operator_new(iVar1 * 0x18);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    *(void **)(param_1 + 0x1e) = pvVar2;
    iStack_14 = 0;
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 4))();
    if (iVar1 != 1 && -1 < iVar1 + -1) {
      iVar1 = 0;
      do {
        iVar5 = 0xc;
        iVar4 = iVar1;
        do {
          uVar3 = __ftol();
          *(undefined4 *)(iVar4 + 4 + *(int *)(param_1 + 0x1e)) = uVar3;
          uVar3 = __ftol();
          *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x1e)) = uVar3;
          uVar3 = __ftol();
          *(undefined4 *)(iVar4 + 0xc + *(int *)(param_1 + 0x1e)) = uVar3;
          uVar3 = __ftol();
          *(undefined4 *)(iVar4 + 8 + *(int *)(param_1 + 0x1e)) = uVar3;
          uVar3 = __ftol();
          *(undefined4 *)(iVar4 + 0x14 + *(int *)(param_1 + 0x1e)) = uVar3;
          uVar3 = __ftol();
          *(undefined4 *)(iVar4 + 0x10 + *(int *)(param_1 + 0x1e)) = uVar3;
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 + 0x18;
        } while (iVar5 != 0);
        iStack_14 = iStack_14 + 1;
        iVar4 = (**(code **)(*(int *)(param_1 + 0xc) + 4))();
        iVar1 = iVar1 + 0x120;
      } while (iStack_14 < iVar4 + -1);
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return;
}


