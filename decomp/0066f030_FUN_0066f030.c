// FUN_0066f030 @ 66f030 size=97

void __fastcall FUN_0066f030(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00669ff0();
  iVar2 = FUN_00669770(uVar1);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar2 + 4);
  *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(iVar2 + 8);
  *(undefined4 *)(param_1 + 0x9a) = *(undefined4 *)(iVar2 + 10);
  *(undefined4 *)(param_1 + 0x9e) = *(undefined4 *)(iVar2 + 0xe);
  *(undefined2 *)(param_1 + 0xa2) = *(undefined2 *)(iVar2 + 0x12);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar2 + 0x18);
  FUN_00669740();
  return;
}


