// FUN_004d9080 @ 4d9080 size=39

void FUN_004d9080(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00aa10e4;
  do {
    FUN_00796cd8(puVar1[-1]);
    FUN_00796cd8(*puVar1);
    puVar1 = puVar1 + 3;
  } while ((int)puVar1 < 0xaa1120);
  return;
}


