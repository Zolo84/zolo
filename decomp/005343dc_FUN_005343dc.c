// FUN_005343dc @ 5343dc size=1256

undefined4 FUN_005343dc(void)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_2014;
  char local_2010 [8188];
  undefined4 uStack_14;
  char *local_10;
  int local_c;
  char *local_8;
  
  local_8 = (char *)0x5343e9;
  FUN_007a69e0();
  if (*(char *)(extraout_ECX + 0x210) == '\x01') {
    *(undefined1 *)(extraout_ECX + 0x210) = 0;
    uVar4 = *(undefined4 *)(extraout_ECX + 4);
  }
  else {
    while( true ) {
      local_8 = *(char **)(extraout_ECX + 8);
      local_c = 0x53442c;
      local_8 = (char *)FUN_007a81e5();
      uVar4 = extraout_ECX_00;
      local_c = (int)local_8;
      if (local_8 == (char *)0xffffffff) break;
      local_c = 0x534442;
      iVar3 = FUN_007a91fd();
      uVar4 = extraout_ECX_01;
      if (iVar3 == 0) break;
      if ((char)local_c == '\n') {
        *(int *)(extraout_ECX + 0x212) = *(int *)(extraout_ECX + 0x212) + 1;
      }
    }
    if (local_c == -1) {
      uVar4 = 0;
    }
    else {
      *(char *)(extraout_ECX + 0x10) = (char)local_c;
      local_10 = (char *)0x1;
      *(undefined1 *)(extraout_ECX + 0x11) = 0;
      local_8 = (char *)CONCAT31((int3)((uint)uVar4 >> 8),(char)local_c);
      local_c = 0x5344bd;
      uVar4 = FUN_00534081();
      *(undefined4 *)(extraout_ECX + 0xc) = uVar4;
      if (*(int *)(extraout_ECX + 0xc) == 9) {
        do {
          local_8 = *(char **)(extraout_ECX + 8);
          local_c = 0x5344e1;
          local_c = FUN_007a81e5();
          if (local_c == -1) break;
        } while ((char)local_c != '\n');
        if ((char)local_c == '\n') {
          *(int *)(extraout_ECX + 0x212) = *(int *)(extraout_ECX + 0x212) + 1;
        }
        if (local_c == -1) {
          uVar4 = 0;
        }
        else {
          local_8 = (char *)0x534534;
          uVar4 = FUN_005343dc();
        }
      }
      else if (*(int *)(extraout_ECX + 0xc) == 10) {
        local_2014 = 0;
        local_c = 0;
        while ((local_c != -1 && (local_c != 10))) {
          local_8 = *(char **)(extraout_ECX + 8);
          local_c = 0x534575;
          local_c = FUN_007a81e5();
          if ((local_c != -1) && (local_c != 10)) {
            local_2010[local_2014] = (char)local_c;
            local_2014 = local_2014 + 1;
          }
        }
        local_2010[local_2014] = '\0';
        if (local_c == -1) {
          uVar4 = 0;
        }
        else if (local_2014 < 2) {
          uVar4 = 0;
        }
        else {
          *(int *)(extraout_ECX + 0x212) = *(int *)(extraout_ECX + 0x212) + 1;
          if (local_2010[0] == 'I') {
            for (; (local_c < local_2014 && (local_2010[local_c] != ' ')); local_c = local_c + 1) {
            }
            if (local_2014 <= local_c) {
              return 0;
            }
            local_8 = local_2010 + local_c;
            local_c = 0x534648;
            uVar2 = FUN_006cd140();
            *(undefined1 *)(extraout_ECX + 0x211) = uVar2;
          }
          else if ((local_2010[0] == 'E') || (local_2010[1] == 'L')) {
            *(char *)(extraout_ECX + 0x211) = '\x01' - (*(char *)(extraout_ECX + 0x211) != '\0');
          }
          if (*(char *)(extraout_ECX + 0x211) != '\0') {
            while( true ) {
              local_8 = *(char **)(extraout_ECX + 8);
              local_c = 0x5346ae;
              local_c = FUN_007a81e5();
              if ((local_c == -1) || ((char)local_c == -0x5c)) break;
              if ((char)local_c == '\n') {
                *(int *)(extraout_ECX + 0x212) = *(int *)(extraout_ECX + 0x212) + 1;
              }
            }
            if (local_c == -1) {
              return 0;
            }
          }
          local_8 = (char *)0x534701;
          uVar4 = FUN_005343dc();
        }
      }
      else if (*(int *)(extraout_ECX + 0xc) == 2) {
        local_10 = (char *)((int)local_10 + -1);
        bVar1 = false;
        while( true ) {
          local_8 = *(char **)(extraout_ECX + 8);
          local_c = 0x534735;
          iVar3 = FUN_007a81e5();
          if ((iVar3 == -1) || (local_c._0_1_ = (char)iVar3, (char)local_c == '\"')) break;
          if ((int)local_10 < 0x1ff) {
            *(char *)(extraout_ECX + (int)local_10 + 0x10) = (char)local_c;
            local_10 = (char *)((int)local_10 + 1);
          }
          else {
            bVar1 = true;
          }
        }
        *(undefined1 *)(extraout_ECX + (int)local_10 + 0x10) = 0;
        *(undefined4 *)(extraout_ECX + 0xc) = 0x527;
        if (bVar1) {
          local_8 = (char *)(extraout_ECX + 0x10);
          local_c = 0x1ff;
          local_10 = s_ERROR___Too_long_text_detected___00850b60;
          uStack_14 = 0x5347b8;
          FUN_00429a00();
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        uVar4 = 1;
      }
      else if (*(int *)(extraout_ECX + 0xc) == 0) {
        while( true ) {
          local_8 = *(char **)(extraout_ECX + 8);
          local_c = 0x5347f9;
          uVar5 = FUN_007a81e5();
          local_8 = (char *)uVar5;
          if (local_8 == (char *)0xffffffff) break;
          local_c = 0x53480f;
          uVar6 = FUN_007a91fd();
          uVar5 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),local_c);
          if ((int)uVar6 != 0) break;
          local_8 = (char *)CONCAT31((int3)((uint)extraout_ECX_02 >> 8),(char)local_c);
          local_c = 0x534825;
          uVar6 = FUN_00534081();
          uVar5 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),local_c);
          if ((int)uVar6 != 0) break;
          *(char *)(extraout_ECX + (int)local_10 + 0x10) = (char)local_c;
          local_10 = (char *)((int)local_10 + 1);
        }
        local_c._0_1_ = (char)uVar5;
        local_8 = (char *)CONCAT31((int3)((ulonglong)uVar5 >> 0x28),(char)local_c);
        local_c = 0x534852;
        iVar3 = FUN_00534081();
        if (iVar3 != 0) {
          local_8 = *(char **)(extraout_ECX + 8);
          local_10 = (char *)0x534869;
          FUN_007a811d();
        }
        if ((char)local_c == '\n') {
          *(int *)(extraout_ECX + 0x212) = *(int *)(extraout_ECX + 0x212) + 1;
        }
        *(undefined1 *)(extraout_ECX + (int)local_10 + 0x10) = 0;
        local_8 = (char *)0x5348a8;
        uVar4 = FUN_005342d1();
        *(undefined4 *)(extraout_ECX + 0xc) = uVar4;
        if (local_c == -1) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


