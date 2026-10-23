// FUN_00405310 @ 405310 size=493

undefined4 * __thiscall
FUN_00405310(undefined4 *param_1,char *param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_28c [640];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b96a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040e860();
  local_4 = 0;
  FUN_00583720();
  *(undefined1 *)((int)param_1 + 0x253) = param_4;
  uVar2 = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0x1f;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  *(undefined4 *)((int)param_1 + 0x23e) = 0;
  *(undefined1 *)((int)param_1 + 0x252) = 0;
  param_1[0x95] = 0;
  *param_1 = &PTR_FUN_007e3360;
  param_1[10] = &PTR_LAB_007e3370;
  pcVar4 = param_2;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0xe);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  FUN_00407c50(0,0);
  *(undefined4 *)((int)param_1 + 0x24e) = 0;
  *(undefined4 *)((int)param_1 + 0x242) = DAT_00bd1528;
  if (param_3 == 0) {
    cVar1 = FUN_00405c40(param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_1;
    }
    cVar1 = FUN_00405df0(param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_1;
    }
    FUN_00405ad0(s_VideoImage_could_not_be_allocate_0082c404);
  }
  else {
    if (param_3 != 1) {
      if (param_3 != 2) {
        ExceptionList = local_c;
        return param_1;
      }
      param_1[0x8e] = 2;
      ExceptionList = local_c;
      return param_1;
    }
    cVar1 = FUN_00405df0(param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_1;
    }
  }
  if (param_3 == 0) {
    cVar1 = FUN_00405c40(&DAT_0082c3f4);
    if ((cVar1 == '\0') && (cVar1 = FUN_00405df0(&DAT_0082c3f4), cVar1 == '\0')) {
      FUN_00405ad0(s_VideoImage_could_not_be_allocate_0082c404);
    }
  }
  else if (param_3 == 1) {
    FUN_00405df0(&DAT_0082c3f4);
  }
  else if (param_3 == 2) {
    param_1[0x8e] = 2;
  }
  FUN_007a630a(local_28c,s_CImageBase_FAILED_to_created_sur_0082c3c8,param_1 + 0xe);
  FUN_00405ad0(local_28c);
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_0082c3f4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0xe);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}


