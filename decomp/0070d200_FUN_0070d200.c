// FUN_0070d200 @ 70d200 size=114

undefined4 FUN_0070d200(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
    uVar1 = FUN_0042b6c9(s_RESOURCE_OIL_0083c2dc);
    return uVar1;
  case 1:
    uVar1 = FUN_0042b6c9(s_RESOURCE_ENERGY_0083c2a4);
    return uVar1;
  case 2:
    uVar1 = FUN_0042b6c9(s_RESOURCE_METAL_0083c2cc);
    return uVar1;
  case 3:
    uVar1 = FUN_0042b6c9(s_RESOURCE_RARE_MATERIALS_0083c2b4);
    return uVar1;
  case 4:
    uVar1 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
    return uVar1;
  case 5:
    uVar1 = FUN_0042b6c9(s_RESOURCE_SUPPLY_0083c2f4);
  }
  return uVar1;
}


