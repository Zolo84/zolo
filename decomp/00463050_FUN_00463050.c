// FUN_00463050 @ 463050 size=493

void __fastcall FUN_00463050(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  char cVar7;
  undefined2 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  undefined1 *puVar13;
  undefined4 in_stack_ffffffe0;
  undefined2 uVar14;
  
  sVar1 = *(short *)(DAT_00893530 + 0x18);
  piVar5 = *(int **)(param_1 + 0x4508);
  while (piVar5 != (int *)0x0) {
    piVar9 = (int *)piVar5[2];
    iVar2 = *piVar5;
    piVar5 = piVar9;
    if (((iVar2 != 0) && (piVar9 = (int *)FUN_0051c480(), piVar9 != (int *)0x0)) &&
       (*(int *)((int)piVar9 + 0x5a) <= (int)sVar1)) {
      if (*(int *)((int)piVar9 + 0x1a) == *(int *)(DAT_00d0ca90 + 6)) {
        uVar14 = 5;
        uVar8 = 0x30b9;
        uVar10 = FUN_00447250(5);
        FUN_00446d10(uVar10);
        uVar10 = (**(code **)(*piVar9 + 0xc))();
        puVar13 = &DAT_0088ebf8;
        uVar11 = FUN_00458280(&DAT_0088ebf8,uVar10);
        FUN_006eb730(0xf9,uVar11,puVar13,uVar10,in_stack_ffffffe0,uVar8,uVar14);
      }
      FUN_0051c4a0(0);
      uVar8 = SUB42(piVar9,0);
      puVar6 = *(undefined4 **)(iVar2 + 0x120);
      while (puVar6 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)puVar6[2];
        (**(code **)(*(int *)*puVar6 + 0x38))(uVar8);
        puVar6 = puVar3;
      }
      if (*(int *)((int)piVar9 + 0x62) != 0) {
        (**(code **)(*(int *)(*(int *)((int)piVar9 + 0x62) + 0x117f4) + 0x18))(uVar8);
      }
      FUN_0076e3b0(uVar8);
      FUN_0050a420(0);
      FUN_0050a020(0);
      *(undefined1 *)((int)piVar9 + 0x2d) = 1;
    }
  }
  piVar5 = *(int **)(param_1 + 0x117f8);
  while (piVar5 != (int *)0x0) {
    piVar9 = (int *)piVar5[2];
    piVar4 = (int *)*piVar5;
    piVar5 = piVar9;
    if ((piVar4 != (int *)0x0) && (*(int *)((int)piVar4 + 0x5a) <= (int)sVar1)) {
      if ((char)piVar4[0xb] == '\0') {
        if (param_1 == DAT_00d0ca90) {
          uVar10 = *(undefined4 *)(param_1 + 6);
          uVar8 = (**(code **)(*piVar4 + 0xc))();
          FUN_006ea1c0(0xfa,uVar10,0xebf8,uVar8);
        }
      }
      else {
        puVar12 = (undefined2 *)FUN_0044df10();
        piVar9 = (int *)FUN_00465af0(*puVar12,(short)((uint)*(undefined4 *)(puVar12 + 1) >> 0x10));
        cVar7 = (**(code **)(*piVar9 + 0x24))();
        if (cVar7 != '\0') {
          puVar12 = (undefined2 *)FUN_0044df10();
          piVar9 = (int *)FUN_00465af0(*puVar12,(short)((uint)*(undefined4 *)(puVar12 + 1) >> 0x10))
          ;
          (**(code **)(*piVar9 + 0x18))();
        }
      }
      FUN_0076e3b0((short)piVar4);
      FUN_0050a420(0);
      FUN_0050a020(0);
      *(undefined1 *)((int)piVar4 + 0x2d) = 1;
      (**(code **)(*(int *)(param_1 + 0x117f4) + 0x18))((short)piVar4);
    }
  }
  return;
}


