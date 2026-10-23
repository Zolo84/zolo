// FUN_00540ed0 @ 540ed0 size=517

void __fastcall FUN_00540ed0(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  undefined1 local_208 [8];
  undefined1 local_200 [512];
  
  cVar2 = FUN_0042e980();
  if ((cVar2 != '\0') || (DAT_00dc1912 != '\0')) {
    bVar11 = DAT_00dc2ba0 != '\0';
    iVar7 = 0;
    pcVar1 = (char *)(param_1 + 0x124);
    do {
      FUN_007a8d98(*(short *)(DAT_00893530 + 0x18) + iVar7,local_208,10);
      uVar3 = FUN_004af700(*(undefined4 *)(param_1 + 6),local_208);
      FUN_007a630a(pcVar1,s__s__s_ai_008517fc,uVar3);
      if (bVar11) {
        FUN_007a630a(local_200,s__sai__s_008517e0,&DAT_00dc2ba0,pcVar1);
        iVar4 = FUN_007a6615(local_200,&DAT_0082eeb4);
        if (iVar4 != 0) goto LAB_00541049;
      }
      if (DAT_00dc195b == '\0') {
        FUN_007a630a(local_200,s_ai__s_008517d8,pcVar1);
        iVar4 = FUN_007a6615(local_200,&DAT_0082eeb4);
        if (iVar4 != 0) goto LAB_00541049;
      }
      iVar7 = iVar7 + -1;
    } while (-10 < iVar7);
    uVar3 = FUN_004af700(*(undefined4 *)(param_1 + 6));
    FUN_007a630a(pcVar1,s__s_ai_008517f4,uVar3);
    if (bVar11) {
      FUN_007a630a(local_200,s__sai__s_008517e0,&DAT_00dc2ba0,pcVar1);
      iVar7 = FUN_007a6615(local_200,&DAT_0082eeb4);
      if (iVar7 != 0) {
        FUN_007a6429(iVar7);
        FUN_00540ab0(pcVar1);
        return;
      }
    }
    if (DAT_00dc195b == '\0') {
      FUN_007a630a(local_200,s_ai__s_008517d8,pcVar1);
      iVar4 = FUN_007a6615(local_200,&DAT_0082eeb4);
      if (iVar4 != 0) {
LAB_00541049:
        FUN_007a6429(iVar4);
        FUN_00540ab0(pcVar1);
        return;
      }
    }
    pcVar10 = pcVar1;
    switch(*(undefined4 *)(param_1 + 6)) {
    case 1:
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x31:
    case 0x34:
      uVar5 = 0xffffffff;
      pcVar8 = s_default_ai_008517e8;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar9 + -uVar5;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      break;
    default:
      uVar5 = 0xffffffff;
      pcVar8 = s_minor_default_ai_0083c62c;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar9 + -uVar5;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_00540ab0(pcVar1);
  }
  return;
}


