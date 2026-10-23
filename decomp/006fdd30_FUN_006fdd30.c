// FUN_006fdd30 @ 6fdd30 size=276

void __thiscall FUN_006fdd30(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = DAT_00bd1bac;
  iVar4 = *(int *)(DAT_00bd1bac + 4) + -0x400 >> 1;
  iVar5 = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
  if (param_3 == param_4) {
    uVar7 = 0;
    uVar2 = FUN_00584270(0xff,0xff,0xff);
    iVar4 = iVar4 + 0x106;
    iVar5 = iVar5 + 0xa1 + param_4 * 0x28;
    uVar3 = FUN_0042b6c9(param_2);
    FUN_00413483(uVar3,iVar4,iVar5,iVar6,uVar2,uVar7);
    uVar7 = 0xff;
    uVar3 = 0xff;
    uVar2 = 0xff;
  }
  else {
    uVar7 = 0;
    uVar2 = FUN_00584270(0x80,0x80,0x80);
    iVar4 = iVar4 + 0x106;
    iVar5 = iVar5 + 0xa1 + param_4 * 0x28;
    uVar3 = FUN_0042b6c9(param_2);
    FUN_00413483(uVar3,iVar4,iVar5,iVar6,uVar2,uVar7);
    uVar7 = 0x80;
    uVar3 = 0x80;
    uVar2 = 0x80;
  }
  uVar1 = FUN_00584270(uVar2,uVar3,uVar7);
  *(undefined2 *)(*(int *)(param_1 + 0x22) + 0x5a) = uVar1;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x22) + 0x12) + 0x10))(0);
  return;
}


