// FUN_0044ccf0 @ 44ccf0 size=1241

/* WARNING: Removing unreachable block (ram,0x0044d0db) */
/* WARNING: Removing unreachable block (ram,0x0044cf9d) */
/* WARNING: Removing unreachable block (ram,0x0044cffa) */
/* WARNING: Removing unreachable block (ram,0x0044cfdd) */
/* WARNING: Removing unreachable block (ram,0x0044cf63) */
/* WARNING: Removing unreachable block (ram,0x0044d0a8) */
/* WARNING: Removing unreachable block (ram,0x0044d10e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0044ccf0(int param_1,float param_2,int param_3,char param_4)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint3 uVar11;
  undefined3 uVar12;
  undefined3 extraout_var;
  uint uVar10;
  undefined4 *puVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bbbf8;
  local_c = ExceptionList;
  if (param_2 < _DAT_007e3380 != 0 || (param_2 == _DAT_007e3380) != 0) {
    return CONCAT31((int3)(CONCAT22((short)((uint)ExceptionList >> 0x10),
                                    (ushort)(param_2 < _DAT_007e3380) << 8 |
                                    (ushort)(NAN(param_2) || NAN(_DAT_007e3380)) << 10 |
                                    (ushort)(param_2 == _DAT_007e3380) << 0xe) >> 8),1);
  }
  if (*(int *)(param_3 + 0x12) == 0) {
    return 1;
  }
  bVar15 = *(char *)(DAT_00893530 + 0x14) == '\x17';
  bVar16 = *(char *)(DAT_00893750 + 0x11d) != '\0';
  fVar3 = param_2 * _DAT_007e5dcc;
  iVar6 = 0;
  ExceptionList = &local_c;
  if (((*(int *)(param_3 + 0x254) != 8) &&
      (iVar6 = *(int *)(param_3 + 0x254) + -9, ExceptionList = &local_c, iVar6 != 0)) &&
     (ExceptionList = &local_c, *(int *)(param_3 + 0x482) != 0)) {
    local_4 = 0;
    ExceptionList = &local_c;
    iVar6 = FUN_004e9f80(param_1);
    iVar7 = FUN_004e9370(iVar6);
    if ((iVar6 < 1) || (*(int *)(iVar7 + 0x3d8) == 0)) {
      local_4 = 0xffffffff;
      uVar10 = FUN_0045a0f0();
      ExceptionList = local_c;
      return uVar10 & 0xffffff00;
    }
    iVar14 = *(int *)(iVar7 + 0x482);
    bVar4 = true;
    uVar8 = FUN_0044e1b0();
    iVar9 = FUN_004e9370(uVar8);
    if (iVar14 != *(int *)(iVar9 + 0x482)) {
      puVar13 = *(undefined4 **)(param_1 + 0xe880);
      if (puVar13 == (undefined4 *)0x0) {
LAB_0044ceac:
        iVar14 = *(int *)(iVar7 + 0x3d8);
        if (iVar14 != param_1) {
          iVar9 = FUN_004a0750();
          if (*(int *)(iVar9 + 0x3d8) == iVar14) {
            iVar14 = *(int *)(iVar14 + 0x117de);
          }
          else {
            iVar14 = *(int *)(iVar14 + 0x117f0);
          }
          if (iVar14 == iVar6) {
            if (param_4 == '\0') {
              if (fVar3 <= *(float *)(*(int *)(iVar7 + 0x3d8) + 0x39c4)) {
                ExceptionList = local_c;
                return 1;
              }
              ExceptionList = local_c;
              return 0;
            }
            if (((bVar16 || bVar15) &&
                (*(float *)(iVar7 + 0x26c) = param_2 + *(float *)(iVar7 + 0x26c),
                *(int *)(param_3 + 0x3d8) == param_1)) && (iVar6 = FUN_004e9f40(), 0 < iVar6)) {
              uVar8 = FUN_004e9f40();
              iVar6 = FUN_004e9370(uVar8);
              *(float *)(iVar6 + 0x26c) = param_2 + *(float *)(iVar6 + 0x26c);
            }
            if (*(float *)(*(int *)(iVar7 + 0x3d8) + 0x39c4) < fVar3) {
              ExceptionList = local_c;
              return 0;
            }
            FUN_0049eba0(-fVar3);
            ExceptionList = local_c;
            return 1;
          }
        }
        if ((param_4 != '\0') && (bVar16 || bVar15)) {
          if ((*(int *)(iVar7 + 0x3d8) != param_1) &&
             ((*(int *)(param_3 + 0x3d8) == param_1 && (iVar6 = FUN_004e9f40(), 0 < iVar6)))) {
            uVar8 = FUN_004e9f40();
            iVar6 = FUN_004e9370(uVar8);
            *(float *)(iVar6 + 0x26c) = param_2 + *(float *)(iVar6 + 0x26c);
          }
          *(float *)(iVar7 + 0x26c) = param_2 + *(float *)(iVar7 + 0x26c);
        }
        if (fVar3 <= *(float *)(iVar7 + 0x270)) {
          if (param_4 != '\0') {
            FUN_004ea3b0(-fVar3);
          }
          ExceptionList = local_c;
          return 1;
        }
        *(undefined4 *)(iVar7 + 0x270) = 0;
        ExceptionList = local_c;
        return 0;
      }
      do {
        piVar2 = (int *)*puVar13;
        if ((*(int *)(iVar7 + 0x12) != *(int *)(param_3 + 0x12)) ||
           (*(short *)(iVar7 + 0x10) != *(short *)(param_3 + 0x10))) {
          iVar14 = *piVar2;
          uVar8 = (**(code **)**(undefined4 **)(iVar7 + 0x482))();
          cVar5 = (**(code **)(iVar14 + 0x24))(uVar8);
          if (cVar5 != '\0') {
            iVar14 = *piVar2;
            uVar8 = (**(code **)**(undefined4 **)(param_3 + 0x482))();
            cVar5 = (**(code **)(iVar14 + 0x24))(uVar8);
            if (cVar5 != '\0') {
              iVar9 = FUN_004a0750();
              iVar14 = *piVar2;
              uVar8 = (**(code **)**(undefined4 **)(iVar9 + 0x482))();
              cVar5 = (**(code **)(iVar14 + 0x24))(uVar8);
              if (cVar5 != '\0') {
                bVar4 = false;
              }
            }
          }
        }
        puVar13 = (undefined4 *)puVar13[2];
      } while (puVar13 != (undefined4 *)0x0);
      if (bVar4) goto LAB_0044ceac;
    }
    iVar6 = 0;
  }
  local_4 = 0xffffffff;
  uVar11 = (uint3)((uint)iVar6 >> 8);
  iVar6 = (uint)uVar11 << 8;
  if ((bVar16 || bVar15) && (iVar6 = CONCAT31(uVar11,param_4), param_4 != '\0')) {
    iVar6 = FUN_004a0750();
    *(float *)(iVar6 + 0x26c) = param_2 + *(float *)(iVar6 + 0x26c);
  }
  fVar1 = *(float *)(param_1 + 0x39c4);
  uVar12 = (undefined3)
           (CONCAT22((short)((uint)iVar6 >> 0x10),
                     (ushort)(fVar1 < fVar3) << 8 | (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
                     (ushort)(fVar1 == fVar3) << 0xe) >> 8);
  if (param_4 != '\0') {
    *(float *)(param_1 + 0x39b0) = fVar3 + *(float *)(param_1 + 0x39b0);
    FUN_0049eba0(-fVar3);
    uVar12 = extraout_var;
  }
  ExceptionList = local_c;
  return CONCAT31(uVar12,fVar1 < fVar3 == 0);
}


