// FUN_0053f490 @ 53f490 size=179

undefined4 * __fastcall FUN_0053f490(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c30d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x10);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  pcVar3 = (char *)(**(code **)(*param_1 + 0x14))();
  puVar2[1] = 7;
  puVar2[2] = 0;
  uVar5 = 0xffffffff;
  *puVar2 = &PTR_FUN_007e9230;
  pcVar4 = pcVar3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar4 = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  puVar2[3] = pcVar4;
  do {
    pcVar7 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar7 + -uVar5;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  ExceptionList = local_c;
  return puVar2;
}


