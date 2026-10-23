// FUN_004d7400 @ 4d7400 size=925

undefined4 FUN_004d7400(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 local_24c [576];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bfad3;
  pvStack_c = ExceptionList;
  piVar7 = (int *)0x0;
  iVar2 = 0;
  ExceptionList = &pvStack_c;
  do {
    if (iVar2 < 0x80) {
      (&DAT_00a42e14)[iVar2] = 0;
LAB_004d7446:
      if (0xdf < iVar2) goto LAB_004d744d;
    }
    else {
      if (iVar2 < 0xe0) {
        (&DAT_00a42e14)[iVar2] = (char)iVar2 + -0x80;
        goto LAB_004d7446;
      }
LAB_004d744d:
      (&DAT_00a42e14)[iVar2] = 0x5f;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x200);
  iVar2 = 0;
  do {
    if (iVar2 < 0x84) {
      (&DAT_00a6131c)[iVar2] = 4;
LAB_004d7481:
      if (0xff < iVar2) goto LAB_004d7488;
    }
    else {
      if (iVar2 < 0x100) {
        (&DAT_00a6131c)[iVar2] = (char)iVar2 + -0x80;
        goto LAB_004d7481;
      }
LAB_004d7488:
      (&DAT_00a6131c)[iVar2] = 0x7f;
    }
    iVar2 = iVar2 + 1;
    if (0x1ff < iVar2) {
      DAT_0088f21a = 0;
      iVar2 = 0;
      do {
        iVar3 = _rand();
        (&DAT_00a4cce8)[iVar2] = (byte)iVar3 & 0x7f;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x10000);
      iVar2 = DAT_00877690 + 4;
      piVar4 = operator_new(iVar2 * 0x4b2 + 4);
      local_4 = 0;
      if (piVar4 != (int *)0x0) {
        piVar7 = piVar4 + 1;
        *piVar4 = iVar2;
        FUN_007a8800(piVar7,0x4b2,iVar2,FUN_004e2ff0,FUN_004e38a0);
      }
      local_4 = 0xffffffff;
      DAT_00ab27b4 = piVar7;
      FUN_007a630a(local_24c,s__s_boundbox_tbl_0084781c,&DAT_00dc1970);
      FUN_00426f50(local_24c);
      iVar2 = 0;
      local_4 = 1;
      if (0 < DAT_00877690) {
        iVar3 = 0;
        do {
          FUN_004271a0(iVar3 + 0x3b2 + (int)DAT_00ab27b4,0x10);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x4b2;
        } while (iVar2 < DAT_00877690);
      }
      cVar1 = FUN_00427770(&DAT_00dc3b04);
      if (cVar1 == '\0') {
        FUN_00429a00(s__s_not_found__Rebuilding____008477fc,&DAT_00dc3b04);
        FUN_004ebba0(DAT_00ab27b4,DAT_00877690);
        FUN_00429a00(s_Done__008477f4);
      }
      FUN_004e0b60(&DAT_00dc3b04);
      FUN_004d90b0();
      FUN_004d8f50();
      FUN_004ddcd0(s_palette_act_0083b438,&DAT_00a43018);
      iVar2 = 0;
      if (0 < DAT_00877690) {
        iVar3 = 0;
        do {
          iVar2 = iVar2 + 1;
          *(undefined4 *)(iVar3 + 0x466 + (int)DAT_00ab27b4) = DAT_00bd1bac;
          iVar3 = iVar3 + 0x4b2;
        } while (iVar2 < DAT_00877690);
      }
      pvVar5 = operator_new(0x5c);
      local_4._0_1_ = 2;
      if (pvVar5 == (void *)0x0) {
        DAT_00a983f0 = 0;
      }
      else {
        DAT_00a983f0 = FUN_004e1fd0();
      }
      local_4._0_1_ = 1;
      DAT_00a98404 = 0;
      FUN_004dcb20(0,1);
      FUN_004d7db0();
      FUN_007a630a(local_24c,s__s_tiles_bmp_008477e4,&DAT_00dc1970);
      cVar1 = FUN_00427770(local_24c);
      if (cVar1 != '\0') {
        pvVar5 = operator_new(0x7e);
        local_4._0_1_ = 3;
        if (pvVar5 == (void *)0x0) {
          DAT_00a983f4 = (int *)0x0;
        }
        else {
          DAT_00a983f4 = (int *)FUN_00414c80(local_24c);
        }
        iVar2 = *DAT_00a983f4;
        local_4._0_1_ = 1;
        iVar3 = FUN_00415bd0();
        (**(code **)(iVar2 + 0x34))((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5);
        DAT_00a983f8 = FUN_00413d60(s_tile_bmp_008477d8);
        FUN_007a630a(local_24c,s__s_index_tbl_008477c8,&DAT_00dc1970);
        pvVar5 = operator_new(0x13e);
        local_4._0_1_ = 4;
        if (pvVar5 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)FUN_00426d70(local_24c,&DAT_0082eeb4);
        }
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_004271a0(&DAT_008f00d4,0x149100);
        if (puVar6 != (undefined4 *)0x0) {
          (**(code **)*puVar6)(1);
        }
      }
      local_4 = 0xffffffff;
      FUN_00426f80();
      ExceptionList = pvStack_c;
      return 1;
    }
  } while( true );
}


