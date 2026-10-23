// FUN_0043e250 @ 43e250 size=721

undefined4 * __thiscall FUN_0043e250(undefined4 *param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  undefined2 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bae1e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00441ab0();
  piVar1 = param_1 + 0x1a;
  local_4._1_3_ = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_007e45b8;
  param_1[2] = &PTR_LAB_007e45b4;
  local_18 = 0;
  piVar6 = piVar1;
  do {
    local_4._0_1_ = 0;
    if (local_18 < 5) {
      pvVar3 = operator_new(0x72);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (pvVar3 == (void *)0x0) goto LAB_0043e302;
      iVar4 = FUN_00434930(0xa0,0x140,4,0);
    }
    else {
      pvVar3 = operator_new(0x72);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (pvVar3 == (void *)0x0) {
LAB_0043e302:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_00434930(0x130,DAT_0087721c + -0x40,4,0);
      }
    }
    *piVar6 = iVar4;
    piVar6 = piVar6 + 1;
    local_18 = local_18 + 1;
    local_4._0_1_ = 0;
    *(undefined1 *)(iVar4 + 0x5c) = 1;
    if (7 < local_18) {
      uVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      *(undefined4 *)(*piVar1 + 0x56) = uVar5;
      uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
      *(undefined2 *)(*piVar1 + 0x5a) = uVar2;
      uVar5 = FUN_004136a0(s_eurostilecond20bold_bmp_0082f024);
      *(undefined4 *)(param_1[0x1b] + 0x56) = uVar5;
      uVar2 = FUN_00584270(0xff,0xff,0xff);
      *(undefined2 *)(param_1[0x1b] + 0x5a) = uVar2;
      uVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      *(undefined4 *)(param_1[0x1c] + 0x56) = uVar5;
      uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
      *(undefined2 *)(param_1[0x1c] + 0x5a) = uVar2;
      uVar5 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      *(undefined4 *)(param_1[0x1d] + 0x56) = uVar5;
      uVar2 = FUN_00584270(0xff,0xff,0xff);
      *(undefined2 *)(param_1[0x1d] + 0x5a) = uVar2;
      uVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      *(undefined4 *)(param_1[0x1e] + 0x56) = uVar5;
      uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
      *(undefined2 *)(param_1[0x1e] + 0x5a) = uVar2;
      uVar5 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      *(undefined4 *)(param_1[0x1f] + 0x56) = uVar5;
      uVar2 = FUN_00584270(0xff,0xff,0xff);
      *(undefined2 *)(param_1[0x1f] + 0x5a) = uVar2;
      uVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      *(undefined4 *)(param_1[0x20] + 0x56) = uVar5;
      uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
      *(undefined2 *)(param_1[0x20] + 0x5a) = uVar2;
      uVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      *(undefined4 *)(param_1[0x21] + 0x56) = uVar5;
      uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
      *(undefined2 *)(param_1[0x21] + 0x5a) = uVar2;
      param_1[0x19] = param_2;
      if (param_3 == '\0') {
        FUN_006d4280(param_1);
      }
      else {
        FUN_006d4270(param_1);
      }
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}


