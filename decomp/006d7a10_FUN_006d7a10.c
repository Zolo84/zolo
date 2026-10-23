// FUN_006d7a10 @ 6d7a10 size=1810

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_006d7a10(int param_1)

{
  char cVar1;
  undefined **ppuVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *unaff_EBX;
  int *piVar6;
  int iVar7;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined2 *puStack_2c;
  undefined4 uStack_28;
  char *pcStack_24;
  int iStack_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (*(char *)(DAT_00893750 + 0x11d) != '\0') {
    return;
  }
  piVar6 = (int *)0x0;
  if (*(int *)(param_1 + 0x2220e) == 0) {
    if (*(undefined4 **)(param_1 + 0x221c8) == (undefined4 *)0x0) {
      return;
    }
    *(int *)(param_1 + 0x22202) = *(int *)(param_1 + 0x22202) + 1;
    *(undefined4 *)(param_1 + 0x2220e) = **(undefined4 **)(param_1 + 0x221c8);
    pcStack_24 = (char *)0x6d7a6b;
    (**(code **)(*(int *)(param_1 + 0x221c4) + 0x18))();
    if ((undefined *)**(int **)(param_1 + 0x2220e) != DAT_0086cd98) {
      ppuVar2 = &DAT_0086cd98;
      do {
        ppuVar2 = ppuVar2 + 2;
        if (ppuVar2 == &PTR_s__NAME_0086cf58) break;
      } while ((undefined *)**(int **)(param_1 + 0x2220e) != *ppuVar2);
    }
    pcStack_24 = s_tutorial_part__s_0086d2a0;
    uStack_28 = 0x6d7aa4;
    FUN_00405ad0();
  }
  puVar5 = *(undefined4 **)(param_1 + 0x2220e);
  switch(*puVar5) {
  case 0:
    FUN_006d8a40();
    return;
  case 1:
    iVar3 = (**(code **)(*(int *)(param_1 + 0x4504) + 4))();
    iStack_c = 0;
    if (0 < iVar3) {
      do {
        pcStack_24 = (char *)0x6d7b00;
        piVar4 = (int *)FUN_006d9ab0();
        cVar1 = (**(code **)(*piVar4 + 0x28))();
        if (cVar1 != '\0') {
          iStack_c = iStack_c + 1;
        }
        piVar6 = (int *)((int)piVar6 + 1);
      } while ((int)piVar6 < iVar3);
    }
    iVar3 = *(int *)(param_1 + 0x2220e);
    goto LAB_006d7b63;
  case 2:
    iVar3 = (**(code **)(*(int *)(param_1 + 0x4504) + 4))();
    iVar7 = 0;
    iStack_c = 0;
    if (0 < iVar3) {
      do {
        pcStack_24 = (char *)0x6d7b45;
        piVar6 = (int *)FUN_006d9ab0();
        cVar1 = (**(code **)(*piVar6 + 0x2c))();
        if (cVar1 != '\0') {
          iStack_c = iStack_c + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
    iVar3 = *(int *)(param_1 + 0x2220e);
LAB_006d7b63:
    if (iStack_c < *(int *)(iVar3 + 0x18)) {
      return;
    }
    if (iVar3 != 0) {
      pcStack_24 = (char *)0x6d7b77;
      FUN_006d8260();
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
    return;
  case 3:
    *(undefined1 *)(param_1 + 0x22212) = 1;
    goto LAB_006d7cd6;
  default:
    goto switchD_006d7ab8_caseD_4;
  case 7:
    piVar4 = *(int **)(param_1 + 0x2222c);
    while (piVar4 != (int *)0x0) {
      piVar6 = (int *)piVar4[2];
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        pcStack_24 = (char *)0x6d7bae;
        (*(code *)**(undefined4 **)*piVar4)();
      }
      pcStack_24 = (char *)0x6d7bb4;
      FUN_00796cd8();
      piVar4 = piVar6;
    }
    *(int **)(param_1 + 0x2222c) = piVar6;
    *(int **)(param_1 + 0x22230) = piVar6;
    *(int **)(param_1 + 0x22234) = piVar6;
    goto LAB_006d7cd6;
  case 8:
    pcStack_24 = (char *)0x6d7bec;
    FUN_006d9ad0();
    pcStack_24 = (char *)0x6d7bf2;
    FUN_004d8670();
    pcStack_24 = (char *)0x6d7bfe;
    FUN_0064c090();
    break;
  case 9:
    FUN_006d86f0();
    return;
  case 0xb:
    if (*(char *)((int)puVar5 + 0x16) == '\0') {
      return;
    }
    iVar3 = (**(code **)(puVar5[1] + 4))();
    if (iVar3 != 0) {
      return;
    }
    break;
  case 0xc:
    FUN_006d8610();
    return;
  case 0xd:
    iVar3 = puVar5[2];
    while (iVar3 != 0) {
      pcStack_24 = auStack_8;
      uStack_28 = 0x6d7c51;
      FUN_00526af0();
      pcStack_24 = auStack_4;
      uStack_28 = 0x6d7c64;
      puVar5 = (undefined4 *)FUN_00526af0();
      pcStack_24 = *(char **)*puVar5;
      uStack_28 = 0x6d7c77;
      FUN_00460b30();
    }
    break;
  case 0xe:
    iVar3 = *(int *)(param_1 + 0x4508);
    if (iVar3 == 0) {
      return;
    }
    while( true ) {
      pcStack_24 = auStack_4;
      uStack_28 = 0x6d7ca3;
      puVar5 = (undefined4 *)FUN_00498700();
      cVar1 = (**(code **)(**(int **)*puVar5 + 0x2c))();
      if ((cVar1 != '\0') && (cVar1 = FUN_005177f0(), cVar1 != '\0')) break;
      if (iVar3 == 0) {
        return;
      }
    }
    goto LAB_006d80f0;
  case 0xf:
    *(undefined1 *)(param_1 + 0x22215) = 1;
LAB_006d7cd6:
    if (*(int **)(param_1 + 0x2220e) != piVar6) {
      FUN_006d65d0();
      pcStack_24 = (char *)0x6d7cf1;
      FUN_00796cd8();
      *(int **)(param_1 + 0x2220e) = piVar6;
      return;
    }
    goto LAB_006d8114;
  case 0x10:
    iVar3 = puVar5[2];
    while (iVar3 != 0) {
      pcStack_24 = (char *)0x6d7d25;
      FUN_006436d0();
      FUN_006d8230();
      pcStack_24 = auStack_4;
      uStack_28 = 0x6d7d3b;
      FUN_00526af0();
      pcStack_24 = (char *)0x6d7d47;
      FUN_0049a100();
    }
    break;
  case 0x11:
    iVar3 = puVar5[2];
    if (iVar3 != 0) {
      do {
        pcStack_24 = (char *)0x6d7d73;
        (**(code **)(*(int *)(param_1 + 0x221e8) + 0x18))();
        pcStack_24 = (char *)*unaff_EBX;
        uStack_28 = 0x6d7d85;
        piVar4 = (int *)FUN_006436d0();
        pcStack_24 = (char *)0x6d7d8c;
        (**(code **)(*piVar4 + 0x50))();
        pcStack_24 = auStack_4;
        uStack_28 = 0x6d7d9b;
        FUN_00526af0();
      } while (iVar3 != 0);
    }
    break;
  case 0x12:
    iVar3 = puVar5[2];
    if (iVar3 == 0) {
      return;
    }
    do {
      pcStack_24 = auStack_4;
      uStack_28 = 0x6d7dc6;
      puVar5 = (undefined4 *)FUN_00526af0();
      if (*(int *)(param_1 + 0x221fa) == *(int *)*puVar5) {
        if (*(int *)(param_1 + 0x2220e) != 0) {
          pcStack_24 = (char *)0x6d7de3;
          FUN_006d8260();
        }
        *(undefined4 *)(param_1 + 0x2220e) = 0;
      }
    } while (iVar3 != 0);
    return;
  case 0x13:
    if (*(int *)(param_1 + 0x221fe) < (int)puVar5[6]) {
      return;
    }
    if (puVar5 != (undefined4 *)0x0) {
      pcStack_24 = (char *)0x6d7e13;
      FUN_006d8260();
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
    *(undefined4 *)(param_1 + 0x221fe) = 0;
    return;
  case 0x14:
    if (*(int *)(DAT_00d0ca90 + 0x21e62) == 0x10) {
      (**(code **)(**(int **)(DAT_00d0ca90 + 0x21e24) + 0x4c))();
    }
    *(undefined4 *)(DAT_00893750 + 0xc) = *(undefined4 *)(DAT_00d0ca90 + 6);
    break;
  case 0x15:
    iVar3 = puVar5[2];
    while (iVar3 != 0) {
      puStack_2c = &DAT_0088f28c;
      puStack_30 = (undefined1 *)0x6d7e72;
      FUN_00446d10();
      puStack_30 = auStack_4;
      puStack_2c = (undefined2 *)0x0;
      uStack_34 = 0x6d7e81;
      FUN_00526af0();
      puStack_2c = (undefined2 *)0x6d7e88;
      puStack_2c = (undefined2 *)FUN_00526b00();
      FUN_00428eb0(&uStack_34);
      FUN_00461e60();
    }
    break;
  case 0x16:
    goto LAB_006d7ead;
  case 0x17:
LAB_006d7ead:
    pcStack_24 = (char *)0x6d7eb8;
    FUN_0064a850();
    break;
  case 0x18:
    iVar7 = 0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x21e5a) + 4);
    while (iVar3 != 0) {
      pcStack_24 = auStack_4;
      uStack_28 = 0x6d7eed;
      puVar5 = (undefined4 *)FUN_00498700();
      cVar1 = (**(code **)(**(int **)*puVar5 + 0x28))();
      if (cVar1 != '\0') {
        iVar7 = iVar7 + 1;
      }
    }
    puVar5 = *(undefined4 **)(param_1 + 0x2220e);
    if (iVar7 < (int)puVar5[6]) {
      return;
    }
    goto joined_r0x006d7f80;
  case 0x19:
    FUN_006d8e30();
    return;
  case 0x1a:
    FUN_006d8e90();
    return;
  case 0x1b:
    FUN_006d8ef0();
    return;
  case 0x1c:
    FUN_006d8f60();
    return;
  case 0x1d:
    FUN_006d8fd0();
    return;
  case 0x1e:
    *(undefined4 *)(*DAT_00d12b40 + 0x36a) = puVar5[6];
    puVar5 = *(undefined4 **)(param_1 + 0x2220e);
    goto joined_r0x006d7f80;
  case 0x1f:
    FUN_006d9090();
    return;
  case 0x21:
    FUN_006d9120();
    return;
  case 0x22:
    FUN_006d9190();
    return;
  case 0x23:
    FUN_006d91e0();
    return;
  case 0x24:
    FUN_006d9260();
    return;
  case 0x25:
    goto switchD_006d7ab8_caseD_25;
  case 0x26:
    FUN_006d92d0();
    return;
  case 0x27:
    FUN_006d9340();
    return;
  case 0x28:
    FUN_006d94a0();
    return;
  case 0x29:
    FUN_006d9510();
    return;
  case 0x2a:
    FUN_006d9220();
    return;
  case 0x2b:
    FUN_006d85d0();
    return;
  case 0x2c:
    FUN_006d9570();
    return;
  case 0x2d:
    FUN_006d95f0();
    return;
  case 0x2e:
    FUN_006d87c0();
    return;
  case 0x2f:
    FUN_006d9650();
    return;
  case 0x30:
    FUN_006d98d0();
    return;
  case 0x31:
    FUN_006d97c0();
    return;
  case 0x32:
    FUN_006d99a0();
    return;
  case 0x33:
    *(undefined1 *)(param_1 + 0x22252) = 1;
    return;
  case 0x34:
    pcStack_24 = (char *)0x6d80a0;
    operator_new(0x10);
    iVar3 = *(int *)(param_1 + 0x2220e);
    pcStack_24 = *(char **)(iVar3 + 0x3a);
    uStack_28 = *(undefined4 *)(iVar3 + 0x36);
    puStack_2c = *(undefined2 **)(iVar3 + 0x32);
    puStack_30 = (undefined1 *)0x6d80c2;
    FUN_006d8210();
    pcStack_24 = (char *)0x6d80ce;
    FUN_006d9af0();
    puVar5 = *(undefined4 **)(param_1 + 0x2220e);
    goto joined_r0x006d7f80;
  case 0x35:
    pcStack_24 = (char *)0x6d80e6;
    FUN_006d9b40();
    (**(code **)(*(int *)(param_1 + 0x221d6) + 0x14))();
LAB_006d80f0:
    puVar5 = *(undefined4 **)(param_1 + 0x2220e);
switchD_006d7ab8_caseD_25:
    goto joined_r0x006d7f80;
  case 0x37:
    puVar5 = *(undefined4 **)(param_1 + 0x2220e);
    *(undefined1 *)(param_1 + 0x2224c) = 1;
    goto joined_r0x006d7f80;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x2220e);
joined_r0x006d7f80:
  if (puVar5 != (undefined4 *)0x0) {
    pcStack_24 = (char *)0x6d8114;
    FUN_006d8260();
  }
LAB_006d8114:
  *(int **)(param_1 + 0x2220e) = piVar6;
switchD_006d7ab8_caseD_4:
  return;
}


