// FUN_0040fdc0 @ 40fdc0 size=80

undefined4 __thiscall FUN_0040fdc0(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    piVar2 = (int *)*puVar1;
    if ((param_2 == *piVar2) && (param_3 == piVar2[1])) break;
    puVar1 = (undefined4 *)puVar1[2];
  }
  (**(code **)(*param_1 + 0x1c))(puVar1);
  if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*piVar2)(1);
  }
  FUN_00796cd8(piVar2);
  return 1;
}


