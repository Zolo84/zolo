// FUN_004137c0 @ 4137c0 size=229

undefined1 __thiscall FUN_004137c0(int param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_100 [256];
  
  uVar5 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar7 = param_2 + (~uVar5 - 5);
  FUN_007a630a(local_100,s_gfx_palette__s_0082f1e4,param_2);
  iVar4 = FUN_007a8730(pcVar7,&DAT_0082f1dc);
  if (iVar4 != 0) {
    iVar4 = FUN_007a8730(pcVar7,&DAT_0082f1d4);
    if (iVar4 == 0) {
      uVar2 = FUN_00413a00(local_100);
      goto LAB_0041385c;
    }
    iVar4 = FUN_007a8730(pcVar7,&DAT_0082f1cc);
    if (iVar4 == 0) {
      uVar2 = 0;
      goto LAB_0041385c;
    }
    FUN_007a630a(local_100,s_gfx_palette__s_bmp_0082f1b8,param_2);
  }
  uVar2 = FUN_004138b0(local_100);
LAB_0041385c:
  FUN_00413ae0();
  puVar6 = &DAT_0082f0cc;
  do {
    iVar4 = puVar6[-1];
    uVar3 = FUN_00413c60(*puVar6,puVar6[1],puVar6[2]);
    puVar6 = puVar6 + 0xc;
    *(undefined1 *)(iVar4 + 0x1104 + param_1) = uVar3;
  } while ((int)puVar6 < 0x82f1bc);
  *(undefined1 *)(param_1 + 0x1104) = 0;
  return uVar2;
}


