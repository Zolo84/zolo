// FUN_0040fe10 @ 40fe10 size=68

undefined4 __thiscall FUN_0040fe10(int *param_1,int param_2,int param_3)

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
  FUN_00796cd8(piVar2);
  return 1;
}


