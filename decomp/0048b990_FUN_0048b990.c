// FUN_0048b990 @ 48b990 size=3819

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0048b990(int param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  float10 fVar14;
  int *local_38;
  int *local_34;
  int local_30;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007bd909;
  local_10 = ExceptionList;
  cVar5 = *(char *)(*(int *)((int)param_2 + 4) + 0x1e);
  ExceptionList = &local_10;
  if (*(int *)(*(int *)((int)param_2 + 4) + 0x12) == 0) {
    piVar12 = (int *)0x0;
    local_38 = (int *)0x0;
    local_34 = (int *)0x0;
    local_30 = 0;
    local_8 = 0;
    local_1c = &DAT_0089cad8;
    ExceptionList = &local_10;
    do {
      iVar11 = *local_1c;
      if (iVar11 != 0) {
        piVar2 = *(int **)(iVar11 + 0x4508);
        while (piVar2 != (int *)0x0) {
          piVar12 = (int *)piVar2[2];
          iVar10 = *piVar2;
          iVar6 = FUN_00522770();
          piVar2 = piVar12;
          piVar12 = local_38;
          if (iVar6 == param_1) {
            piVar1 = *(int **)(iVar10 + 0x26);
            piVar8 = local_34;
joined_r0x0048ba27:
            local_34 = piVar8;
            piVar12 = local_38;
            local_38 = piVar12;
            if (piVar1 != (int *)0x0) {
              piVar8 = (int *)piVar1[2];
              iVar10 = *piVar1;
              piVar1 = piVar8;
              piVar8 = local_34;
              piVar9 = piVar12;
              if (*(int *)(iVar10 + 0x130) == *(int *)(*(int *)((int)param_2 + 4) + 0x16)) {
                for (; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]) {
                  cVar4 = (*(code *)PTR_FUN_007e4ba0)(*piVar9,iVar10);
                  if (cVar4 != '\0') {
                    if (piVar9 != (int *)0x0) goto joined_r0x0048ba27;
                    break;
                  }
                }
                pvVar7 = operator_new(0xe);
                local_8._0_1_ = 1;
                if (pvVar7 == (void *)0x0) {
                  piVar8 = (int *)0x0;
                }
                else {
                  piVar8 = (int *)FUN_0045baf0(iVar10,local_34,0);
                }
                local_8 = (uint)local_8._1_3_ << 8;
                iVar10 = local_30 + 1;
                bVar13 = local_30 != 0;
                local_38 = piVar8;
                local_30 = iVar10;
                if (bVar13) {
                  local_34[2] = (int)piVar8;
                  local_38 = piVar12;
                }
              }
              goto joined_r0x0048ba27;
            }
          }
        }
        piVar2 = *(int **)(param_1 + 0x451c);
        piVar1 = piVar12;
        piVar8 = local_38;
        piVar9 = local_34;
        if (iVar11 == param_1) {
joined_r0x0048bb7d:
          local_34 = piVar9;
          local_38 = piVar8;
          piVar12 = piVar1;
          if (piVar2 != (int *)0x0) {
            piVar1 = (int *)piVar2[2];
            iVar11 = *piVar2;
            piVar2 = piVar1;
            piVar1 = local_38;
            piVar8 = local_38;
            piVar9 = local_34;
            if (((*(int *)(iVar11 + 0x58) == 0) ||
                (*(int *)(iVar11 + 0x58) == *(int *)(param_1 + 6))) &&
               (*(int *)(iVar11 + 0x130) == *(int *)(*(int *)((int)param_2 + 4) + 0x16))) {
              for (; piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]) {
                cVar4 = (*(code *)PTR_FUN_007e4ba0)(*piVar12,iVar11);
                if (cVar4 != '\0') {
                  if (piVar12 != (int *)0x0) goto joined_r0x0048bb7d;
                  break;
                }
              }
              pvVar7 = operator_new(0xe);
              local_8._0_1_ = 3;
              if (pvVar7 == (void *)0x0) {
                piVar9 = (int *)0x0;
              }
              else {
                piVar9 = (int *)FUN_0045baf0(iVar11,local_34,0);
              }
              local_8 = (uint)local_8._1_3_ << 8;
              iVar11 = local_30 + 1;
              bVar13 = local_30 != 0;
              piVar1 = piVar9;
              piVar8 = piVar9;
              local_30 = iVar11;
              if (bVar13) {
                local_34[2] = (int)piVar9;
                piVar1 = local_38;
                piVar8 = local_38;
              }
            }
            goto joined_r0x0048bb7d;
          }
        }
        else {
joined_r0x0048badb:
          local_34 = piVar9;
          local_38 = piVar8;
          piVar12 = piVar1;
          if (piVar2 != (int *)0x0) {
            piVar1 = (int *)piVar2[2];
            iVar11 = *piVar2;
            piVar2 = piVar1;
            piVar1 = local_38;
            piVar8 = local_38;
            piVar9 = local_34;
            if ((*(int *)(iVar11 + 0x58) == *(int *)(param_1 + 6)) &&
               (*(int *)(iVar11 + 0x130) == *(int *)(*(int *)((int)param_2 + 4) + 0x16))) {
              for (; piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]) {
                cVar4 = (*(code *)PTR_FUN_007e4ba0)(*piVar12,iVar11);
                if (cVar4 != '\0') {
                  if (piVar12 != (int *)0x0) goto joined_r0x0048badb;
                  break;
                }
              }
              pvVar7 = operator_new(0xe);
              local_8._0_1_ = 2;
              if (pvVar7 == (void *)0x0) {
                piVar9 = (int *)0x0;
              }
              else {
                piVar9 = (int *)FUN_0045baf0(iVar11,local_34,0);
              }
              local_8 = (uint)local_8._1_3_ << 8;
              iVar11 = local_30 + 1;
              bVar13 = local_30 != 0;
              piVar1 = piVar9;
              piVar8 = piVar9;
              local_30 = iVar11;
              if (bVar13) {
                local_34[2] = (int)piVar9;
                piVar1 = local_38;
                piVar8 = local_38;
              }
            }
            goto joined_r0x0048badb;
          }
        }
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < 0x89d038);
    while (piVar12 != (int *)0x0) {
      piVar2 = (int *)piVar12[2];
      piVar12 = (int *)*piVar12;
      iVar11 = *(int *)((int)param_2 + 4);
      switch(*(undefined4 *)(iVar11 + 0x1a)) {
      case 0:
        if (*(char *)((int)piVar12 + 0x15f) == '\0') {
LAB_0048bc95:
          fVar3 = (float)piVar12[0xb8] + *(float *)(iVar11 + 0xe);
          if (fVar3 < _DAT_007e3380) {
            fVar3 = _DAT_007e3380;
          }
LAB_0048bcb3:
          piVar12[0xb8] = (int)fVar3;
          break;
        }
        fVar3 = (float)piVar12[0xb7] + *(float *)(iVar11 + 0xe);
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
        goto LAB_0048bc80;
      case 1:
        if (*(char *)((int)piVar12 + 0x15f) != '\0') goto LAB_0048bc95;
LAB_0048bd03:
        fVar3 = (float)piVar12[0xb9] + *(float *)(iVar11 + 0xe);
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
LAB_0048bd21:
        piVar12[0xb9] = (int)fVar3;
        break;
      case 2:
        fVar3 = (float)piVar12[0x46] + *(float *)(iVar11 + 0xe);
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
        piVar12[0x46] = (int)fVar3;
        break;
      case 3:
        cVar4 = *(char *)((int)piVar12 + 0x161);
        goto LAB_0048c100;
      case 4:
        cVar4 = *(char *)((int)piVar12 + 0x161);
        goto LAB_0048c137;
      case 5:
        if (*(char *)((int)piVar12 + 0x161) != '\0') goto LAB_0048bd03;
        cVar4 = (char)piVar12[0x58];
        goto LAB_0048c100;
      case 6:
        cVar4 = *(char *)((int)piVar12 + 0x161);
        goto LAB_0048c1a5;
      case 7:
        cVar4 = (char)piVar12[0x58];
        goto LAB_0048bfe1;
      case 8:
        if (*(char *)((int)piVar12 + 0x15f) != '\0') {
          fVar3 = (float)piVar12[0xb3] + *(float *)(iVar11 + 0xe);
          if (_DAT_007e3380 <= fVar3) goto LAB_0048c03e;
          piVar12[0xb3] = (int)_DAT_007e3380;
        }
        break;
      case 9:
        cVar4 = *(char *)((int)piVar12 + 0x15f);
LAB_0048c04f:
        if (cVar4 != '\0') {
          fVar3 = (float)piVar12[0xb4] + *(float *)(iVar11 + 0xe);
          if (_DAT_007e3380 <= fVar3) goto LAB_0048c0a8;
          piVar12[0xb4] = (int)_DAT_007e3380;
        }
        break;
      case 10:
        if (*(char *)((int)piVar12 + 0x15f) != '\0') {
          fVar3 = (float)piVar12[0xb5] + *(float *)(iVar11 + 0xe);
          if (fVar3 < DAT_00dc1744) {
            piVar12[0xb5] = (int)DAT_00dc1744;
            break;
          }
LAB_0048c0e7:
          piVar12[0xb5] = (int)fVar3;
        }
        break;
      case 0xb:
        if (*(char *)((int)piVar12 + 0x15f) != '\0') {
          fVar3 = (float)piVar12[0xb6] + *(float *)(iVar11 + 0xe);
          if (fVar3 < _DAT_007e3380) {
            fVar3 = _DAT_007e3380;
          }
          piVar12[0xb6] = (int)fVar3;
        }
        break;
      case 0xc:
        fVar3 = (float)piVar12[0x45] + *(float *)(iVar11 + 0xe);
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
        piVar12[0x45] = (int)fVar3;
        break;
      case 0xd:
        if (*(char *)((int)piVar12 + 0x161) != '\0') {
          fVar3 = (float)piVar12[0xb8] + *(float *)(iVar11 + 0xe);
          if (_DAT_007e3380 <= fVar3) goto LAB_0048bcb3;
          piVar12[0xb8] = (int)_DAT_007e3380;
        }
        break;
      case 0xe:
        piVar12[0x3f] = (int)((float)piVar12[0x3f] + *(float *)(iVar11 + 0xe));
        break;
      case 0x12:
        fVar14 = (float10)(**(code **)(*piVar12 + 0x28))();
        fVar14 = fVar14 + (float10)*(float *)(iVar11 + 0xe);
        if (fVar14 < (float10)_DAT_007e3380) {
          fVar14 = (float10)_DAT_007e3380;
        }
        piVar12[0x44] = (int)(float)fVar14;
        break;
      case 0x13:
        fVar3 = (float)piVar12[0x3e] + *(float *)(iVar11 + 0xe);
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
        piVar12[0x3e] = (int)fVar3;
        break;
      case 0x14:
        if (*(char *)((int)piVar12 + 0x15f) != '\0') {
          fVar3 = (float)piVar12[0xb9] + *(float *)(iVar11 + 0xe);
          if (_DAT_007e3380 <= fVar3) goto LAB_0048bd21;
          piVar12[0xb9] = (int)_DAT_007e3380;
        }
        break;
      case 0x15:
        fVar3 = (float)piVar12[0x3c] * (float)piVar12[0x42] * _DAT_007e543c +
                *(float *)(iVar11 + 0xe);
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
        piVar12[0x42] = (int)fVar3;
        break;
      case 0x16:
        fVar3 = (float)piVar12[0x3c] * (float)piVar12[0x43] * _DAT_007e543c +
                *(float *)(iVar11 + 0xe);
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
        piVar12[0x43] = (int)fVar3;
        break;
      case 0x17:
        if (*(char *)((int)piVar12 + 0x161) == '\0') {
          cVar4 = (char)piVar12[0x58];
          goto LAB_0048c1a5;
        }
        fVar3 = (float)piVar12[0xbe] + *(float *)(iVar11 + 0xe);
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
        piVar12[0xbe] = (int)fVar3;
        break;
      case 0x18:
        cVar4 = *(char *)((int)piVar12 + 0x161);
LAB_0048bfe1:
        if (cVar4 != '\0') {
          fVar3 = (float)piVar12[0xb7] + *(float *)(iVar11 + 0xe);
          if (_DAT_007e3380 <= fVar3) {
LAB_0048bc80:
            piVar12[0xb7] = (int)fVar3;
          }
          else {
            piVar12[0xb7] = (int)_DAT_007e3380;
          }
        }
        break;
      case 0x19:
        if (*(char *)((int)piVar12 + 0x161) == '\0') {
          cVar4 = (char)piVar12[0x58];
          goto LAB_0048c04f;
        }
        fVar3 = (float)piVar12[0xb3] + *(float *)(iVar11 + 0xe);
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
LAB_0048c03e:
        piVar12[0xb3] = (int)fVar3;
        break;
      case 0x1a:
        if (*(char *)((int)piVar12 + 0x161) == '\0') {
          cVar4 = (char)piVar12[0x58];
          goto LAB_0048c0c1;
        }
        fVar3 = (float)piVar12[0xb4] + *(float *)(iVar11 + 0xe);
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
LAB_0048c0a8:
        piVar12[0xb4] = (int)fVar3;
        break;
      case 0x1b:
        cVar4 = *(char *)((int)piVar12 + 0x161);
LAB_0048c0c1:
        if (cVar4 != '\0') {
          fVar3 = (float)piVar12[0xb5] + *(float *)(iVar11 + 0xe);
          if (fVar3 < _DAT_007e3380) {
            fVar3 = _DAT_007e3380;
          }
          goto LAB_0048c0e7;
        }
        break;
      case 0x1d:
        cVar4 = *(char *)((int)piVar12 + 0x161);
        goto LAB_0048c16e;
      case 0x1e:
        cVar4 = *(char *)((int)piVar12 + 0x15f);
LAB_0048c100:
        if (cVar4 != '\0') {
          fVar3 = (float)piVar12[0xba] + *(float *)(iVar11 + 0xe);
          if (fVar3 < _DAT_007e3380) {
            fVar3 = _DAT_007e3380;
          }
          piVar12[0xba] = (int)fVar3;
        }
        break;
      case 0x1f:
        cVar4 = *(char *)((int)piVar12 + 0x15f);
LAB_0048c137:
        if (cVar4 != '\0') {
          fVar3 = (float)piVar12[0xbb] + *(float *)(iVar11 + 0xe);
          if (fVar3 < _DAT_007e3380) {
            fVar3 = _DAT_007e3380;
          }
          piVar12[0xbb] = (int)fVar3;
        }
        break;
      case 0x20:
        cVar4 = *(char *)((int)piVar12 + 0x15f);
LAB_0048c16e:
        if (cVar4 != '\0') {
          fVar3 = (float)piVar12[0xbd] + *(float *)(iVar11 + 0xe);
          if (fVar3 < _DAT_007e3380) {
            fVar3 = _DAT_007e3380;
          }
          piVar12[0xbd] = (int)fVar3;
        }
        break;
      case 0x21:
        cVar4 = *(char *)((int)piVar12 + 0x15f);
LAB_0048c1a5:
        if (cVar4 != '\0') {
          fVar3 = (float)piVar12[0xbc] + *(float *)(iVar11 + 0xe);
          if (fVar3 < _DAT_007e3380) {
            fVar3 = _DAT_007e3380;
          }
          piVar12[0xbc] = (int)fVar3;
        }
        break;
      case 0x22:
        fVar3 = (float)piVar12[0x47] + *(float *)(iVar11 + 0xe);
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
        piVar12[0x47] = (int)fVar3;
        break;
      case 0x23:
        if (*(char *)((int)piVar12 + 0x15f) == '\0') {
          piVar12[0x48] = (int)((float)piVar12[0x48] + *(float *)(iVar11 + 0xe));
        }
        else {
          piVar12[0x48] = (int)((float)piVar12[0x48] + *(float *)(iVar11 + 0xe));
        }
        break;
      case 0x24:
        piVar12[0x49] = (int)((float)piVar12[0x49] + *(float *)(iVar11 + 0xe));
      }
      piVar12 = piVar2;
    }
    local_8 = 0xffffffff;
    FUN_0045a530();
  }
  piVar12 = (int *)FUN_0044c620(*(undefined4 *)(*(int *)((int)param_2 + 4) + 0x16));
  iVar10 = FUN_0044c3d0(piVar12[1],0);
  iVar11 = *(int *)((int)param_2 + 4);
  switch(*(undefined4 *)(iVar11 + 0x1a)) {
  case 0:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 == '\0') {
      piVar12[0x15] = (int)((float)piVar12[0x15] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    else {
      piVar12[0x15] = (int)((float)piVar12[0x15] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 1:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 == '\0') {
      piVar12[0x16] = (int)((float)piVar12[0x16] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    else {
      piVar12[0x16] = (int)((float)piVar12[0x16] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 2:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*piVar12 + 0x10))();
      if (cVar5 == '\0') {
        piVar12[0xb] = (int)((float)piVar12[0xb] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
      }
      else {
        piVar12[0xb] = (int)((float)piVar12[0xb] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
      }
    }
    else {
      piVar12[0xb] = (int)((float)piVar12[0xb] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 3:
    cVar5 = (**(code **)(*piVar12 + 0x10))();
    if (cVar5 != '\0') {
      piVar12[0x23] = (int)((float)piVar12[0x23] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 4:
    cVar5 = (**(code **)(*piVar12 + 0x10))();
    if (cVar5 != '\0') {
      piVar12[0x24] = (int)((float)piVar12[0x24] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 5:
    cVar5 = (**(code **)(*piVar12 + 0x10))();
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*piVar12 + 0x14))();
      if (cVar5 != '\0') {
        piVar12[0x2b] = (int)((float)piVar12[0x2b] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
      }
    }
    else {
      piVar12[0x22] = (int)((float)piVar12[0x22] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 6:
    cVar5 = (**(code **)(*piVar12 + 0x10))();
    if (cVar5 != '\0') {
      piVar12[0x25] = (int)((float)piVar12[0x25] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 7:
    cVar5 = (**(code **)(*piVar12 + 0x14))();
    if (cVar5 != '\0') {
      piVar12[0x2a] = (int)((float)piVar12[0x2a] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 8:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 != '\0') {
      piVar12[0x11] = (int)((float)piVar12[0x11] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 9:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 != '\0') {
      piVar12[0x12] = (int)((float)piVar12[0x12] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 10:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 != '\0') {
      piVar12[0x13] = (int)((float)piVar12[0x13] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0xb:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 != '\0') {
      piVar12[0x14] = (int)((float)piVar12[0x14] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0xc:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*piVar12 + 0x10))();
      if (cVar5 == '\0') {
        piVar12[0xc] = (int)((float)piVar12[0xc] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
      }
      else {
        piVar12[0xc] = (int)((float)piVar12[0xc] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
      }
    }
    else {
      piVar12[0xc] = (int)((float)piVar12[0xc] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0xd:
    cVar5 = (**(code **)(*piVar12 + 0x10))();
    if (cVar5 != '\0') {
      piVar12[0x21] = (int)((float)piVar12[0x21] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0xe:
    piVar12[10] = (int)((float)piVar12[10] + *(float *)(iVar11 + 0xe));
    break;
  case 0xf:
    if (cVar5 == '\0') {
      param_2 = *(float *)(iVar11 + 0xe);
    }
    else {
      param_2 = (float)*(int *)(iVar10 + 0x10) * *(float *)(iVar11 + 0xe) * _DAT_007e543c;
    }
    piVar12[4] = piVar12[4] + (int)ROUND(param_2);
    break;
  case 0x10:
    if (cVar5 == '\0') {
      piVar12[3] = (int)((float)piVar12[3] + *(float *)(iVar11 + 0xe));
    }
    else {
      piVar12[3] = (int)((float)piVar12[3] +
                        *(float *)(iVar10 + 0xc) * *(float *)(iVar11 + 0xe) * _DAT_007e543c);
    }
    break;
  case 0x11:
    piVar12[5] = (int)((float)piVar12[5] + *(float *)(iVar11 + 0xe));
    break;
  case 0x12:
    piVar12[6] = (int)((float)piVar12[6] + *(float *)(iVar11 + 0xe));
    break;
  case 0x13:
    piVar12[9] = (int)((float)piVar12[9] + *(float *)(iVar11 + 0xe));
    break;
  case 0x14:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 != '\0') {
      piVar12[0x17] = (int)((float)piVar12[0x17] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x15:
    piVar12[7] = (int)((float)piVar12[7] + *(float *)(iVar11 + 0xe));
    break;
  case 0x16:
    piVar12[8] = (int)((float)piVar12[8] + *(float *)(iVar11 + 0xe));
    break;
  case 0x17:
    cVar5 = (**(code **)(*piVar12 + 0x10))();
    if ((cVar5 != '\0') || (cVar5 = (**(code **)(*piVar12 + 0x14))(), cVar5 != '\0')) {
      piVar12[0x27] = (int)((float)piVar12[0x27] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x18:
    cVar5 = (**(code **)(*piVar12 + 0x10))();
    if (cVar5 != '\0') {
      piVar12[0x20] = (int)((float)piVar12[0x20] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x19:
    cVar5 = (**(code **)(*piVar12 + 0x10))();
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*piVar12 + 0x14))();
      if (cVar5 != '\0') {
        piVar12[0x1d] = (int)((float)piVar12[0x1d] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
      }
    }
    else {
      piVar12[0x1d] = (int)((float)piVar12[0x1d] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x1a:
    cVar5 = (**(code **)(*piVar12 + 0x10))();
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*piVar12 + 0x14))();
      if (cVar5 != '\0') {
        piVar12[0x1e] = (int)((float)piVar12[0x1e] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
      }
    }
    else {
      piVar12[0x1e] = (int)((float)piVar12[0x1e] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x1b:
    cVar5 = (**(code **)(*piVar12 + 0x10))();
    if (cVar5 != '\0') {
      piVar12[0x1f] = (int)((float)piVar12[0x1f] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x1d:
    cVar5 = (**(code **)(*piVar12 + 0x10))();
    if (cVar5 != '\0') {
      piVar12[0x26] = (int)((float)piVar12[0x26] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x1e:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 != '\0') {
      piVar12[0x18] = (int)((float)piVar12[0x18] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x1f:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 != '\0') {
      piVar12[0x19] = (int)((float)piVar12[0x19] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x20:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 != '\0') {
      piVar12[0x1b] = (int)((float)piVar12[0x1b] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x21:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 != '\0') {
      piVar12[0x1a] = (int)((float)piVar12[0x1a] + *(float *)(*(int *)((int)param_2 + 4) + 0xe));
    }
    break;
  case 0x22:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if ((cVar5 == '\0') && (cVar5 = (**(code **)(*piVar12 + 0x10))(), cVar5 == '\0')) {
      *(float *)((int)piVar12 + 0xc6) =
           *(float *)((int)piVar12 + 0xc6) + *(float *)(*(int *)((int)param_2 + 4) + 0xe);
    }
    else {
      *(float *)((int)piVar12 + 0xc6) =
           *(float *)((int)piVar12 + 0xc6) + *(float *)(*(int *)((int)param_2 + 4) + 0xe);
    }
    break;
  case 0x23:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if ((cVar5 == '\0') && (cVar5 = (**(code **)(*piVar12 + 0x10))(), cVar5 == '\0')) {
      *(float *)((int)piVar12 + 0xca) =
           *(float *)((int)piVar12 + 0xca) + *(float *)(*(int *)((int)param_2 + 4) + 0xe);
    }
    else {
      *(float *)((int)piVar12 + 0xca) =
           *(float *)((int)piVar12 + 0xca) + *(float *)(*(int *)((int)param_2 + 4) + 0xe);
    }
    break;
  case 0x24:
    cVar5 = (**(code **)(*piVar12 + 0xc))();
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*piVar12 + 0x10))();
      if (cVar5 == '\0') {
        fVar3 = *(float *)((int)piVar12 + 0xce) + *(float *)(*(int *)((int)param_2 + 4) + 0xe);
      }
      else {
        fVar3 = *(float *)((int)piVar12 + 0xce) + *(float *)(*(int *)((int)param_2 + 4) + 0xe);
      }
    }
    else {
      fVar3 = *(float *)((int)piVar12 + 0xce) + *(float *)(*(int *)((int)param_2 + 4) + 0xe);
    }
    *(float *)((int)piVar12 + 0xce) = fVar3;
  }
  ExceptionList = local_10;
  return 3;
}


