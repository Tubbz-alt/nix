#pragma once

#include "store-api.hh"

#include <regex>

namespace nix {

struct GitInfo
{
    Path storePath;
    std::string rev;
    std::string shortRev;
    std::optional<uint64_t> revCount;
};

GitInfo exportGit(ref<Store> store, const std::string & uri,
    std::optional<std::string> ref, std::string rev,
    const std::string & name);

}