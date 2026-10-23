// FUN_00584400 @ 584400 size=656

undefined4 FUN_00584400(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_EDX;
  undefined4 uVar6;
  undefined4 extraout_EDX_00;
  uint uVar7;
  char cStack_4f;
  byte bStack_4e;
  byte bStack_4d;
  int *local_4c;
  void *pvStack_48;
  undefined2 local_44;
  int local_42;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined4 local_3a;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c8feb;
  pvStack_c = ExceptionList;
  local_44 = 0x4d42;
  local_3e = 0;
  local_42 = DAT_00bd1bac[2] * DAT_00bd1bac[1] * 3 + 0x6e;
  local_3c = 0;
  local_3a = 0x36;
  local_34 = 0x28;
  local_30 = DAT_00bd1bac[1];
  local_2c = DAT_00bd1bac[2];
  local_1c = 0xb12;
  local_18 = 0xb12;
  local_28 = 1;
  local_26 = 0x18;
  local_24 = 0;
  local_20 = 0;
  local_14 = 0;
  local_10 = 0;
  if (DAT_00dc3a00 == '\0') {
    DAT_00bd19a4 = 0;
    ExceptionList = &pvStack_c;
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_007a630a(&DAT_00bd19a4,&DAT_008577f0,&DAT_00dc3a00);
  }
  local_4c = DAT_00bd1bac;
  iVar1 = (**(code **)(*DAT_00bd1bac + 8))();
  iVar4 = 0;
  while( true ) {
    FUN_007a630a(&DAT_00bd1540,s__sScreenSave_d_bmp_008577dc,&DAT_00bd19a4,iVar4);
    iVar2 = FUN_007a6615(&DAT_00bd1540,&DAT_0082eeb4);
    if (iVar2 == 0) break;
    FUN_007a6429(iVar2);
    iVar4 = iVar4 + 1;
  }
  pvStack_48 = operator_new(0x13e);
  uStack_4 = 0;
  if (pvStack_48 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_00426d70(&DAT_00bd1540,&DAT_0082ef98);
  }
  uStack_4 = 0xffffffff;
  FUN_004272b0(&local_44,0xe);
  FUN_004272b0(&local_34,0x28);
  uVar7 = DAT_00bd1bac[2] - 1;
  piVar5 = DAT_00bd1bac;
  uVar6 = extraout_EDX;
  if (-1 < (int)uVar7) {
    do {
      iVar2 = 0;
      iVar4 = piVar5[1];
      if (0 < iVar4) {
        do {
          iVar4 = iVar4 * uVar7 + iVar2;
          if (DAT_00857744 == 0) {
            cStack_4f = *(char *)(iVar1 + iVar4 * 2) << 3;
            bStack_4e = (byte)((int)(uint)*(ushort *)(iVar1 + iVar4 * 2) >> 3) & 0xfc;
            bStack_4d = (byte)((ushort)*(undefined2 *)(iVar1 + iVar4 * 2) >> 8) & 0xf8;
            FUN_004272b0(&cStack_4f,1);
            FUN_004272b0(&bStack_4e,1);
          }
          else {
            if (DAT_00857744 != 1) {
              (**(code **)(*local_4c + 0xc))();
              if (puVar3 != (undefined4 *)0x0) {
                (**(code **)*puVar3)(1);
              }
              ExceptionList = pvStack_c;
              return 0;
            }
            cStack_4f = *(char *)(iVar1 + iVar4 * 2) << 3;
            bStack_4e = (byte)(CONCAT22((short)((uint)uVar6 >> 0x10),
                                        *(undefined2 *)(iVar1 + iVar4 * 2)) >> 2) & 0xf8;
            bStack_4d = (byte)(CONCAT22((short)((uint)iVar4 >> 0x10),
                                        *(undefined2 *)(iVar1 + iVar4 * 2)) >> 7) & 0xf8;
            FUN_004272b0(&cStack_4f,1);
            FUN_004272b0(&bStack_4e,1);
          }
          FUN_004272b0(&bStack_4d,1);
          iVar2 = iVar2 + 1;
          iVar4 = DAT_00bd1bac[1];
          piVar5 = DAT_00bd1bac;
          uVar6 = extraout_EDX_00;
        } while (iVar2 < iVar4);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  (**(code **)(*local_4c + 0xc))();
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  ExceptionList = pvStack_c;
  return 1;
}


