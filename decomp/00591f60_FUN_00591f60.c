// FUN_00591f60 @ 591f60 size=183

void __fastcall FUN_00591f60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  cVar1 = (**(code **)(*(int *)(param_1 + 0x104) + 8))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*(int *)(param_1 + 0x116) + 8))();
    if (cVar1 != '\0') {
      uVar3 = 0xffffffff;
      pcVar5 = &DAT_0088ebf8;
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      pcVar6 = (char *)(param_1 + 8);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      return;
    }
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x104) + 4))();
  FUN_007a630a(auStack_c,&DAT_00858344,uVar2);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x116) + 4))();
  FUN_007a630a(auStack_18,&DAT_00858344,uVar2);
  FUN_007a630a(param_1 + 8,s__s__s_0085833c,auStack_c,auStack_18);
  return;
}


