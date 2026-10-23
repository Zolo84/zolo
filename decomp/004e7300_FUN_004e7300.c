// FUN_004e7300 @ 4e7300 size=1504

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e7300(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int *piVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  int iStack_24;
  undefined **ppuStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c00cb;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x3d8) != param_2) {
    ExceptionList = &local_c;
    FUN_004d87c0();
    if (param_3 != '\0') {
      _param_3 = (float)*(int *)(param_1 + 0x19e) * _DAT_007e5dd0 + _DAT_007e6868;
      cVar5 = (**(code **)(*(int *)(param_2 + 0xe8b2) + 0x24))(*(undefined4 *)(param_1 + 0x12));
      if (cVar5 != '\0') {
        _param_3 = _param_3 * _DAT_007e6808;
      }
      fVar3 = *(float *)(param_2 + 0x334c) + _param_3;
      if (fVar3 < _DAT_007e3380) {
        fVar3 = _DAT_007e3380;
      }
      *(float *)(param_2 + 0x334c) = fVar3;
      iVar9 = *(int *)(param_1 + 0x3d8);
      if (iVar9 != 0) {
        fVar3 = *(float *)(iVar9 + 0x334c) - _param_3 * _DAT_007e4094;
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
        *(float *)(iVar9 + 0x334c) = fVar3;
      }
      *(undefined4 *)(param_1 + 0x202) = 0;
      *(undefined4 *)(param_1 + 0x1fe) = 0;
      *(undefined4 *)(param_1 + 0x20a) = 0;
      *(undefined4 *)(param_1 + 0x206) = 0;
      iVar9 = 0;
      do {
        iVar10 = *(int *)(param_1 + 0x1c6 + iVar9 * 4);
        if ((iVar10 != 0) && (_DAT_007e46cc <= *(float *)(iVar10 + 0x10))) {
          if (iVar9 == 5) {
            iVar10 = *(int *)(param_1 + 0x1da);
            fVar3 = *(float *)(iVar10 + 0x14) * _DAT_007e34c0;
            fVar11 = (float10)FUN_004d0d40(*(undefined4 *)(iVar10 + 0x18));
            if ((float10)fVar3 <= fVar11) {
              fVar11 = (float10)fVar3;
            }
            else {
              fVar11 = (float10)FUN_004d0d40(*(undefined4 *)(iVar10 + 0x18));
            }
            *(float *)(iVar10 + 0x14) = (float)fVar11;
            if (fVar11 < (float10)_DAT_007e3380) {
LAB_004e74b8:
              *(undefined4 *)(iVar10 + 0x14) = 0;
            }
          }
          else {
            fVar3 = *(float *)(iVar10 + 0x14) * _DAT_007e34e0;
            fVar11 = (float10)FUN_004d0d40(*(undefined4 *)(iVar10 + 0x18));
            if ((float10)fVar3 <= fVar11) {
              fVar11 = (float10)fVar3;
            }
            else {
              fVar11 = (float10)FUN_004d0d40(*(undefined4 *)(iVar10 + 0x18));
            }
            *(float *)(iVar10 + 0x14) = (float)fVar11;
            if (fVar11 < (float10)_DAT_007e3380) goto LAB_004e74b8;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0xb);
      if ((*(int *)(param_1 + 0x3d8) != 0) && (cVar5 = FUN_0042e980(), cVar5 != '\0')) {
        piVar4 = *(int **)(*(int *)(param_1 + 0x3d8) + 0x3b7e);
        while (piVar4 != (int *)0x0) {
          piVar1 = (int *)piVar4[2];
          piVar2 = (int *)*piVar4;
          cVar5 = (**(code **)(*piVar2 + 0x10))();
          piVar4 = piVar1;
          if ((cVar5 != '\0') && (*(int *)((int)piVar2 + 0x16) == *(int *)(param_1 + 0x12))) {
            puVar6 = operator_new(0xc);
            uStack_4 = 0;
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              FUN_00498820(0x13d,&DAT_0088f238);
              iVar9 = puVar6[1];
              *puVar6 = &PTR_FUN_007e5398;
              *(int *)(iVar9 + 0xe) = piVar2[3];
              *(short *)(iVar9 + 0x12) = (short)piVar2[4];
              *(undefined4 *)(puVar6[1] + 0x14) = 0;
            }
            uStack_4 = 0xffffffff;
            FUN_00565c50(puVar6);
          }
        }
      }
    }
    puVar6 = *(undefined4 **)(param_1 + 0x1ea);
    if ((_DAT_007e3380 < (float)puVar6[4]) &&
       (*(undefined **)(param_1 + 0x1ea) = &DAT_008eff90, puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    puVar6 = *(undefined4 **)(param_1 + 0x1ee);
    if ((_DAT_007e3380 < (float)puVar6[4]) &&
       (*(undefined **)(param_1 + 0x1ee) = &DAT_008eff90, puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    iVar10 = DAT_00893530;
    iVar9 = *(int *)(param_1 + 0x3d8);
    if (iVar9 != 0) {
      *(undefined4 *)(param_1 + 0x3ce) = *(undefined4 *)(DAT_00893530 + 0x14);
      *(undefined2 *)(param_1 + 0x3d2) = *(undefined2 *)(iVar10 + 0x18);
      if (iVar9 != 0) {
        (**(code **)(*(int *)(iVar9 + 0xe8a0) + 0x18))(*(undefined4 *)(param_1 + 0x1be));
      }
    }
    *(int *)(param_1 + 0x3d8) = param_2;
    if ((param_2 != 0) &&
       (cVar5 = (**(code **)(*(int *)(param_2 + 0xe8a0) + 0x24))(*(undefined4 *)(param_1 + 0x1be)),
       cVar5 == '\0')) {
      FUN_0049a100(*(undefined4 *)(param_1 + 0x1be));
    }
    if (((iVar9 != 0) &&
        (iVar10 = *(int *)(param_1 + 0x12), iVar7 = FUN_0044e1b0(), iVar7 == iVar10)) &&
       (iVar9 != param_2)) {
      FUN_0049eba0(*(float *)(iVar9 + 0x39c4) * _DAT_007e6800);
      FUN_0049eae0(*(float *)(iVar9 + 0x39b4) * _DAT_007e6800);
      FUN_0049eb70(*(float *)(iVar9 + 0x39c0) * _DAT_007e6800);
      FUN_0049eb10(*(float *)(iVar9 + 0x39b8) * _DAT_007e6800);
      FUN_0049eb40(*(float *)(iVar9 + 0x39bc) * _DAT_007e6800);
      FUN_0049eba0(-(*(float *)(iVar9 + 0x39c4) * _DAT_007e6800));
      FUN_0049eae0(-(*(float *)(iVar9 + 0x39b4) * _DAT_007e6800));
      FUN_0049eb70(-(*(float *)(iVar9 + 0x39c0) * _DAT_007e6800));
      FUN_0049eb10(-(*(float *)(iVar9 + 0x39b8) * _DAT_007e6800));
      FUN_0049eb40(-(*(float *)(iVar9 + 0x39bc) * _DAT_007e6800));
    }
    _param_3 = 1.4013e-45;
    if (1 < DAT_00877690) {
      iStack_24 = 0x4b2;
      do {
        iVar7 = iStack_24 + DAT_00ab27b4;
        iVar10 = *(int *)(iVar7 + 0x254);
        if ((((iVar10 != 8) && (iVar10 != 9)) &&
            ((*(int *)(iVar7 + 0x18a) == *(int *)(param_1 + 0x12) &&
             ((iVar10 != 8 && (iVar10 != 9)))))) && (*(int *)(iVar7 + 0x3d8) != 0)) {
          iStack_1c = 0;
          uStack_18 = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          ppuStack_20 = &PTR_LAB_007e4bc4;
          uStack_4 = 1;
          uVar8 = FUN_0049ee40(iVar7,&ppuStack_20,0);
          *(undefined4 *)(iVar7 + 0x18a) = uVar8;
          uStack_4 = 0xffffffff;
          ppuStack_20 = &PTR_LAB_007e4bc4;
          iVar10 = iStack_1c;
          while (iVar10 != 0) {
            iVar7 = *(int *)(iVar10 + 8);
            FUN_00796cd8(iVar10);
            iVar10 = iVar7;
          }
          iStack_1c = 0;
          uStack_18 = 0;
          uStack_14 = 0;
        }
        _param_3 = (float)((int)_param_3 + 1);
        iStack_24 = iStack_24 + 0x4b2;
      } while ((int)_param_3 < DAT_00877690);
    }
    FUN_004cb55a(param_1,param_2,iVar9);
    if (((*(int *)(param_1 + 0x254) != 8) && (*(int *)(param_1 + 0x254) != 9)) &&
       (*(int *)(param_1 + 0x3d8) != 0)) {
      iStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      ppuStack_20 = &PTR_LAB_007e4bc4;
      uStack_4 = 2;
      uVar8 = FUN_0049ee40(param_1,&ppuStack_20,0);
      *(undefined4 *)(param_1 + 0x18a) = uVar8;
      ppuStack_20 = &PTR_LAB_007e4bc4;
      iVar9 = iStack_1c;
      while (iVar9 != 0) {
        iVar10 = *(int *)(iVar9 + 8);
        FUN_00796cd8(iVar9);
        iVar9 = iVar10;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


