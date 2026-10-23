// FUN_0041b390 @ 41b390 size=691

uint FUN_0041b390(int param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  bool bVar7;
  
  if (*(byte *)(param_2 + param_3) != *(byte *)(param_1 + param_3)) {
    return (uint)(*(byte *)(param_2 + param_3) < *(byte *)(param_1 + param_3));
  }
  bVar1 = *(byte *)(param_1 + 1 + param_3);
  bVar2 = *(byte *)(param_2 + 1 + param_3);
  if (bVar2 != bVar1) {
    return (uint)(bVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 2 + param_3);
  bVar2 = *(byte *)(param_2 + 2 + param_3);
  if (bVar2 != bVar1) {
    return (uint)(bVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 3 + param_3);
  bVar2 = *(byte *)(param_2 + 3 + param_3);
  if (bVar2 != bVar1) {
    return (uint)(bVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 4 + param_3);
  bVar2 = *(byte *)(param_2 + 4 + param_3);
  if (bVar2 != bVar1) {
    return (uint)(bVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 5 + param_3);
  bVar2 = *(byte *)(param_2 + 5 + param_3);
  if (bVar2 != bVar1) {
    return (uint)(bVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 6 + param_3);
  bVar2 = *(byte *)(param_2 + 6 + param_3);
  if (bVar2 != bVar1) {
    return (uint)(bVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 7 + param_3);
  bVar2 = *(byte *)(param_2 + 7 + param_3);
  if (bVar2 != bVar1) {
    return (uint)(bVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 8 + param_3);
  bVar2 = *(byte *)(param_2 + 8 + param_3);
  if (bVar2 != bVar1) {
    return (uint)(bVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 9 + param_3);
  bVar2 = *(byte *)(param_2 + 9 + param_3);
  if (bVar2 != bVar1) {
    return (uint)(bVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 10 + param_3);
  bVar2 = *(byte *)(param_2 + 10 + param_3);
  if (bVar2 != bVar1) {
    return (uint)(bVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 0xb + param_3);
  bVar2 = *(byte *)(param_2 + 0xb + param_3);
  if (bVar2 != bVar1) {
    return (uint)(bVar2 < bVar1);
  }
  bVar1 = *(byte *)(param_1 + 0xc + param_3);
  bVar2 = *(byte *)(param_2 + 0xc + param_3);
  uVar3 = param_1 + 0xc;
  uVar6 = param_2 + 0xc;
  param_1 = param_5 + 8;
  bVar7 = bVar2 < bVar1;
  if (bVar2 == bVar1) {
    puVar5 = (ushort *)(param_4 + uVar6 * 2);
    puVar4 = (ushort *)(param_4 + uVar3 * 2);
    while (bVar7 = *puVar5 < *puVar4, *puVar5 == *puVar4) {
      bVar1 = *(byte *)(uVar3 + 1 + param_3);
      bVar2 = *(byte *)(uVar6 + 1 + param_3);
      bVar7 = bVar2 < bVar1;
      if ((bVar2 != bVar1) || (bVar7 = puVar5[1] < puVar4[1], puVar5[1] != puVar4[1])) break;
      bVar1 = *(byte *)(uVar3 + 2 + param_3);
      bVar2 = *(byte *)(uVar6 + 2 + param_3);
      bVar7 = bVar2 < bVar1;
      if ((bVar2 != bVar1) || (bVar7 = puVar5[2] < puVar4[2], puVar5[2] != puVar4[2])) break;
      bVar1 = *(byte *)(uVar3 + 3 + param_3);
      bVar2 = *(byte *)(uVar6 + 3 + param_3);
      bVar7 = bVar2 < bVar1;
      if ((bVar2 != bVar1) || (bVar7 = puVar5[3] < puVar4[3], puVar5[3] != puVar4[3])) break;
      bVar1 = *(byte *)(uVar3 + 4 + param_3);
      bVar2 = *(byte *)(uVar6 + 4 + param_3);
      bVar7 = bVar2 < bVar1;
      if ((bVar2 != bVar1) || (bVar7 = puVar5[4] < puVar4[4], puVar5[4] != puVar4[4])) break;
      bVar1 = *(byte *)(uVar3 + 5 + param_3);
      bVar2 = *(byte *)(uVar6 + 5 + param_3);
      bVar7 = bVar2 < bVar1;
      if ((bVar2 != bVar1) || (bVar7 = puVar5[5] < puVar4[5], puVar5[5] != puVar4[5])) break;
      bVar1 = *(byte *)(uVar3 + 6 + param_3);
      bVar2 = *(byte *)(uVar6 + 6 + param_3);
      bVar7 = bVar2 < bVar1;
      if ((bVar2 != bVar1) || (bVar7 = puVar5[6] < puVar4[6], puVar5[6] != puVar4[6])) break;
      bVar1 = *(byte *)(uVar3 + 7 + param_3);
      bVar2 = *(byte *)(uVar6 + 7 + param_3);
      bVar7 = bVar2 < bVar1;
      if ((bVar2 != bVar1) || (bVar7 = puVar5[7] < puVar4[7], puVar5[7] != puVar4[7])) break;
      uVar3 = uVar3 + 8;
      puVar4 = puVar4 + 8;
      uVar6 = uVar6 + 8;
      puVar5 = puVar5 + 8;
      if (param_5 <= uVar3) {
        uVar3 = uVar3 - param_5;
        puVar4 = puVar4 + -param_5;
      }
      if (param_5 <= uVar6) {
        uVar6 = uVar6 - param_5;
        puVar5 = puVar5 + -param_5;
      }
      param_1 = param_1 + -8;
      *param_6 = *param_6 + -1;
      if (param_1 < 0) {
        return uVar3 & 0xffffff00;
      }
      bVar7 = *(byte *)(uVar6 + param_3) < *(byte *)(uVar3 + param_3);
      if (*(byte *)(uVar6 + param_3) != *(byte *)(uVar3 + param_3)) break;
    }
  }
  return (uint)bVar7;
}


