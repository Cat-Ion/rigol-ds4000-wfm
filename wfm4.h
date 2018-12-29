#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"

#include <stdint.h>
#include <memory>
#include <vector>

#if KAITAI_STRUCT_VERSION < 7000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.7 or later is required"
#endif

class wfm4_t : public kaitai::kstruct {

public:
    class time_header_t;
    class channel_mask_t;
    class channel_header_t;
    class header_t;
    class channel_data_t;
    class scope_info_t;

    enum probe_scale_t {
        PROBE_SCALE_XP01 = 0,
        PROBE_SCALE_XP02 = 1,
        PROBE_SCALE_XP05 = 2,
        PROBE_SCALE_XP1 = 3,
        PROBE_SCALE_XP2 = 4,
        PROBE_SCALE_XP5 = 5,
        PROBE_SCALE_X1 = 6,
        PROBE_SCALE_X2 = 7,
        PROBE_SCALE_X5 = 8,
        PROBE_SCALE_X10 = 9,
        PROBE_SCALE_X20 = 10,
        PROBE_SCALE_X50 = 11,
        PROBE_SCALE_X100 = 12
    };

    enum bandwidth_limit_t {
        BANDWIDTH_LIMIT_NONE = 0,
        BANDWIDTH_LIMIT_MHZ_50 = 1,
        BANDWIDTH_LIMIT_MHZ_100 = 2,
        BANDWIDTH_LIMIT_MHZ_200 = 3
    };

    enum channel_coupling_t {
        CHANNEL_COUPLING_DC = 0,
        CHANNEL_COUPLING_AC = 1,
        CHANNEL_COUPLING_GND = 2
    };

    enum channel_scale_t {
        CHANNEL_SCALE_MV_1 = 0,
        CHANNEL_SCALE_MV_2 = 1,
        CHANNEL_SCALE_MV_5 = 2,
        CHANNEL_SCALE_MV_10 = 3,
        CHANNEL_SCALE_MV_20 = 4,
        CHANNEL_SCALE_MV_50 = 5,
        CHANNEL_SCALE_MV_100 = 6,
        CHANNEL_SCALE_MV_200 = 7,
        CHANNEL_SCALE_MV_500 = 8,
        CHANNEL_SCALE_MV_1000 = 9,
        CHANNEL_SCALE_MV_2000 = 10,
        CHANNEL_SCALE_MV_5000 = 11
    };

    enum probe_impedance_t {
        PROBE_IMPEDANCE_OHM_50 = 0,
        PROBE_IMPEDANCE_OHM_1MEG = 1
    };

    enum mem_depth_t {
        MEM_DEPTH_AUTO = 0,
        MEM_DEPTH_P_7K = 1,
        MEM_DEPTH_P_70K = 2,
        MEM_DEPTH_P_700K = 3,
        MEM_DEPTH_P_7M = 4,
        MEM_DEPTH_P_70M = 5,
        MEM_DEPTH_P_14K = 6,
        MEM_DEPTH_P_140K = 7,
        MEM_DEPTH_P_1M4 = 8,
        MEM_DEPTH_P_14M = 9,
        MEM_DEPTH_P_140M = 10
    };

    wfm4_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, wfm4_t* p__root = nullptr);

private:
    void _read();

public:
    ~wfm4_t();

    class time_header_t : public kaitai::kstruct {

    public:

        time_header_t(kaitai::kstream* p__io, wfm4_t::header_t* p__parent = nullptr, wfm4_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~time_header_t();

    private:
        uint8_t m_unk1;
        std::string m_unk2_exp;
        uint32_t m_index;
        uint32_t m_time_per_div_ps;
        std::string m_pad1;
        uint32_t m_unk3;
        std::vector<uint32_t>* m_unk4;
        uint64_t m_delay_ps;
        uint32_t m_unk5;
        std::string m_unk6_exp;
        uint16_t m_unk7_exp;
        wfm4_t* m__root;
        wfm4_t::header_t* m__parent;

    public:
        uint8_t unk1() const { return m_unk1; }
        std::string unk2_exp() const { return m_unk2_exp; }
        uint32_t index() const { return m_index; }
        uint32_t time_per_div_ps() const { return m_time_per_div_ps; }
        std::string pad1() const { return m_pad1; }
        uint32_t unk3() const { return m_unk3; }
        std::vector<uint32_t>* unk4() const { return m_unk4; }
        uint64_t delay_ps() const { return m_delay_ps; }
        uint32_t unk5() const { return m_unk5; }
        std::string unk6_exp() const { return m_unk6_exp; }
        uint16_t unk7_exp() const { return m_unk7_exp; }
        wfm4_t* _root() const { return m__root; }
        wfm4_t::header_t* _parent() const { return m__parent; }
    };

    class channel_mask_t : public kaitai::kstruct {

    public:

        channel_mask_t(kaitai::kstream* p__io, wfm4_t::header_t* p__parent = nullptr, wfm4_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~channel_mask_t();

    private:
        uint64_t m_unused;
        bool m_channel_4;
        bool m_channel_3;
        bool m_channel_2;
        bool m_channel_1;
        wfm4_t* m__root;
        wfm4_t::header_t* m__parent;

    public:
        uint64_t unused() const { return m_unused; }
        bool channel_4() const { return m_channel_4; }
        bool channel_3() const { return m_channel_3; }
        bool channel_2() const { return m_channel_2; }
        bool channel_1() const { return m_channel_1; }
        wfm4_t* _root() const { return m__root; }
        wfm4_t::header_t* _parent() const { return m__parent; }
    };

    class channel_header_t : public kaitai::kstruct {

    public:

        channel_header_t(kaitai::kstream* p__io, wfm4_t::header_t* p__parent = nullptr, wfm4_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~channel_header_t();

    private:
        std::string m_unk12_exp;
        channel_coupling_t m_coupling;
        bandwidth_limit_t m_bandwidth_limit;
        std::string m_unk13_exp;
        probe_scale_t m_probe_scale;
        std::string m_unk1_exp;
        probe_impedance_t m_probe_impedance;
        channel_scale_t m_scale_index;
        std::string m_unk2_exp;
        std::string m_label;
        std::string m_unk3_exp;
        std::string m_unk6_exp;
        std::string m_unk7_exp;
        std::string m_unk8_exp;
        uint32_t m_scale_microvolt;
        int32_t m_offset_uv;
        int16_t m_unk11;
        std::string m_unk12;
        wfm4_t* m__root;
        wfm4_t::header_t* m__parent;

    public:
        std::string unk12_exp() const { return m_unk12_exp; }
        channel_coupling_t coupling() const { return m_coupling; }
        bandwidth_limit_t bandwidth_limit() const { return m_bandwidth_limit; }
        std::string unk13_exp() const { return m_unk13_exp; }
        probe_scale_t probe_scale() const { return m_probe_scale; }
        std::string unk1_exp() const { return m_unk1_exp; }
        probe_impedance_t probe_impedance() const { return m_probe_impedance; }
        channel_scale_t scale_index() const { return m_scale_index; }
        std::string unk2_exp() const { return m_unk2_exp; }
        std::string label() const { return m_label; }
        std::string unk3_exp() const { return m_unk3_exp; }
        std::string unk6_exp() const { return m_unk6_exp; }
        std::string unk7_exp() const { return m_unk7_exp; }
        std::string unk8_exp() const { return m_unk8_exp; }
        uint32_t scale_microvolt() const { return m_scale_microvolt; }
        int32_t offset_uv() const { return m_offset_uv; }
        int16_t unk11() const { return m_unk11; }
        std::string unk12() const { return m_unk12; }
        wfm4_t* _root() const { return m__root; }
        wfm4_t::header_t* _parent() const { return m__parent; }
    };

    class header_t : public kaitai::kstruct {

    public:

        header_t(kaitai::kstream* p__io, wfm4_t* p__parent = nullptr, wfm4_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~header_t();

    private:
        std::string m_magic;
        std::unique_ptr<scope_info_t> m_scope_info;
        std::vector<uint32_t>* m_unk1;
        std::unique_ptr<channel_mask_t> m_channel_mask;
        std::string m_unk2;
        std::vector<uint32_t>* m_unk3;
        std::string m_unk2_p7_exp;
        uint32_t m_mem_depth;
        float m_samp_rate;
        std::string m_unk8_exp;
        uint32_t m_time_per_div_ps;
        std::vector<uint32_t>* m_unk9;
        float m_unk11;
        std::vector<uint32_t>* m_unk12;
        std::string m_unk13_exp;
        std::string m_unk14_exp;
        std::vector<uint32_t>* m_unk15;
        float m_unk17;
        std::vector<uint32_t>* m_unk18;
        std::string m_unk19_exp;
        std::string m_unk20_exp;
        std::vector<uint32_t>* m_unk21_exp;
        float m_unk22;
        std::vector<uint32_t>* m_unk23;
        std::string m_unk24_exp;
        std::string m_unk25_exp;
        std::vector<uint32_t>* m_unk26;
        float m_unk27;
        float m_unk28;
        uint32_t m_unk29_exp;
        std::string m_unk30_exp;
        std::string m_unk31_exp;
        std::string m_unk32_exp;
        std::string m_unk33_exp;
        std::string m_unk34_exp;
        std::string m_unk35_exp;
        std::string m_unk36_exp;
        uint32_t m_mem_depth_2;
        std::string m_unk37_exp;
        uint32_t m_mem_depth_3;
        std::vector<uint32_t>* m_unk38;
        uint32_t m_unk40_data_len_p;
        uint32_t m_unk41_data_len_p;
        uint32_t m_bytes_per_channel_1;
        uint32_t m_bytes_per_channel_2;
        std::vector<uint32_t>* m_unk42;
        std::string m_unk49_exp;
        uint32_t m_unk50;
        std::string m_unk51_exp;
        std::vector<uint32_t>* m_unk52;
        std::string m_unk53_exp;
        std::string m_unk54_exp;
        std::vector<uint32_t>* m_unk55;
        uint32_t m_total_samples;
        std::string m_unk56_exp;
        std::vector<uint32_t>* m_unk57;
        std::string m_unk59_exp;
        mem_depth_t m_mem_depth_enum;
        std::string m_unk60_exp;
        std::string m_unk61_exp;
        std::unique_ptr<time_header_t> m_time_header;
        std::vector<std::unique_ptr<channel_header_t>>* m_channel_header;
        wfm4_t* m__root;
        wfm4_t* m__parent;

    public:
        std::string magic() const { return m_magic; }
        scope_info_t* scope_info() const { return m_scope_info.get(); }
        std::vector<uint32_t>* unk1() const { return m_unk1; }
        channel_mask_t* channel_mask() const { return m_channel_mask.get(); }
        std::string unk2() const { return m_unk2; }
        std::vector<uint32_t>* unk3() const { return m_unk3; }
        std::string unk2_p7_exp() const { return m_unk2_p7_exp; }
        uint32_t mem_depth() const { return m_mem_depth; }
        float samp_rate() const { return m_samp_rate; }
        std::string unk8_exp() const { return m_unk8_exp; }
        uint32_t time_per_div_ps() const { return m_time_per_div_ps; }
        std::vector<uint32_t>* unk9() const { return m_unk9; }
        float unk11() const { return m_unk11; }
        std::vector<uint32_t>* unk12() const { return m_unk12; }
        std::string unk13_exp() const { return m_unk13_exp; }
        std::string unk14_exp() const { return m_unk14_exp; }
        std::vector<uint32_t>* unk15() const { return m_unk15; }
        float unk17() const { return m_unk17; }
        std::vector<uint32_t>* unk18() const { return m_unk18; }
        std::string unk19_exp() const { return m_unk19_exp; }
        std::string unk20_exp() const { return m_unk20_exp; }
        std::vector<uint32_t>* unk21_exp() const { return m_unk21_exp; }
        float unk22() const { return m_unk22; }
        std::vector<uint32_t>* unk23() const { return m_unk23; }
        std::string unk24_exp() const { return m_unk24_exp; }
        std::string unk25_exp() const { return m_unk25_exp; }
        std::vector<uint32_t>* unk26() const { return m_unk26; }
        float unk27() const { return m_unk27; }
        float unk28() const { return m_unk28; }
        uint32_t unk29_exp() const { return m_unk29_exp; }
        std::string unk30_exp() const { return m_unk30_exp; }
        std::string unk31_exp() const { return m_unk31_exp; }
        std::string unk32_exp() const { return m_unk32_exp; }
        std::string unk33_exp() const { return m_unk33_exp; }
        std::string unk34_exp() const { return m_unk34_exp; }
        std::string unk35_exp() const { return m_unk35_exp; }
        std::string unk36_exp() const { return m_unk36_exp; }
        uint32_t mem_depth_2() const { return m_mem_depth_2; }
        std::string unk37_exp() const { return m_unk37_exp; }
        uint32_t mem_depth_3() const { return m_mem_depth_3; }
        std::vector<uint32_t>* unk38() const { return m_unk38; }
        uint32_t unk40_data_len_p() const { return m_unk40_data_len_p; }
        uint32_t unk41_data_len_p() const { return m_unk41_data_len_p; }
        uint32_t bytes_per_channel_1() const { return m_bytes_per_channel_1; }
        uint32_t bytes_per_channel_2() const { return m_bytes_per_channel_2; }
        std::vector<uint32_t>* unk42() const { return m_unk42; }
        std::string unk49_exp() const { return m_unk49_exp; }
        uint32_t unk50() const { return m_unk50; }
        std::string unk51_exp() const { return m_unk51_exp; }
        std::vector<uint32_t>* unk52() const { return m_unk52; }
        std::string unk53_exp() const { return m_unk53_exp; }
        std::string unk54_exp() const { return m_unk54_exp; }
        std::vector<uint32_t>* unk55() const { return m_unk55; }
        uint32_t total_samples() const { return m_total_samples; }
        std::string unk56_exp() const { return m_unk56_exp; }
        std::vector<uint32_t>* unk57() const { return m_unk57; }
        std::string unk59_exp() const { return m_unk59_exp; }
        mem_depth_t mem_depth_enum() const { return m_mem_depth_enum; }
        std::string unk60_exp() const { return m_unk60_exp; }
        std::string unk61_exp() const { return m_unk61_exp; }
        time_header_t* time_header() const { return m_time_header.get(); }
        std::vector<std::unique_ptr<channel_header_t>>* channel_header() const { return m_channel_header; }
        wfm4_t* _root() const { return m__root; }
        wfm4_t* _parent() const { return m__parent; }
    };

    class channel_data_t : public kaitai::kstruct {

    public:

        channel_data_t(kaitai::kstream* p__io, wfm4_t* p__parent = nullptr, wfm4_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~channel_data_t();

    private:
        std::vector<uint8_t>* m_channel_1;
        std::string m_padding_1;
        std::vector<uint8_t>* m_channel_2;
        std::string m_padding_2;
        std::vector<uint8_t>* m_channel_3;
        std::string m_padding_3;
        std::vector<uint8_t>* m_channel_4;
        std::string m_padding_4;
        wfm4_t* m__root;
        wfm4_t* m__parent;

    public:
        std::vector<uint8_t>* channel_1() const { return m_channel_1; }
        std::string padding_1() const { return m_padding_1; }
        std::vector<uint8_t>* channel_2() const { return m_channel_2; }
        std::string padding_2() const { return m_padding_2; }
        std::vector<uint8_t>* channel_3() const { return m_channel_3; }
        std::string padding_3() const { return m_padding_3; }
        std::vector<uint8_t>* channel_4() const { return m_channel_4; }
        std::string padding_4() const { return m_padding_4; }
        wfm4_t* _root() const { return m__root; }
        wfm4_t* _parent() const { return m__parent; }
    };

    class scope_info_t : public kaitai::kstruct {

    public:

        scope_info_t(kaitai::kstream* p__io, wfm4_t::header_t* p__parent = nullptr, wfm4_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~scope_info_t();

    private:
        std::string m_serial;
        std::string m_unk1;
        std::string m_firmware_version;
        wfm4_t* m__root;
        wfm4_t::header_t* m__parent;

    public:
        std::string serial() const { return m_serial; }
        std::string unk1() const { return m_unk1; }
        std::string firmware_version() const { return m_firmware_version; }
        wfm4_t* _root() const { return m__root; }
        wfm4_t::header_t* _parent() const { return m__parent; }
    };

private:
    bool f_header;
    std::unique_ptr<header_t> m_header;

public:
    header_t* header();

private:
    bool f_data;
    std::unique_ptr<channel_data_t> m_data;

public:
    channel_data_t* data();

private:
    wfm4_t* m__root;
    kaitai::kstruct* m__parent;

public:
    wfm4_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};
