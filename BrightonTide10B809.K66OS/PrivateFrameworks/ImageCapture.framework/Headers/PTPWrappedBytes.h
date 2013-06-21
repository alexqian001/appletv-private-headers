/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPWrappedBytes : NSObject {
	unsigned long long _offset;	// 4 = 0x4
	unsigned long long _capacity;	// 12 = 0xc
	BOOL _allocatedBytes;	// 20 = 0x14
	char *_bytes;	// 24 = 0x18
	int _fd;	// 28 = 0x1c
	BOOL _useByteBuffer;	// 32 = 0x20
	unsigned long long _excessDataLength;	// 36 = 0x24
	double _progressNotificationTime;	// 44 = 0x2c
	/*function-pointer*/ void *_progressNotifier;	// 52 = 0x34
	void *_progressNotifierContext;	// 56 = 0x38
	int _lastNotifiedProgress;	// 60 = 0x3c
}
@property(readonly, assign) unsigned long long excessDataLength;	// G=0x3421a539; converted property
@property(assign) unsigned long long length64;	// G=0x34219f0d; S=0x34219f25; converted property
@property(readonly, assign) unsigned long long offset;	// G=0x34219fad; converted property
+ (id)wrappedBytesWithBytes:(void *)bytes capacity64:(unsigned long long)a64;	// 0x34219bb5
+ (id)wrappedBytesWithCapacity64:(unsigned long long)capacity64;	// 0x34219b69
- (id)init;	// 0x34219c9d
- (id)initWithBytes:(void *)bytes capacity64:(unsigned long long)a64;	// 0x34219cb1
- (id)initWithCapacity64:(unsigned long long)capacity64;	// 0x34219c09
- (id)initWithFileDescriptor:(int)fileDescriptor capacity64:(unsigned long long)a64;	// 0x34219d39
- (unsigned long long)appendBytes:(const void *)bytes length64:(unsigned long long)a64;	// 0x3421a259
- (unsigned long long)appendData:(id)data;	// 0x34219fc5
- (const void *)bytes;	// 0x34219f75
- (unsigned long long)capacity64;	// 0x34219e79
- (void)dealloc;	// 0x34219e05
- (id)description;	// 0x3421a5c9
// converted property getter: - (unsigned long long)excessDataLength;	// 0x3421a539
// converted property getter: - (unsigned long long)length64;	// 0x34219f0d
- (void *)mutableBytes;	// 0x34219f85
// converted property getter: - (unsigned long long)offset;	// 0x34219fad
- (double)percentFull;	// 0x3421a551
- (unsigned long long)rewindBytesToPosition64:(unsigned long long)position64;	// 0x3421a4e9
- (unsigned long long)setCapacity64:(unsigned long long)a64;	// 0x34219e91
// converted property setter: - (void)setLength64:(unsigned long long)a64;	// 0x34219f25
- (void)setProgressNotifierCallback:(/*function-pointer*/ void *)callback context:(void *)context;	// 0x34219dbd
- (BOOL)wasInitWithFD;	// 0x34219f95
@end
