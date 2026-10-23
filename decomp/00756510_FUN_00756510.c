// FUN_00756510 @ 756510 size=506

void __thiscall FUN_00756510(int param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  size_t _Size;
  char cVar2;
  uint uVar3;
  size_t *psVar4;
  size_t *psVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  size_t local_c;
  size_t local_8;
  undefined4 local_4;
  
  iVar6 = (int)param_3;
  FUN_00745a60(*(undefined4 *)((int)param_3 + 0x74));
  local_14 = (char *)&DAT_007f0c98;
  if (*(char **)((int)param_3 + 0x18) != (char *)0x0) {
    local_14 = *(char **)((int)param_3 + 0x18);
  }
  local_18 = (char *)&DAT_007f0c98;
  if (*(char **)((int)param_3 + 8) != (char *)0x0) {
    local_18 = *(char **)((int)param_3 + 8);
  }
  puVar1 = (undefined4 *)((int)param_3 + 0x3c);
  param_3 = (char *)&DAT_007f0c98;
  if ((char *)*puVar1 != (char *)0x0) {
    param_3 = (char *)*puVar1;
  }
  uVar9 = *(uint *)(iVar6 + 0x78);
  uVar3 = 0;
  iVar7 = 0;
  do {
    bVar8 = (byte)uVar3;
    uVar3 = uVar3 + 8;
    *(char *)((int)&local_8 + iVar7) =
         (char)((0xff000000U >> (bVar8 & 0x1f) & uVar9) >> (0x18 - bVar8 & 0x1f));
    iVar7 = iVar7 + 1;
  } while (uVar3 < 0x20);
  uVar9 = *(uint *)(iVar6 + 0x5c);
  uVar3 = 0;
  iVar6 = 0;
  do {
    bVar8 = (byte)uVar3;
    uVar3 = uVar3 + 8;
    *(char *)((int)&local_c + iVar6) =
         (char)((0xff000000U >> (bVar8 & 0x1f) & uVar9) >> (0x18 - bVar8 & 0x1f));
    iVar6 = iVar6 + 1;
  } while (uVar3 < 0x20);
  local_4 = local_10;
  uVar9 = 0xffffffff;
  iVar6 = *(int *)(param_1 + 0x20);
  pcVar11 = param_3;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar3 = 0xffffffff;
  pcVar11 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar10 = 0xffffffff;
  pcVar11 = local_14;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  _Size = ~uVar9 + ~uVar3 + ~uVar10 + 0x30;
  psVar4 = _malloc(_Size);
  *psVar4 = _Size;
  psVar5 = (size_t *)(iVar6 + 4);
  if (iVar6 == 0) {
    psVar5 = &DAT_00d4c210;
  }
  psVar4[1] = *psVar5;
  psVar4[2] = psVar5[1];
  psVar4[3] = *(size_t *)(iVar6 + 4);
  psVar4[4] = *(size_t *)(iVar6 + 8);
  psVar4[5] = 0xf;
  uVar9 = 0xffffffff;
  psVar4[6] = local_c;
  psVar4[7] = local_8;
  pcVar11 = param_3;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_00745a60(~uVar9);
  uVar9 = ~uVar9;
  while (uVar9 != 0) {
    *(char *)((int)psVar4 + uVar9 + 0x23) = param_3[uVar9 - 1];
    uVar9 = uVar9 - 1;
  }
  iVar6 = FUN_00745a30();
  uVar9 = 0xffffffff;
  pcVar11 = local_18;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  FUN_00745a60(uVar9);
  while (uVar9 != 0) {
    uVar9 = uVar9 - 1;
    *(char *)((int)psVar4 + uVar9 + iVar6 + 0x28) = local_18[uVar9];
  }
  iVar7 = FUN_00745a30();
  iVar7 = iVar7 + iVar6 + 0x28;
  uVar9 = 0xffffffff;
  pcVar11 = local_14;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  FUN_00745a60(uVar9);
  while (uVar9 != 0) {
    uVar9 = uVar9 - 1;
    *(char *)((int)psVar4 + uVar9 + iVar7 + 4) = local_14[uVar9];
  }
  iVar6 = FUN_00745a30();
  *(undefined4 *)((int)psVar4 + iVar6 + 4 + iVar7) = local_4;
  FUN_007579c0(psVar4);
  FUN_007a77fa(psVar4);
  return;
}


