// FUN_0079b4b4 @ 79b4b4 size=73

void __fastcall FUN_0079b4b4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_007a9a85();
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)*puVar1;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)puVar1[1];
  uVar2 = FUN_0079bcd3(puVar1[2],0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = FUN_0079bcd3(s_false_00874898,0);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = FUN_0079bcd3(&DAT_00874890,0);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}


