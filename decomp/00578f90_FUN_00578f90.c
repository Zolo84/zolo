// FUN_00578f90 @ 578f90 size=133

undefined4 __fastcall FUN_00578f90(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (puVar5 == (undefined4 *)0x0) {
    return 0;
  }
  uVar6 = *(uint *)(param_1 + 8);
  if (uVar6 == 1) {
    uVar3 = *puVar5;
    FUN_00796cd8(puVar5);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar2 = uVar1 >> 1;
    uVar4 = uVar1 + uVar2;
    if (uVar6 < uVar4) {
      puVar5 = puVar5 + 1;
      uVar4 = uVar1;
    }
    else {
      puVar5 = puVar5 + 2;
    }
    if (uVar2 == 1) {
      uVar3 = *(undefined4 *)*puVar5;
      FUN_00796cd8((undefined4 *)*puVar5);
      *puVar5 = 0;
    }
    else {
      uVar3 = FUN_00579600(uVar6,uVar4,uVar2);
    }
  }
  uVar6 = *(int *)(param_1 + 8) - 1;
  *(uint *)(param_1 + 8) = uVar6;
  if (uVar6 < *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) >> 1;
  }
  return uVar3;
}


