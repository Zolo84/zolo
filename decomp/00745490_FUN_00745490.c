// FUN_00745490 @ 745490 size=308

/* WARNING: Removing unreachable block (ram,0x007454be) */

bool __thiscall FUN_00745490(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void **ppvVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 local_21 [5];
  undefined1 local_1c [4];
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df3d8;
  iVar1 = *(int *)(param_1 + 0x226);
  iVar4 = *(int *)(param_1 + 0x222);
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  for (iVar7 = iVar4; ExceptionList = ppvVar2, iVar7 != iVar1; iVar7 = iVar7 + 0x10) {
    FUN_00674910();
    ppvVar2 = ExceptionList;
  }
  *(int *)(param_1 + 0x226) = iVar4;
  local_1c[0] = param_2._0_1_;
  uVar5 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  cVar3 = FUN_00674e40();
  if (cVar3 != '\0') {
    pcVar8 = local_18;
    for (uVar6 = ~uVar5 - 1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = ~uVar5 - 1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *param_2;
      param_2 = param_2 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_00674e20();
  }
  local_4 = 0;
  FUN_00673c70(param_4,local_21);
  iVar4 = FUN_007455d0(local_1c,param_3);
  if (local_18 != (char *)0x0) {
    cVar3 = local_18[-1];
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_00796cd8();
    }
    else {
      local_18[-1] = cVar3 + -1;
    }
  }
  ExceptionList = local_c;
  return iVar4 != 0;
}


