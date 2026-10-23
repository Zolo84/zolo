// FUN_00516f50 @ 516f50 size=49

int __fastcall FUN_00516f50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x2aa) + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    iVar3 = (**(code **)(*(int *)*puVar2 + 0x10))();
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x22) + 4))();
    iVar4 = iVar4 + iVar3;
    puVar2 = puVar1;
  }
  return iVar4;
}


