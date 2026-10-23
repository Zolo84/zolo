// FUN_004e6cd0 @ 4e6cd0 size=241

void __fastcall FUN_004e6cd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x254) < 8) {
    iVar1 = *(int *)(param_1 + 0x12);
    iVar3 = FUN_004d8520(*(undefined4 *)(param_1 + 0x3fa),*(undefined4 *)(param_1 + 0x3fe));
    if (iVar3 != iVar1) {
      uVar2 = *(undefined4 *)(param_1 + 0x12);
      uVar4 = FUN_004d8520(*(undefined4 *)(param_1 + 0x3fa),*(undefined4 *)(param_1 + 0x3fe));
      FUN_00405ad0(s_armypos_for___d__is_in_wrong_pro_00848320,uVar2,uVar4);
    }
    iVar1 = *(int *)(param_1 + 0x12);
    iVar3 = FUN_004d8520(*(undefined4 *)(param_1 + 0x3f2),*(undefined4 *)(param_1 + 0x3f6));
    if (iVar3 != iVar1) {
      uVar2 = *(undefined4 *)(param_1 + 0x12);
      uVar4 = FUN_004d8520(*(undefined4 *)(param_1 + 0x3f2),*(undefined4 *)(param_1 + 0x3f6));
      FUN_00405ad0(s_armypos_for___d__is_in_wrong_pro_00848320,uVar2,uVar4);
    }
    iVar1 = *(int *)(param_1 + 0x3dc);
    iVar3 = FUN_004d8520(*(undefined4 *)(param_1 + 0x3e0),*(undefined4 *)(param_1 + 0x3e4));
    if ((iVar3 != iVar1) && (iVar1 != 0)) {
      uVar2 = *(undefined4 *)(param_1 + 0x12);
      uVar4 = FUN_004d8520(*(undefined4 *)(param_1 + 0x3e0),*(undefined4 *)(param_1 + 0x3e4));
      FUN_00405ad0(s_Port_for___d__is_in_wrong_seazon_008482dc,uVar2,
                   *(undefined4 *)(param_1 + 0x3dc),uVar4);
    }
  }
  return;
}


