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
@property(readonly, assign, nonatomic) char *bytes;	// G=0xc2971; @synthesize=_bytes
@property(readonly, assign, nonatomic) int bytesUsed;	// G=0xc2961; @synthesize=_bytesUsed
+ (id)buffer;	// 0xc1519
+ (id)bufferWithCapacity:(unsigned long)capacity;	// 0xc1561
- (id)init;	// 0xc15a9
- (id)initWithCapacity:(unsigned long)capacity;	// 0xc15bd
- (void)addFloat32:(unsigned long)a32 dataToAdd:(float)add;	// 0xc1851
- (unsigned long)addHeader:(unsigned long)header;	// 0xc1671
- (void)addInt16:(unsigned long)a16 dataToAdd:(unsigned short)add;	// 0xc1755
- (void)addInt32:(unsigned long)a32 dataToAdd:(unsigned long)add;	// 0xc17a5
- (void)addInt64:(unsigned long)a64 dataToAdd:(unsigned long long)add;	// 0xc17f1
- (void)addInt8:(unsigned long)a8 dataToAdd:(unsigned char)add;	// 0xc1709
- (void)addMLProperty:(id)property dataToAdd:(id)add;	// 0xc19d1
- (void)addRawInt32:(unsigned long)a32;	// 0xc18c1
- (void)addRawInt64:(unsigned long long)a64;	// 0xc18e5
- (void)addUTF8Str:(unsigned long)str dataToAdd:(const char *)add;	// 0xc1861
- (void)appendBuffer:(const void *)buffer length:(unsigned long)length;	// 0xc1915
- (id)bufferData;	// 0xc2925
// declared property getter: - (char *)bytes;	// 0xc2971
// declared property getter: - (int)bytesUsed;	// 0xc2961
- (void)dealloc;	// 0xc162d
- (unsigned long)dmapCodeForMLProperty:(id)mlproperty;	// 0xc1aed
- (int)dmapDataTypeForDMAPCode:(unsigned long)dmapcode;	// 0xc24b1
- (void)updateHeaderAtOffset:(unsigned long)offset;	// 0xc16b9
@end
