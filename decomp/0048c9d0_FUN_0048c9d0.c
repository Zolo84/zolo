// FUN_0048c9d0 @ 48c9d0 size=3326

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0048c9d0(int param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  float10 fVar15;
  int *local_38;
  int *local_34;
  int local_30;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007bd949;
  local_10 = ExceptionList;
  cVar4 = *(char *)(*(int *)((int)param_2 + 4) + 0x1e);
  ExceptionList = &local_10;
  if (*(int *)(*(int *)((int)param_2 + 4) + 0x12) == 0) {
    local_38 = (int *)0x0;
    local_34 = (int *)0x0;
    local_30 = 0;
    local_8 = 0;
    local_1c = &DAT_0089cad8;
    ExceptionList = &local_10;
    do {
      iVar12 = *local_1c;
      if (iVar12 != 0) {
        piVar10 = *(int **)(iVar12 + 0x4508);
joined_r0x0048ca41:
        if (piVar10 != (int *)0x0) {
          piVar11 = (int *)piVar10[2];
          iVar7 = *piVar10;
          iVar5 = FUN_00522770();
          piVar10 = piVar11;
          if ((iVar5 == param_1) &&
             (piVar11 = *(int **)(iVar7 + 0x26), *(int **)(iVar7 + 0x26) != (int *)0x0)) {
LAB_0048ca6b:
            piVar9 = (int *)piVar11[2];
            iVar7 = *piVar11;
            iVar5 = 0;
            piVar11 = (int *)(iVar7 + 0x88);
            do {
              piVar13 = local_38;
              piVar2 = local_38;
              piVar6 = local_34;
              if (*piVar11 == *(int *)(*(int *)((int)param_2 + 4) + 0x16)) goto joined_r0x0048ca97;
              iVar5 = iVar5 + 1;
              piVar11 = piVar11 + 1;
            } while (iVar5 < 5);
            goto LAB_0048cafa;
          }
          goto joined_r0x0048ca41;
        }
        piVar10 = *(int **)(param_1 + 0x451c);
        if (iVar12 == param_1) {
          if (piVar10 != (int *)0x0) {
LAB_0048cbe3:
            piVar11 = (int *)piVar10[2];
            iVar12 = *piVar10;
            piVar10 = local_38;
            piVar9 = local_34;
            if ((*(int *)(iVar12 + 0x58) == 0) || (*(int *)(iVar12 + 0x58) == *(int *)(param_1 + 6))
               ) {
              iVar7 = 0;
              piVar13 = (int *)(iVar12 + 0x88);
              do {
                piVar2 = local_38;
                if (*piVar13 == *(int *)(*(int *)((int)param_2 + 4) + 0x16))
                goto joined_r0x0048cc1f;
                iVar7 = iVar7 + 1;
                piVar13 = piVar13 + 1;
              } while (iVar7 < 5);
            }
            goto LAB_0048cc82;
          }
        }
        else if (piVar10 != (int *)0x0) {
LAB_0048cb29:
          piVar11 = (int *)piVar10[2];
          iVar12 = *piVar10;
          piVar10 = local_38;
          piVar9 = local_34;
          if (*(int *)(iVar12 + 0x58) == *(int *)(param_1 + 6)) {
            iVar7 = 0;
            piVar13 = (int *)(iVar12 + 0x88);
            do {
              piVar2 = local_38;
              if (*piVar13 == *(int *)(*(int *)((int)param_2 + 4) + 0x16)) goto joined_r0x0048cb66;
              iVar7 = iVar7 + 1;
              piVar13 = piVar13 + 1;
            } while (iVar7 < 5);
          }
          goto LAB_0048cbc9;
        }
      }
LAB_0048cc8d:
      local_1c = local_1c + 1;
    } while ((int)local_1c < 0x89d038);
    while (local_38 != (int *)0x0) {
      piVar10 = (int *)local_38[2];
      local_38 = (int *)*local_38;
      iVar12 = *(int *)((int)param_2 + 4);
      switch(*(undefined4 *)(iVar12 + 0x1a)) {
      case 0:
        if (*(char *)((int)local_38 + 0x15f) == '\0') {
LAB_0048cd0b:
          fVar1 = (float)local_38[0xb8] + *(float *)(iVar12 + 0xe);
          if (fVar1 < _DAT_007e3380) {
            fVar1 = _DAT_007e3380;
          }
LAB_0048cd29:
          local_38[0xb8] = (int)fVar1;
          break;
        }
        fVar1 = (float)local_38[0xb7] + *(float *)(iVar12 + 0xe);
        if (fVar1 < _DAT_007e3380) {
          fVar1 = _DAT_007e3380;
        }
        goto LAB_0048ccf6;
      case 1:
        if (*(char *)((int)local_38 + 0x15f) != '\0') goto LAB_0048cd0b;
LAB_0048cd79:
        fVar1 = (float)local_38[0xb9] + *(float *)(iVar12 + 0xe);
        if (fVar1 < _DAT_007e3380) {
          fVar1 = _DAT_007e3380;
        }
LAB_0048cd97:
        local_38[0xb9] = (int)fVar1;
        break;
      case 2:
        fVar1 = (float)local_38[0x46] + *(float *)(iVar12 + 0xe);
        if (fVar1 < _DAT_007e3380) {
          fVar1 = _DAT_007e3380;
        }
        local_38[0x46] = (int)fVar1;
        break;
      case 3:
        cVar3 = *(char *)((int)local_38 + 0x161);
        goto LAB_0048cde7;
      case 4:
        if (*(char *)((int)local_38 + 0x161) != '\0') {
          fVar1 = (float)local_38[0xbb] + *(float *)(iVar12 + 0xe);
          if (fVar1 < _DAT_007e3380) {
            fVar1 = _DAT_007e3380;
          }
          local_38[0xbb] = (int)fVar1;
        }
        break;
      case 5:
        if (*(char *)((int)local_38 + 0x161) != '\0') goto LAB_0048cd79;
        cVar3 = (char)local_38[0x58];
LAB_0048cde7:
        if (cVar3 != '\0') {
          fVar1 = (float)local_38[0xba] + *(float *)(iVar12 + 0xe);
          if (fVar1 < _DAT_007e3380) {
            fVar1 = _DAT_007e3380;
          }
          local_38[0xba] = (int)fVar1;
        }
        break;
      case 6:
        if (*(char *)((int)local_38 + 0x161) != '\0') {
          fVar1 = (float)local_38[0xbc] + *(float *)(iVar12 + 0xe);
          if (fVar1 < _DAT_007e3380) {
            fVar1 = _DAT_007e3380;
          }
          local_38[0xbc] = (int)fVar1;
        }
        break;
      case 7:
        cVar3 = (char)local_38[0x58];
        goto LAB_0048d0f4;
      case 8:
        if (*(char *)((int)local_38 + 0x15f) != '\0') {
          fVar1 = (float)local_38[0xb3] + *(float *)(iVar12 + 0xe);
          if (_DAT_007e3380 <= fVar1) goto LAB_0048d151;
          local_38[0xb3] = (int)_DAT_007e3380;
        }
        break;
      case 9:
        cVar3 = *(char *)((int)local_38 + 0x15f);
LAB_0048d162:
        if (cVar3 != '\0') {
          fVar1 = (float)local_38[0xb4] + *(float *)(iVar12 + 0xe);
          if (_DAT_007e3380 <= fVar1) goto LAB_0048d1bb;
          local_38[0xb4] = (int)_DAT_007e3380;
        }
        break;
      case 10:
        if (*(char *)((int)local_38 + 0x15f) != '\0') {
          fVar1 = (float)local_38[0xb5] + *(float *)(iVar12 + 0xe);
          if (fVar1 < DAT_00dc1744) {
            local_38[0xb5] = (int)DAT_00dc1744;
            break;
          }
LAB_0048d1f3:
          local_38[0xb5] = (int)fVar1;
        }
        break;
      case 0xb:
        if (*(char *)((int)local_38 + 0x15f) != '\0') {
          fVar1 = (float)local_38[0xb6] + *(float *)(iVar12 + 0xe);
          if (fVar1 < _DAT_007e3380) {
            fVar1 = _DAT_007e3380;
          }
          local_38[0xb6] = (int)fVar1;
        }
        break;
      case 0xc:
        fVar1 = (float)local_38[0x45] + *(float *)(iVar12 + 0xe);
        if (fVar1 < _DAT_007e3380) {
          fVar1 = _DAT_007e3380;
        }
        local_38[0x45] = (int)fVar1;
        break;
      case 0xd:
        if (*(char *)((int)local_38 + 0x161) != '\0') {
          fVar1 = (float)local_38[0xb8] + *(float *)(iVar12 + 0xe);
          if (_DAT_007e3380 <= fVar1) goto LAB_0048cd29;
          local_38[0xb8] = (int)_DAT_007e3380;
        }
        break;
      case 0xe:
        local_38[0x3f] = (int)((float)local_38[0x3f] + *(float *)(iVar12 + 0xe));
        break;
      case 0x12:
        fVar15 = (float10)(**(code **)(*local_38 + 0x28))();
        fVar15 = fVar15 + (float10)*(float *)(iVar12 + 0xe);
        if (fVar15 < (float10)_DAT_007e3380) {
          fVar15 = (float10)_DAT_007e3380;
        }
        local_38[0x44] = (int)(float)fVar15;
        break;
      case 0x13:
        fVar1 = (float)local_38[0x3e] + *(float *)(iVar12 + 0xe);
        if (fVar1 < _DAT_007e3380) {
          fVar1 = _DAT_007e3380;
        }
        local_38[0x3e] = (int)fVar1;
        break;
      case 0x14:
        if (*(char *)((int)local_38 + 0x15f) != '\0') {
          fVar1 = (float)local_38[0xb9] + *(float *)(iVar12 + 0xe);
          if (_DAT_007e3380 <= fVar1) goto LAB_0048cd97;
          local_38[0xb9] = (int)_DAT_007e3380;
        }
        break;
      case 0x15:
        fVar1 = (float)local_38[0x3c] * (float)local_38[0x42] * _DAT_007e543c +
                *(float *)(iVar12 + 0xe);
        if (fVar1 < _DAT_007e3380) {
          fVar1 = _DAT_007e3380;
        }
        local_38[0x42] = (int)fVar1;
        break;
      case 0x16:
        fVar1 = (float)local_38[0x3c] * (float)local_38[0x43] * _DAT_007e543c +
                *(float *)(iVar12 + 0xe);
        if (fVar1 < _DAT_007e3380) {
          fVar1 = _DAT_007e3380;
        }
        local_38[0x43] = (int)fVar1;
        break;
      case 0x17:
        if (*(char *)((int)local_38 + 0x161) == '\0') {
          if ((char)local_38[0x58] != '\0') {
            (**(code **)(*local_38 + 0x34))((float)local_38[0xbd] + *(float *)(iVar12 + 0xe));
          }
        }
        else {
          fVar1 = (float)local_38[0xbe] + *(float *)(iVar12 + 0xe);
          if (fVar1 < _DAT_007e3380) {
            fVar1 = _DAT_007e3380;
          }
          local_38[0xbe] = (int)fVar1;
        }
        break;
      case 0x18:
        cVar3 = *(char *)((int)local_38 + 0x161);
LAB_0048d0f4:
        if (cVar3 != '\0') {
          fVar1 = (float)local_38[0xb7] + *(float *)(iVar12 + 0xe);
          if (_DAT_007e3380 <= fVar1) {
LAB_0048ccf6:
            local_38[0xb7] = (int)fVar1;
          }
          else {
            local_38[0xb7] = (int)_DAT_007e3380;
          }
        }
        break;
      case 0x19:
        if (*(char *)((int)local_38 + 0x161) == '\0') {
          cVar3 = (char)local_38[0x58];
          goto LAB_0048d162;
        }
        fVar1 = (float)local_38[0xb3] + *(float *)(iVar12 + 0xe);
        if (fVar1 < _DAT_007e3380) {
          fVar1 = _DAT_007e3380;
        }
LAB_0048d151:
        local_38[0xb3] = (int)fVar1;
        break;
      case 0x1a:
        if (*(char *)((int)local_38 + 0x161) == '\0') {
          cVar3 = (char)local_38[0x58];
          goto LAB_0048d1d1;
        }
        fVar1 = (float)local_38[0xb4] + *(float *)(iVar12 + 0xe);
        if (fVar1 < _DAT_007e3380) {
          fVar1 = _DAT_007e3380;
        }
LAB_0048d1bb:
        local_38[0xb4] = (int)fVar1;
        break;
      case 0x1b:
        cVar3 = *(char *)((int)local_38 + 0x161);
LAB_0048d1d1:
        if (cVar3 != '\0') {
          fVar1 = (float)local_38[0xb5] + *(float *)(iVar12 + 0xe);
          if (fVar1 < _DAT_007e3380) {
            fVar1 = _DAT_007e3380;
          }
          goto LAB_0048d1f3;
        }
        break;
      case 0x1d:
        if (*(char *)((int)local_38 + 0x161) != '\0') {
          fVar1 = (float)local_38[0xbd] + *(float *)(iVar12 + 0xe);
          if (fVar1 < _DAT_007e3380) {
            fVar1 = _DAT_007e3380;
          }
          local_38[0xbd] = (int)fVar1;
        }
      }
      local_38 = piVar10;
    }
    local_8 = 0xffffffff;
    FUN_0045a530();
  }
  piVar10 = (int *)FUN_0044c630(*(undefined4 *)(*(int *)((int)param_2 + 4) + 0x16));
  iVar7 = FUN_0044c5b0(*(undefined4 *)(*(int *)((int)param_2 + 4) + 0x16),0);
  iVar12 = *(int *)((int)param_2 + 4);
  switch(*(undefined4 *)(iVar12 + 0x1a)) {
  case 0:
    cVar4 = (**(code **)(*piVar10 + 0xc))();
    if (cVar4 == '\0') {
      piVar10[0x15] = (int)((float)piVar10[0x15] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    else {
      piVar10[0x15] = (int)((float)piVar10[0x15] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 1:
    cVar4 = (**(code **)(*piVar10 + 0xc))();
    if (cVar4 == '\0') {
      piVar10[0x16] = (int)((float)piVar10[0x16] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    else {
      piVar10[0x16] = (int)((float)piVar10[0x16] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 2:
    cVar4 = (**(code **)(*piVar10 + 0xc))();
    if ((cVar4 == '\0') && (cVar4 = (**(code **)(*piVar10 + 0x10))(), cVar4 != '\0')) {
      piVar10[0xb] = (int)((float)piVar10[0xb] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    else {
      piVar10[0xb] = (int)((float)piVar10[0xb] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 3:
    cVar4 = (**(code **)(*piVar10 + 0x10))();
    if (cVar4 != '\0') {
      piVar10[0x23] = (int)((float)piVar10[0x23] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 4:
    cVar4 = (**(code **)(*piVar10 + 0x10))();
    if (cVar4 != '\0') {
      piVar10[0x24] = (int)((float)piVar10[0x24] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 5:
    cVar4 = (**(code **)(*piVar10 + 0x10))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*piVar10 + 0x14))();
      if (cVar4 != '\0') {
        piVar10[0x2b] = (int)((float)piVar10[0x2b] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
      }
    }
    else {
      piVar10[0x22] = (int)((float)piVar10[0x22] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 6:
    cVar4 = (**(code **)(*piVar10 + 0x10))();
    if (cVar4 != '\0') {
      piVar10[0x25] = (int)((float)piVar10[0x25] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 7:
    cVar4 = (**(code **)(*piVar10 + 0x14))();
    if (cVar4 != '\0') {
      piVar10[0x2a] = (int)((float)piVar10[0x2a] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 8:
    cVar4 = (**(code **)(*piVar10 + 0xc))();
    if (cVar4 != '\0') {
      piVar10[0x11] = (int)((float)piVar10[0x11] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 9:
    cVar4 = (**(code **)(*piVar10 + 0xc))();
    if (cVar4 != '\0') {
      piVar10[0x12] = (int)((float)piVar10[0x12] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 10:
    cVar4 = (**(code **)(*piVar10 + 0xc))();
    if (cVar4 != '\0') {
      piVar10[0x13] = (int)((float)piVar10[0x13] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0xb:
    cVar4 = (**(code **)(*piVar10 + 0xc))();
    if (cVar4 != '\0') {
      piVar10[0x14] = (int)((float)piVar10[0x14] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0xc:
    cVar4 = (**(code **)(*piVar10 + 0xc))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*piVar10 + 0x10))();
      if (cVar4 == '\0') {
        piVar10[0xc] = (int)((float)piVar10[0xc] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
      }
      else {
        piVar10[0xc] = (int)((float)piVar10[0xc] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
      }
    }
    else {
      piVar10[0xc] = (int)((float)piVar10[0xc] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0xd:
    cVar4 = (**(code **)(*piVar10 + 0x10))();
    if (cVar4 != '\0') {
      piVar10[0x21] = (int)((float)piVar10[0x21] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0xe:
    piVar10[10] = (int)((float)piVar10[10] + *(float *)(iVar12 + 0xe));
    break;
  case 0xf:
    if (cVar4 == '\0') {
      param_2 = *(float *)(iVar12 + 0xe);
    }
    else {
      param_2 = (float)*(int *)(iVar7 + 0x10) * *(float *)(iVar12 + 0xe) * _DAT_007e543c;
    }
    piVar10[4] = piVar10[4] + (int)ROUND(param_2);
    break;
  case 0x10:
    if (cVar4 == '\0') {
      piVar10[3] = (int)((float)piVar10[3] + *(float *)(iVar12 + 0xe));
    }
    else {
      piVar10[3] = (int)((float)piVar10[3] +
                        *(float *)(iVar7 + 0xc) * *(float *)(iVar12 + 0xe) * _DAT_007e543c);
    }
    break;
  case 0x11:
    piVar10[5] = (int)((float)piVar10[5] + *(float *)(iVar12 + 0xe));
    break;
  case 0x12:
    piVar10[6] = (int)((float)piVar10[6] + *(float *)(iVar12 + 0xe));
    break;
  case 0x13:
    piVar10[9] = (int)((float)piVar10[9] + *(float *)(iVar12 + 0xe));
    break;
  case 0x14:
    cVar4 = (**(code **)(*piVar10 + 0xc))();
    if (cVar4 != '\0') {
      piVar10[0x17] = (int)((float)piVar10[0x17] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x15:
    piVar10[7] = (int)((float)piVar10[7] + *(float *)(iVar12 + 0xe));
    break;
  case 0x16:
    piVar10[8] = (int)((float)piVar10[8] + *(float *)(iVar12 + 0xe));
    break;
  case 0x17:
    cVar4 = (**(code **)(*piVar10 + 0x10))();
    if ((cVar4 != '\0') || (cVar4 = (**(code **)(*piVar10 + 0x14))(), cVar4 != '\0')) {
      piVar10[0x27] = (int)((float)piVar10[0x27] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x18:
    cVar4 = (**(code **)(*piVar10 + 0x10))();
    if (cVar4 != '\0') {
      piVar10[0x20] = (int)((float)piVar10[0x20] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x19:
    cVar4 = (**(code **)(*piVar10 + 0x10))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*piVar10 + 0x14))();
      if (cVar4 != '\0') {
        piVar10[0x1d] = (int)((float)piVar10[0x1d] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
      }
    }
    else {
      piVar10[0x1d] = (int)((float)piVar10[0x1d] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x1a:
    cVar4 = (**(code **)(*piVar10 + 0x10))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*piVar10 + 0x14))();
      if (cVar4 != '\0') {
        piVar10[0x1e] = (int)((float)piVar10[0x1e] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
      }
    }
    else {
      piVar10[0x1e] = (int)((float)piVar10[0x1e] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x1b:
    cVar4 = (**(code **)(*piVar10 + 0x10))();
    if (cVar4 != '\0') {
      piVar10[0x1f] = (int)((float)piVar10[0x1f] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x1d:
    cVar4 = (**(code **)(*piVar10 + 0x10))();
    if (cVar4 != '\0') {
      piVar10[0x26] = (int)((float)piVar10[0x26] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
  }
  ExceptionList = local_10;
  return 3;
joined_r0x0048ca97:
  if (piVar13 == (int *)0x0) goto LAB_0048cab7;
  cVar3 = (*(code *)PTR_FUN_007e4ba0)(*piVar13,iVar7);
  if (cVar3 != '\0') {
    if (piVar13 != (int *)0x0) goto LAB_0048cafa;
    goto LAB_0048cab7;
  }
  piVar13 = (int *)piVar13[2];
  goto joined_r0x0048ca97;
LAB_0048cab7:
  pvVar8 = operator_new(0xe);
  local_8._0_1_ = 1;
  if (pvVar8 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0045baf0(iVar7,local_34,0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  iVar7 = local_30 + 1;
  bVar14 = local_30 != 0;
  piVar2 = piVar6;
  local_30 = iVar7;
  if (bVar14) {
    local_34[2] = (int)piVar6;
    piVar2 = local_38;
  }
LAB_0048cafa:
  local_34 = piVar6;
  local_38 = piVar2;
  piVar11 = piVar9;
  if (piVar9 == (int *)0x0) goto joined_r0x0048ca41;
  goto LAB_0048ca6b;
joined_r0x0048cc1f:
  if (piVar2 == (int *)0x0) goto LAB_0048cc3f;
  cVar3 = (*(code *)PTR_FUN_007e4ba0)(*piVar2,iVar12);
  if (cVar3 != '\0') {
    if (piVar2 != (int *)0x0) goto LAB_0048cc82;
    goto LAB_0048cc3f;
  }
  piVar2 = (int *)piVar2[2];
  goto joined_r0x0048cc1f;
LAB_0048cc3f:
  pvVar8 = operator_new(0xe);
  local_8._0_1_ = 3;
  if (pvVar8 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_0045baf0(iVar12,local_34,0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  iVar12 = local_30 + 1;
  bVar14 = local_30 != 0;
  piVar10 = piVar9;
  local_30 = iVar12;
  if (bVar14) {
    local_34[2] = (int)piVar9;
    piVar10 = local_38;
  }
LAB_0048cc82:
  local_34 = piVar9;
  local_38 = piVar10;
  piVar10 = piVar11;
  if (piVar11 == (int *)0x0) goto LAB_0048cc8d;
  goto LAB_0048cbe3;
joined_r0x0048cb66:
  if (piVar2 == (int *)0x0) goto LAB_0048cb86;
  cVar3 = (*(code *)PTR_FUN_007e4ba0)(*piVar2,iVar12);
  if (cVar3 != '\0') {
    if (piVar2 != (int *)0x0) goto LAB_0048cbc9;
    goto LAB_0048cb86;
  }
  piVar2 = (int *)piVar2[2];
  goto joined_r0x0048cb66;
LAB_0048cb86:
  pvVar8 = operator_new(0xe);
  local_8._0_1_ = 2;
  if (pvVar8 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_0045baf0(iVar12,local_34,0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  iVar12 = local_30 + 1;
  bVar14 = local_30 != 0;
  piVar10 = piVar9;
  local_30 = iVar12;
  if (bVar14) {
    local_34[2] = (int)piVar9;
    piVar10 = local_38;
  }
LAB_0048cbc9:
  local_34 = piVar9;
  local_38 = piVar10;
  piVar10 = piVar11;
  if (piVar11 == (int *)0x0) goto LAB_0048cc8d;
  goto LAB_0048cb29;
}


