// FUN_006d8e30 @ 6d8e30 size=88

undefined4 __fastcall FUN_006d8e30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    cVar4 = (**(code **)(*(int *)*puVar3 + 0x2c))();
    puVar3 = puVar1;
    if (cVar4 == '\x01') {
      iVar5 = iVar5 + 1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x2220e);
  if (*(int *)(iVar2 + 0x18) <= iVar5) {
    if (iVar2 != 0) {
      FUN_006d65d0();
      FUN_00796cd8(iVar2);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
  }
  return 1;
}


