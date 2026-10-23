// FUN_0054d800 @ 54d800 size=240

void __thiscall FUN_0054d800(int param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined1 local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c45de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007a630a(local_20c,s_db_leaders_leaders_s_008521c4,param_1 + 0x1b);
  FUN_007a630a(local_10c,&DAT_0083ca0c,&DAT_00dc2ba0,local_20c);
  iVar1 = FUN_007a6615(local_10c,&DAT_0082eeb4);
  if (iVar1 != 0) {
    FUN_007a6429(iVar1);
    iVar1 = *param_2;
    pvVar2 = operator_new(0x316);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00533e40(local_20c,&DAT_008390e0);
    }
    *param_2 = iVar3;
    local_4 = 0xffffffff;
    (**(code **)(**(int **)(param_1 + 0x11806) + 0x30))(param_2);
    if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_2)(1);
    }
    *param_2 = iVar1;
  }
  ExceptionList = local_c;
  return;
}


