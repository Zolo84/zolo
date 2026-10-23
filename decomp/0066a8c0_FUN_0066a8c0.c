// FUN_0066a8c0 @ 66a8c0 size=192

int __thiscall FUN_0066a8c0(short param_1,int *param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d3eeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(0x22);
  local_14 = SUB42(pvVar2,0);
  uStack_12 = (undefined2)((uint)pvVar2 >> 0x10);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0066a070(param_1 + 0x98);
  }
  puVar1 = *(undefined2 **)(iVar3 + 0xc);
  local_4 = 0xffffffff;
  for (; puVar1 != (undefined2 *)0x0; puVar1 = *(undefined2 **)(puVar1 + 5)) {
    (**(code **)(*param_2 + 0x18))(*puVar1,(short)((uint)*(undefined4 *)(puVar1 + 1) >> 0x10));
    local_14 = *puVar1;
    uStack_12 = (undefined2)*(undefined4 *)(puVar1 + 1);
    uStack_10 = (undefined2)((uint)*(undefined4 *)(puVar1 + 1) >> 0x10);
    FUN_00428ee0((short)&local_14);
    FUN_00500d60((short)iVar3);
  }
  ExceptionList = local_c;
  return iVar3;
}


