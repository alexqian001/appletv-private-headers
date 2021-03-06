/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVDMAPBuffer : XXUnknownSuperclass {
	char *_bytes;	// 4 = 0x4
	int _capacity;	// 8 = 0x8
	int _bytesUsed;	// 12 = 0xc
	int _resizeCount;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) char *bytes;	// G=0xd4785; @synthesize=_bytes
@property(readonly, assign, nonatomic) int bytesUsed;	// G=0xd4775; @synthesize=_bytesUsed
+ (id)buffer;	// 0xd32a9
+ (id)bufferWithCapacity:(unsigned long)capacity;	// 0xd32f1
- (id)init;	// 0xd3339
- (id)initWithCapacity:(unsigned long)capacity;	// 0xd334d
- (void)addData:(unsigned long)data dataToAdd:(id)add;	// 0xd3651
- (void)addFloat32:(unsigned long)a32 dataToAdd:(float)add;	// 0xd35e1
- (unsigned long)addHeader:(unsigned long)header;	// 0xd3401
- (void)addInt16:(unsigned long)a16 dataToAdd:(unsigned short)add;	// 0xd34e5
- (void)addInt32:(unsigned long)a32 dataToAdd:(unsigned long)add;	// 0xd3535
- (void)addInt64:(unsigned long)a64 dataToAdd:(unsigned long long)add;	// 0xd3581
- (void)addInt8:(unsigned long)a8 dataToAdd:(unsigned char)add;	// 0xd3499
- (void)addMLProperty:(id)property dataToAdd:(id)add;	// 0xd37e5
- (void)addRawInt32:(unsigned long)a32;	// 0xd36d5
- (void)addRawInt64:(unsigned long long)a64;	// 0xd36f9
- (void)addUTF8Str:(unsigned long)str dataToAdd:(const char *)add;	// 0xd35f1
- (void)appendBuffer:(const void *)buffer length:(unsigned long)length;	// 0xd3729
- (id)bufferData;	// 0xd4739
// declared property getter: - (char *)bytes;	// 0xd4785
// declared property getter: - (int)bytesUsed;	// 0xd4775
- (void)dealloc;	// 0xd33bd
- (unsigned long)dmapCodeForMLProperty:(id)mlproperty;	// 0xd3901
- (int)dmapDataTypeForDMAPCode:(unsigned long)dmapcode;	// 0xd42c5
- (void)updateHeaderAtOffset:(unsigned long)offset;	// 0xd3449
@end

