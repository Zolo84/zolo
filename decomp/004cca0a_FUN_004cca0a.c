// FUN_004cca0a @ 4cca0a size=126

void __fastcall FUN_004cca0a(int *param_1)

{
  int *piVar1;
  int *local_8;
  
  for (local_8 = (int *)param_1[1]; local_8 != (int *)0x0; local_8 = (int *)local_8[2]) {
    piVar1 = (int *)FUN_004c9f81(param_1);
    (**(code **)(*piVar1 + 0xbc))();
    *(undefined4 *)(*local_8 + 0x6c) = 0;
  }
  (**(code **)(*param_1 + 0x10))();
  return;
}


