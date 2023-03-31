
#include "fbWin.h"

// carlo
void IFolderBrowserWin::CarlTest(WDL_String &fileName) {
  _oCurrentNAM = fileName.Get();
  _oNAMs.clear();

  // get all .nams in folder of currently selected NAM
  const std::filesystem::path l_sPath =
      std::filesystem::current_path().u8string();
  std::set<std::filesystem::path> sorted_by_name; // sort listing

  for (const auto &p : std::filesystem::directory_iterator(l_sPath)) {
    if (!std::filesystem::is_directory(p)) {
      if (std::filesystem::path(p.path()).extension() == ".nam") {
        _oNAMs.push_back(p.path().u8string());
      }
    }
  }

  // set current index for selected NAM
  for (int i = 0; i < _oNAMs.size(); i++) {
    if (_oNAMs[i] == _oCurrentNAM) {
      l_iCurrentNAMIndex = i;
      break;
    }
  }
}