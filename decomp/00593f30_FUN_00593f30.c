// FUN_00593f30 @ 593f30 size=39

void __fastcall FUN_00593f30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  for (iVar2 = *(int *)(param_1 + 0x28); iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = (undefined4 *)puVar1[2];
  }
  (**(code **)(*(int *)*puVar1 + 0x18))();
  DAT_00bda0fc = 0;
  return;
}


