// FUN_0057a470 @ 57a470 size=337

undefined4 __fastcall FUN_0057a470(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined4 *puStack_1c;
  char *pcStack_18;
  int local_4;
  
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x532) = 1;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  pcStack_18 = (char *)0x57a490;
  pHVar2 = GetActiveWindow();
  *(HWND *)(param_1 + 0x12) = pHVar2;
  puVar1 = (undefined4 *)(param_1 + 0x16);
  do {
    pcStack_18 = (char *)0x0;
    puStack_1c = puVar1;
    puVar3 = (undefined4 *)DirectDrawCreate(0);
    if (puVar3 == (undefined4 *)0x0) goto LAB_0057a4db;
    local_4 = local_4 + 1;
  } while (local_4 < 0x14);
  if (puVar3 != (undefined4 *)0x0) {
    pcStack_18 = s_Failed_to_create_DirectDraw_obje_00857034;
    puStack_1c = (undefined4 *)0x57a4c0;
    FUN_00429a00();
    puStack_1c = puVar3;
    FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0xdc);
    return 0;
  }
LAB_0057a4db:
  puStack_1c = *(undefined4 **)(param_1 + 0x12);
  pcStack_18 = (char *)0x8;
  iVar4 = (**(code **)(*(int *)*puVar1 + 0x50))((int *)*puVar1);
  if (iVar4 != 0) {
    FUN_00429a00(s_Failed_to_set_cooperative_level__00857010);
    FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0xe4,iVar4);
    return 0;
  }
  puVar3 = (undefined4 *)(param_1 + 0x1a);
  iVar4 = (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1,&DAT_007fce60,puVar3);
  if (iVar4 != 0) {
    FUN_00429a00(s_Failed_to_create_DirectDraw2_obj_00856fe8);
    FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60,0xee,iVar4);
    return 0;
  }
  FUN_0057a850();
  puVar6 = &LAB_00579fb0;
  puStack_1c = (undefined4 *)0x0;
  (**(code **)(*(int *)*puVar3 + 0x20))((int *)*puVar3,0,0,&puStack_1c);
  *(undefined1 **)(param_1 + 0x52a) = puVar6;
  pvVar5 = operator_new((int)puVar6 * 0x6c);
  *(void **)(param_1 + 0x52e) = pvVar5;
  DAT_00bd0540 = 0;
  (**(code **)(*(int *)*puVar3 + 0x20))
            ((int *)*puVar3,0,0,*(undefined4 *)(param_1 + 0x52e),&LAB_00579f20);
  FUN_00429a00(s_DirectDraw_object_created_00856fcc);
  return 1;
}


