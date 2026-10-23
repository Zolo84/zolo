// FUN_0057e300 @ 57e300 size=333

undefined4 * __fastcall FUN_0057e300(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  void *unaff_ESI;
  char *pcVar10;
  undefined4 *unaff_EDI;
  char *pcVar11;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8c53;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005807c0();
  local_4 = 0;
  FUN_0057f0c0();
  puVar8 = param_1 + 3;
  param_1[0x2004] = 0;
  *param_1 = &PTR_FUN_007ead88;
  param_1[2] = &PTR_LAB_007ead84;
  *puVar8 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  DAT_00bd0564 = 0;
  CoInitialize((LPVOID)0x0);
  iVar2 = Ordinal_1(0,puVar8,0);
  if (iVar2 != 0) {
    FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_008572bc,0x1e,iVar2);
    ExceptionList = pvStack_18;
    return param_1;
  }
  iVar2 = (**(code **)(*(int *)*puVar8 + 0x18))((int *)*puVar8,DAT_00dc4a58,1);
  if (iVar2 != 0) {
    FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_008572bc,0x23,iVar2);
  }
  puVar8 = param_1 + 0x2006;
  pcVar9 = (char *)(param_1 + 0x5005);
  param_1 = param_1 + 4;
  iVar2 = 0x80;
  do {
    iVar7 = 0x40;
    puVar3 = puVar8;
    puVar4 = param_1;
    do {
      puVar3[-1] = 0;
      *(undefined1 *)puVar3 = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 0x80;
      puVar3 = puVar3 + 0xc0;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar5 = 0xffffffff;
    pcVar10 = s_empty_008572b4;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    param_1 = param_1 + 1;
    puVar8 = (undefined4 *)((int)puVar8 + 6);
    pcVar10 = pcVar11 + -uVar5;
    pcVar11 = pcVar9;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    pcVar9 = pcVar9 + 0x40;
    iVar2 = iVar2 + -1;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    if (iVar2 == 0) {
      ExceptionList = unaff_ESI;
      return unaff_EDI;
    }
  } while( true );
}


