// FUN_00482cb0 @ 482cb0 size=381

undefined4 __thiscall FUN_00482cb0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined2 *puVar7;
  
  iVar3 = *(int *)(param_2 + 4);
  iVar2 = FUN_00428ee0(iVar3 + 0xe);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -0x14;
  }
  iVar3 = FUN_0050b140(iVar3 + 0x14);
  if ((iVar2 == 0) || (*(char *)(iVar2 + 0x17d) != '\0')) {
    *(undefined1 *)(iVar3 + 0x2c) = 0;
    piVar6 = (int *)(**(code **)(*(int *)(param_1 + 0x117f4) + 0x28))((short)&param_2,iVar3);
    if (*piVar6 == 0) {
      FUN_00425f10(iVar3);
    }
  }
  else {
    if (*(int *)(iVar3 + 0x5e) != 0) {
      FUN_0051c4a0(0);
      FUN_0050a020(0);
    }
    if (*(int *)(iVar2 + 0x14a) != 0) {
      iVar4 = FUN_00522770();
      if (iVar4 != 0) {
        iVar4 = FUN_00522770();
        iVar4 = *(int *)(iVar4 + 0x117f4);
        uVar5 = FUN_0051c480();
        piVar6 = (int *)(**(code **)(iVar4 + 0x28))((short)&param_2,uVar5);
        if (*piVar6 == 0) {
          FUN_00522770();
          uVar5 = FUN_0051c480();
          FUN_00425f10(uVar5);
        }
      }
      uVar5 = 0;
      FUN_0051c480(0);
      FUN_0050a020(uVar5);
    }
    FUN_0051c4a0(iVar3);
    FUN_0050a020(iVar2);
  }
  (**(code **)(**(int **)(param_1 + 0x11806) + 0x18))(iVar3);
  puVar7 = (undefined2 *)FUN_0044df10();
  piVar6 = (int *)FUN_00465af0(*puVar7,(short)((uint)*(undefined4 *)(puVar7 + 1) >> 0x10));
  cVar1 = (**(code **)(*piVar6 + 0x24))();
  if (cVar1 != '\0') {
    puVar7 = (undefined2 *)FUN_0044df10();
    piVar6 = (int *)FUN_00465af0(*puVar7,(short)((uint)*(undefined4 *)(puVar7 + 1) >> 0x10));
    (**(code **)(*piVar6 + 0x18))();
  }
  return 3;
}


