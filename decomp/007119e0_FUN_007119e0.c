// FUN_007119e0 @ 7119e0 size=257

undefined4 __thiscall FUN_007119e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  if ((*(char *)(param_2 + 0x2c) == '\0') ||
     (cVar4 = (**(code **)(*(int *)(param_2 + 0x1a) + 0x30))(*(undefined4 *)(param_1 + 0x24)),
     cVar4 != '\0')) {
    puVar7 = *(undefined4 **)(param_2 + 4);
    do {
      if (puVar7 == (undefined4 *)0x0) {
        if (DAT_00dc1924 == '\0') {
          return 0;
        }
        if (*(char *)(param_1 + 0x1238) != '\0') {
          return 0;
        }
        if (*(char *)(param_1 + 0x1236) != '\0') {
          return 0;
        }
        if ((DAT_00dc1920 != 2) && (*(char *)(param_2 + 0x2c) == '\0')) {
          return 0;
        }
        pvVar5 = operator_new(0x272);
        if (pvVar5 == (void *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_00702950(0xffffffff,0,0);
        }
        iVar2 = *(int *)(param_2 + 8);
        puVar7 = operator_new(0xe);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = uVar6;
          puVar7[1] = iVar2;
          puVar7[2] = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
        }
        iVar3 = *(int *)(param_2 + 0xc);
        *(undefined4 **)(param_2 + 8) = puVar7;
        *(int *)(param_2 + 0xc) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)(param_2 + 4) = puVar7;
          return 1;
        }
        *(undefined4 **)(iVar2 + 8) = puVar7;
        return 1;
      }
      puVar1 = (undefined4 *)puVar7[2];
      cVar4 = FUN_007105e0(*puVar7);
      if (cVar4 != '\0') {
        return 1;
      }
      puVar7 = puVar1;
    } while (*(char *)(param_1 + 0x1238) == '\0');
  }
  return 0;
}


