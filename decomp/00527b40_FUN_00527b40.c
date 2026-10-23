// FUN_00527b40 @ 527b40 size=37

int __fastcall FUN_00527b40(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar2 = *(undefined4 **)(param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    iVar3 = (**(code **)(*(int *)*puVar2 + 0xac))();
    iVar4 = iVar4 + iVar3;
    puVar2 = puVar1;
  }
  return iVar4;
}


