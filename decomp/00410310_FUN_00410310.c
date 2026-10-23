// FUN_00410310 @ 410310 size=354

/* WARNING: Removing unreachable block (ram,0x0041040d) */

void __fastcall FUN_00410310(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007b9914;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e3578;
  param_1[2] = &PTR_LAB_007e3574;
  local_4 = 0;
  piVar3 = (int *)param_1[0x47];
  if (piVar3 != (int *)param_1[0x48]) {
    do {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        piVar4 = *(int **)(iVar1 + 0x108);
        local_4 = CONCAT31(local_4._1_3_,2);
        if (piVar4 != *(int **)(iVar1 + 0x10c)) {
          do {
            iVar2 = *piVar4;
            if (iVar2 != 0) {
              FUN_00410c50();
              FUN_00796cd8(iVar2);
            }
            piVar4 = piVar4 + 1;
          } while (piVar4 != *(int **)(iVar1 + 0x10c));
        }
        FUN_00410da0(*(undefined4 *)(iVar1 + 0x108),*(undefined4 *)(iVar1 + 0x10c));
        if (*(undefined4 **)(iVar1 + 0x100) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar1 + 0x100))(1);
        }
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00410c70();
        FUN_00796cd8(iVar1);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)param_1[0x48]);
  }
  param_1[0x48] = param_1[0x47];
  FUN_00796cd8(param_1[0x47]);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  local_4 = 0xffffffff;
  FUN_0058ede0();
  ExceptionList = pvStack_c;
  return;
}


