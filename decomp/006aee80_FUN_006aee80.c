// FUN_006aee80 @ 6aee80 size=199

uint __thiscall FUN_006aee80(int *param_1,char *param_2,short param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar2 = (**(code **)(*param_1 + 4))(param_2);
  sVar6 = 0;
  if (iVar2 == 0) {
    pcVar3 = operator_new(0x102);
    uVar4 = 0xffffffff;
    pcVar3[0x100] = '\0';
    pcVar3[0x101] = '\0';
    pcVar7 = param_2;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = pcVar3;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    (**(code **)(*param_1 + 0x18))(pcVar3,pcVar3);
  }
  else {
    sVar6 = *(short *)(iVar2 + 0x100);
  }
  switch(param_2 + 2) {
  case (char *)0x0:
    return (uint)(sVar6 < param_3);
  case (char *)0x1:
    return (uint)(sVar6 <= param_3);
  case (char *)0x2:
    return (uint)(sVar6 == param_3);
  case (char *)0x3:
    return (uint)(param_3 <= sVar6);
  case (char *)0x4:
    return (uint)(param_3 < sVar6);
  default:
    return (uint)(param_2 + 2) & 0xffffff00;
  }
}


