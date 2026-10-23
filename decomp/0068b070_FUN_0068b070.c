// FUN_0068b070 @ 68b070 size=145

void __thiscall FUN_0068b070(int *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_2 == '\0') {
    piVar6 = param_1 + 0x24;
    uVar2 = (**(code **)(*param_1 + 0xe0))(piVar6);
    FUN_006a9ef0(uVar2,piVar6);
  }
  else {
    piVar6 = (int *)param_1[0x25];
    while (piVar6 != (int *)0x0) {
      piVar5 = (int *)piVar6[2];
      iVar1 = *piVar6;
      iVar4 = *(int *)(iVar1 + 0xc);
      iVar3 = FUN_0044e1b0();
      piVar6 = piVar5;
      if ((iVar4 != iVar3) && (iVar4 = FUN_0051b230(), *(int *)(iVar4 + 0x182) == 0)) {
        piVar5 = (int *)(**(code **)(*param_1 + 0xe0))();
        (**(code **)(*piVar5 + 0x1a8))(iVar1);
      }
    }
  }
  piVar6 = param_1 + 0x2e;
  uVar2 = (**(code **)(*param_1 + 0xe0))(piVar6);
  FUN_006a9ef0(uVar2,piVar6);
  return;
}


