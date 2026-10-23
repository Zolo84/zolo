// FUN_00462580 @ 462580 size=446

void __thiscall FUN_00462580(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;
  int *in_stack_ffffffdc;
  undefined4 uVar9;
  int iStack_1c;
  
  iStack_1c = 0;
  FUN_005896d0();
  uVar7 = *(undefined4 *)(DAT_00893530 + 0x14);
  puVar4 = (undefined4 *)(param_2 * 0x2c + 0x1a + *(int *)(param_1 + 0x12da));
  sVar8 = *(short *)(DAT_00893530 + 0x18) + -10;
  *puVar4 = uVar7;
  *(short *)(puVar4 + 1) = sVar8;
  iVar6 = (&DAT_0089cad8)[param_2];
  piVar2 = DAT_00d615f6;
  if (iVar6 != 0) {
    iStack_1c = 0;
    FUN_005896d0();
    puVar4 = (undefined4 *)(*(int *)(iVar6 + 0x12da) + 0x1a + *(int *)(param_1 + 6) * 0x2c);
    *puVar4 = uVar7;
    *(short *)(puVar4 + 1) = sVar8;
    piVar2 = DAT_00d615f6;
  }
  do {
    if (piVar2 == (int *)0x0) goto LAB_004626c0;
    piVar1 = piVar2 + 2;
    puVar4 = (undefined4 *)*piVar2;
  } while (((*(int *)((int)puVar4 + 0x1a) != param_2) ||
           (*(int *)((int)puVar4 + 0x16) != *(int *)(param_1 + 6))) &&
          ((piVar2 = (int *)*piVar1, *(int *)((int)puVar4 + 0x1a) != *(int *)(param_1 + 6) ||
           (*(int *)((int)puVar4 + 0x16) != param_2))));
  iStack_1c = (&DAT_0089cad8)[*(int *)((int)puVar4 + 0x16)];
  iVar6 = (&DAT_0089cad8)[*(int *)((int)puVar4 + 0x1a)];
  if (((iStack_1c != 0) && (iVar6 != 0)) && (*(int *)((int)puVar4 + 0x1e) == 0)) {
    *(undefined1 *)(*(int *)(iStack_1c + 0x12da) + 0x35 + *(int *)(iVar6 + 6) * 0x2c) = 0;
    piVar2 = (int *)(iStack_1c + 6);
    iStack_1c = *(int *)(iVar6 + 0x12da);
    *(undefined1 *)(iStack_1c + 0x35 + *piVar2 * 0x2c) = 0;
  }
  if (*(int *)((int)puVar4 + 0x1e) != 1) {
    in_stack_ffffffdc = &iStack_1c;
    puVar3 = (undefined4 *)(DAT_00d615f2 + 0x1c);
    (**(code **)(DAT_00d615f2 + 0x28))(&iStack_1c,puVar4);
    (*(code *)*puVar3)();
    if (puVar4 != (undefined4 *)0x0) {
      iStack_1c = 1;
      (**(code **)*puVar4)();
    }
  }
LAB_004626c0:
  iStack_1c = param_2;
  iVar6 = FUN_00586940();
  iStack_1c = 0x4626d3;
  cVar5 = FUN_0042e980();
  if ((cVar5 != '\0') && (iVar6 != 0)) {
    iStack_1c = 1;
    uVar9 = 0x4626e5;
    uVar7 = FUN_00447250();
    FUN_00449290(uVar7);
    FUN_00460560(in_stack_ffffffdc,uVar9);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x12da) + param_2 * 0x2c + 0x2c) = 1;
  iStack_1c = 0x462714;
  FUN_00586760();
  if (*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) == param_2) {
    *(undefined4 *)(*(int *)(param_1 + 0x12da) + 0x3b30) = 0;
  }
  *(undefined1 *)(param_1 + 0x34ac + param_2) = 0;
  return;
}


