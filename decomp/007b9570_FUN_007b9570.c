// FUN_007b9570 @ 7b9570 size=243

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_007b9570(uint param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  
  if (((DAT_00dc5c60 <= param_1) ||
      (bVar3 = true,
      (*(byte *)((&DAT_00dc5b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) == 0)) ||
     (iVar7 = FUN_007adf9b(), iVar7 == 0)) {
    return 0;
  }
  cVar1 = *param_2;
  if (cVar1 != 'a') {
    if (cVar1 == 'r') {
      *(undefined4 *)(iVar7 + 0xc) = 1;
      goto LAB_007b95d6;
    }
    if (cVar1 != 'w') {
      iVar7 = 0;
      goto LAB_007b9652;
    }
  }
  *(undefined4 *)(iVar7 + 0xc) = 2;
LAB_007b95d6:
  *(uint *)(iVar7 + 0xc) = *(uint *)(iVar7 + 0xc) | DAT_00dc549c;
  bVar2 = bVar3;
  bVar4 = false;
  bVar6 = false;
LAB_007b95e6:
  bVar5 = bVar6;
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) goto LAB_007b9645;
  bVar6 = bVar5;
  if (cVar1 == '+') {
    if ((*(uint *)(iVar7 + 0xc) & 0x80) == 0) {
      *(uint *)(iVar7 + 0xc) = *(uint *)(iVar7 + 0xc) & 0xfffffffc | 0x80;
      goto LAB_007b95e6;
    }
  }
  else {
    if (cVar1 == 'b') {
LAB_007b9626:
      bVar6 = bVar3;
      if (bVar5) goto LAB_007b9638;
      goto LAB_007b95e6;
    }
    if (cVar1 == 'c') {
      if (bVar4) goto LAB_007b9638;
      *(byte *)(iVar7 + 0xd) = *(byte *)(iVar7 + 0xd) | 0x40;
      bVar4 = bVar3;
      goto LAB_007b95e6;
    }
    if (cVar1 == 'n') {
      if (bVar4) goto LAB_007b9638;
      *(byte *)(iVar7 + 0xd) = *(byte *)(iVar7 + 0xd) & 0xbf;
      bVar4 = bVar3;
      goto LAB_007b95e6;
    }
    if (cVar1 == 't') goto LAB_007b9626;
  }
LAB_007b9638:
  bVar2 = false;
  bVar6 = bVar5;
  goto LAB_007b95e6;
LAB_007b9645:
  _DAT_00dc5174 = _DAT_00dc5174 + 1;
  *(uint *)(iVar7 + 0x10) = param_1;
LAB_007b9652:
  FUN_007a6772(iVar7);
  return iVar7;
}


