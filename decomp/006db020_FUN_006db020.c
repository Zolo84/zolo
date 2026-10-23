// FUN_006db020 @ 6db020 size=233

undefined4 __fastcall FUN_006db020(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined4 unaff_EBX;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    if (*(char *)(param_1 + 0x42) == '\0') {
      uVar8 = 0;
      uVar7 = 0xff;
      uVar6 = 0xff;
    }
    else {
      uVar8 = 0xff;
      uVar7 = 0xff;
      uVar6 = 0xff;
    }
  }
  else if (*(char *)(param_1 + 0x42) == '\0') {
    uVar8 = 0xf8;
    uVar7 = 0xe8;
    uVar6 = 0xd0;
  }
  else {
    uVar8 = 0xff;
    uVar7 = 0xff;
    uVar6 = 0xff;
  }
  uVar5 = FUN_00584270(uVar6,uVar7,uVar8);
  if ((*(int **)(param_1 + 0x3e) != (int *)0x0) &&
     (*(int *)(*(int *)(param_1 + 0x3a) + 0x10) + *(int *)(param_1 + 0x12) <=
      *(int *)(param_1 + 0x28))) {
    (**(code **)(**(int **)(param_1 + 0x3e) + 0x18))
              (*(undefined4 *)(param_1 + 0xe),*(int *)(param_1 + 0x12) + 1);
    (**(code **)(**(int **)(param_1 + 0x3e) + 0x10))(unaff_EBX);
  }
  iVar1 = *(int *)(param_1 + 0xe);
  iVar2 = *(int *)(param_1 + 0x12);
  puVar4 = *(undefined4 **)(param_1 + -0xe);
  while (puVar4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar4[2];
    FUN_004133fd(*puVar4,iVar1 + 0x14,iVar2,DAT_00bd1bac,uVar5,param_1 + 0x1c);
    iVar2 = iVar2 + 1 + *(int *)(*(int *)(param_1 + 0x3a) + 0x10);
    puVar4 = puVar3;
  }
  return 0;
}


