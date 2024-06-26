#include <detail/functions.hpp>
#include <fd4/resource.hpp>

using namespace from;

FD4::FD4ResCap* FD4::FD4ResCapHolder::get_res_cap(
    const std::wstring& name) const {
    DLTX::string_hash hash{ name.c_str() };
    return liber::function<"FD4::FD4ResCapHolder::get_res_cap",
        FD4::FD4ResCap*>::call(this, &hash);
}

bool match_filename(const DLTX::FD4BasicHashString& hashstr,
    const std::wstring& rhs) {
    const auto& lhs = hashstr.get_string();
    if (lhs.empty())
        return false;
    size_t start = lhs.find_last_of(L"/\\");
    start = start == std::wstring::npos ? 0 : start + 1;
    std::wstring_view wsv{ lhs.begin() + start, lhs.end() };
    return wsv == rhs;
}

FD4::FD4FileCap* FD4::FD4FileCapHolder::get_file_cap(
    const std::filesystem::path& path) const {
    std::wstring filename = path.filename().wstring();
    for (int i = 0; i < this->capacity; ++i) {
        FD4::FD4ResCapHolderItem* item = this->items[i];
        while (item) {
            if (match_filename(item->name(), filename))
                return reinterpret_cast<FD4::FD4FileCap*>(item);
            item = item->next();
        }
    }
    return nullptr;
}
