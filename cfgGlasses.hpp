class cfgGlasses {
 class None ;
    class ABC_m04_gas_mask_blue: None {
      ace_color[] = {0, 0, -1};  // Post-proccess color
      ace_tintAmount = 8;  // Amount of tint applied to the color
      ace_protection = 1;  // Provides protection (0-no, 1-yes)
      ace_overlay = "\Peer_ABC\overlay\m04_overlay_ca.paa";
      scope = 2;
      author = "Model by Mr.Skellington, config by Peer";
      displayname = "M04 Gasmask (blue)";
      model = "\Peer_ABC\data\skn_b_nbc_mask_hood.p3d";
      picture = "\Peer_ABC\ui\NBC_b_mask_hood_inv_ca.paa";
      mass = 4;
      hiddenSelections[] = {"Camo"}; /// selection defined in sections of model that may have texture and materials changed by setObjectTexture or next parameter
      hiddenSelectionsTextures[] = {"Peer_ABC\data\textures\m04_mask_hood_blk_co.paa"}; /// what texture does this soldier use for camo selection
 };
};
