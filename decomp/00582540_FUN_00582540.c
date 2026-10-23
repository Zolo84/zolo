// FUN_00582540 @ 582540 size=119

uint FUN_00582540(int param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint in_EAX;
  uint uVar3;
  undefined3 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = in_EAX & 0xffffff00;
  iVar7 = 0;
  uVar2 = 0;
  if (0 < *(int *)(DAT_00bd1500 + 0xb70)) {
    iVar6 = 0;
    iVar5 = DAT_00bd1500;
    do {
      if ((*(int *)(iVar5 + 900) != iVar7) && (*(char *)(iVar6 + 0x3d0 + iVar5) == '\0')) {
        piVar1 = (int *)(iVar6 + 0x3d8 + iVar5);
        *piVar1 = *piVar1 + (param_2 - param_1);
        uVar4 = (undefined3)((uint)(param_2 - param_1) >> 8);
        iVar5 = DAT_00bd1500;
        if (*(int *)(iVar6 + 0x3d8 + DAT_00bd1500) < 10000) {
          uVar3 = CONCAT31(uVar4,uVar2);
        }
        else {
          uVar3 = CONCAT31(uVar4,1);
          uVar2 = 1;
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x3e;
    } while (iVar7 < *(int *)(iVar5 + 0xb70));
  }
  return uVar3;
}


