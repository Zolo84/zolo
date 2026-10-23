// FUN_0047be40 @ 47be40 size=513

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0047be40(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar6 = *(int *)(param_2 + 4);
  iVar5 = FUN_00428ee0(iVar6 + 0xe);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + -0x14;
  }
  iVar6 = FUN_0050b140(iVar6 + 0x14);
  if ((iVar6 != 0) &&
     (((*(char *)(iVar6 + 0x2c) != '\0' || (*(char *)(iVar6 + 0x2d) != '\0')) ||
      ((*(int *)(iVar6 + 0x5e) == 0 && (*(int *)(iVar6 + 0x62) == 0)))))) {
    iVar6 = 0;
  }
  if (iVar5 != 0) {
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x5e) != 0)) {
      iVar7 = FUN_00522770();
      if (iVar7 != 0) {
        iVar7 = FUN_00522770();
        iVar7 = *(int *)(iVar7 + 0x117f4);
        uVar8 = FUN_0051c480();
        cVar4 = (**(code **)(iVar7 + 0x24))(uVar8);
        if (cVar4 == '\0') {
          FUN_00522770();
          uVar8 = FUN_0051c480();
          FUN_00425f10(uVar8);
        }
      }
      FUN_0051c4a0(0);
      uVar8 = FUN_00522770();
      FUN_0050a420(uVar8);
      FUN_0050a020(0);
    }
    iVar7 = FUN_0051c480();
    if (iVar7 != iVar6) {
      if (*(int *)(iVar5 + 0x14a) != 0) {
        iVar7 = FUN_00522770();
        if (iVar7 != 0) {
          iVar7 = FUN_00522770();
          iVar7 = *(int *)(iVar7 + 0x117f4);
          uVar8 = FUN_0051c480();
          cVar4 = (**(code **)(iVar7 + 0x24))(uVar8);
          if (cVar4 == '\0') {
            FUN_00522770();
            uVar8 = FUN_0051c480();
            FUN_00425f10(uVar8);
          }
        }
        uVar8 = 0;
        FUN_0051c480(0);
        FUN_0050a020(uVar8);
      }
      FUN_0051c4a0(iVar6);
      if (iVar6 != 0) {
        FUN_0050a020(iVar5);
        if (*(int *)(iVar6 + 0x62) != 0) {
          (**(code **)(*(int *)(*(int *)(iVar6 + 0x62) + 0x117f4) + 0x18))(iVar6);
        }
        (**(code **)(*(int *)(param_1 + 0x117f4) + 0x18))(iVar6);
        FUN_0050a420(param_1);
      }
      if ((&DAT_00dc0fd4)[*(int *)(param_1 + 6)] != 0) {
        piVar3 = *(int **)(iVar5 + 0x26);
        while (piVar3 != (int *)0x0) {
          piVar1 = (int *)piVar3[2];
          fVar2 = *(float *)(*piVar3 + 0xf4) * _DAT_007e68d8;
          if (fVar2 < _DAT_007e3380) {
            fVar2 = _DAT_007e3380;
          }
          *(float *)(*piVar3 + 0xf4) = fVar2;
          piVar3 = piVar1;
        }
      }
    }
  }
  return 3;
}


