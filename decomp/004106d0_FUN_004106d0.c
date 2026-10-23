// FUN_004106d0 @ 4106d0 size=285

int __thiscall FUN_004106d0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *local_18;
  char *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9936;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = operator_new(0x114);
  local_4 = 0;
  local_14 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    local_10 = operator_new(0x94);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (local_10 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0043f070(200,200,0);
    }
    *(undefined4 *)(pcVar2 + 0x100) = uVar3;
    pcVar2[0x104] = (char)param_2;
    uVar4 = 0xffffffff;
    pcVar2[0x108] = '\0';
    pcVar2[0x109] = '\0';
    pcVar2[0x10a] = '\0';
    pcVar2[0x10b] = '\0';
    pcVar2[0x10c] = '\0';
    pcVar2[0x10d] = '\0';
    pcVar2[0x10e] = '\0';
    pcVar2[0x10f] = '\0';
    pcVar2[0x110] = '\0';
    pcVar2[0x111] = '\0';
    pcVar2[0x112] = '\0';
    pcVar2[0x113] = '\0';
    do {
      pcVar6 = param_2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar6 + -uVar4;
    pcVar7 = pcVar2;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; local_18 = pcVar2, uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  local_4 = 0xffffffff;
  FUN_00410ff0(*(undefined4 *)(param_1 + 0x120),1,&local_18);
  if (*(int *)(param_1 + 0x11c) != 0) {
    ExceptionList = local_c;
    return (*(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x11c) >> 2) + -1;
  }
  ExceptionList = local_c;
  return -1;
}


