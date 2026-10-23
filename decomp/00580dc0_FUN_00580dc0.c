// FUN_00580dc0 @ 580dc0 size=95

void __fastcall FUN_00580dc0(int param_1)

{
  LPVOID *ppv;
  
  ppv = (LPVOID *)(param_1 + 8);
  CoCreateInstance((IID *)&DAT_007fd5d0,(LPUNKNOWN)0x0,3,(IID *)&DAT_007fbd90,ppv);
  (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_007fc4f0,param_1 + 0xc);
  (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_007fbe60,param_1 + 0x10);
  (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_007fc4b0,param_1 + 0x14);
  (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_007fc4d0,param_1 + 0x18);
  return;
}


