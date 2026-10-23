// FUN_0043ade0 @ 43ade0 size=2416

void __thiscall
FUN_0043ade0(int *param_1,char *param_2,char *param_3,undefined4 *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int unaff_EBX;
  int unaff_ESI;
  char *pcVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined4 *unaff_retaddr;
  undefined4 uVar16;
  char *local_24;
  int local_20;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bac06;
  pvStack_c = ExceptionList;
  uVar11 = 0xffffffff;
  pcVar13 = param_2;
  do {
    pcVar14 = pcVar13;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar14 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar14;
  } while (cVar1 != '\0');
  uVar11 = ~uVar11;
  pcVar13 = pcVar14 + -uVar11;
  pcVar14 = (char *)((int)param_1 + 0xaa);
  ExceptionList = &pvStack_c;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar14 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar14 = pcVar14 + 1;
  }
  puVar15 = (undefined4 *)&DAT_00893838;
  if (0xe < *(int *)(param_3 + 0x10)) {
    puVar15 = &DAT_00893868;
  }
  local_24 = (char *)0x0;
  iVar2 = FUN_00415bd0();
  iVar3 = iVar2 * 2;
  puVar8 = param_4;
  if (param_4 == (undefined4 *)0x0) {
    iVar4 = FUN_004129c4(param_2);
    iVar5 = FUN_00415bd0();
    iVar4 = iVar4 / iVar5;
    iVar5 = FUN_004129c4(param_2);
    iVar6 = FUN_00415bd0();
    param_4 = (undefined4 *)FUN_004129c4(param_5);
    iVar7 = FUN_00415bd0();
    if (iVar5 / iVar6 + 1 < (int)param_4 / iVar7 + 1) {
      param_4 = (undefined4 *)FUN_004129c4(param_5);
      iVar4 = FUN_00415bd0();
      iVar4 = (int)param_4 / iVar4;
    }
    iVar5 = FUN_00415bd0();
    puVar8 = (undefined4 *)(iVar5 * (iVar4 + 1) + iVar3);
  }
  if ((int)puVar8 < 0x1f9) {
    if ((int)puVar8 < 0x191) {
      if ((int)puVar8 < 0x141) {
        if ((int)puVar8 < 0xe5) {
          if ((int)puVar8 < 0xc1) {
            if ((int)puVar8 < 0x9d) {
              if ((int)puVar8 < 0x91) {
                if ((int)puVar8 < 0x79) {
                  if ((int)puVar8 < 0x65) {
                    if ((int)puVar8 < 0x57) {
                      if ((int)puVar8 < 0x41) {
                        if ((int)puVar8 < 0x29) {
                          iVar5 = (((int)puVar8 < 0x1d) - 1 & 0xc) + 0x1c;
                        }
                        else {
                          iVar5 = 0x40;
                        }
                      }
                      else {
                        iVar5 = 0x56;
                      }
                    }
                    else {
                      iVar5 = 100;
                    }
                  }
                  else {
                    iVar5 = 0x78;
                  }
                }
                else {
                  iVar5 = 0x90;
                }
                switch(iVar5) {
                case 0x1c:
                  local_24 = s_gfx_interface_genericbutton28_bm_0083bd50;
                  break;
                case 0x28:
                  local_24 = s_gfx_interface_genericbutton40_bm_0083bd74;
                  break;
                case 0x40:
                  local_24 = s_gfx_interface_genericbutton64_bm_0083bd98;
                  break;
                case 0x56:
                  local_24 = s_gfx_interface_genericbutton86_bm_0083bdbc;
                  break;
                case 100:
                  local_24 = s_gfx_interface_genericbutton100_b_0083bde0;
                  break;
                case 0x78:
                  local_24 = s_gfx_interface_genericbutton120_b_0083be04;
                  break;
                case 0x90:
                  local_24 = s_gfx_interface_genericbutton144_b_0083be28;
                }
              }
              else {
                iVar5 = 0x9c;
                local_24 = s_gfx_interface_genericbutton156_b_0083be4c;
              }
              goto switchD_0043b083_caseD_1e;
            }
            iVar5 = 0xc0;
          }
          else {
            iVar5 = 0xe4;
          }
        }
        else {
          iVar5 = 0x140;
        }
        if (iVar5 == 0xc0) {
          local_24 = s_gfx_interface_genericbutton192_b_0083bd08;
        }
        else if (iVar5 == 0xe4) {
          local_24 = s_gfx_interface_genericbutton228_b_0083bd2c;
        }
        else if (iVar5 == 0x140) {
          local_24 = s_gfx_interface_genericbutton320_b_0083be70;
        }
      }
      else {
        iVar5 = 400;
        local_24 = s_gfx_interface_genericbutton400_b_0083be94;
      }
      goto switchD_0043b083_caseD_1e;
    }
    iVar5 = 0x1f8;
  }
  else {
    iVar5 = 600;
  }
  if (iVar5 == 0x1f8) {
    local_24 = s_gfx_interface_genericbutton504_b_0083bce4;
  }
  else if (iVar5 == 600) {
    local_24 = s_gfx_interface_genericbutton600_b_0083beb8;
  }
switchD_0043b083_caseD_1e:
  if (local_24 == (char *)0x0) {
    FUN_00415570();
    if (iVar5 == 0) {
      if (param_5 == 0) {
        iVar2 = FUN_004129c4(param_2);
        iVar5 = FUN_00415bd0();
        local_20 = iVar2 / iVar5 + 1;
      }
      else {
        iVar2 = FUN_004129c4(param_2);
        iVar5 = FUN_00415bd0();
        local_20 = iVar2 / iVar5 + 1;
        iVar2 = FUN_004129c4(param_2);
        iVar5 = FUN_00415bd0();
        iVar6 = FUN_004129c4(param_5);
        iVar7 = FUN_00415bd0();
        if (iVar2 / iVar5 + 1 < iVar6 / iVar7 + 1) {
          iVar2 = FUN_004129c4(param_5);
          iVar5 = FUN_00415bd0();
          local_20 = iVar2 / iVar5 + 1;
        }
      }
      iVar2 = FUN_00415bd0();
      param_4 = (undefined4 *)(iVar2 * local_20 + iVar3);
      local_10 = operator_new(0x362);
      local_4 = 0;
      if (local_10 == (undefined4 *)0x0) {
        local_4 = 0xffffffff;
        *(undefined4 *)((int)param_1 + 0x62) = 0;
      }
      else {
        uVar9 = FUN_00415be0();
        FUN_004010a0((int)param_4 * 4,uVar9,0x10,1);
        *(undefined4 *)((int)local_10 + 0x35e) = 1;
        *local_10 = &PTR_FUN_007e36a4;
        local_10[10] = &PTR_LAB_007e36a0;
        local_4 = 0xffffffff;
        *(undefined4 **)((int)param_1 + 0x62) = local_10;
      }
    }
    else {
      param_4 = operator_new(0x362);
      local_4 = 1;
      if (param_4 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar9 = FUN_00415be0();
        FUN_004010a0(iVar5 * 4,uVar9,0x10,1);
        *(undefined4 *)((int)param_4 + 0x35e) = 1;
        *param_4 = &PTR_FUN_007e36a4;
        param_4[10] = &PTR_LAB_007e36a0;
        puVar8 = param_4;
      }
      *(undefined4 **)((int)param_1 + 0x62) = puVar8;
      local_4 = 0xffffffff;
      iVar6 = FUN_00415bd0();
      iVar6 = (iVar5 + iVar2 * -2) / iVar6;
      iVar2 = FUN_00415bd0();
      for (iVar2 = iVar2 * iVar6; iVar2 + iVar3 < iVar5; iVar2 = iVar2 * iVar6) {
        iVar6 = iVar6 + 1;
        iVar2 = FUN_00415bd0();
      }
    }
    FUN_00407da0();
    FUN_00433870();
  }
  else {
    (**(code **)(*param_1 + 0x2c))(local_24);
    FUN_00415d40();
  }
  (**(code **)(*param_1 + 0x34))(4);
  iVar2 = FUN_00415bd0();
  iVar3 = 0;
  do {
    puVar8 = puVar15;
    if (unaff_EBX == 0) {
      FUN_00415d30(*(undefined4 *)((int)param_1 + 0x62));
      (**(code **)(*(int *)puVar15[iVar3 + 4] + 0x18))(iVar3 * iVar2,0);
      (**(code **)(*(int *)puVar15[iVar3 + 4] + 0x10))(0);
      FUN_00415d30(*(undefined4 *)((int)param_1 + 0x62));
      iVar5 = 0;
      puVar8 = (undefined4 *)0x0;
      if (0 < unaff_ESI) {
        do {
          iVar6 = *(int *)puVar15[iVar3];
          iVar7 = FUN_00415bd0(0);
          iVar4 = FUN_00415bd0();
          (**(code **)(iVar6 + 0x18))(local_24 + iVar4 + iVar7 * iVar5);
          (**(code **)(**(int **)(iVar3 * 4) + 0x10))(0);
          iVar5 = iVar5 + 1;
          puVar15 = puVar8;
        } while (iVar5 < unaff_ESI);
      }
      FUN_00415d30(*(undefined4 *)((int)param_1 + 0x62));
      iVar5 = *(int *)puVar15[iVar3 + 8];
      iVar6 = FUN_00415bd0(0);
      iVar7 = FUN_00415bd0();
      (**(code **)(iVar5 + 0x18))(local_24 + iVar7 + iVar6 * unaff_ESI);
      (**(code **)(**(int **)(iVar3 * 4 + 0x20) + 0x10))(0);
      param_3 = param_2;
    }
    puVar15 = unaff_retaddr;
    switch(iVar3) {
    case 0:
      iVar5 = *(int *)(param_3 + 0x10);
      uVar9 = *(undefined4 *)((int)param_1 + 0x62);
      uVar16 = 0;
      uVar10 = FUN_00584270(0,0,0);
      iVar6 = FUN_00415be0(uVar9,uVar10,uVar16);
      iVar7 = iVar6 / 2 - iVar5 / 2;
      iVar5 = FUN_004129c4(unaff_retaddr);
      iVar6 = FUN_00415bd0(iVar7);
      iVar5 = iVar6 / 2 - iVar5 / 2;
      break;
    case 1:
      uVar9 = *(undefined4 *)((int)param_1 + 0x62);
      iVar5 = *(int *)(param_3 + 0x10);
      uVar16 = 0;
      uVar10 = FUN_00584270(0x7e,0x7f,0x7f);
      iVar6 = FUN_00415be0(uVar9,uVar10,uVar16);
      iVar7 = iVar6 / 2 - iVar5 / 2;
      iVar5 = FUN_004129c4(unaff_retaddr);
      iVar6 = FUN_00415bd0(iVar7);
      iVar5 = (iVar6 / 2 - iVar5 / 2) + iVar2;
      break;
    case 2:
      if (param_4 == (undefined4 *)0x0) {
        iVar5 = *(int *)(param_3 + 0x10);
        uVar9 = *(undefined4 *)((int)param_1 + 0x62);
        uVar16 = 0;
        uVar10 = FUN_00584270(0x7f,0x7f,0x7f);
        iVar6 = FUN_00415be0(uVar9,uVar10,uVar16);
        iVar7 = iVar6 / 2 - iVar5 / 2;
        iVar5 = FUN_00415bd0(iVar7);
        iVar6 = FUN_004129c4(unaff_retaddr);
        iVar5 = (iVar5 / 2 + iVar2 * 2) - iVar6 / 2;
      }
      else {
        uVar9 = *(undefined4 *)((int)param_1 + 0x62);
        iVar5 = *(int *)(param_3 + 0x10);
        uVar16 = 0;
        uVar10 = FUN_00584270(0x7f,0x7f,0x7f);
        iVar6 = FUN_00415be0(uVar9,uVar10,uVar16);
        iVar7 = iVar6 / 2 - iVar5 / 2;
        iVar5 = FUN_00415bd0(iVar7);
        iVar6 = FUN_004129c4(param_4);
        iVar5 = (iVar5 / 2 + iVar2 * 2) - iVar6 / 2;
        puVar15 = param_4;
      }
      break;
    case 3:
      iVar5 = *(int *)(param_3 + 0x10);
      uVar9 = *(undefined4 *)((int)param_1 + 0x62);
      uVar16 = 0;
      uVar10 = FUN_00584270(100,100,100);
      iVar6 = FUN_00415be0(uVar9,uVar10,uVar16);
      iVar7 = iVar6 / 2 - iVar5 / 2;
      iVar5 = FUN_00415bd0(iVar7);
      iVar6 = FUN_004129c4(unaff_retaddr);
      iVar5 = (iVar5 / 2 + iVar2 * 3) - iVar6 / 2;
      break;
    default:
      goto switchD_0043b4cd_default;
    }
    FUN_004133fd(puVar15,iVar5,iVar7,uVar9,uVar10,uVar16);
    param_3 = param_2;
switchD_0043b4cd_default:
    iVar3 = iVar3 + 1;
    puVar15 = puVar8;
    if (3 < iVar3) {
      *(undefined1 *)(*(int *)((int)param_1 + 0x62) + 0x252) = 1;
      ExceptionList = local_10;
      return;
    }
  } while( true );
}


