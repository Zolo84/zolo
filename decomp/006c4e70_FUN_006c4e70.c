// FUN_006c4e70 @ 6c4e70 size=1419

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006c4e70(int param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  float *pfVar10;
  bool bVar11;
  float10 fVar12;
  float local_34;
  float local_2c;
  int *local_24;
  int *local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_007d8458;
  local_14 = ExceptionList;
  local_24 = (int *)0x0;
  local_20 = (int *)0x0;
  local_1c = 0;
  local_c = 0;
  bVar1 = false;
  bVar2 = false;
  ExceptionList = &local_14;
  do {
    while (iVar4 = FUN_00535490(), iVar4 == 1) {
      piVar6 = local_24;
      piVar5 = local_20;
      if (DAT_00dc4b5e != '\0') {
        iVar4 = param_2[1];
        for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
          cVar3 = (*(code *)PTR_FUN_007e3798)(*piVar6,iVar4);
          if (cVar3 != '\0') {
            if (piVar6 != (int *)0x0) {
              FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216
                           ,*(int *)(*param_2 + 0x212) + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            break;
          }
        }
        iVar4 = param_2[1];
        piVar5 = operator_new(0xe);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = iVar4;
          piVar5[1] = (int)local_20;
          piVar5[2] = 0;
          *(undefined1 *)(piVar5 + 3) = 0;
        }
        iVar4 = local_1c + 1;
        bVar11 = local_1c != 0;
        piVar6 = piVar5;
        local_1c = iVar4;
        if (bVar11) {
          local_20[2] = (int)piVar5;
          piVar6 = local_24;
        }
      }
      local_20 = piVar5;
      local_24 = piVar6;
      piVar6 = param_2 + 1;
      switch(param_2[1]) {
      case 0x456:
        *(bool *)(param_1 + 4) = param_2[0x103] == 0x111;
        break;
      default:
        iVar4 = FUN_004fdae0(piVar6);
        if (iVar4 == 0x8c) {
          iVar4 = FUN_004fe160(piVar6);
          if (iVar4 == 0x8c) {
            if (DAT_00dc4b5e != '\0') {
              FUN_00429a00(s_ERROR___Unknown_type___s__in_mil_0086b400,param_2 + 2,*param_2 + 0x216,
                           *(int *)(*param_2 + 0x212) + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
          else {
            if (!bVar2) {
              iVar4 = 0;
              bVar2 = true;
              if (0 < DAT_008776b0) {
                puVar8 = (undefined4 *)(param_1 + 0x1a);
                do {
                  *puVar8 = 0;
                  iVar4 = iVar4 + 1;
                  puVar8 = puVar8 + 1;
                } while (iVar4 < DAT_008776b0);
              }
            }
            fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
            iVar4 = FUN_004fe160(piVar6);
            *(float *)(param_1 + 0x1a + iVar4 * 4) = (float)fVar12;
          }
        }
        else {
          if (!bVar1) {
            iVar4 = 0;
            bVar1 = true;
            if (0 < DAT_0087769c) {
              puVar8 = (undefined4 *)(param_1 + 0x24a);
              do {
                *puVar8 = 0;
                iVar4 = iVar4 + 1;
                puVar8 = puVar8 + 1;
              } while (iVar4 < DAT_0087769c);
            }
          }
          fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
          iVar4 = FUN_004fdae0(piVar6);
          *(float *)(param_1 + 0x24a + iVar4 * 4) = (float)fVar12;
        }
        break;
      case 0x4b0:
        uVar7 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 6) = uVar7;
        break;
      case 0x4b1:
        uVar7 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 10) = uVar7;
        break;
      case 0x4b2:
        uVar7 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0xe) = uVar7;
        break;
      case 0x52f:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x16) = (float)fVar12;
        break;
      case 0x530:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x12) = (float)fVar12;
      }
    }
    if (iVar4 == 2) {
      while (local_24 != (int *)0x0) {
        piVar6 = (int *)local_24[2];
        FUN_00796cd8(local_24);
        local_24 = piVar6;
      }
      ExceptionList = local_14;
      return 0;
    }
    piVar6 = (int *)FUN_00534391();
  } while (*piVar6 != 4);
  FUN_005343dc();
  bVar1 = false;
  local_34 = 0.0;
  if (DAT_0087769c < 1) {
LAB_006c5307:
    if (DAT_00dc4b5e != '\0') {
      FUN_00429a00(s_ERROR___Wrong_sum____4f___should_0086b394,(double)local_34,*param_2 + 0x216,
                   *(int *)(*param_2 + 0x212) + 1);
      iVar4 = 0;
      local_2c = 0.0;
      if (0 < DAT_0087769c) {
        pfVar10 = (float *)(param_1 + 0x24a);
        do {
          if (*pfVar10 != _DAT_007e3380) {
            local_2c = local_2c + *pfVar10;
            uVar7 = FUN_004ff300(iVar4);
            FUN_00429a00(s____4f____4f_____s_0086b368,(double)*pfVar10,(double)local_2c,uVar7);
          }
          iVar4 = iVar4 + 1;
          pfVar10 = pfVar10 + 1;
        } while (iVar4 < DAT_0087769c);
      }
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
  }
  else {
    pfVar10 = (float *)(param_1 + 0x24a);
    iVar4 = DAT_0087769c;
    do {
      local_34 = local_34 + *pfVar10;
      pfVar10 = pfVar10 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = DAT_0087769c;
    if (_DAT_007e4088 < local_34) {
      do {
        if ((!bVar1) && (DAT_00dc4b5e != '\0')) {
          FUN_00429a00(s_ERROR___Wrong_sum____4f___should_0086b394,(double)local_34,*param_2 + 0x216
                       ,*(int *)(*param_2 + 0x212) + 1);
          iVar9 = 0;
          local_2c = 0.0;
          iVar4 = DAT_0087769c;
          if (0 < DAT_0087769c) {
            pfVar10 = (float *)(param_1 + 0x24a);
            do {
              if (*pfVar10 != _DAT_007e3380) {
                local_2c = local_2c + *pfVar10;
                uVar7 = FUN_004ff300(iVar9);
                FUN_00429a00(s____4f____4f_____s_0086b380,(double)*pfVar10,(double)local_2c,uVar7);
                iVar4 = DAT_0087769c;
              }
              iVar9 = iVar9 + 1;
              pfVar10 = pfVar10 + 1;
            } while (iVar9 < iVar4);
          }
          bVar1 = true;
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        iVar9 = 0;
        if (0 < iVar4) {
          pfVar10 = (float *)(param_1 + 0x24a);
          do {
            if (_DAT_007e3374 <= *pfVar10) {
              *(float *)(param_1 + 0x24a + iVar9 * 4) =
                   *(float *)(param_1 + 0x24a + iVar9 * 4) - _DAT_007e3374;
              iVar4 = DAT_0087769c;
              break;
            }
            iVar9 = iVar9 + 1;
            pfVar10 = pfVar10 + 1;
          } while (iVar9 < iVar4);
        }
        local_34 = local_34 - _DAT_007e3374;
      } while (_DAT_007e4088 < local_34);
    }
    if (_DAT_007e4088 <= local_34) goto joined_r0x006c53d1;
    if (!bVar1) goto LAB_006c5307;
  }
  *(float *)(param_1 + 0x24a) = (_DAT_007e4088 - local_34) + *(float *)(param_1 + 0x24a);
joined_r0x006c53d1:
  while (local_24 != (int *)0x0) {
    piVar6 = (int *)local_24[2];
    FUN_00796cd8(local_24);
    local_24 = piVar6;
  }
  ExceptionList = local_14;
  return 0;
}


