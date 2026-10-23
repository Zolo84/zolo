// FUN_0074fa80 @ 74fa80 size=572

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0074fa80(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 unaff_EBX;
  undefined4 *puVar6;
  int unaff_ESI;
  int *unaff_EDI;
  char *pcVar7;
  char **ppcStack00000014;
  char *in_stack_0000001c;
  char *in_stack_0000002c;
  void *in_stack_00000038;
  char *local_8;
  
  ppcStack00000014 = &local_8;
  FUN_0074b690();
  FUN_00757620();
  iVar2 = FUN_0074fdf0();
  *(undefined1 *)(unaff_ESI + 0x180) = 0;
  if (iVar2 != 0) {
    local_8 = (char *)0x74fc21;
    ppcStack00000014 = operator_new(0x68);
    if (ppcStack00000014 != (void *)0x0) {
      puVar6 = &DAT_007f0c98;
      if (*(undefined4 **)(unaff_ESI + 0x4a) != (undefined4 *)0x0) {
        puVar6 = *(undefined4 **)(unaff_ESI + 0x4a);
      }
      local_8 = s_EN_CHOOSE_CHANNEL_00874988;
      local_8 = (char *)FUN_0042b6c9();
      FUN_0043dce0(puVar6);
    }
    local_8 = (char *)0x74fc7b;
    pcVar3 = (char *)FUN_0042b6c9();
    if (pcVar3 != (char *)0x0) {
      local_8 = pcVar3;
      FUN_004367a0();
    }
    (**(code **)*unaff_EDI)();
    FUN_00757c20();
    (**(code **)(*unaff_EDI + 4))();
    ExceptionList = in_stack_00000038;
    return 0;
  }
  local_8 = (char *)0x74faca;
  FUN_00674910();
  local_8 = (char *)0x74fae5;
  FUN_00674910();
  local_8 = (char *)0x74faf8;
  pcVar3 = (char *)FUN_0042b6c9();
  uVar4 = 0xffffffff;
  pcVar5 = pcVar3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)(~uVar4 - 1);
  local_8 = pcVar5;
  cVar1 = FUN_00674e40();
  if (cVar1 != '\0') {
    pcVar7 = in_stack_0000002c;
    for (uVar4 = (uint)pcVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = (uint)pcVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_8 = (char *)0x74fb35;
    FUN_00674e20();
  }
  local_8 = (char *)0x74fb44;
  pcVar3 = (char *)FUN_0042b6c9();
  uVar4 = 0xffffffff;
  pcVar5 = pcVar3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)(~uVar4 - 1);
  local_8 = pcVar5;
  cVar1 = FUN_00674e40();
  if (cVar1 != '\0') {
    pcVar7 = in_stack_0000001c;
    for (uVar4 = (uint)pcVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = (uint)pcVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_8 = (char *)0x74fb81;
    FUN_00674e20();
  }
  local_8 = (char *)0x74fb88;
  ppcStack00000014 = operator_new(0x68);
  if (ppcStack00000014 != (void *)0x0) {
    local_8 = (char *)&DAT_007f0c98;
    if (in_stack_0000002c != (char *)0x0) {
      local_8 = in_stack_0000002c;
    }
    if (in_stack_0000001c == (char *)0x0) {
      in_stack_0000001c = (char *)&DAT_007f0c98;
    }
    FUN_0043dce0(in_stack_0000001c);
  }
  local_8 = (char *)0x74fbce;
  FUN_00674910();
  if (in_stack_0000002c != (char *)0x0) {
    cVar1 = in_stack_0000002c[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      in_stack_0000002c[-1] = cVar1 + -1;
      ExceptionList = in_stack_00000038;
      return unaff_EBX;
    }
    local_8 = (char *)0x74fc02;
    FUN_00796cd8();
  }
  ExceptionList = in_stack_00000038;
  return unaff_EBX;
}


