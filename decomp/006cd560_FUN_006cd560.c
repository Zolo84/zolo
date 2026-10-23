// FUN_006cd560 @ 6cd560 size=567

void __fastcall FUN_006cd560(int *param_1)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  DWORD local_4;
  
  *(undefined4 *)*param_1 = 0x137;
  *(undefined4 *)(*param_1 + 4) = 0x424;
  *(undefined4 *)(*param_1 + 8) = 0xfb;
  puVar7 = (undefined4 *)(*param_1 + 0x301);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = (undefined4 *)(*param_1 + 0x341);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_4 = 0x40;
  BVar2 = GetComputerNameA((LPSTR)(*param_1 + 0x301),&local_4);
  if (BVar2 == 0) {
    uVar4 = 0xffffffff;
    pcVar6 = s_Player_0086b7f0;
    do {
      pcVar8 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar8 + -uVar4;
    pcVar8 = (char *)(*param_1 + 0x301);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  FUN_006e92b0();
  *(undefined4 *)(*param_1 + 0x366) = 2;
  *(undefined4 *)(*param_1 + 0x362) = 2;
  *(undefined4 *)(*param_1 + 0x36a) = 3;
  *(undefined4 *)(*param_1 + 0x36e) = 0;
  *(undefined4 *)(*param_1 + 0x372) = 100;
  *(undefined4 *)(*param_1 + 0x376) = 100;
  *(undefined4 *)(*param_1 + 0x37a) = 1;
  *(undefined4 *)(*param_1 + 0x37e) = 1;
  *(undefined4 *)(*param_1 + 0x382) = 1;
  *(undefined4 *)(*param_1 + 0x386) = 0;
  *(undefined4 *)(*param_1 + 0x392) = 1;
  *(undefined4 *)(*param_1 + 0x38a) = 1;
  *(undefined4 *)(*param_1 + 0x38e) = 1;
  *(undefined4 *)(*param_1 + 0x396) = 1;
  *(undefined4 *)(*param_1 + 0x39a) = 0;
  *(undefined4 *)(*param_1 + 0x39e) = 1;
  *(undefined4 *)(*param_1 + 0x3a2) = 1;
  *(undefined4 *)(*param_1 + 0x3a6) = 1;
  *(undefined4 *)(*param_1 + 0x3aa) = 1;
  *(undefined4 *)(*param_1 + 0x3ae) = 1;
  *(undefined4 *)(*param_1 + 0x3b2) = 1;
  *(undefined4 *)(*param_1 + 0x3b6) = 0x50;
  *(undefined4 *)(*param_1 + 0x3ba) = 0;
  *(undefined4 *)(*param_1 + 0x3be) = 0;
  *(undefined4 *)(*param_1 + 0x3c2) = 0;
  *(undefined4 *)(*param_1 + 0x3c6) = 0;
  *(undefined4 *)(*param_1 + 0x3ca) = 0;
  *(undefined4 *)(*param_1 + 0x3ce) = 0;
  *(undefined4 *)(*param_1 + 0x3e2) = 0;
  *(undefined4 *)(*param_1 + 0x3e6) = 1;
  *(undefined4 *)(*param_1 + 0x3ea) = 1;
  *(undefined4 *)(*param_1 + 0x3ee) = 0;
  *(undefined4 *)(*param_1 + 0x3f2) = 0;
  *(undefined4 *)(*param_1 + 0x3f6) = 0;
  *(undefined4 *)(*param_1 + 0x3d2) = 0;
  *(undefined4 *)(*param_1 + 0x3d6) = 0;
  *(undefined4 *)(*param_1 + 0x3da) = 0;
  *(undefined4 *)(*param_1 + 0x3de) = 0;
  *(undefined4 *)(*param_1 + 0x3fa) = 0;
  *(undefined4 *)(*param_1 + 0x3fe) = 0;
  *(undefined4 *)(*param_1 + 0x402) = 0;
  *(undefined4 *)(*param_1 + 0x406) = 0;
  *(undefined4 *)(*param_1 + 0x40a) = 0;
  *(undefined4 *)(*param_1 + 0x40e) = 1;
  *(undefined4 *)(*param_1 + 0x412) = 0;
  *(undefined4 *)(*param_1 + 0x416) = 0;
  *(undefined4 *)(*param_1 + 0x41a) = 1;
  *(undefined4 *)(*param_1 + 0x41e) = 1;
  FUN_006cd800();
  return;
}


