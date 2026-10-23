// FUN_0047c1b0 @ 47c1b0 size=259

undefined4 FUN_0047c1b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  iVar4 = FUN_0050b140((short)(*(int *)(param_1 + 4) + 0xe));
  if ((iVar4 != 0) && (*(char *)(iVar4 + 0x2d) == '\0')) {
    if (*(int *)(iVar4 + 0x5e) != 0) {
      FUN_0051c4a0(0);
      uVar8 = (undefined2)iVar4;
      puVar2 = *(undefined4 **)(*(int *)(iVar4 + 0x5e) + 0x120);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar2[2];
        (**(code **)(*(int *)*puVar2 + 0x38))(uVar8);
        puVar2 = puVar1;
      }
      iVar5 = FUN_00522770();
      if (iVar5 != 0) {
        iVar5 = FUN_00522770();
        piVar6 = (int *)(**(code **)(*(int *)(iVar5 + 0x117f4) + 0x28))((short)&param_1,uVar8);
        if (*piVar6 == 0) {
          FUN_00522770(uVar8);
          FUN_00425f10(uVar8);
        }
      }
      FUN_0050a020(0);
    }
    *(undefined1 *)(iVar4 + 0x2c) = 1;
    puVar7 = (undefined2 *)FUN_0044df10();
    piVar6 = (int *)FUN_00465af0(*puVar7,(short)((uint)*(undefined4 *)(puVar7 + 1) >> 0x10));
    cVar3 = (**(code **)(*piVar6 + 0x24))();
    if (cVar3 == '\0') {
      puVar7 = (undefined2 *)FUN_0044df10();
      uVar8 = *puVar7;
      uVar9 = (undefined2)((uint)*(undefined4 *)(puVar7 + 1) >> 0x10);
      FUN_00465af0(uVar8,uVar9);
      FUN_004739f0(uVar8,uVar9);
    }
  }
  return 0;
}


