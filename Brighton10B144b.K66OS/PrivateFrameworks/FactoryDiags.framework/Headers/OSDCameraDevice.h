/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library
#import "FactoryDiags-Structs.h"


@interface OSDCameraDevice : NSObject {
	H4ISPDevice *_pH4ISPDevice;	// 4 = 0x4
	H4ISPDeviceController *_pH4ISPDeviceController;	// 8 = 0x8
	H4ISPFrameReceiver *_pFrameReceiver[2];	// 12 = 0xc
	unsigned _cameraPosition;	// 20 = 0x14
}
@property(assign, nonatomic) unsigned cameraPosition;	// G=0x33efa985; S=0x33efa995; @synthesize=_cameraPosition
- (id)init;	// 0x33efa569
- (id)initWithCameraPosition:(unsigned)cameraPosition;	// 0x33efa5a9
// declared property getter: - (unsigned)cameraPosition;	// 0x33efa985
- (unsigned)getErrorCount;	// 0x33efa8b1
- (BOOL)off;	// 0x33efa649
- (BOOL)on;	// 0x33efa5e9
- (BOOL)openISPDevice;	// 0x33efa8ed
// declared property setter: - (void)setCameraPosition:(unsigned)position;	// 0x33efa995
- (BOOL)startStreaming;	// 0x33efa691
- (BOOL)stopStreaming;	// 0x33efa86d
@end

