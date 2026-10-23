// FUN_00580c80 @ 580c80 size=156

undefined4 * __fastcall FUN_00580c80(undefined4 *param_1)

{
  LPVOID *ppv;
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8ce8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00581ff0();
  ppv = (LPVOID *)(param_1 + 2);
  local_4 = 0;
  *param_1 = &PTR_FUN_007eae1c;
  CoCreateInstance((IID *)&DAT_007fd5d0,(LPUNKNOWN)0x0,3,(IID *)&DAT_007fbd90,ppv);
  (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_007fc4f0,param_1 + 3);
  (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_007fbe60,param_1 + 4);
  puVar1 = *ppv;
  (**(code **)*puVar1)(puVar1,&DAT_007fc4b0,param_1 + 5);
  (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_007fc4d0,param_1 + 6);
  ExceptionList = puVar1;
  return param_1;
}


