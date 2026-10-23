// FUN_0061e550 @ 61e550 size=657

void FUN_0061e550(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d0e0b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    puVar3 = operator_new(0xaa);
    uStack_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00433570(s_gfx_interface_pics_unknown_bmp_0084a150,0,0xffffffff);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      *puVar3 = &PTR_FUN_007ed164;
      puVar3[2] = &PTR_LAB_007ed160;
      *(undefined ***)((int)puVar3 + 0x7e) = &PTR_LAB_007ed15c;
      FUN_00415b90(1);
    }
    *param_1 = (int)puVar3;
  }
  else {
    if (DAT_00dc3a00 == '\0') {
      uVar5 = 0xffffffff;
      pcVar7 = param_2;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = local_10c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
    else {
      FUN_007a630a(local_10c,s__s__s_0083a350,&DAT_00dc3a00,param_2);
    }
    iVar2 = FUN_007a6615(local_10c,&DAT_0082eeb4);
    if (iVar2 == 0) {
      uVar5 = 0xffffffff;
      pcVar7 = param_2;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = local_10c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      iVar2 = FUN_007a6615(local_10c,&DAT_0082eeb4);
      if (iVar2 == 0) {
        puVar3 = operator_new(0xaa);
        uStack_4 = 4;
        if (puVar3 == (undefined4 *)0x0) {
          *param_1 = 0;
        }
        else {
          FUN_00433570(s_gfx_interface_pics_unknown_bmp_0084a150,0,0xffffffff);
          uStack_4 = CONCAT31(uStack_4._1_3_,5);
          *puVar3 = &PTR_FUN_007ed164;
          puVar3[2] = &PTR_LAB_007ed160;
          *(undefined ***)((int)puVar3 + 0x7e) = &PTR_LAB_007ed15c;
          FUN_00415b90(1);
          *param_1 = (int)puVar3;
        }
        goto LAB_0061e7ad;
      }
    }
    FUN_007a6429(iVar2);
    puVar3 = operator_new(0xaa);
    uStack_4 = 2;
    if (puVar3 == (undefined4 *)0x0) {
      *param_1 = 0;
    }
    else {
      FUN_00433570(param_2,0,0xffffffff);
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      *puVar3 = &PTR_FUN_007ed164;
      puVar3[2] = &PTR_LAB_007ed160;
      *(undefined ***)((int)puVar3 + 0x7e) = &PTR_LAB_007ed15c;
      FUN_00415b90(1);
      *param_1 = (int)puVar3;
    }
  }
LAB_0061e7ad:
  uStack_4 = 0xffffffff;
  uVar4 = FUN_00413d60(s_leader_minister_palette_bmp_0085ed3c);
  FUN_00415f20(uVar4);
  ExceptionList = pvStack_c;
  return;
}


