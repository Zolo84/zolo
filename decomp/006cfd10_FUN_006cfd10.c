// FUN_006cfd10 @ 6cfd10 size=276

int * __thiscall FUN_006cfd10(int *param_1,int param_2,char *param_3)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d90d6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = 0;
  if (param_2 != 0) {
    pvVar2 = operator_new(0x7e);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      uVar3 = FUN_0044b1c0(param_2);
      piVar4 = (int *)FUN_00414c80(uVar3);
    }
    *param_1 = (int)piVar4;
    local_4 = 0xffffffff;
    (**(code **)(*piVar4 + 0x34))(0x19);
    iVar6 = *param_1;
    *(undefined4 *)(iVar6 + 0x22) = 0;
    *(undefined4 *)(iVar6 + 0x26) = 10;
    *(undefined1 *)(iVar6 + 0x67) = 0;
    uVar3 = FUN_00413d60(s_flag_palette_bmp_0083c738);
    FUN_00415f20(uVar3);
  }
  uVar7 = 0xffffffff;
  pcVar5 = param_3;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = operator_new(~uVar7);
  uVar7 = 0xffffffff;
  param_1[1] = (int)pcVar5;
  do {
    pcVar9 = param_3;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar9 + -uVar7;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar5 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar5 = pcVar5 + 1;
  }
  pvVar2 = operator_new(0x28);
  local_4 = 1;
  if (pvVar2 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_0065f000(0x12,0);
  }
  param_1[2] = iVar6;
  ExceptionList = pvStack_c;
  return param_1;
}


