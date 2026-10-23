// FUN_00462e60 @ 462e60 size=495

void __fastcall FUN_00462e60(int param_1)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  char cVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 *puVar10;
  int *piVar11;
  int iVar12;
  int local_8;
  
  sVar2 = *(short *)(DAT_00893530 + 0x18);
  local_8 = param_1 + 0x24e;
  bVar5 = false;
  iVar12 = 0;
  do {
    iVar9 = FUN_00428ee0((short)local_8);
    if (((iVar9 != 0) && (piVar1 = (int *)(iVar9 + -8), piVar1 != (int *)0x0)) &&
       (*(int *)(iVar9 + 0x1a) <= (int)sVar2)) {
      bVar5 = true;
      if (param_1 == DAT_00d0ca90) {
        uVar3 = *(undefined4 *)(param_1 + 6);
        uVar7 = (**(code **)(*piVar1 + 0xc))();
        FUN_006ea1c0(0xf7,uVar3,0xebf8,uVar7);
      }
      FUN_00458290(iVar12,DAT_0088f28c,(short)((uint)DAT_0088f28e >> 0x10));
      (**(code **)(DAT_00d77b3a + 0x18))((short)piVar1);
      (**(code **)*piVar1)(1);
    }
    iVar12 = iVar12 + 1;
    local_8 = local_8 + 6;
  } while (iVar12 < 10);
  puVar4 = *(undefined4 **)(param_1 + 0x2a0);
  while (puVar4 != (undefined4 *)0x0) {
    uVar3 = *puVar4;
    puVar4 = (undefined4 *)puVar4[2];
    uVar7 = (undefined2)uVar3;
    iVar12 = FUN_00428ee0(uVar7);
    if (((iVar12 != 0) && (piVar1 = (int *)(iVar12 + -8), piVar1 != (int *)0x0)) &&
       (*(int *)(iVar12 + 0x1a) <= (int)sVar2)) {
      if (*(char *)(iVar12 + 0xb6) == '\0') {
        if (param_1 == DAT_00d0ca90) {
          uVar3 = *(undefined4 *)(param_1 + 6);
          uVar8 = (**(code **)(*piVar1 + 0xc))();
          FUN_006ea1c0(0xf8,uVar3,0xebf8,uVar8);
        }
      }
      else {
        puVar10 = (undefined2 *)FUN_00447250();
        piVar11 = (int *)FUN_00465ae0(*puVar10,(short)((uint)*(undefined4 *)(puVar10 + 1) >> 0x10));
        cVar6 = (**(code **)(*piVar11 + 0x24))();
        if (cVar6 != '\0') {
          puVar10 = (undefined2 *)FUN_00447250();
          piVar11 = (int *)FUN_00465ae0(*puVar10,(short)((uint)*(undefined4 *)(puVar10 + 1) >> 0x10)
                                       );
          (**(code **)(*piVar11 + 0x18))();
        }
      }
      (**(code **)(*(int *)(param_1 + 0x29c) + 0x18))(uVar7);
      FUN_00796cd8(uVar7);
      (**(code **)(DAT_00d77b3a + 0x18))((short)piVar1);
      (**(code **)*piVar1)(1);
    }
  }
  if (bVar5) {
    FUN_0044d8c0(0);
  }
  return;
}


