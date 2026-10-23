// FUN_004c9f81 @ 4c9f81 size=73

undefined4 __fastcall FUN_004c9f81(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 0x28) + 8))();
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(**(int **)(param_1 + 0x2c) + 0x3d8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


