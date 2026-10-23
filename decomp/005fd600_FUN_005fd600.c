// FUN_005fd600 @ 5fd600 size=914

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005fd600(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  undefined2 *puVar9;
  int *piVar10;
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  (**(code **)(**(int **)(param_1 + 0xaa) + 0x50))();
  (**(code **)(**(int **)(param_1 + 0xae) + 0x50))();
  (**(code **)(**(int **)(param_1 + 0xb2) + 0x50))();
  (**(code **)(**(int **)(param_1 + 0xb6) + 0x50))();
  bVar5 = false;
  iVar1 = (&DAT_0089cad8)[*(int *)(param_1 + 0xa0)];
  iVar2 = (&DAT_0089cad8)[*(int *)(param_1 + 0xa4)];
  puVar6 = *(undefined4 **)(iVar1 + 0xe8a4);
  while ((puVar6 != (undefined4 *)0x0 && (!bVar5))) {
    puVar3 = (undefined4 *)puVar6[2];
    iVar8 = FUN_004e9370((short)*puVar6);
    puVar6 = puVar3;
    if ((*(int *)(iVar1 + 0x117de) != *(int *)(iVar8 + 0x12)) &&
       (cVar7 = FUN_004e8ab0((short)iVar1), cVar7 == '\0')) {
      bVar5 = true;
    }
  }
  if ((((((iVar1 != DAT_00d0ca90) || (_DAT_00d7cb28 != _DAT_007e3374)) &&
        (_DAT_00d7cb28 != _DAT_007e5e34)) &&
       ((cVar7 = FUN_0044b300((short)*(undefined4 *)(iVar1 + 6)), cVar7 == '\0' &&
        (*(int *)(*(int *)(iVar2 + 0x12da) + 0x3b30) != *(int *)(iVar1 + 6))))) &&
      (*(int *)(*(int *)(iVar1 + 0x12da) + 0x3b30) != *(int *)(iVar2 + 6))) || (!bVar5)) {
    piVar10 = *(int **)(param_1 + 0xaa);
    if (*(char *)((int)piVar10 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar10 + 0x60))();
    *(undefined1 *)((int)piVar10 + 0x86) = 1;
  }
  bVar5 = false;
  puVar9 = *(undefined2 **)(iVar1 + 0x360c);
  if (*(undefined2 **)(iVar1 + 0x360c) != (undefined2 *)0x0) {
    do {
      puVar4 = *(undefined2 **)(puVar9 + 5);
      uStack_8 = *puVar9;
      uStack_6 = *(undefined4 *)(puVar9 + 1);
      iVar8 = FUN_00428460((short)&uStack_8);
      if ((iVar8 != 0) && (iVar8 != 8)) {
        puVar9 = (undefined2 *)FUN_0044df10();
        piVar10 = (int *)FUN_004582e0(*puVar9,(short)((uint)*(undefined4 *)(puVar9 + 1) >> 0x10));
        cVar7 = (**(code **)(*piVar10 + 0x24))();
        if (cVar7 == '\0') {
          bVar5 = true;
        }
        if ((((iVar1 != DAT_00d0ca90) || (_DAT_00d7cb24 != _DAT_007e3374)) &&
            (_DAT_00d7cb24 != _DAT_007e5e34)) &&
           (((cVar7 = FUN_0044b300((short)*(undefined4 *)(iVar1 + 6)), cVar7 == '\0' &&
             (*(int *)(*(int *)(iVar2 + 0x12da) + 0x3b30) != *(int *)(iVar1 + 6))) &&
            (*(int *)(*(int *)(iVar1 + 0x12da) + 0x3b30) != *(int *)(iVar2 + 6))))) {
          bVar5 = false;
        }
      }
      puVar9 = puVar4;
    } while (puVar4 != (undefined2 *)0x0);
    if (bVar5) goto LAB_005fd840;
  }
  piVar10 = *(int **)(param_1 + 0xae);
  if (*(char *)((int)piVar10 + 0xa2) != '\0') {
    FUN_00433930();
  }
  (**(code **)(*piVar10 + 0x60))();
  *(undefined1 *)((int)piVar10 + 0x86) = 1;
LAB_005fd840:
  if (((iVar1 != DAT_00d0ca90) || (_DAT_00d7cb20 != _DAT_007e3374)) &&
     ((_DAT_00d7cb20 != _DAT_007e5e34 &&
      (cVar7 = FUN_00586230((short)*(undefined4 *)(iVar2 + 6)), cVar7 == '\0')))) {
    piVar10 = *(int **)(param_1 + 0xb2);
    if (*(char *)((int)piVar10 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar10 + 0x60))();
    *(undefined1 *)((int)piVar10 + 0x86) = 1;
  }
  if (DAT_00dc1540 == '\0') {
    piVar10 = *(int **)(param_1 + 0xb6);
    if (*(char *)((int)piVar10 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar10 + 0x60))();
    *(undefined1 *)((int)piVar10 + 0x86) = 1;
  }
  cVar7 = FUN_004a74e0((short)*(undefined4 *)(iVar2 + 6));
  if ((cVar7 != '\0') || (cVar7 = FUN_004a74e0((short)*(undefined4 *)(iVar1 + 6)), cVar7 != '\0')) {
    piVar10 = *(int **)(param_1 + 0xb6);
    if (*(char *)((int)piVar10 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar10 + 0x60))();
    *(undefined1 *)((int)piVar10 + 0x86) = 1;
    piVar10 = *(int **)(param_1 + 0xb2);
    if (*(char *)((int)piVar10 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar10 + 0x60))();
    *(undefined1 *)((int)piVar10 + 0x86) = 1;
  }
  cVar7 = FUN_004a7500((short)*(undefined4 *)(iVar2 + 6));
  if ((cVar7 != '\0') || (cVar7 = FUN_004a7500((short)*(undefined4 *)(iVar1 + 6)), cVar7 != '\0')) {
    piVar10 = *(int **)(param_1 + 0xae);
    if (*(char *)((int)piVar10 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar10 + 0x60))();
    *(undefined1 *)((int)piVar10 + 0x86) = 1;
  }
  return;
}


