// FUN_006d9cc0 @ 6d9cc0 size=1245

undefined4 * __thiscall
FUN_006d9cc0(undefined4 *param_1,undefined4 param_2,char *param_3,int param_4,int param_5,
            undefined4 param_6,uint param_7)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char local_90c [256];
  char local_80c [2048];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d9735;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_LAB_007e3b70;
  local_4 = 0;
  FUN_00433f00();
  param_1[0x10] = param_6;
  local_4._0_1_ = 1;
  param_1[0x11] = param_5 + -0x14;
  *param_1 = &PTR_FUN_007f7ba0;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f7b54;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f7b50;
  if (param_7 == 0xffffffff) {
    param_7 = FUN_00584270(0xd0,0xe8,0xf8);
    param_7 = param_7 & 0xffff;
  }
  *(short *)((int)param_1 + 0x5e) = (short)param_7;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x14] = 0;
  if (param_4 != 0) {
    pvVar3 = operator_new(0x7e);
    local_4._0_1_ = 2;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00414c80(param_4);
    }
    local_4._0_1_ = 1;
    param_1[0x14] = uVar4;
  }
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  param_1[0x13] = param_2;
  local_80c[0] = '\0';
  iVar5 = 0;
  do {
    cVar2 = *param_3;
    param_3 = param_3 + 1;
    switch(cVar2) {
    case '\0':
      local_90c[iVar5] = '\0';
      iVar5 = FUN_004129c4(local_90c);
      iVar6 = FUN_004129c4(local_80c);
      if ((int)param_1[0x11] <= iVar5 + iVar6) {
        uVar8 = 0xffffffff;
        pcVar10 = local_80c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        pcVar7 = operator_new(~uVar8);
        uVar8 = 0xffffffff;
        pcVar10 = local_80c;
        do {
          pcVar11 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar10 = pcVar11 + -uVar8;
        pcVar11 = pcVar7;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        local_80c[0] = '\0';
        FUN_00427b00(pcVar7);
        FUN_006da1e0(&DAT_0086d2c4,local_80c);
      }
      uVar8 = 0xffffffff;
      pcVar10 = local_90c;
      do {
        pcVar7 = pcVar10;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar7 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar7;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar5 = -1;
      pcVar10 = local_80c;
      do {
        pcVar11 = pcVar10;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar10 = pcVar7 + -uVar8;
      pcVar7 = pcVar11 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar7 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar7 = pcVar7 + 1;
      }
      if (local_80c[0] != '\0') {
        uVar8 = 0xffffffff;
        pcVar10 = local_80c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        pcVar7 = operator_new(~uVar8);
        uVar8 = 0xffffffff;
        pcVar10 = local_80c;
        do {
          pcVar11 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar10 = pcVar11 + -uVar8;
        pcVar11 = pcVar7;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        iVar5 = param_1[2];
        local_80c[0] = '\0';
        pvVar3 = operator_new(0xe);
        local_4._0_1_ = 3;
        if (pvVar3 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_005926c0(pcVar7,iVar5,0);
        }
        iVar6 = param_1[3];
        local_4._0_1_ = 1;
        param_1[2] = uVar4;
        param_1[3] = iVar6 + 1;
        if (iVar6 != 0) {
          *(undefined4 *)(iVar5 + 8) = uVar4;
          iVar5 = 0;
          break;
        }
        param_1[1] = uVar4;
      }
      iVar5 = 0;
      break;
    default:
      local_90c[iVar5] = cVar2;
      iVar5 = iVar5 + 1;
      break;
    case '\n':
    case '\r':
      local_90c[iVar5] = '\0';
      iVar5 = FUN_004129c4(local_90c);
      iVar6 = FUN_004129c4(local_80c);
      if (iVar5 + iVar6 < (int)param_1[0x11]) {
        uVar8 = 0xffffffff;
        pcVar10 = local_90c;
        do {
          pcVar7 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar7 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar7;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar5 = -1;
        pcVar10 = local_80c;
        do {
          pcVar11 = pcVar10;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        pcVar10 = pcVar7 + -uVar8;
        pcVar7 = pcVar11 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar7 = pcVar7 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar10 = local_80c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        pcVar7 = operator_new(~uVar8);
        uVar8 = 0xffffffff;
        pcVar10 = local_80c;
        do {
          pcVar11 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar10 = pcVar11 + -uVar8;
        pcVar11 = pcVar7;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        local_80c[0] = '\0';
        FUN_00427b00(pcVar7);
        iVar5 = 0;
      }
      else {
        uVar8 = 0xffffffff;
        pcVar10 = local_80c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        pcVar7 = operator_new(~uVar8);
        uVar8 = 0xffffffff;
        pcVar10 = local_80c;
        do {
          pcVar11 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar10 = pcVar11 + -uVar8;
        pcVar11 = pcVar7;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        local_80c[0] = '\0';
        FUN_00427b00(pcVar7);
        FUN_006da1e0(&DAT_0086d2c4,local_80c);
        uVar8 = 0xffffffff;
        iVar5 = 0;
        pcVar10 = local_90c;
        do {
          pcVar7 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar7 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar7;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar10 = local_80c;
        do {
          pcVar11 = pcVar10;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        pcVar10 = pcVar7 + -uVar8;
        pcVar7 = pcVar11 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      break;
    case ' ':
      local_90c[iVar5] = ' ';
      local_90c[iVar5 + 1] = '\0';
      iVar5 = FUN_004129c4(local_90c);
      iVar6 = FUN_004129c4(local_80c);
      if ((int)param_1[0x11] <= iVar5 + iVar6) {
        uVar8 = 0xffffffff;
        pcVar10 = local_80c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        pcVar7 = operator_new(~uVar8);
        uVar8 = 0xffffffff;
        pcVar10 = local_80c;
        do {
          pcVar11 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar10 = pcVar11 + -uVar8;
        pcVar11 = pcVar7;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        local_80c[0] = '\0';
        FUN_00427b00(pcVar7);
        FUN_006da1e0(&DAT_0086d2c4,local_80c);
      }
      uVar8 = 0xffffffff;
      iVar5 = 0;
      pcVar10 = local_90c;
      do {
        pcVar7 = pcVar10;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar7 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar7;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar6 = -1;
      pcVar10 = local_80c;
      do {
        pcVar11 = pcVar10;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar10 = pcVar7 + -uVar8;
      pcVar7 = pcVar11 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar7 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    if (cVar2 == '\0') {
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}


