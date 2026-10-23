// FUN_0079f4ef @ 79f4ef size=93

void __fastcall FUN_0079f4ef(int param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)FUN_007a9a85();
  uVar1 = FUN_0079c11f((int)*(char *)*puVar2);
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_0079c11f((int)*(char *)puVar2[1]);
  *(undefined2 *)(param_1 + 0xe) = uVar1;
  uVar3 = FUN_0079bcd3(puVar2[2],0);
  *(undefined4 *)(param_1 + 8) = uVar3;
  uVar3 = FUN_007a1aff(s_false_00874898,0);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar3 = FUN_007a1aff(&DAT_00874890,0);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return;
}


