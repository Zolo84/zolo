// FUN_0047ab40 @ 47ab40 size=1954

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0047ab40(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  int unaff_retaddr;
  undefined4 uStackY_d4;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined4 *puStack_b4;
  int *local_b0;
  int *piStack_ac;
  int local_a8;
  int *local_a4;
  undefined4 auStack_a0 [37];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bd12c;
  local_c = ExceptionList;
  uStackY_d4._0_2_ = 0xab78;
  uStackY_d4._2_2_ = 0x47;
  ExceptionList = &local_c;
  local_a4 = param_1;
  iVar2 = FUN_00428ee0();
  if (iVar2 == 0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10 = (undefined4 *)(iVar2 + -8);
  }
  uStackY_d4._0_2_ = 0xab92;
  uStackY_d4._2_2_ = 0x47;
  local_a8 = FUN_00428ee0();
  if (local_a8 == 0) {
    local_a8 = 0;
  }
  else {
    local_a8 = local_a8 + -8;
  }
  if (puVar10 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return 3;
  }
  puVar3 = (undefined4 *)FUN_0064ec20();
  if (puVar3 == puVar10) {
    uStackY_d4._0_2_ = 0xabce;
    uStackY_d4._2_2_ = 0x47;
    FUN_0064eba0();
    if (*(int *)(DAT_00d0ca90 + 0x21e62) == 0x15) {
      uStackY_d4._0_2_ = 0xabe4;
      uStackY_d4._2_2_ = 0x47;
      FUN_0064c090();
    }
  }
  piVar5 = (int *)puVar10[0x1b];
  local_b0 = piVar5;
  if (piVar5 != (int *)0x0) {
    uStackY_d4._0_2_ = 0xabf9;
    uStackY_d4._2_2_ = 0x47;
    (**(code **)(*(int *)((int)piVar5 + 0x22) + 0x18))();
    uStackY_d4._0_2_ = 0xac03;
    uStackY_d4._2_2_ = 0x47;
    (**(code **)(*piVar5 + 0x94))();
  }
  uStack_bc = (undefined4 *)CONCAT22(uStack_bc._2_2_,(undefined2)uStack_bc);
  if (((*(char *)(*(int *)(param_2 + 4) + 0x1a) != '\0') &&
      (uStack_bc = (undefined4 *)CONCAT22(uStack_bc._2_2_,(undefined2)uStack_bc),
      *(char *)((int)puVar10 + 0x162) != '\0')) &&
     (iVar2 = puVar10[0x22],
     uStack_bc = (undefined4 *)CONCAT22(uStack_bc._2_2_,(undefined2)uStack_bc), iVar2 != 0)) {
    uStackY_d4._0_2_ = (undefined2)iVar2;
    uStackY_d4._2_2_ = (undefined2)((uint)iVar2 >> 0x10);
    iVar2 = FUN_0044c5b0();
    uStack_bc._0_2_ = (undefined2)*(undefined4 *)(iVar2 + 0x14);
    uStack_bc._2_2_ = (undefined2)((uint)*(undefined4 *)(iVar2 + 0x14) >> 0x10);
    uStackY_d4._0_2_ = 0xac40;
    uStackY_d4._2_2_ = 0x47;
    iVar2 = FUN_0044c630();
    uStack_bc = (undefined4 *)
                (*(float *)(iVar2 + 0x14) + (float)CONCAT22(uStack_bc._2_2_,(undefined2)uStack_bc));
    uStackY_d4._0_2_ = 0xac57;
    uStackY_d4._2_2_ = 0x47;
    (**(code **)(*param_1 + 0x28))();
  }
  piVar5 = local_a4;
  if (_DAT_007e3380 < (float)puVar10[0x3b]) {
    if (*(char *)(*(int *)(param_2 + 4) + 0x1a) != '\0') {
      uStackY_d4._0_2_ = (undefined2)puVar10[0x4c];
      uStackY_d4._2_2_ = (undefined2)((uint)puVar10[0x4c] >> 0x10);
      iVar2 = FUN_0044c3d0();
      if (iVar2 != 0) {
        uStackY_d4._0_2_ = (undefined2)puVar10[0x4c];
        uStackY_d4._2_2_ = (undefined2)((uint)puVar10[0x4c] >> 0x10);
        iVar2 = FUN_0044c3d0();
        piStack_ac = *(int **)(iVar2 + 0x14);
        if (puVar10[0x1b] != 0) {
          iVar2 = FUN_00522770();
          if (iVar2 != 0) {
            piVar4 = (int *)FUN_00522770();
            if (piVar4 != piVar5) {
              piVar5 = (int *)FUN_00522770();
            }
          }
        }
        uStackY_d4._0_2_ = 0xacf4;
        uStackY_d4._2_2_ = 0x47;
        iVar2 = FUN_0044c620();
        piStack_ac = (int *)(*(float *)(iVar2 + 0x14) + (float)piStack_ac);
        uStack_bc = (undefined4 *)0.0;
        if ((0 < (int)puVar10[0x4f]) &&
           (iVar2 = 0, uStack_bc = (undefined4 *)0.0, 0 < (int)puVar10[0x4f])) {
          puVar3 = puVar10 + 0x22;
          uStack_bc = (undefined4 *)0.0;
          do {
            uStackY_d4._0_2_ = (undefined2)*puVar3;
            uStackY_d4._2_2_ = (undefined2)((uint)*puVar3 >> 0x10);
            iVar6 = FUN_00789ce0();
            puStack_b4 = *(undefined4 **)(iVar6 + 0x14);
            uStackY_d4._0_2_ = 0xad3f;
            uStackY_d4._2_2_ = 0x47;
            iVar6 = FUN_0044c630();
            iVar2 = iVar2 + 1;
            puVar3 = puVar3 + 1;
            uStack_bc = (undefined4 *)
                        ((float)puStack_b4 + (float)uStack_bc + *(float *)(iVar6 + 0x14));
          } while (iVar2 < (int)puVar10[0x4f]);
        }
        if (DAT_00dc1964 == '\0') {
          uStack_bc = (undefined4 *)
                      ((float)puVar10[0x3b] * (float)piStack_ac * _DAT_007e543c + (float)uStack_bc);
        }
        else {
          uStack_bc = (undefined4 *)
                      (((float)uStack_bc + (float)piStack_ac) * (float)puVar10[0x3b] * _DAT_007e543c
                      );
        }
        if (local_b0 != (int *)0x0) {
          cVar1 = FUN_00524000();
          if (cVar1 == '\0') {
            uStack_bc = (undefined4 *)((float)uStack_bc * _DAT_007e6800);
          }
        }
        uStackY_d4._0_2_ = 0xadc4;
        uStackY_d4._2_2_ = 0x47;
        (**(code **)(*piVar5 + 0x28))();
      }
    }
    if (DAT_00dc191a != '\0') {
      cVar1 = FUN_0042e980();
      if ((cVar1 != '\0') && (*(int *)(*(int *)(param_2 + 4) + 0x1c) != 0)) {
        bVar12 = false;
        puVar3 = auStack_a0;
        for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        iVar2 = 0;
        puVar3 = auStack_a0;
        do {
          uStackY_d4._0_2_ = 0xae10;
          uStackY_d4._2_2_ = 0x47;
          puStack_b4 = (undefined4 *)FUN_00506330();
          if (_DAT_007e3380 < (float)(int)puStack_b4) {
            uVar7 = __ftol();
            *puVar3 = uVar7;
            bVar12 = true;
          }
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar2 < 0x25);
        if (bVar12) {
          iVar2 = *(int *)(*(int *)(param_2 + 4) + 0x1c);
          if (iVar2 < 1) {
            iVar2 = *(int *)(*(int *)(param_2 + 4) + 0x1c);
            uStackY_d4._0_2_ = 0xaf0f;
            uStackY_d4._2_2_ = 0x47;
            puVar3 = operator_new(0xc);
            uStack_4 = 1;
            puStack_b4 = puVar3;
            if (puVar3 != (undefined4 *)0x0) {
              FUN_005045e0();
              uStackY_d4._0_2_ = 0x202;
              uStackY_d4._2_2_ = 0;
              FUN_00499430();
              iVar6 = puVar3[1];
              *puVar3 = &PTR_FUN_007e6a98;
              *(undefined4 *)(iVar6 + 0xe) = puVar10[3];
              *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(puVar10 + 4);
              *(int *)(puVar3[1] + 0xac) = -iVar2;
              *(undefined4 *)(puVar3[1] + 0x14) = 0;
              goto LAB_0047af6c;
            }
          }
          else {
            iVar6 = 0;
            if ((local_b0 != (int *)0x0) &&
               (((int *)local_b0[0x48] == (int *)0x0 || (iVar6 = *(int *)local_b0[0x48], iVar6 == 0)
                ))) {
              iVar6 = *(int *)((int)local_b0 + 0x176);
            }
            uStackY_d4._0_2_ = 0xae81;
            uStackY_d4._2_2_ = 0x47;
            puVar3 = operator_new(0xc);
            uStack_4 = 0;
            puStack_b4 = puVar3;
            if (puVar3 != (undefined4 *)0x0) {
              if (iVar6 == 0) {
                uStack_bc._2_2_ = (undefined2)DAT_0088f28e;
                uStack_bc = (undefined4 *)CONCAT22(uStack_bc._2_2_,DAT_0088f28c);
                uStack_b8 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                puVar11 = &uStack_bc;
              }
              else {
                puVar11 = (undefined4 *)(iVar6 + 0xc);
              }
              FUN_005045e0();
              uStackY_d4._0_2_ = 0x202;
              uStackY_d4._2_2_ = 0;
              FUN_00499430();
              iVar6 = puVar3[1];
              *puVar3 = &PTR_FUN_007e6a98;
              *(undefined4 *)(iVar6 + 0xe) = *puVar11;
              *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(puVar11 + 1);
              *(undefined4 *)(puVar3[1] + 0xac) = 0;
              *(int *)(puVar3[1] + 0x14) = iVar2;
LAB_0047af6c:
              puVar11 = auStack_a0;
              puVar3 = (undefined4 *)(puVar3[1] + 0x18);
              for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar3 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar3 = puVar3 + 1;
              }
            }
          }
          uStack_4 = 0xffffffff;
          uStackY_d4._0_2_ = 0xaf92;
          uStackY_d4._2_2_ = 0x47;
          FUN_00565bc0();
        }
      }
    }
  }
  if (puVar10[0x17] != 0) {
    uStackY_d4._0_2_ = 0xafaa;
    uStackY_d4._2_2_ = 0x47;
    (**(code **)(*(int *)(puVar10[0x17] + 0x4518) + 0x18))();
  }
  piVar5 = local_a4;
  uStackY_d4._0_2_ = 0xafbe;
  uStackY_d4._2_2_ = 0x47;
  (**(code **)(local_a4[0x1146] + 0x18))();
  puVar10[0x1b] = 0;
  if ((*(char *)((int)puVar10 + 0x161) == '\0') ||
     (*(char *)(*(int *)(unaff_retaddr + 4) + 0x1a) != '\0')) {
    uStackY_d4._0_2_ = 1;
    uStackY_d4._2_2_ = 0;
    (**(code **)*puVar10)();
    ExceptionList = local_c;
    return 3;
  }
  puVar10[0x16] = *(undefined4 *)((int)piVar5 + 6);
  uStackY_d4._0_2_ = (short)puVar10;
  uStackY_d4._2_2_ = (short)((uint)puVar10 >> 0x10);
  cVar1 = (**(code **)(DAT_00d77b76 + 0x24))();
  puVar3 = DAT_00d77b7e;
  puVar11 = DAT_00d77b7a;
  if (cVar1 == '\0') {
    uStackY_d4._0_2_ = 0xb00a;
    uStackY_d4._2_2_ = 0x47;
    DAT_00d77b7e = operator_new(0xe);
    if (DAT_00d77b7e == (undefined4 *)0x0) {
      DAT_00d77b7e = (undefined4 *)0x0;
    }
    else {
      *DAT_00d77b7e = puVar10;
      DAT_00d77b7e[1] = puVar3;
      DAT_00d77b7e[2] = 0;
      *(undefined1 *)(DAT_00d77b7e + 3) = 0;
    }
    iVar2 = DAT_00d77b82 + 1;
    bVar12 = DAT_00d77b82 != 0;
    puVar11 = DAT_00d77b7e;
    DAT_00d77b82 = iVar2;
    if (bVar12) {
      puVar3[2] = DAT_00d77b7e;
      puVar11 = DAT_00d77b7a;
    }
  }
  DAT_00d77b7a = puVar11;
  iVar2 = FUN_00498a10();
  uStackY_d4._0_2_ = *(undefined2 *)(iVar2 + 0x14);
  puStack_b4 = &uStackY_d4;
  uStackY_d4._2_2_ = (undefined2)*(undefined4 *)(iVar2 + 0x16);
  FUN_0048f490();
  puVar10[0x17] = 0;
  if (local_a8 == 0) {
    if ((local_b0 != (int *)0x0) && (*(int *)((int)local_b0 + 0x176) != 0)) {
      puVar9 = (undefined2 *)FUN_00447250();
      uStackY_d4._0_2_ = *puVar9;
      puStack_b4 = &uStackY_d4;
      uStackY_d4._2_2_ = (undefined2)*(undefined4 *)(puVar9 + 1);
      FUN_00494a60();
LAB_0047b1d1:
      FUN_0049a190();
    }
  }
  else if ((local_b0 != (int *)0x0) && (*(int *)(local_a8 + 0x6c) != 0)) {
    piVar5 = (int *)local_b0[0x48];
joined_r0x0047b09c:
    if (piVar5 != (int *)0x0) {
      piVar4 = (int *)piVar5[2];
      iVar2 = *piVar5;
      piVar5 = (int *)(**(code **)(**(int **)(iVar2 + 0x80) + 0xc))();
      uStackY_d4 = &puStack_b4;
      piVar8 = (int *)(**(code **)(*piVar5 + 0x28))();
      piVar5 = piVar4;
      if (*piVar8 == 0) goto LAB_0047b0d3;
      puVar9 = (undefined2 *)FUN_00447250();
      goto LAB_0047b0ff;
    }
    iVar2 = *(int *)((int)local_b0 + 0x176);
    if (iVar2 != 0) {
      piVar5 = (int *)(**(code **)(**(int **)(iVar2 + 0x80) + 0xc))();
      uStackY_d4 = &puStack_b4;
      piVar5 = (int *)(**(code **)(*piVar5 + 0x28))();
      if (*piVar5 == 0) {
        piVar5 = (int *)(**(code **)(**(int **)(iVar2 + 0x84) + 0xc))();
        uStackY_d4 = &local_b0;
        piVar5 = (int *)(**(code **)(*piVar5 + 0x28))();
        if (*piVar5 == 0) goto LAB_0047b1d6;
        puVar9 = (undefined2 *)FUN_00447250();
      }
      else {
        puVar9 = (undefined2 *)FUN_00447250();
      }
      puStack_b4 = &uStackY_d4;
      uStackY_d4._0_2_ = *puVar9;
      uStackY_d4._2_2_ = (undefined2)*(undefined4 *)(puVar9 + 1);
      goto LAB_0047b1d1;
    }
  }
LAB_0047b1d6:
  if ((DAT_00dc1919 != '\0') && (DAT_00dc191a == '\0')) {
    switch(puVar10[0x4d]) {
    case 0x15:
      iVar2 = 0x1c;
      break;
    case 0x16:
      iVar2 = 0x21;
      break;
    case 0x17:
      iVar2 = 0x1e;
      break;
    case 0x18:
      iVar2 = 0x1d;
      break;
    case 0x19:
      iVar2 = 0x22;
      break;
    case 0x1a:
      iVar2 = 0x1f;
      break;
    case 0x1b:
      iVar2 = 0x20;
      break;
    case 0x1c:
      iVar2 = 0x23;
      break;
    case 0x1d:
      iVar2 = 0x24;
      break;
    case 0x1e:
      iVar2 = 0x1b;
      break;
    default:
      goto switchD_0047b202_default;
    }
    iVar6 = *(int *)((int)local_a4 + 6) * 0x25 + iVar2;
    (&DAT_00d89fea)[iVar6] = (&DAT_00d89fea)[iVar6] + 1;
    if ((local_a8 == 0) || (*(int *)(local_a8 + 0x6c) == 0)) {
      iVar6 = FUN_004fd580();
      if (iVar6 != 0) {
        iVar6 = FUN_004fd580();
        (&DAT_00d7d90a)[iVar2 + *(int *)(iVar6 + 6) * 0x25] =
             (&DAT_00d7d90a)[iVar2 + *(int *)(iVar6 + 6) * 0x25] + 1;
      }
    }
    else {
      iVar6 = FUN_00522770();
      (&DAT_00d7d90a)[iVar2 + *(int *)(iVar6 + 6) * 0x25] =
           (&DAT_00d7d90a)[iVar2 + *(int *)(iVar6 + 6) * 0x25] + 1;
    }
  }
switchD_0047b202_default:
  ExceptionList = local_c;
  return 3;
LAB_0047b0d3:
  piVar4 = (int *)(**(code **)(**(int **)(iVar2 + 0x84) + 0xc))();
  uStackY_d4 = &piStack_ac;
  piVar4 = (int *)(**(code **)(*piVar4 + 0x28))();
  if (*piVar4 != 0) {
    puVar9 = (undefined2 *)FUN_00447250();
LAB_0047b0ff:
    uStack_bc = &uStackY_d4;
    uStackY_d4._0_2_ = *puVar9;
    uStackY_d4._2_2_ = (undefined2)*(undefined4 *)(puVar9 + 1);
    FUN_0049a190();
  }
  goto joined_r0x0047b09c;
}


