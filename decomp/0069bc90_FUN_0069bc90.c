// FUN_0069bc90 @ 69bc90 size=383

void __fastcall FUN_0069bc90(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d5693;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = operator_new(0xc0);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0xe0))();
    FUN_0069be30(uVar3);
    *(undefined4 *)((int)piVar2 + 0x92) = 0;
    *(undefined4 *)((int)piVar2 + 0x96) = 0;
    *(undefined4 *)((int)piVar2 + 0x9a) = 0;
    *(undefined4 *)((int)piVar2 + 0x9e) = 0;
    *piVar2 = (int)&PTR_FUN_007f4cc4;
    local_4 = CONCAT31(local_4._1_3_,1);
    *(undefined4 *)((int)piVar2 + 0xa2) = 0x3f800000;
    *(undefined4 *)((int)piVar2 + 0xa6) = 0x3f800000;
    FUN_00690400();
    *piVar2 = (int)&PTR_FUN_007f4a7c;
    piVar4 = piVar2;
  }
  param_1[0x14] = (int)piVar4;
  local_4 = 0xffffffff;
  (**(code **)(*piVar4 + 0xb4))(param_1);
  param_1[0x12] = unaff_retaddr;
  FUN_0069af60();
  (**(code **)(*param_1 + 0x208))();
  FUN_006a9cd0();
  iVar1 = *(int *)((int)param_1 + 10);
  uVar3 = (**(code **)(*(int *)**(undefined4 **)(param_1[0x12] + 0x2c) + 0xc))(param_1[0x10]);
  uVar3 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))(uVar3);
  FUN_00458570(s__s_starts_a_CAIMilitaryMinister_f_00868140,uVar3);
  uVar3 = FUN_006ac310(10,0x1e);
  FUN_006adfb0(uVar3,1);
  uVar3 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x16,uVar3);
  FUN_0069be10(0x17);
  FUN_0069be10(0x1a);
  uVar3 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0,uVar3);
  uVar3 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x19,uVar3);
  uVar3 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x1b,uVar3);
  ExceptionList = piVar2;
  return;
}


