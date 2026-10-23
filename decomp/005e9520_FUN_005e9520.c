// FUN_005e9520 @ 5e9520 size=560

void __thiscall FUN_005e9520(int param_1,int *param_2,int param_3,int param_4,char param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puStack_120;
  char *pcStack_11c;
  undefined1 auStack_100 [244];
  int iStack_c;
  
  pcStack_11c = s_eurostilecond14bold_bmp_0083bcc0;
  puStack_120 = (undefined *)0x5e953c;
  FUN_004136a0();
  pcStack_11c = (char *)0x0;
  puStack_120 = (undefined *)0x0;
  FUN_00584270(0);
  pcStack_11c = (char *)0x5e9564;
  (**(code **)(*param_2 + 0xc))();
  pcStack_11c = (char *)0x5e956b;
  pcStack_11c = (char *)FUN_00527b40();
  puStack_120 = &DAT_008390a0;
  FUN_007a630a(auStack_100);
  if (param_5 == '\0') {
    param_4 = param_4 + 4;
    puStack_120 = (undefined *)(param_3 + 200);
    pcStack_11c = (char *)param_4;
    (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    iVar3 = param_4;
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_3 + 0xb8,param_4);
    (**(code **)(**(int **)(param_1 + 8) + 0x18))(param_3 + 0xc0,param_4);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x18))(param_3 + 0x98,iStack_c + 0x10);
    FUN_00413369(&puStack_120,param_3 + 0xb0,param_4,DAT_00bd1bac,iVar3,0);
  }
  else {
    param_4 = param_4 + 4;
    puStack_120 = (undefined *)(param_3 + 8);
    pcStack_11c = (char *)param_4;
    (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    iVar3 = param_4;
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_3 + 0x20,param_4);
    (**(code **)(**(int **)(param_1 + 8) + 0x18))(param_3 + 0x28,param_4);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x18))(param_3 + 0x30,iStack_c + 0x10);
    FUN_004133fd(&puStack_120,param_3 + 0x30,param_4,DAT_00bd1bac,iVar3,0);
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x10))(0);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(0);
  iVar3 = (**(code **)(*param_2 + 0xc))();
  puVar2 = *(undefined4 **)(iVar3 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    (**(code **)(*(int *)*puVar2 + 0xac))();
    puVar2 = puVar1;
  }
  (**(code **)(*param_2 + 0xc))();
  FUN_00527840();
  iVar3 = __ftol();
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x19 < iVar3) {
    iVar3 = 0x19;
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0x38))(iVar3);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(0);
  (**(code **)(*param_2 + 0xc))();
  FUN_005277e0();
  iVar3 = __ftol();
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x19 < iVar3) {
    iVar3 = 0x19;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x38))(iVar3);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(0);
  return;
}


