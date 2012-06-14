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
@property(assign, getter=isBrowsing) BOOL browsing;	// G=0x325f3719; S=0x325f3729; @synthesize=_browsing
@property(assign) id delegate;	// G=0x325f3739; S=0x325f3749; @synthesize=_delegate
@property(retain) NSMutableArray *internalDevices;	// G=0x325f3919; S=0x325f38f5; @synthesize=_internalDevices
- (void)dealloc;	// 0x325f38a1
// declared property getter: - (id)delegate;	// 0x325f3739
- (void)finalize;	// 0x325f3931
// declared property getter: - (id)internalDevices;	// 0x325f3919
// declared property getter: - (BOOL)isBrowsing;	// 0x325f3719
// declared property setter: - (void)setBrowsing:(BOOL)browsing;	// 0x325f3729
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x325f3749
// declared property setter: - (void)setInternalDevices:(id)devices;	// 0x325f38f5
@end
