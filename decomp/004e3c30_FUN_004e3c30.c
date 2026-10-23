// FUN_004e3c30 @ 4e3c30 size=399

void __fastcall FUN_004e3c30(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  (**(code **)(*(int *)(param_1 + 0x146) + 0x14))();
  *(undefined4 *)(param_1 + 0x136) = 0;
  *(undefined4 *)(param_1 + 0x486) = 0;
  *(undefined1 *)(param_1 + 0x24e) = 0;
  (**(code **)(*(int *)(param_1 + 0x1a) + 0x14))();
  *(undefined4 *)(param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined1 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x19e) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined2 *)(param_1 + 0x3cc) = 0;
  FUN_00796cd8(*(undefined4 *)(param_1 + 0x3a4));
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  *(undefined1 *)(param_1 + 0x181) = 0;
  *(undefined1 *)(param_1 + 0x472) = 0;
  *(undefined4 *)(param_1 + 0x13e) = 0xf;
  *(undefined4 *)(param_1 + 0x46a) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x3e9) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x1aa) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x13a) = 0;
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  *(undefined4 *)(param_1 + 0x196) = uVar2;
  uVar2 = FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
  *(undefined4 *)(param_1 + 0x19a) = uVar2;
  *(undefined1 *)(param_1 + 0x3b1) = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x21e) = 0;
  *(undefined4 *)(param_1 + 0x222) = 0;
  *(undefined4 *)(param_1 + 0x226) = 0;
  *(undefined4 *)(param_1 + 0x22a) = 0;
  *(undefined1 *)(param_1 + 0x470) = 0;
  *(undefined1 *)(param_1 + 0x471) = 0;
  *(undefined1 *)(param_1 + 0x46f) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x18a) = 0;
  *(undefined4 *)(param_1 + 0x182) = 0;
  *(undefined4 *)(param_1 + 0x186) = 0;
  piVar3 = (int *)(param_1 + 0x1ca);
  iVar4 = 10;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1[6] != 0) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *piVar3 = (int)&DAT_008eff90;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


