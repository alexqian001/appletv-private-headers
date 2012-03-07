/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library

@class DeviceManager, NSString;

@interface ICDeviceProperties : NSObject {
	id _delegate;	// 4 = 0x4
	DeviceManager *_deviceManager;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	CGImageRef _icon;	// 16 = 0x10
	NSString *_productKind;	// 20 = 0x14
	NSString *_transportType;	// 24 = 0x18
	NSString *_UUIDString;	// 28 = 0x1c
	int _usbLocationID;	// 32 = 0x20
	int _usbProductID;	// 36 = 0x24
	int _usbVendorID;	// 40 = 0x28
	BOOL _hasOpenSession;	// 44 = 0x2c
	BOOL _autoOpenSession;	// 45 = 0x2d
	BOOL _openSessionPending;	// 46 = 0x2e
	BOOL _closeSessionPending;	// 47 = 0x2f
}
@property(retain) NSString *UUIDString;	// G=0x3222beb9; S=0x3222be95; @synthesize=_UUIDString
@property(assign) BOOL autoOpenSession;	// G=0x3222b699; S=0x3222b6a9; @synthesize=_autoOpenSession
@property(assign) BOOL closeSessionPending;	// G=0x3222b659; S=0x3222b669; @synthesize=_closeSessionPending
@property(assign) id delegate;	// G=0x3222b759; S=0x3222b769; @synthesize=_delegate
@property(assign) DeviceManager *deviceManager;	// G=0x3222b739; S=0x3222b749; @synthesize=_deviceManager
@property(assign) BOOL hasOpenSession;	// G=0x3222b6b9; S=0x3222b6c9; @synthesize=_hasOpenSession
@property(assign) CGImageRef icon;	// G=0x3222b649; S=0x3222b789; @dynamic
@property(retain) NSString *name;	// G=0x3222be05; S=0x3222bde1; @synthesize=_name
@property(assign) BOOL openSessionPending;	// G=0x3222b679; S=0x3222b689; @synthesize=_openSessionPending
@property(retain) NSString *productKind;	// G=0x3222be41; S=0x3222be1d; @synthesize=_productKind
@property(retain) NSString *transportType;	// G=0x3222be7d; S=0x3222be59; @synthesize=_transportType
@property(assign) int usbLocationID;	// G=0x3222b719; S=0x3222b729; @synthesize=_usbLocationID
@property(assign) int usbProductID;	// G=0x3222b6f9; S=0x3222b709; @synthesize=_usbProductID
@property(assign) int usbVendorID;	// G=0x3222b6d9; S=0x3222b6e9; @synthesize=_usbVendorID
// declared property getter: - (id)UUIDString;	// 0x3222beb9
// declared property getter: - (BOOL)autoOpenSession;	// 0x3222b699
// declared property getter: - (BOOL)closeSessionPending;	// 0x3222b659
- (void)dealloc;	// 0x3222bd3d
// declared property getter: - (id)delegate;	// 0x3222b759
// declared property getter: - (id)deviceManager;	// 0x3222b739
- (void)finalize;	// 0x3222bed1
// declared property getter: - (BOOL)hasOpenSession;	// 0x3222b6b9
// declared property getter: - (CGImageRef)icon;	// 0x3222b649
// declared property getter: - (id)name;	// 0x3222be05
// declared property getter: - (BOOL)openSessionPending;	// 0x3222b679
// declared property getter: - (id)productKind;	// 0x3222be41
// declared property setter: - (void)setAutoOpenSession:(BOOL)session;	// 0x3222b6a9
// declared property setter: - (void)setCloseSessionPending:(BOOL)pending;	// 0x3222b669
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3222b769
// declared property setter: - (void)setDeviceManager:(id)manager;	// 0x3222b749
// declared property setter: - (void)setHasOpenSession:(BOOL)session;	// 0x3222b6c9
// declared property setter: - (void)setIcon:(CGImageRef)icon;	// 0x3222b789
// declared property setter: - (void)setName:(id)name;	// 0x3222bde1
// declared property setter: - (void)setOpenSessionPending:(BOOL)pending;	// 0x3222b689
// declared property setter: - (void)setProductKind:(id)kind;	// 0x3222be1d
// declared property setter: - (void)setTransportType:(id)type;	// 0x3222be59
// declared property setter: - (void)setUUIDString:(id)string;	// 0x3222be95
// declared property setter: - (void)setUsbLocationID:(int)anId;	// 0x3222b729
// declared property setter: - (void)setUsbProductID:(int)anId;	// 0x3222b709
// declared property setter: - (void)setUsbVendorID:(int)anId;	// 0x3222b6e9
// declared property getter: - (id)transportType;	// 0x3222be7d
// declared property getter: - (int)usbLocationID;	// 0x3222b719
// declared property getter: - (int)usbProductID;	// 0x3222b6f9
// declared property getter: - (int)usbVendorID;	// 0x3222b6d9
@end
