// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "wfm4.h"

#include <memory>

wfm4_t::wfm4_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, wfm4_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_header = nullptr;
    m_data = nullptr;
    f_header = false;
    f_data = false;
    _read();
}

void wfm4_t::_read() {
}

wfm4_t::~wfm4_t() {
    if (f_header) {
    }
    if (f_data) {
    }
}

wfm4_t::time_header_t::time_header_t(kaitai::kstream* p__io, wfm4_t::header_t* p__parent, wfm4_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_unk4 = nullptr;
    _read();
}

void wfm4_t::time_header_t::_read() {
    m_unk1 = m__io->read_u1();
    m_unk2_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x06\x00\x00\x00\x1A\x00\x00\x00", 11));
    m_index = m__io->read_u4le();
    m_time_per_div_ps = m__io->read_u4le();
    m_pad1 = m__io->read_bytes(4);
    m_unk3 = m__io->read_u4le();
    int l_unk4 = 3;
    m_unk4 = new std::vector<uint32_t>();
    m_unk4->reserve(l_unk4);
    for (int i = 0; i < l_unk4; i++) {
        m_unk4->push_back(std::move(m__io->read_u4le()));
    }
    m_delay_ps = m__io->read_u8le();
    m_unk5 = m__io->read_u4le();
    m_unk6_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00", 14));
    m_unk7_exp = m__io->read_u2le();
}

wfm4_t::time_header_t::~time_header_t() {
}

wfm4_t::channel_mask_t::channel_mask_t(kaitai::kstream* p__io, wfm4_t::header_t* p__parent, wfm4_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void wfm4_t::channel_mask_t::_read() {
    m_unused = m__io->read_bits_int(4);
    m_channel_4 = m__io->read_bits_int(1);
    m_channel_3 = m__io->read_bits_int(1);
    m_channel_2 = m__io->read_bits_int(1);
    m_channel_1 = m__io->read_bits_int(1);
}

wfm4_t::channel_mask_t::~channel_mask_t() {
}

wfm4_t::channel_header_t::channel_header_t(kaitai::kstream* p__io, wfm4_t::header_t* p__parent, wfm4_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void wfm4_t::channel_header_t::_read() {
    m_unk12_exp = m__io->ensure_fixed_contents(std::string("\x00", 1));
    m_coupling = static_cast<wfm4_t::channel_coupling_t>(m__io->read_u1());
    m_bandwidth_limit = static_cast<wfm4_t::bandwidth_limit_t>(m__io->read_u1());
    m_unk13_exp = m__io->ensure_fixed_contents(std::string("\x00", 1));
    m_probe_scale = static_cast<wfm4_t::probe_scale_t>(m__io->read_u1());
    m_unk1_exp = m__io->ensure_fixed_contents(std::string("\x01\x00", 2));
    m_probe_impedance = static_cast<wfm4_t::probe_impedance_t>(m__io->read_u1());
    m_scale_index = static_cast<wfm4_t::channel_scale_t>(m__io->read_u1());
    m_unk2_exp = m__io->ensure_fixed_contents(std::string("\x02", 1));
    m_label = kaitai::kstream::bytes_to_str(m__io->read_bytes(10), std::string("ascii"));
    m_unk3_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 12));
    m_unk6_exp = m__io->ensure_fixed_contents(std::string("\xC0\xE1\xE4\x00", 4));
    m_unk7_exp = m__io->ensure_fixed_contents(std::string("\x00\x2D\x31\x01", 4));
    m_unk8_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x00", 4));
    m_scale_microvolt = m__io->read_u4le();
    m_offset_uv = m__io->read_s4le();
    m_unk11 = m__io->read_s2le();
    m_unk12 = m__io->read_bytes(2);
}

wfm4_t::channel_header_t::~channel_header_t() {
}

wfm4_t::header_t::header_t(kaitai::kstream* p__io, wfm4_t* p__parent, wfm4_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_scope_info = nullptr;
    m_unk1 = nullptr;
    m_channel_mask = nullptr;
    m_unk3 = nullptr;
    m_unk9 = nullptr;
    m_unk12 = nullptr;
    m_unk15 = nullptr;
    m_unk18 = nullptr;
    m_unk21_exp = nullptr;
    m_unk23 = nullptr;
    m_unk26 = nullptr;
    m_unk38 = nullptr;
    m_unk42 = nullptr;
    m_unk52 = nullptr;
    m_unk55 = nullptr;
    m_unk57 = nullptr;
    m_time_header = nullptr;
    m_channel_header = nullptr;
    _read();
}

void wfm4_t::header_t::_read() {
    m_magic = m__io->ensure_fixed_contents(std::string("\xA5\xA5\x38\x00", 4));
    m_scope_info = std::unique_ptr<scope_info_t>(new scope_info_t(m__io, this, m__root));
    int l_unk1 = 6;
    m_unk1 = new std::vector<uint32_t>();
    m_unk1->reserve(l_unk1);
    for (int i = 0; i < l_unk1; i++) {
        m_unk1->push_back(std::move(m__io->read_u4le()));
    }
    m_channel_mask = std::unique_ptr<channel_mask_t>(new channel_mask_t(m__io, this, m__root));
    m_unk2 = m__io->read_bytes(3);
    int l_unk3 = 6;
    m_unk3 = new std::vector<uint32_t>();
    m_unk3->reserve(l_unk3);
    for (int i = 0; i < l_unk3; i++) {
        m_unk3->push_back(std::move(m__io->read_u4le()));
    }
    m_unk2_p7_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x00", 4));
    m_mem_depth = m__io->read_u4le();
    m_samp_rate = m__io->read_f4le();
    m_unk8_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x00", 4));
    m_time_per_div_ps = m__io->read_u4le();
    int l_unk9 = 5;
    m_unk9 = new std::vector<uint32_t>();
    m_unk9->reserve(l_unk9);
    for (int i = 0; i < l_unk9; i++) {
        m_unk9->push_back(std::move(m__io->read_u4le()));
    }
    m_unk11 = m__io->read_f4le();
    int l_unk12 = 2;
    m_unk12 = new std::vector<uint32_t>();
    m_unk12->reserve(l_unk12);
    for (int i = 0; i < l_unk12; i++) {
        m_unk12->push_back(std::move(m__io->read_u4le()));
    }
    m_unk13_exp = m__io->ensure_fixed_contents(std::string("\xC0\xE1\xE4\x00", 4));
    m_unk14_exp = m__io->ensure_fixed_contents(std::string("\x00\x2D\x31\x01", 4));
    int l_unk15 = 2;
    m_unk15 = new std::vector<uint32_t>();
    m_unk15->reserve(l_unk15);
    for (int i = 0; i < l_unk15; i++) {
        m_unk15->push_back(std::move(m__io->read_u4le()));
    }
    m_unk17 = m__io->read_f4le();
    int l_unk18 = 2;
    m_unk18 = new std::vector<uint32_t>();
    m_unk18->reserve(l_unk18);
    for (int i = 0; i < l_unk18; i++) {
        m_unk18->push_back(std::move(m__io->read_u4le()));
    }
    m_unk19_exp = m__io->ensure_fixed_contents(std::string("\xC0\xE1\xE4\x00", 4));
    m_unk20_exp = m__io->ensure_fixed_contents(std::string("\x00\x2D\x31\x01", 4));
    int l_unk21_exp = 2;
    m_unk21_exp = new std::vector<uint32_t>();
    m_unk21_exp->reserve(l_unk21_exp);
    for (int i = 0; i < l_unk21_exp; i++) {
        m_unk21_exp->push_back(std::move(m__io->read_u4le()));
    }
    m_unk22 = m__io->read_f4le();
    int l_unk23 = 2;
    m_unk23 = new std::vector<uint32_t>();
    m_unk23->reserve(l_unk23);
    for (int i = 0; i < l_unk23; i++) {
        m_unk23->push_back(std::move(m__io->read_u4le()));
    }
    m_unk24_exp = m__io->ensure_fixed_contents(std::string("\xC0\xE1\xE4\x00", 4));
    m_unk25_exp = m__io->ensure_fixed_contents(std::string("\x00\x2D\x31\x01", 4));
    int l_unk26 = 2;
    m_unk26 = new std::vector<uint32_t>();
    m_unk26->reserve(l_unk26);
    for (int i = 0; i < l_unk26; i++) {
        m_unk26->push_back(std::move(m__io->read_u4le()));
    }
    m_unk27 = m__io->read_f4le();
    m_unk28 = m__io->read_f4le();
    m_unk29_exp = m__io->read_u4le();
    m_unk30_exp = m__io->ensure_fixed_contents(std::string("\xC0\xE1\xE4\x00", 4));
    m_unk31_exp = m__io->ensure_fixed_contents(std::string("\x00\x2D\x31\x01", 4));
    m_unk32_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x00", 4));
    m_unk33_exp = m__io->ensure_fixed_contents(std::string("\x78\x05\x00\x00", 4));
    m_unk34_exp = m__io->ensure_fixed_contents(std::string("\x78\x05\x00\x00", 4));
    m_unk35_exp = m__io->ensure_fixed_contents(std::string("\x00\x50\x00\x00\xE4\x01\x00\x00", 8));
    m_unk36_exp = m__io->ensure_fixed_contents(std::string("\xEC\x51\x00\x00", 4));
    m_mem_depth_2 = m__io->read_u4le();
    m_unk37_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x00", 4));
    m_mem_depth_3 = m__io->read_u4le();
    int l_unk38 = 7;
    m_unk38 = new std::vector<uint32_t>();
    m_unk38->reserve(l_unk38);
    for (int i = 0; i < l_unk38; i++) {
        m_unk38->push_back(std::move(m__io->read_u4le()));
    }
    m_unk40_data_len_p = m__io->read_u4le();
    m_unk41_data_len_p = m__io->read_u4le();
    m_bytes_per_channel_1 = m__io->read_u4le();
    m_bytes_per_channel_2 = m__io->read_u4le();
    int l_unk42 = 21;
    m_unk42 = new std::vector<uint32_t>();
    m_unk42->reserve(l_unk42);
    for (int i = 0; i < l_unk42; i++) {
        m_unk42->push_back(std::move(m__io->read_u4le()));
    }
    m_unk49_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x00", 4));
    m_unk50 = m__io->read_u4le();
    m_unk51_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x06\x00\x00\x00\x00", 8));
    int l_unk52 = 4;
    m_unk52 = new std::vector<uint32_t>();
    m_unk52->reserve(l_unk52);
    for (int i = 0; i < l_unk52; i++) {
        m_unk52->push_back(std::move(m__io->read_u4le()));
    }
    m_unk53_exp = m__io->ensure_fixed_contents(std::string("\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 16));
    m_unk54_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 16));
    int l_unk55 = 4;
    m_unk55 = new std::vector<uint32_t>();
    m_unk55->reserve(l_unk55);
    for (int i = 0; i < l_unk55; i++) {
        m_unk55->push_back(std::move(m__io->read_u4le()));
    }
    m_total_samples = m__io->read_u4le();
    m_unk56_exp = m__io->ensure_fixed_contents(std::string("\x00\x50\x00\x00", 4));
    int l_unk57 = 2;
    m_unk57 = new std::vector<uint32_t>();
    m_unk57->reserve(l_unk57);
    for (int i = 0; i < l_unk57; i++) {
        m_unk57->push_back(std::move(m__io->read_u4le()));
    }
    m_unk59_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x00", 4));
    m_mem_depth_enum = static_cast<wfm4_t::mem_depth_t>(m__io->read_u1());
    m_unk60_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x00\x20\x00\x00\x04\x00\x00\x00", 11));
    m_unk61_exp = m__io->ensure_fixed_contents(std::string("\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00", 16));
    m_time_header = std::unique_ptr<time_header_t>(new time_header_t(m__io, this, m__root));
    int l_channel_header = 4;
    m_channel_header = new std::vector<std::unique_ptr<channel_header_t>>();
    m_channel_header->reserve(l_channel_header);
    for (int i = 0; i < l_channel_header; i++) {
        m_channel_header->push_back(std::move(std::unique_ptr<channel_header_t>(new channel_header_t(m__io, this, m__root))));
    }
}

wfm4_t::header_t::~header_t() {
}

wfm4_t::channel_data_t::channel_data_t(kaitai::kstream* p__io, wfm4_t* p__parent, wfm4_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_channel_1 = nullptr;
    m_channel_2 = nullptr;
    m_channel_3 = nullptr;
    m_channel_4 = nullptr;
    _read();
}

void wfm4_t::channel_data_t::_read() {
    int l_channel_1 = (_root()->header()->mem_depth() * ((_root()->header()->channel_mask()->channel_1()) ? (1) : (0)));
    m_channel_1 = new std::vector<uint8_t>();
    m_channel_1->reserve(l_channel_1);
    for (int i = 0; i < l_channel_1; i++) {
        m_channel_1->push_back(std::move(m__io->read_u1()));
    }
    m_padding_1 = m__io->read_bytes(((_root()->header()->bytes_per_channel_1() - _root()->header()->mem_depth()) * ((_root()->header()->channel_mask()->channel_1()) ? (1) : (0))));
    int l_channel_2 = (_root()->header()->mem_depth() * ((_root()->header()->channel_mask()->channel_2()) ? (1) : (0)));
    m_channel_2 = new std::vector<uint8_t>();
    m_channel_2->reserve(l_channel_2);
    for (int i = 0; i < l_channel_2; i++) {
        m_channel_2->push_back(std::move(m__io->read_u1()));
    }
    m_padding_2 = m__io->read_bytes(((_root()->header()->bytes_per_channel_1() - _root()->header()->mem_depth()) * ((_root()->header()->channel_mask()->channel_2()) ? (1) : (0))));
    int l_channel_3 = (_root()->header()->mem_depth() * ((_root()->header()->channel_mask()->channel_3()) ? (1) : (0)));
    m_channel_3 = new std::vector<uint8_t>();
    m_channel_3->reserve(l_channel_3);
    for (int i = 0; i < l_channel_3; i++) {
        m_channel_3->push_back(std::move(m__io->read_u1()));
    }
    m_padding_3 = m__io->read_bytes(((_root()->header()->bytes_per_channel_1() - _root()->header()->mem_depth()) * ((_root()->header()->channel_mask()->channel_3()) ? (1) : (0))));
    int l_channel_4 = (_root()->header()->mem_depth() * ((_root()->header()->channel_mask()->channel_4()) ? (1) : (0)));
    m_channel_4 = new std::vector<uint8_t>();
    m_channel_4->reserve(l_channel_4);
    for (int i = 0; i < l_channel_4; i++) {
        m_channel_4->push_back(std::move(m__io->read_u1()));
    }
    m_padding_4 = m__io->read_bytes(((_root()->header()->bytes_per_channel_1() - _root()->header()->mem_depth()) * ((_root()->header()->channel_mask()->channel_4()) ? (1) : (0))));
}

wfm4_t::channel_data_t::~channel_data_t() {
}

wfm4_t::scope_info_t::scope_info_t(kaitai::kstream* p__io, wfm4_t::header_t* p__parent, wfm4_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void wfm4_t::scope_info_t::_read() {
    m_serial = kaitai::kstream::bytes_to_str(m__io->read_bytes(16), std::string("ascii"));
    m_unk1 = m__io->read_bytes(4);
    m_firmware_version = kaitai::kstream::bytes_to_str(m__io->read_bytes(16), std::string("ascii"));
}

wfm4_t::scope_info_t::~scope_info_t() {
}

wfm4_t::header_t* wfm4_t::header() {
    if (f_header)
        return m_header.get();
    std::streampos _pos = m__io->pos();
    m__io->seek(0);
    m_header = std::unique_ptr<header_t>(new header_t(m__io, this, m__root));
    m__io->seek(_pos);
    f_header = true;
    return m_header.get();
}

wfm4_t::channel_data_t* wfm4_t::data() {
    if (f_data)
        return m_data.get();
    std::streampos _pos = m__io->pos();
    m__io->seek(20972);
    m_data = std::unique_ptr<channel_data_t>(new channel_data_t(m__io, this, m__root));
    m__io->seek(_pos);
    f_data = true;
    return m_data.get();
}
