// FUN_005f1dd0 @ 5f1dd0 size=207

void __thiscall FUN_005f1dd0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cec1b;
  local_c = ExceptionList;
  if (param_2 != 0) {
    DAT_00ab0f7c = param_2;
    ExceptionList = &local_c;
    FUN_004dcb20(*(undefined4 *)(param_2 + 6),3);
    if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
    }
    puVar2 = operator_new(0x76);
    uStack_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      FUN_00434930(0x9a,0xea,0,0);
      *(undefined4 *)((int)puVar2 + 0x72) = uVar1;
      *puVar2 = &PTR_FUN_007ed740;
      *(undefined ***)((int)puVar2 + 0x12) = &PTR_LAB_007ed72c;
      *(undefined ***)((int)puVar2 + 0x1a) = &PTR_LAB_007ed728;
      *(undefined ***)((int)puVar2 + 0x1e) = &PTR_LAB_007ed724;
    }
    uStack_4 = 0xffffffff;
    *(undefined4 **)(param_1 + 0xc) = puVar2;
    FUN_006087b0(param_2);
    FUN_006087b0(param_2);
  }
  ExceptionList = local_c;
  return;
}


