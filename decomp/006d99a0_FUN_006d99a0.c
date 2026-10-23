// FUN_006d99a0 @ 6d99a0 size=102

void __fastcall FUN_006d99a0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x2220e) + 0x20);
  uVar3 = *puVar2;
  iVar4 = 0;
  do {
    puVar2 = (undefined4 *)puVar2[2];
    bVar5 = iVar4 != 0;
    iVar4 = iVar4 + -1;
  } while (bVar5);
  uVar1 = *puVar2;
  uVar3 = FUN_0042b6c9(uVar3);
  *(undefined4 *)(param_1 + 0x22244) = uVar3;
  uVar3 = FUN_0042b6c9(uVar1);
  iVar4 = *(int *)(param_1 + 0x2220e);
  *(undefined4 *)(param_1 + 0x22248) = uVar3;
  if (iVar4 != 0) {
    FUN_006d65d0();
    FUN_00796cd8(iVar4);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return;
}


