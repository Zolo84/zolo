// FUN_00540ab0 @ 540ab0 size=1052

void __thiscall FUN_00540ab0(int *param_1,char *param_2)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  int *local_834;
  undefined1 local_820 [256];
  undefined1 local_720 [1812];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c3220;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar3 = FUN_0042e980();
  if ((cVar3 == '\0') && (DAT_00dc1912 == '\0')) {
    ExceptionList = local_c;
    return;
  }
  if ((*param_2 == '\0') || (param_2 == &DAT_0088ebf8)) {
    FUN_00540ed0();
    ExceptionList = local_c;
    return;
  }
  uVar10 = 0xffffffff;
  local_834 = param_1 + 0x49;
  pcVar12 = param_2;
  do {
    pcVar13 = pcVar12;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar13 = pcVar12 + 1;
    cVar3 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar3 != '\0');
  uVar10 = ~uVar10;
  piVar7 = (int *)(pcVar13 + -uVar10);
  piVar14 = local_834;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *piVar14 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar14 = piVar14 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(char *)piVar14 = (char)*piVar7;
    piVar7 = (int *)((int)piVar7 + 1);
    piVar14 = (int *)((int)piVar14 + 1);
  }
  if (DAT_00dc2ba0 == '\0') {
    FUN_007a630a(local_820,s_ai__s_008517d8,param_2);
    iVar4 = FUN_007a6615(local_820,&DAT_0082eeb4);
    if (iVar4 == 0) goto LAB_00540e96;
  }
  else {
    FUN_007a630a(local_820,s__sai__s_008517e0,&DAT_00dc2ba0);
    iVar4 = FUN_007a6615(local_820,&DAT_0082eeb4);
    if (iVar4 == 0) {
      if (DAT_00dc195b == '\0') {
        FUN_007a630a(local_820,s_ai__s_008517d8,param_2);
        iVar4 = FUN_007a6615(local_820,&DAT_0082eeb4);
        if (iVar4 != 0) goto LAB_00540bc9;
      }
LAB_00540e96:
      FUN_00429a50(s_Can_t_open___s__00851794,local_820);
      ExceptionList = local_c;
      return;
    }
  }
LAB_00540bc9:
  FUN_007a6429(iVar4);
  if (DAT_00dc4b5e != '\0') {
    uVar5 = (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))(local_820);
    FUN_00429a00(s_AI_File_Load____s____>____s___008517b8,uVar5);
  }
  FUN_00534930(local_820,&DAT_008390e0);
  iStack_4 = 0;
  FUN_006b3b90(local_720);
  cVar3 = (**(code **)(*param_1 + 0x1c))();
  if (((cVar3 != '\0') && (DAT_00893750 != 0)) && (*(char *)(DAT_00893750 + 0x111) != '\0')) {
    cVar3 = (**(code **)(*param_1 + 0x498))();
    if ((cVar3 != '\0') && (*(int *)(param_1[0x4f21] + 0x6a) != 0)) {
      FUN_0066ea50();
    }
    iVar4 = 0;
    if (0 < DAT_0087769c) {
      do {
        puVar6 = operator_new(0xc);
        iStack_4._0_1_ = 1;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          uVar1 = *(undefined1 *)(param_1[0x48] + 0x870 + iVar4);
          local_834 = operator_new(0x14);
          iStack_4._0_1_ = 2;
          if (local_834 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            FUN_0042d6c0();
            piVar7 = local_834;
          }
          iStack_4._0_1_ = 1;
          FUN_0042d320(piVar7);
          *puVar6 = &PTR_FUN_007e93d4;
          *(undefined1 *)((int)puVar6 + 10) = 0;
          *(undefined2 *)puVar6[1] = 0x1b1;
          iVar2 = puVar6[1];
          *(int *)(iVar2 + 8) = param_1[1];
          iStack_4._0_1_ = 3;
          *(short *)(iVar2 + 0xc) = (short)param_1[2];
          puVar8 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar2 = puVar6[1];
          *(undefined4 *)(iVar2 + 2) = *puVar8;
          *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar8 + 1);
          *puVar6 = &PTR_FUN_007e93b4;
          *(int *)(puVar6[1] + 0xe) = iVar4;
          *(undefined1 *)(puVar6[1] + 0x12) = uVar1;
        }
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_00565bc0(puVar6);
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_0087769c);
    }
    iVar4 = 0;
    if (0 < DAT_008776b0) {
      do {
        puVar6 = operator_new(0xc);
        iStack_4._0_1_ = 4;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          uVar1 = *(undefined1 *)(param_1[0x48] + 0x7e4 + iVar4);
          puVar9 = operator_new(0x14);
          if (puVar9 == (undefined2 *)0x0) {
            puVar9 = (undefined2 *)0x0;
          }
          else {
            puVar9[3] = 0;
            *(undefined1 *)(puVar9 + 2) = 0;
            *(undefined1 *)((int)puVar9 + 3) = 0;
            *(undefined1 *)(puVar9 + 1) = 0;
            puVar9[4] = 0;
            *(undefined4 *)(puVar9 + 5) = 0;
          }
          puVar6[1] = puVar9;
          *(undefined1 *)(puVar6 + 2) = 0;
          *(undefined1 *)((int)puVar6 + 9) = 1;
          *puVar6 = &PTR_FUN_007e93d4;
          *(undefined1 *)((int)puVar6 + 10) = 0;
          *puVar9 = 0x1b2;
          iVar2 = puVar6[1];
          *(int *)(iVar2 + 8) = param_1[1];
          local_834 = (int *)((uint)local_834 & 0xff000000);
          *(short *)(iVar2 + 0xc) = (short)param_1[2];
          iVar2 = puVar6[1];
          *(int **)(iVar2 + 2) = local_834;
          *(undefined2 *)(iVar2 + 6) = 0;
          *puVar6 = &PTR_FUN_007e93b4;
          *(int *)(puVar6[1] + 0xe) = iVar4;
          *(undefined1 *)(puVar6[1] + 0x12) = uVar1;
        }
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_00565bc0(puVar6);
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_008776b0);
    }
  }
  if (DAT_00dc1918 != '\0') {
    uVar5 = (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))(local_820);
    FUN_004298c0(s______s____>____s___008517a4,uVar5);
  }
  iStack_4 = 0xffffffff;
  FUN_005349a0();
  ExceptionList = local_c;
  return;
}


