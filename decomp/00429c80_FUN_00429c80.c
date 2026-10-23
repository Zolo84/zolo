// FUN_00429c80 @ 429c80 size=145

void FUN_00429c80(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  uVar3 = 0xffffffff;
  pbVar5 = param_1;
  do {
    pbVar6 = pbVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pbVar6 = pbVar5 + 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar6;
  } while (bVar1 != 0);
  uVar3 = ~uVar3;
  pbVar5 = pbVar6 + -uVar3;
  pbVar6 = param_2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar6 = pbVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar6 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  if (*(char *)(*DAT_00d12b40 + 0x422) != '\0') {
    bVar1 = *param_1;
    while (bVar1 != 0) {
      param_1 = param_1 + 1;
      bVar2 = bVar1;
      if (0xdf < bVar1) {
        bVar2 = bVar1 - 0x20;
      }
      if (bVar1 == 0xb8) {
        bVar2 = 0xa8;
      }
      *param_2 = bVar2;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    }
    *param_2 = 0;
    return;
  }
  uVar3 = 0xffffffff;
  pbVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  CharUpperBuffA((LPSTR)param_2,~uVar3 - 1);
  return;
}


