const mks_token_farm = artifacts.require('mks_token_farm');

module.exports = function(deployer) {
  deployer.deploy(mks_token_farm );
};
