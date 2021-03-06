/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraDevice.h"

@class PTPInitiator;

@interface PTPCameraDevice : ICCameraDevice {
	void *_ptpCameraProperties;	// 12 = 0xc
}
@property(readonly, assign) PTPInitiator *initiator;	// G=0x312810ed; 
- (id)initWithTCPIPInfo:(id)tcpipinfo;	// 0x31280b79
- (id)initWithUSBLocationID:(unsigned)usblocationID;	// 0x312806fd
- (void)addToEventHandlerQ:(id)eventHandlerQ;	// 0x31281291
- (void)dealloc;	// 0x31281035
- (BOOL)eject;	// 0x312811a5
- (void)enumerateContent;	// 0x31281101
- (void)finalize;	// 0x31281091
// declared property getter: - (id)initiator;	// 0x312810ed
@end

