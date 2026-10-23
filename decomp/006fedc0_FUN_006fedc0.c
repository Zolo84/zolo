// FUN_006fedc0 @ 6fedc0 size=652

undefined4 __fastcall FUN_006fedc0(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_4;
  
  iVar4 = *DAT_00bd1bac;
  iVar1 = FUN_005841b0();
  puVar2 = (undefined2 *)(**(code **)(iVar4 + 4))(0,(iVar1 + -0x300 >> 1) + 0x206);
  iVar5 = 0;
  iVar4 = DAT_00bd1bac[1];
  iVar1 = FUN_005841b0();
  if (0 < ((iVar1 + -0x300 >> 1) + 0xfa) * iVar4) {
    do {
      iVar4 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      *puVar2 = *(undefined2 *)(*(int *)(param_1 + 0xc) + iVar4);
      iVar4 = DAT_00bd1bac[1];
      iVar1 = FUN_005841b0();
      puVar2 = puVar2 + 1;
    } while (iVar5 < ((iVar1 + -0x300 >> 1) + 0xfa) * iVar4);
  }
  (**(code **)(*DAT_00bd1bac + 0xc))();
  FUN_004136a0(s_eurostilecond20bold_bmp_0082f024);
  FUN_005841b0();
  FUN_005841b0();
  iVar4 = *(int *)(param_1 + 0x2a);
  iVar1 = DAT_00bd1bac[2] + -0x300 >> 1;
  *(int *)(iVar4 + 0x2c) = (DAT_00bd1bac[1] + -0x400 >> 1) + 0x19c;
  *(int *)(iVar4 + 0x30) = iVar1 + 0x2a9;
  piVar6 = DAT_00bd1bac;
  if (*(int *)(param_1 + 0x2e) != 0) {
    uVar7 = 0;
    uVar3 = FUN_00584270(0xff,0xff,0xff);
    iVar4 = iVar1 + 0x26a;
    iVar5 = FUN_005841a0(iVar4,piVar6,uVar3,uVar7);
    FUN_00413509(*(undefined4 *)(param_1 + 0x2e),iVar5 / 2,iVar4,piVar6,uVar3,uVar7);
    piVar6 = DAT_00bd1bac;
    if (*(int *)(param_1 + 0x32) != 0) {
      uVar7 = 0;
      uVar3 = FUN_00584270(0xff,0xff,0xff);
      iVar4 = iVar1 + 0x283;
      iVar5 = FUN_005841a0(iVar4,piVar6,uVar3,uVar7);
      FUN_00413509(*(undefined4 *)(param_1 + 0x32),iVar5 / 2,iVar4,piVar6,uVar3,uVar7);
    }
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else if (0x5f < *(int *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x18) = 0x5f;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 < 0x65) {
    if (iVar4 < 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 100;
  }
  *(int *)(*(int *)(param_1 + 0x2a) + 0x18) = iVar4;
  *(undefined4 *)(*(int *)(param_1 + 0x2a) + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(**(int **)(param_1 + 0x2a) + 0x10))(uStack_4);
  piVar6 = DAT_00bd1bac;
  if ((*(char *)(param_1 + 0x24) != '\0') && (*(int *)(param_1 + 0x10) != 0)) {
    uVar7 = 0;
    uVar3 = FUN_00584270(0xd0,0xe8,0xf8);
    iVar1 = iVar1 + 0x2ba;
    iVar4 = FUN_005841a0(iVar1,piVar6,uVar3,uVar7);
    FUN_00413509(*(undefined4 *)(param_1 + 0x10),iVar4 / 2,iVar1,piVar6,uVar3,uVar7);
  }
  FUN_00584050(&stack0xffffffe4);
  FUN_00584050(&stack0xffffffe4);
  return 0;
}


