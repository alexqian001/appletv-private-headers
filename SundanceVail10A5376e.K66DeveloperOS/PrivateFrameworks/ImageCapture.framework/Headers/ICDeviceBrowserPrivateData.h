/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject {
	id _delegate;	// 4 = 0x4
	BOOL _browsing;	// 8 = 0x8
	NSMutableArray *_internalDevices;	// 12 = 0xc
}
@property(assign, getter=isBrowsing) BOOL browsing;	// G=0x30d6fe09; S=0x30d6fe21; @synthesize=_browsing
@property(assign) id delegate;	// G=0x30d6fddd; S=0x30d6fdf1; @synthesize=_delegate
@property(retain) NSMutableArray *internalDevices;	// G=0x30d6fe39; S=0x30d6fe4d; @synthesize=_internalDevices
- (void)dealloc;	// 0x30d6fd2d
// declared property getter: - (id)delegate;	// 0x30d6fddd
- (void)finalize;	// 0x30d6fd85
// declared property getter: - (id)internalDevices;	// 0x30d6fe39
// declared property getter: - (BOOL)isBrowsing;	// 0x30d6fe09
// declared property setter: - (void)setBrowsing:(BOOL)browsing;	// 0x30d6fe21
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30d6fdf1
// declared property setter: - (void)setInternalDevices:(id)devices;	// 0x30d6fe4d
@end
