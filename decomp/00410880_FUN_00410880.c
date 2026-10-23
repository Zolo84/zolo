// FUN_00410880 @ 410880 size=220

/* WARNING: Removing unreachable block (ram,0x004108f7) */

void __fastcall FUN_00410880(int param_1)

{
  int iVar1;
  void **ppvVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007b994e;
  pvStack_c = ExceptionList;
  piVar3 = *(int **)(param_1 + 0x108);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  ppvVar2 = &pvStack_c;
  if (piVar3 != *(int **)(param_1 + 0x10c)) {
    do {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        if (*(undefined4 **)(iVar1 + 0x102) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar1 + 0x102))(1);
        }
        FUN_00796cd8(iVar1);
      }
      piVar3 = piVar3 + 1;
      ppvVar2 = ExceptionList;
    } while (piVar3 != *(int **)(param_1 + 0x10c));
  }
  ExceptionList = ppvVar2;
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x108);
  if (*(undefined4 **)(param_1 + 0x100) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x100))(1);
  }
  FUN_00796cd8(*(undefined4 *)(param_1 + 0x108));
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  ExceptionList = pvStack_c;
  return;
}


