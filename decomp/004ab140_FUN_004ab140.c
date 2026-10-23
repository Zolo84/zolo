// FUN_004ab140 @ 4ab140 size=1449

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ab140(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  bool bVar9;
  float10 fVar10;
  char *pcVar11;
  int *local_1c;
  int *local_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007be058;
  pvStack_c = ExceptionList;
  bVar3 = false;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 0x56) = 1;
  *(undefined1 *)(param_1 + 0x57) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 4;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x3f028f5c;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
LAB_004ab1a8:
  do {
    iVar5 = FUN_00535490();
    if (iVar5 == 1) {
      piVar8 = local_1c;
      piVar6 = local_18;
      if (DAT_00dc4b5e != '\0') {
        iVar5 = param_2[1];
        for (; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
          cVar4 = (*(code *)PTR_FUN_007e3798)(*piVar8,iVar5);
          if (cVar4 != '\0') {
            if (piVar8 != (int *)0x0) {
              FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216
                           ,*(int *)(*param_2 + 0x212) + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            break;
          }
        }
        iVar5 = param_2[1];
        piVar6 = operator_new(0xe);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = iVar5;
          piVar6[1] = (int)local_18;
          piVar6[2] = 0;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        iVar5 = local_14 + 1;
        bVar9 = local_14 != 0;
        piVar8 = piVar6;
        local_14 = iVar5;
        if (bVar9) {
          local_18[2] = (int)piVar6;
          piVar8 = local_1c;
        }
      }
      local_18 = piVar6;
      local_1c = piVar8;
      iVar5 = param_2[1];
      if (iVar5 < 0x20e) {
        if (iVar5 == 0x20d) {
          FUN_00535600(param_1 + 0x10);
          goto LAB_004ab1a8;
        }
        if (iVar5 < 0x133) {
          if (iVar5 == 0x132) {
            FUN_0054f130(param_2);
            goto LAB_004ab1a8;
          }
          switch(iVar5) {
          case 0xec:
            (**(code **)(*(int *)(param_1 + 0x60) + 0x10))();
            FUN_005358c0(param_1 + 0x60);
            goto LAB_004ab1a8;
          case 0xfd:
            FUN_0054f130(param_2);
            goto LAB_004ab1a8;
          case 0x112:
            (**(code **)(*(int *)(param_1 + 0x84) + 0x10))();
            FUN_005358c0(param_1 + 0x84);
            goto LAB_004ab1a8;
          case 300:
            uVar7 = FUN_007a7b3c(param_2 + 0x104);
            *(undefined4 *)(param_1 + 0x52) = uVar7;
            goto LAB_004ab1a8;
          }
        }
        else {
          if (iVar5 == 0x14e) {
            fVar10 = (float10)FUN_00429d80(param_2 + 0x104);
            *(float *)(param_1 + 0x4e) = (float)fVar10;
            goto LAB_004ab1a8;
          }
          if (iVar5 == 0x206) {
            *(bool *)(param_1 + 0x56) = param_2[0x103] == 0x111;
            goto LAB_004ab1a8;
          }
          if (iVar5 == 0x207) {
            *(bool *)(param_1 + 0x57) = param_2[0x103] == 0x111;
            goto LAB_004ab1a8;
          }
        }
      }
      else if (iVar5 < 0x3e0) {
        if (iVar5 == 0x3df) {
          (**(code **)(*(int *)(param_1 + 0x72) + 0x10))();
          FUN_005358c0(param_1 + 0x72);
          goto LAB_004ab1a8;
        }
        switch(iVar5) {
        case 0x20e:
          FUN_00535600(param_1 + 0x22);
          goto LAB_004ab1a8;
        case 0x241:
          iVar5 = FUN_004af6b0(param_2 + 0x104);
          *(int *)(param_1 + 0x58) = iVar5;
          if (iVar5 == 0) {
            FUN_00429a00(s_ERROR___Invalid_country_TAG___s__0083e094,param_2 + 0x104,
                         *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          goto LAB_004ab1a8;
        case 0x242:
          uVar7 = FUN_00763ce0(param_2 + 0x103);
          *(undefined4 *)(param_1 + 0x5c) = uVar7;
          goto LAB_004ab1a8;
        case 0x2a5:
          uVar7 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x46) = uVar7;
          bVar3 = true;
          goto LAB_004ab1a8;
        }
      }
      else {
        if (iVar5 == 0x4f8) {
          (**(code **)(*(int *)(param_1 + 0x96) + 0x10))();
          FUN_005358c0(param_1 + 0x96);
          goto LAB_004ab1a8;
        }
        if (iVar5 == 0x576) {
          uVar7 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x4a) = uVar7;
          bVar3 = true;
          goto LAB_004ab1a8;
        }
        if (iVar5 == 0x577) {
          FUN_00535600(param_1 + 0x34);
          goto LAB_004ab1a8;
        }
      }
      FUN_005349b0(s_Unknown_statement__0083e080);
      goto LAB_004ab1a8;
    }
    piVar8 = (int *)FUN_00534391();
  } while (*piVar8 != 4);
  FUN_005343dc();
  if ((*(int *)(param_1 + 0x46) == -1) ||
     (iVar5 = (**(code **)(*(int *)(param_1 + 0x10) + 4))(), iVar5 < *(int *)(param_1 + 0x46))) {
    uVar7 = (**(code **)(*(int *)(param_1 + 0x10) + 4))();
    *(undefined4 *)(param_1 + 0x46) = uVar7;
  }
  iVar5 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  if (iVar5 < *(int *)(param_1 + 0x4a)) {
    uVar7 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
    *(undefined4 *)(param_1 + 0x4a) = uVar7;
  }
  if (_DAT_007e3380 <= *(float *)(param_1 + 0x4e)) {
    if (_DAT_007e4080 < *(float *)(param_1 + 0x4e)) {
      *(undefined4 *)(param_1 + 0x4e) = 0x3fa00000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4e) = 0;
  }
  if (bVar3) {
    *(undefined4 *)(param_1 + 0x4e) = 0xbf800000;
  }
  if (DAT_00dc4b5e != '\0') {
    piVar8 = *(int **)(param_1 + 0x14);
joined_r0x004ab54b:
    if (piVar8 != (int *)0x0) {
      piVar6 = (int *)piVar8[2];
      iVar5 = *piVar8;
      piVar8 = piVar6;
      if ((0 < iVar5) && (iVar5 <= DAT_00877690)) goto code_r0x004ab564;
      iVar1 = *param_2;
      iVar2 = *(int *)(iVar1 + 0x212);
      pcVar11 = s_ERROR___Invalid_province_ID___d__0083df54;
      goto LAB_004ab5d7;
    }
    piVar8 = *(int **)(param_1 + 0x26);
joined_r0x004ab5f7:
    if (piVar8 != (int *)0x0) {
      piVar6 = (int *)piVar8[2];
      iVar5 = *piVar8;
      piVar8 = piVar6;
      if ((0 < iVar5) && (iVar5 <= DAT_00877690)) goto code_r0x004ab60c;
      iVar1 = *param_2;
      iVar2 = *(int *)(iVar1 + 0x212);
      pcVar11 = s_ERROR___Invalid_province_ID___d__0083de90;
      goto LAB_004ab648;
    }
    piVar8 = *(int **)(param_1 + 0x38);
    while (piVar8 != (int *)0x0) {
      piVar6 = (int *)piVar8[2];
      iVar5 = *piVar8;
      piVar8 = piVar6;
      if ((iVar5 < 1) || (DAT_00877690 < iVar5)) {
        FUN_00429a00(s_ERROR___Invalid_province_ID___d__0083de34,iVar5,*param_2 + 0x216,
                     *(int *)(*param_2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
    }
  }
  local_4 = 0xffffffff;
  while (local_1c != (int *)0x0) {
    piVar8 = (int *)local_1c[2];
    FUN_00796cd8(local_1c);
    local_1c = piVar8;
  }
  ExceptionList = pvStack_c;
  return 0;
code_r0x004ab564:
  cVar4 = (**(code **)(*(int *)(param_1 + 0x22) + 0x24))(iVar5);
  if (cVar4 != '\0') {
    FUN_00429a00(s_ERROR___Province_ID___d__is_used_0083e018,iVar5,*param_2 + 0x216,
                 *(int *)(*param_2 + 0x212) + 1);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  cVar4 = (**(code **)(*(int *)(param_1 + 0x34) + 0x24))(iVar5);
  if (cVar4 != '\0') {
    iVar1 = *param_2;
    iVar2 = *(int *)(iVar1 + 0x212);
    pcVar11 = s_ERROR___Province_ID___d__is_used_0083dfb0;
LAB_004ab5d7:
    FUN_00429a00(pcVar11,iVar5,iVar1 + 0x216,iVar2 + 1);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  goto joined_r0x004ab54b;
code_r0x004ab60c:
  cVar4 = (**(code **)(*(int *)(param_1 + 0x34) + 0x24))(iVar5);
  if (cVar4 != '\0') {
    iVar1 = *param_2;
    iVar2 = *(int *)(iVar1 + 0x212);
    pcVar11 = s_ERROR___Province_ID___d__is_used_0083deec;
LAB_004ab648:
    FUN_00429a00(pcVar11,iVar5,iVar1 + 0x216,iVar2 + 1);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  goto joined_r0x004ab5f7;
}


