// FUN_00680230 @ 680230 size=832

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00680230(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined2 uVar12;
  undefined8 uVar11;
  char local_5;
  
  local_5 = '\0';
  if (((DAT_0087b634 != '\0') &&
      (*(int *)(DAT_00d0ca90 + 6) != *(int *)(*(int *)((int)param_1 + 10) + 6))) &&
     (local_5 = FUN_004731a0(), local_5 == '\0')) {
    FUN_004732a0();
  }
  if ((DAT_0087b631 != '\0') && (iVar6 = FUN_006a9d50(), iVar6 != 0xa3)) {
    FUN_006a9d50();
    if (((&DAT_0089cad8)[param_1[0x17]] == 0) ||
       (*(char *)(*(int *)(*(int *)((int)param_1 + 10) + 0x12da) + param_1[0x17] * 0x2c + 0x2c) !=
        '\0')) {
      param_1[0x17] = 0;
      param_1[0x18] = 0;
    }
    iVar6 = _rand();
    iVar6 = iVar6 % 5 + 2;
    cVar5 = FUN_004a0a80();
    if (cVar5 != '\0') {
      iVar6 = _rand();
      iVar6 = iVar6 % 3 + 1;
    }
    FUN_006adfb0(iVar6,0);
    param_1[0x13] = 0;
    FUN_006805b0();
    cVar5 = FUN_0044beb0();
    if (cVar5 == '\0') {
      FUN_0067f300();
    }
    else {
      FUN_0067fb20();
    }
    FUN_0067ecb0();
    (**(code **)(*param_1 + 0xe0))();
    iVar6 = FUN_006909f0();
    puVar4 = *(undefined4 **)(iVar6 + 4);
    do {
      if (puVar4 == (undefined4 *)0x0) goto LAB_0068036e;
      puVar1 = (undefined4 *)puVar4[2];
      puVar2 = (undefined4 *)*puVar4;
      (**(code **)(*param_1 + 0xe0))();
      cVar5 = FUN_0068ebd0();
      puVar4 = puVar1;
    } while (cVar5 == '\0');
    FUN_00460b30(*puVar2,0);
LAB_0068036e:
    if ((_DAT_007e681c < (float)param_1[0x13]) &&
       (((float)param_1[0x14] <= *(float *)(*(int *)((int)param_1 + 10) + 0x39c8) ||
        ((float)param_1[0x14] == _DAT_007e3380)))) {
      iVar6 = (int)ROUND((float)param_1[0x13]);
      iVar9 = *(int *)((int)param_1 + 10);
      uVar7 = FUN_004af740(param_1[0x12],iVar6);
      uVar12 = (undefined2)((uint)iVar6 >> 0x10);
      FUN_00585b10(param_1[0x10],0,uVar7);
      uVar7 = (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))();
      FUN_00458570(s__s_does___s__on__s___d__00867c4c,uVar7);
      iVar6 = param_1[0x10];
      bVar3 = false;
      param_1[0x15] = param_1[0x12];
      param_1[0x16] = iVar6;
      if (iVar6 == 0x12) {
        iVar6 = (&DAT_0089cad8)[param_1[0x12]];
        if (iVar6 != 0) {
          FUN_00471500(param_1 + 0x20);
          FUN_00667670(iVar6);
          FUN_0045cad0(iVar6);
          bVar3 = true;
        }
      }
      else if ((local_5 == '\0') || ((float)param_1[0x14] == _DAT_007e3380)) {
        bVar3 = true;
        if (iVar6 == 0xe) {
          FUN_0045f750();
        }
        else if (iVar6 == 2) {
          if (*(int *)(*(int *)((int)param_1 + 10) + 0x3350) == 0) {
            FUN_00460480();
          }
          else {
            FUN_00667670();
            FUN_00465c40();
            uVar7 = FUN_00447250();
            FUN_00449290(uVar7);
            FUN_00667670();
            FUN_004607d0();
          }
        }
        else {
          uVar10 = 0;
          uVar11 = CONCAT26(uVar12,CONCAT42(DAT_0088f28e,DAT_0088f28c));
          iVar6 = param_1[0x12];
          iVar9 = param_1[0x11];
          iVar8 = param_1[0x10];
          FUN_00667670(iVar8,iVar9,iVar6,0,0,uVar11);
          FUN_0045d220(iVar8,iVar9,iVar6,uVar10,uVar11);
        }
      }
      if ((DAT_00dc1908 != '\0') && (bVar3)) {
        iVar6 = *(int *)((int)param_1 + 10);
        uVar7 = FUN_004af740(param_1[0x12],(int)ROUND((float)param_1[0x13]),
                             (double)*(float *)(*(int *)((int)param_1 + 10) + 0x39c8),
                             (double)(float)param_1[0x14]);
        uVar7 = FUN_00585b10(param_1[0x10],0,uVar7);
        uVar7 = (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))(uVar7);
        FUN_004297a0(s__S___s__s_T___s_Score___d_Money__00867c18,uVar7);
      }
    }
  }
  return;
}


