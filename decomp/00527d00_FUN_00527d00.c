// FUN_00527d00 @ 527d00 size=51

float10 __fastcall FUN_00527d00(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float local_4;
  
  local_4 = 0.0;
  puVar2 = *(undefined4 **)(param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    fVar3 = (float10)(**(code **)(*(int *)*puVar2 + 0xa4))();
    local_4 = (float)(fVar3 + (float10)local_4);
    puVar2 = puVar1;
  }
  return (float10)local_4;
}


