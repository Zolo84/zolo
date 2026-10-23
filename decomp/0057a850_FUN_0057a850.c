// FUN_0057a850 @ 57a850 size=662

undefined4 __fastcall FUN_0057a850(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)(param_1 + 0x26);
  puVar5 = puVar1;
  for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x22) = 0;
    *puVar1 = 0x6c;
    *(undefined4 *)(param_1 + 0x2a) = 1;
    *(undefined4 *)(param_1 + 0x8e) = 0x200;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x1a) + 0x18))
                      (*(int **)(param_1 + 0x1a),puVar1,param_1 + 0x1e,0);
    if (iVar4 != 0) {
      FUN_00405ad0(s_Failed_to_create_primary_surface_00857150);
      FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0x174,iVar4);
      return 0;
    }
  }
  else {
    puVar5 = (undefined4 *)(param_1 + 0x92);
    puVar6 = puVar5;
    for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0x2a) = 1;
    *puVar5 = 0x6c;
    *(undefined4 *)(param_1 + 0x96) = 0x21;
    *(undefined4 *)(param_1 + 0xfa) = 0x218;
    *puVar1 = 0x6c;
    *(undefined4 *)(param_1 + 0x8e) = 0x14;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x1a) + 0x18))
                      (*(int **)(param_1 + 0x1a),puVar5,(undefined4 *)(param_1 + 0x22),0);
    if (iVar4 != 0) {
      FUN_007a630a(&stack0xfffffef0,s_Failed_to_create_primary_surface_00857124,iVar4);
      FUN_00429a50(&stack0xfffffef0);
      FUN_00405ad0(s_Failed_to_create_primary_surface_00857150);
      FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0x18b,iVar4);
      return 0;
    }
    piVar2 = *(int **)(param_1 + 0x22);
    iVar4 = (**(code **)(*piVar2 + 0x30))(piVar2,(undefined4 *)(param_1 + 0x8e),param_1 + 0x1e);
    if (iVar4 != 0) {
      FUN_00429a50(s_Failed_to_create_attached_surfac_00857100);
      FUN_00405ad0(s_Failed_to_create_attached_surfac_00857100);
      FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0x195,iVar4);
      return 0;
    }
  }
  puVar5 = (undefined4 *)(param_1 + 0x1e);
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x502) = 0x20;
  do {
    iVar3 = (**(code **)(*(int *)*puVar5 + 0x54))((int *)*puVar5,(undefined4 *)(param_1 + 0x502));
    if (iVar3 == 0) goto LAB_0057aa2f;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  if (iVar3 != 0) {
    FUN_00405ad0(s_Failed_to_create_get_pixel_forma_008570dc);
    FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0x1a4,iVar3);
    return 0;
  }
LAB_0057aa2f:
  FUN_00405ad0(s_Primary_surface_created_008570c0);
  puVar6 = puVar1;
  for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  iVar4 = 0x19;
  *puVar1 = 0x6c;
  do {
    iVar3 = (**(code **)(*(int *)*puVar5 + 100))((int *)*puVar5,0,puVar1,0x21,0);
    if (iVar3 == -0x7789fe3e) {
      (**(code **)(*(int *)*puVar5 + 0x6c))((int *)*puVar5);
    }
    else if (((iVar3 == -0x7789ff7e) || (iVar3 == -0x7ff8ffa9)) || (iVar3 == -0x7ff8fff2)) {
      FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0x76,iVar3);
LAB_0057aab3:
      iVar4 = (**(code **)(*(int *)*puVar5 + 0x80))((int *)*puVar5,0);
      if (iVar4 != 0) {
        FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0x85,iVar4);
      }
      return 1;
    }
    iVar4 = iVar4 + -1;
    if ((iVar4 < 0) || (iVar3 == 0)) goto LAB_0057aab3;
  } while( true );
}


