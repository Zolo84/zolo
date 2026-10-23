// FUN_0074b540 @ 74b540 size=304

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0074b540(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1d;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df742;
  local_c = ExceptionList;
  local_1c[0] = local_1d;
  uVar2 = 0xffffffff;
  pcVar4 = s_CENIdentity_Mutex_008747b8;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  cVar1 = FUN_00674e40(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = s_CENIdentity_Mutex_008747b8;
    pcVar5 = local_18;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_18[uVar2] = '\0';
    local_14 = uVar2;
  }
  DAT_00d4c22c = local_1c[0];
  local_4 = 0;
  _DAT_00d4c230 = 0;
  _DAT_00d4c234 = 0;
  _DAT_00d4c238 = 0;
  FUN_00674710(local_1c,0,DAT_007f33d8);
  local_4 = CONCAT31(local_4._1_3_,1);
  _DAT_00d4c228 = &PTR_FUN_007fa1d8;
  DAT_00d4c23c = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  if (DAT_00d4c23c == (HANDLE)0x0) {
    FUN_0074bc80(s_CreateMutex_NULL__false__NULL__f_00874538,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x28);
  }
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_00796cd8(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}


