# rigol-ds4000-wfm
Reverse engineering the waveform format of the Rigol DS4000 series of
oscilloscopes. The format is in `wfm4.ksy` described using [Kaitai
Struct's](https://kaitai.io/) language. A generated parser for C++ is in
`wfm4.cpp` and `wfm4.h`.

## Structure

The settings of the oscilloscope seem to be in the range 0x00-0xEC1. After
that, the range 0xEC2-0x51EB seems to be filled by random data (after the
oscilloscope boots) or partial data from the last saved file (after a file has
been saved). The remaining data starting at offset 0x51EC contains the channel
data and padding.
