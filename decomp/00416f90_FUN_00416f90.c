// FUN_00416f90 @ 416f90 size=296

undefined4 __thiscall FUN_00416f90(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x62);
  iVar4 = *(int *)(param_1 + 0x7a);
  if (*(int *)(iVar1 + 0x34) != 0) {
    *(undefined4 *)(iVar1 + 0x238) = 4;
    if (0x1f < iVar4) {
      iVar4 = 0;
      *(undefined4 *)(iVar1 + 0x238) = 1;
    }
    *(int *)(iVar1 + 0x30) = iVar4;
  }
  if (param_2 == 6) {
    FUN_00415760(*(undefined4 *)(param_1 + 0x86),*(undefined4 *)(param_1 + 0x8a));
    uVar2 = FUN_00415680(6);
    return uVar2;
  }
  uVar3 = *(int *)(param_1 + 0x82) + *(int *)(param_1 + 0xe) + DAT_00a98464;
  uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
  if (4 < (int)uVar3) {
    uVar3 = 4;
  }
  *(uint *)(*(int *)(param_1 + 0x62) + 0x23e) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x62) + 0x24e) = *(undefined4 *)(param_1 + 0x6a);
  FUN_00415d30(DAT_00bd1bac);
  FUN_00415ed0(0,0,*(undefined4 *)(DAT_00bd1bac + 4),*(undefined4 *)(DAT_00bd1bac + 8));
  FUN_004d8ba0(*(int *)(param_1 + 0x86) - *(int *)(param_1 + 0x1a),
               *(int *)(param_1 + 0x8a) - *(int *)(param_1 + 0x1e),&local_8);
  FUN_00406300(local_8,local_4,*(undefined4 *)(param_1 + 0x2e),*(undefined4 *)(param_1 + 0x32),
               *(undefined4 *)(param_1 + 0x36),*(undefined4 *)(param_1 + 0x3a),param_1 + 0x3e,
               *(undefined4 *)(param_1 + 0x2a),0);
  return 0;
}


