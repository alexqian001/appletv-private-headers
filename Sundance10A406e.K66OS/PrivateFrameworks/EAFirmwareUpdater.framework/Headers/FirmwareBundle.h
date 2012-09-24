/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

#import <NSObject.h> // Unknown library

@class NSData;

@interface FirmwareBundle : NSObject {
	NSData *hash;	// 4 = 0x4
	NSData *firmwareImage;	// 8 = 0x8
	NSData *signature;	// 12 = 0xc
	NSData *certificate;	// 16 = 0x10
	unsigned productIDCode;	// 20 = 0x14
	unsigned firmwareImageBaseAddress;	// 24 = 0x18
	unsigned firmwareImageSize;	// 28 = 0x1c
}
@property(readonly, assign) NSData *certificate;	// G=0x3701b339; @synthesize
@property(readonly, assign) NSData *firmwareImage;	// G=0x3701b311; @synthesize
@property(readonly, assign) unsigned firmwareImageBaseAddress;	// G=0x3701b375; @synthesize
@property(readonly, assign) unsigned firmwareImageSize;	// G=0x3701b389; @synthesize
@property(readonly, assign) NSData *hash;	// G=0x3701b325; @synthesize
@property(readonly, assign) unsigned productIDCode;	// G=0x3701b361; @synthesize
@property(readonly, assign) NSData *signature;	// G=0x3701b34d; @synthesize
+ (id)parseResourceFileIntoData:(id)data;	// 0x3701aed9
- (id)initWithBundle:(id)bundle;	// 0x3701aaa9
- (id)initWithBundleName:(id)bundleName;	// 0x3701ae35
- (id)initWithBundlePath:(id)bundlePath;	// 0x3701add1
// declared property getter: - (id)certificate;	// 0x3701b339
- (void)dealloc;	// 0x3701b285
// declared property getter: - (id)firmwareImage;	// 0x3701b311
// declared property getter: - (unsigned)firmwareImageBaseAddress;	// 0x3701b375
// declared property getter: - (unsigned)firmwareImageSize;	// 0x3701b389
// declared property getter: - (id)hash;	// 0x3701b325
- (id)parseFirmwareImageFileIntoData:(id)data;	// 0x3701b039
// declared property getter: - (unsigned)productIDCode;	// 0x3701b361
// declared property getter: - (id)signature;	// 0x3701b34d
@end
