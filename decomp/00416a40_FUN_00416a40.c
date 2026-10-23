// FUN_00416a40 @ 416a40 size=1054

undefined4 __thiscall FUN_00416a40(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  int local_338;
  int *local_330;
  int *local_32c;
  int local_328;
  int local_320;
  int local_31c;
  undefined1 local_30c [256];
  undefined1 local_20c [256];
  undefined1 local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9cfb;
  pvStack_c = ExceptionList;
  local_31c = 0;
  local_338 = 0;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)param_1 + 0x8e) = 0x19;
  local_320 = 0;
  FUN_00415ef0(&DAT_00a98430);
  FUN_00415d30(DAT_00bd1bac);
  *(undefined1 *)((int)param_1 + 0x92) = 0;
  local_330 = (int *)0x0;
  local_32c = (int *)0x0;
  local_328 = 0;
  local_4 = 0;
  FUN_00535490();
  if (param_2[1] != 0x1a6) {
    FUN_005349b0(s_Sprite_keyword_not_found___0082f20c);
    goto joined_r0x00416e2e;
  }
  do {
    while (iVar2 = FUN_00535490(), iVar2 == 1) {
      piVar5 = local_330;
      piVar3 = local_32c;
      if (DAT_00dc4b5e != '\0') {
        iVar2 = param_2[1];
        for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
          cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar5,iVar2);
          if (cVar1 != '\0') {
            if (piVar5 != (int *)0x0) {
              FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216
                           ,*(int *)(*param_2 + 0x212) + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            break;
          }
        }
        iVar2 = param_2[1];
        piVar3 = operator_new(0xe);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          *piVar3 = iVar2;
          piVar3[1] = (int)local_32c;
          piVar3[2] = 0;
          *(undefined1 *)(piVar3 + 3) = 0;
        }
        iVar2 = local_328 + 1;
        bVar6 = local_328 != 0;
        piVar5 = piVar3;
        local_328 = iVar2;
        if (bVar6) {
          local_32c[2] = (int)piVar3;
          piVar5 = local_330;
        }
      }
      local_32c = piVar3;
      local_330 = piVar5;
      switch(param_2[1]) {
      case 0x1a7:
        FUN_00429d50(param_2 + 0x104,local_20c);
        break;
      case 0x1a8:
        if (param_2[0x103] == 3) {
          FUN_00424e00(param_2);
        }
        else {
          FUN_005349b0(s_No_left_curly_0082f278);
        }
        break;
      case 0x1a9:
        FUN_007a7b3c(param_2 + 0x104);
        break;
      case 0x1aa:
        uVar4 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)((int)param_1 + 0x8e) = uVar4;
        break;
      default:
        FUN_005349b0(s_SpriteWorld___Unexpected_field_0082f258);
        break;
      case 0x1b0:
        if (param_2[0x103] == 0x111) {
          FUN_00415ed0(0,0,*(undefined4 *)(DAT_00bd1bac + 4),*(undefined4 *)(DAT_00bd1bac + 8));
          FUN_00415d30(DAT_00a98460);
          *(undefined1 *)((int)param_1 + 0x92) = 1;
        }
        break;
      case 0x1b2:
        FUN_00429d50(param_2 + 0x104,local_10c);
        local_320 = FUN_00413d60(local_10c);
        break;
      case 0x212:
        local_31c = FUN_007a7b3c(param_2 + 0x104);
        break;
      case 0x213:
        local_338 = FUN_007a7b3c(param_2 + 0x104);
      }
    }
    piVar5 = (int *)FUN_00534391();
  } while (*piVar5 != 4);
  FUN_005343dc();
  if (DAT_00dc3a00 == '\0') {
LAB_00416d66:
    FUN_007a630a(local_30c,s_gfx_map_units_bmp__s_0082f228,local_20c);
  }
  else {
    FUN_007a630a(local_30c,s__s_gfx_map_units_bmp__s_0082f240,&DAT_00dc3a00,local_20c);
    iVar2 = FUN_007a6615(local_30c,&DAT_0082eeb4);
    if (iVar2 == 0) goto LAB_00416d66;
    FUN_007a6429(iVar2);
  }
  (**(code **)(*param_1 + 0x2c))(local_30c);
  (**(code **)(*param_1 + 0x34))(local_31c);
  FUN_00415a20(0,0);
  if (local_320 != 0) {
    FUN_00415f20(local_320);
  }
  FUN_0040b1f0(local_31c);
  if (local_31c == 1) {
    if (local_338 == 0) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x62) + 0x238) = 3;
    }
    else {
      iVar2 = *(int *)((int)param_1 + 0x62);
      if (*(int *)(iVar2 + 0x34) != 0) {
        *(undefined4 *)(iVar2 + 0x238) = 4;
        if (0x1f < local_338) {
          local_338 = 0;
          *(undefined4 *)(iVar2 + 0x238) = 1;
        }
        *(int *)(iVar2 + 0x30) = local_338;
      }
    }
  }
  else if ((local_31c == 2) && (local_338 == 0)) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x62) + 0x238) = 5;
  }
joined_r0x00416e2e:
  while (local_330 != (int *)0x0) {
    piVar5 = (int *)local_330[2];
    FUN_00796cd8(local_330);
    local_330 = piVar5;
  }
  ExceptionList = pvStack_c;
  return 0;
}


