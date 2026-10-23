// FUN_0057dc20 @ 57dc20 size=255

void __thiscall FUN_0057dc20(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c8c0b;
  pvStack_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 0x34c + param_3 * 4);
  ExceptionList = &pvStack_c;
  if (puVar1 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1,puVar1[1]);
    FUN_00796cd8(puVar1);
  }
  local_1c = 0x10;
  local_18 = 0;
  local_14 = param_2;
  if (param_3 < 0xb) {
    puVar1 = operator_new(10);
    uStack_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *(undefined1 *)(puVar1 + 2) = 1;
      if (*(char *)(DAT_00bd1500 + 0x37b) == '\x01') {
        piVar2 = *(int **)(DAT_00bd1500 + 0xbc4);
      }
      else {
        piVar2 = (int *)0x0;
      }
      *puVar1 = piVar2;
      if (piVar2 == (int *)0x0) {
        *(undefined1 *)(puVar1 + 2) = 0;
      }
      else {
        (**(code **)(*piVar2 + 0x14))(piVar2,puVar1 + 1,&local_1c,0,0,0);
      }
    }
    uStack_4 = 0xffffffff;
    *(undefined4 **)(param_1 + 0x34c + param_3 * 4) = puVar1;
    if ((puVar1 != (undefined4 *)0x0) && (*(char *)(puVar1 + 2) == '\0')) {
      (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1,puVar1[1]);
      FUN_00796cd8(puVar1);
      *(undefined4 *)(param_1 + 0x34c + param_3 * 4) = 0;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


