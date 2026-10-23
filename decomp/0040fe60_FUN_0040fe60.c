// FUN_0040fe60 @ 40fe60 size=62

void __thiscall FUN_0040fe60(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)param_1[1];
  while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    piVar2 = (int *)*puVar3;
    if (param_2 == *piVar2) {
      (**(code **)(*param_1 + 0x1c))(puVar3);
      FUN_00796cd8(piVar2);
    }
  }
  return;
}


