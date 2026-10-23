// FUN_004b2b60 @ 4b2b60 size=399

void __thiscall FUN_004b2b60(int param_1,int param_2,int *param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined2 *puVar7;
  int *piVar8;
  char unaff_retaddr;
  int local_4;
  
  iVar6 = *(int *)(param_1 + 0xc);
  local_4 = param_1;
  do {
    if (iVar6 == 0) goto LAB_004b2bbb;
    puVar4 = (undefined4 *)FUN_004b4050((short)&local_4,0);
    iVar1 = *(int *)(*(int *)*puVar4 + 4);
  } while (((iVar1 == 0) || (*(int *)(iVar1 + 0xa0) != *(int *)(param_2 + 0xe))) ||
          (*(short *)(iVar1 + 0x9e) != *(short *)(param_2 + 0xc)));
  piVar5 = *(int **)(*(int *)*puVar4 + 4);
  if (piVar5 == (int *)0x0) {
LAB_004b2bbb:
    piVar5 = (int *)FUN_004b22d0((short)param_2);
  }
  if (param_4 == '\0') {
    piVar8 = piVar5 + 0x11;
    (**(code **)(**(int **)(param_2 + 0x84) + 0xc))();
    iVar6 = FUN_005279c0();
    if (*piVar8 < iVar6) {
      (**(code **)(**(int **)(param_2 + 0x84) + 0xc))();
      iVar6 = FUN_005279c0();
      *piVar8 = iVar6;
    }
  }
  else {
    (**(code **)(**(int **)(param_2 + 0x80) + 0xc))();
    iVar6 = FUN_005279c0();
    piVar8 = piVar5;
    if (*piVar5 < iVar6) {
      (**(code **)(**(int **)(param_2 + 0x80) + 0xc))();
      iVar6 = FUN_005279c0();
      *piVar5 = iVar6;
    }
  }
  piVar2 = param_3;
  cVar3 = (**(code **)(*param_3 + 0x30))();
  if (cVar3 != '\0') {
    *(undefined1 *)((int)piVar5 + 0xa5) = 1;
  }
  FUN_0051c480();
  puVar7 = (undefined2 *)FUN_0044df10();
  piVar8 = (int *)(**(code **)(piVar8[6] + 0x28))
                            (&param_3,*puVar7,(short)((uint)*(undefined4 *)(puVar7 + 1) >> 0x10));
  if (*piVar8 == 0) {
    FUN_0051c480();
    puVar7 = (undefined2 *)FUN_0044df10();
    FUN_004739f0(*puVar7,(short)((uint)*(undefined4 *)(puVar7 + 1) >> 0x10));
  }
  if (unaff_retaddr == '\0') {
    cVar3 = (**(code **)(*piVar2 + 0x2c))();
    if (cVar3 != '\0') {
      *(undefined1 *)((int)piVar5 + 0xa6) = 1;
    }
    if (*(int *)((int)piVar5 + 0x6e) == 0) {
      iVar6 = FUN_00522770();
      *(undefined4 *)((int)piVar5 + 0x6e) = *(undefined4 *)(iVar6 + 6);
    }
  }
  else if (*(int *)((int)piVar5 + 0x2a) == 0) {
    iVar6 = FUN_00522770();
    *(undefined4 *)((int)piVar5 + 0x2a) = *(undefined4 *)(iVar6 + 6);
    return;
  }
  return;
}


