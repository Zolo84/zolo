// FUN_0069c0f0 @ 69c0f0 size=100

void __fastcall FUN_0069c0f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_006adf50(0x19);
  FUN_006adf50(0);
  FUN_006adf50(0x1b);
  piVar2 = (int *)(param_1 + 0x4c);
  iVar1 = 2;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_006adf50(0x16);
  FUN_006adf50(0x17);
  FUN_006adf50(0x1a);
  FUN_006a9850();
  return;
}


