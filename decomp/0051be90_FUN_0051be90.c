// FUN_0051be90 @ 51be90 size=553

void __fastcall FUN_0051be90(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  
  iVar2 = (**(code **)(param_1[0x47] + 4))();
  if (iVar2 == 0) {
LAB_0051beba:
    iVar2 = (**(code **)(param_1[0x47] + 4))();
    if (iVar2 == 0) {
      FUN_0050bd90(0,param_1[3]);
    }
  }
  else {
    cVar1 = FUN_005129d0();
    if (cVar1 == '\0') goto LAB_0051beba;
  }
  (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
  uVar3 = (**(code **)(*(int *)(param_1[0x92] + 0xe) + 0xc))();
  FUN_00405ad0(s_Unit___d___s__cancels_all_moveme_0084b050,*(undefined4 *)((int)param_1 + 0x1a),
               uVar3);
  cVar1 = FUN_0042e980();
  if (cVar1 != '\0') {
    FUN_005b91d4(param_1);
  }
  *(undefined1 *)((int)param_1 + 0x17b) = 0;
  if (((char)param_1[0x5f] != '\0') && (*(int *)((int)param_1 + 0x176) == 0)) {
    iVar2 = (**(code **)(param_1[0x47] + 4))();
    if ((iVar2 == 0) && (*(char *)((int)param_1 + 0x17b) == '\0')) {
      (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x2c))
                (s_gfx_map_flags_flag_exiled_bmp_0084af8c);
      goto LAB_0051bf8d;
    }
  }
  iVar4 = FUN_00522770();
  iVar2 = **(int **)((int)param_1 + 0x15a);
  uVar3 = FUN_0044b1c0(*(undefined4 *)(iVar4 + 6));
  (**(code **)(iVar2 + 0x2c))(uVar3);
LAB_0051bf8d:
  (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x34))(0x19);
  iVar2 = *(int *)((int)param_1 + 0x15a);
  *(undefined4 *)(iVar2 + 0x22) = 0;
  *(undefined4 *)(iVar2 + 0x26) = 10;
  *(undefined1 *)(iVar2 + 0x67) = 0;
  uVar3 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar3);
  FUN_00418140(0);
  FUN_00418210(10);
  FUN_00523370(0);
  (**(code **)(*param_1 + 0x94))();
  *(undefined1 **)((int)param_1 + 0x21a) = &LAB_00521a70;
  *(undefined4 *)((int)param_1 + 0x21e) = 0;
  FUN_0040d210();
  FUN_0040d170();
  (**(code **)(*(int *)((int)param_1 + 0x22e) + 0x10))();
  if ((param_1[3] != 0) && ((char)((uint)unaff_ESI >> 0x18) != '\0')) {
    cVar1 = FUN_0042e980();
    if (cVar1 != '\0') {
      FUN_00458570(s_Notify_AI_that_Unit___d_has_stop_0084b028,*(undefined4 *)((int)param_1 + 0x1a))
      ;
      cVar1 = (**(code **)(*param_1 + 0x28))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(*param_1 + 0x10))();
        FUN_006ad4e0(3,&LAB_005271d0,uVar3);
        return;
      }
      cVar1 = (**(code **)(*param_1 + 0x2c))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(*param_1 + 0x14))();
        FUN_006ad550(4,&LAB_005271f0,uVar3);
        return;
      }
      uVar3 = (**(code **)(*param_1 + 0x18))();
      FUN_006ad5c0(5,&LAB_00527190,uVar3);
    }
  }
  return;
}


