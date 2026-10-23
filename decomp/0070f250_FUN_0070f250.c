// FUN_0070f250 @ 70f250 size=294

void __fastcall FUN_0070f250(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_900 [256];
  char local_800 [2048];
  
  puVar6 = *(undefined4 **)(param_1 + 0x1272);
  if (puVar6 != (undefined4 *)0x0) {
    while( true ) {
      cVar2 = FUN_007119e0(*puVar6);
      if (cVar2 != '\0') break;
      puVar6 = (undefined4 *)puVar6[2];
      if (puVar6 == (undefined4 *)0x0) {
        return;
      }
    }
    uVar1 = *(undefined4 *)(param_1 + 0xe);
    if (*(char *)(param_1 + 0x1028) == '\0') {
      FUN_007a630a(local_900,s_EVENTNAME_d_00872314,uVar1);
      pcVar3 = (char *)FUN_0042b6c9(local_900);
      uVar4 = 0xffffffff;
      do {
        pcVar7 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar3 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4;
      pcVar3 = pcVar7 + -uVar4;
      pcVar7 = (char *)(param_1 + 0x1028);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    if (*(char *)(param_1 + 0x28) == '\0') {
      FUN_007a630a(local_900,s_EVENTDESC_d_00872308,uVar1);
      pcVar3 = (char *)FUN_0042b6c9(local_900);
      uVar4 = 0xffffffff;
      do {
        pcVar7 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar3 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4;
      pcVar3 = pcVar7 + -uVar4;
      pcVar7 = local_800;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_006ec610(local_800);
      uVar4 = 0xffffffff;
      pcVar3 = local_800;
      do {
        pcVar7 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar3 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4;
      pcVar3 = pcVar7 + -uVar4;
      pcVar7 = (char *)(param_1 + 0x28);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
  }
  return;
}


