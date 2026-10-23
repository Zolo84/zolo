// FUN_00415680 @ 415680 size=211

undefined4 __fastcall FUN_00415680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if ((*(char *)(param_1 + 0xc) == '\0') && (iVar1 = *(int *)(param_1 + 0x62), iVar1 != 0)) {
    if ((*(int *)(iVar1 + 0x238) != 3) &&
       ((*(int *)(iVar1 + 0x238) != 5 &&
        (iVar6 = *(int *)(param_1 + 0x7a), *(int *)(iVar1 + 0x34) != 0)))) {
      *(undefined4 *)(iVar1 + 0x238) = 4;
      if (0x1f < iVar6) {
        iVar6 = 0;
        *(undefined4 *)(iVar1 + 0x238) = 1;
      }
      *(int *)(iVar1 + 0x30) = iVar6;
    }
    iVar1 = *(int *)(param_1 + 0x6e);
    iVar6 = *(int *)(param_1 + 0x1a);
    iVar2 = *(int *)(param_1 + 0x12);
    iVar3 = *(int *)(param_1 + 0x1e);
    iVar4 = *(int *)(param_1 + 0x16);
    iVar5 = *(int *)(param_1 + 0x72);
    uVar7 = ((int)*(uint *)(param_1 + 0xe) < 0) - 1 & *(uint *)(param_1 + 0xe);
    if (4 < (int)uVar7) {
      uVar7 = 4;
    }
    *(uint *)(*(int *)(param_1 + 0x62) + 0x23e) = uVar7;
    *(undefined4 *)(*(int *)(param_1 + 0x62) + 0x24e) = *(undefined4 *)(param_1 + 0x6a);
    FUN_00406300((iVar1 - iVar6) + iVar2,(iVar5 - iVar3) + iVar4,*(undefined4 *)(param_1 + 0x2e),
                 *(undefined4 *)(param_1 + 0x32),*(undefined4 *)(param_1 + 0x36),
                 *(undefined4 *)(param_1 + 0x3a),param_1 + 0x3e,*(undefined4 *)(param_1 + 0x2a),0);
  }
  return 0;
}


