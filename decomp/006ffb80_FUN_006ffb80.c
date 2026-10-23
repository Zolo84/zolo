// FUN_006ffb80 @ 6ffb80 size=192

undefined4 __fastcall FUN_006ffb80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_005841a0();
  iVar1 = iVar1 / 2;
  iVar2 = FUN_005841b0();
  iVar2 = iVar2 / 2;
  (**(code **)(**(int **)(param_1 + 4) + 0x18))(iVar1 + -300,iVar2 + -0x20);
  (**(code **)(**(int **)(param_1 + 4) + 0x10))(0);
  FUN_00438050(iVar1 + -0xfa,iVar2);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(0);
  uVar5 = DAT_00bd1bac;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar6 = 0;
    uVar3 = FUN_00584270(0xd0,0xe8,0xf8);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    iVar2 = iVar2 + -0x15;
    iVar1 = iVar1 + -0x122;
    FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    FUN_00413483(uVar4,iVar1,iVar2,uVar5,uVar3,uVar6);
    return 0;
  }
  return 0;
}


