// FUN_00436110 @ 436110 size=32

int __fastcall FUN_00436110(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x18))();
    iVar3 = iVar3 + iVar2;
  }
  return iVar3;
}


