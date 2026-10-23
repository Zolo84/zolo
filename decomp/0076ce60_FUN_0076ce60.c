// FUN_0076ce60 @ 76ce60 size=1190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076ce60(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  float10 fVar14;
  undefined4 *local_434;
  int local_430;
  int local_428;
  undefined2 local_424;
  undefined4 local_422;
  int local_41c;
  int local_416;
  char local_410 [256];
  undefined1 local_310 [256];
  int iStack_210;
  char acStack_20c [512];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e0c4c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar4 = operator_new(8);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    local_434 = (undefined4 *)0x0;
  }
  else {
    local_434 = (undefined4 *)FUN_00426120(param_1);
  }
  local_4 = 0xffffffff;
  local_428 = FUN_00426720();
  local_428 = local_428 + -1;
  FUN_004265c0(local_410);
  local_416 = FUN_004af6b0(local_410);
  if ((0 < param_2) && (local_416 != param_2)) goto joined_r0x0076d2e1;
  FUN_00426330(1);
  if (DAT_00dc4b5e != '\0') {
    if (DAT_00dc3a00 == '\0') {
LAB_0076cf60:
      FUN_007a630a(local_310,param_1);
    }
    else {
      FUN_007a630a(local_310,s__s__s_0083a350,&DAT_00dc3a00,param_1);
      iVar5 = FUN_007a6615(local_310,&DAT_008390e0);
      if (iVar5 == 0) goto LAB_0076cf60;
      FUN_007a6429(iVar5);
    }
    FUN_00429a00(&DAT_0083f5a0,local_310);
    if ((DAT_00dc4b5e != '\0') && (local_428 < 1)) {
      FUN_00429a00(s_WARNING___No_tech_teams_found_in_00877848,param_1);
    }
  }
  if (0 < local_428) {
    do {
      FUN_004265c0(local_410);
      iVar5 = -1;
      pcVar12 = local_410;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      if (iVar5 != -2) {
        local_422 = FUN_007a7b3c(local_410);
        local_424 = 10;
        iVar5 = FUN_00428ee0(&local_424);
        if ((iVar5 == 0) || (iVar5 == 8)) {
          pvVar4 = operator_new(0xde);
          local_4 = 1;
          if (pvVar4 == (void *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)FUN_0075afb0();
          }
          piVar6[0x32] = local_416;
          local_4 = 0xffffffff;
          (**(code **)(piVar6[2] + 4))(&local_424);
          iVar9 = local_41c;
          iVar5 = *(int *)(local_41c + 0x167d4);
          puVar7 = operator_new(0xe);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = piVar6;
            puVar7[1] = iVar5;
            puVar7[2] = 0;
            *(undefined1 *)(puVar7 + 3) = 0;
          }
          iVar2 = *(int *)(iVar9 + 0x167d8);
          *(undefined4 **)(iVar9 + 0x167d4) = puVar7;
          *(int *)(iVar9 + 0x167d8) = iVar2 + 1;
          if (iVar2 == 0) {
            *(undefined4 **)(iVar9 + 0x167d0) = puVar7;
          }
          else {
            *(undefined4 **)(iVar5 + 8) = puVar7;
          }
          FUN_004265c0(local_410);
          FUN_00425ba0(local_410);
          FUN_004265c0(local_410);
          FUN_0075b170(local_410);
          FUN_004265c0(local_410);
          fVar3 = DAT_00d7d090;
          if (DAT_00dc4b5e != '\0') {
            iVar5 = -1;
            pcVar12 = local_410;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar1 != '\0');
            if (((iVar5 == -2) ||
                (fVar14 = (float10)FUN_00429d80(local_410), (float10)fVar3 < fVar14)) ||
               (fVar14 = (float10)FUN_00429d80(local_410), fVar14 < (float10)_DAT_007e3374)) {
              uVar8 = (**(code **)(*piVar6 + 0xc))(*(undefined4 *)((int)piVar6 + 0xe),param_1);
              FUN_00429a00(s_ERROR___Missing_or_invalid_skill_00877804,local_410,uVar8);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
          fVar14 = (float10)FUN_00429d80(local_410);
          FUN_0075b1c0((float)fVar14);
          FUN_004265c0(local_410);
          iVar5 = FUN_007a7b3c(local_410);
          if (iVar5 < 100) {
            iVar5 = iVar5 + 0x76c;
          }
          piVar6[0x35] = iVar5;
          FUN_004265c0(local_410);
          iVar5 = FUN_007a7b3c(local_410);
          if (iVar5 < 100) {
            iVar5 = iVar5 + 0x76c;
          }
          piVar6[0x34] = iVar5;
          iVar5 = 0;
          local_430 = 0x20;
          do {
            FUN_004265c0(local_410);
            iVar9 = -1;
            pcVar12 = local_410;
            do {
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar1 != '\0');
            if ((iVar9 != -2) && (iVar5 < 6)) {
              uVar10 = 0xffffffff;
              pcVar12 = local_410;
              do {
                pcVar13 = pcVar12;
                if (uVar10 == 0) break;
                uVar10 = uVar10 - 1;
                pcVar13 = pcVar12 + 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar13;
              } while (cVar1 != '\0');
              uVar10 = ~uVar10;
              pcVar12 = pcVar13 + -uVar10;
              pcVar13 = acStack_20c;
              for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pcVar13 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              }
              iStack_210 = FUN_00534368(local_410);
              iVar9 = FUN_0075c680(&iStack_210);
              if (((DAT_00dc4b5e != '\0') && (iVar9 == 5)) && (iStack_210 != 0x2ca)) {
                uVar8 = (**(code **)(*piVar6 + 0xc))(*(undefined4 *)((int)piVar6 + 0xe),param_1);
                FUN_00429a00(s_ERROR___Invalid_research_type____008777c8,local_410,uVar8);
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
              *(undefined1 *)(iVar9 + 0x1a + (int)piVar6) = 1;
              iVar5 = iVar5 + 1;
            }
            local_430 = local_430 + -1;
          } while (local_430 != 0);
          FUN_00426330(1);
        }
        else {
          FUN_00426330(1);
        }
      }
      local_428 = local_428 + -1;
    } while (local_428 != 0);
  }
joined_r0x0076d2e1:
  if (local_434 != (undefined4 *)0x0) {
    (**(code **)*local_434)(1);
  }
  ExceptionList = local_c;
  return;
}


