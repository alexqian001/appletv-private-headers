/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

#import <NSObject.h> // Unknown library

@class NSMutableData, FirmwareBundle;
@protocol iAUPServerDelegate;

@interface iAUPServer : NSObject {
	int _parserState;	// 4 = 0x4
	BOOL _escapeInProgress;	// 8 = 0x8
	unsigned _telegramLength;	// 12 = 0xc
	unsigned char _telegramChecksum;	// 16 = 0x10
	NSMutableData *_telegramDataIn;	// 20 = 0x14
	unsigned short objectBlockTransferSizes[4];	// 24 = 0x18
	unsigned _firmwareImageBaseTransferAddress;	// 32 = 0x20
	FirmwareBundle *firmwareBundle;	// 36 = 0x24
	id<iAUPServerDelegate> _delegate;	// 40 = 0x28
}
@property(retain, nonatomic) FirmwareBundle *firmwareBundle;	// G=0x347fdf6d; S=0x347fd4d5; @synthesize
+ (id)sharedServer;	// 0x347fd515
- (id)init;	// 0x347fd3d5
- (unsigned char)appendByteWithEscaping:(unsigned char)escaping toObject:(id *)object;	// 0x347fddf1
- (void)appendToLog:(id)log;	// 0x347fd5c1
- (void)dealloc;	// 0x347fd485
// declared property getter: - (id)firmwareBundle;	// 0x347fdf6d
- (void)logCommand:(unsigned char)command payload:(char *)payload length:(unsigned)length;	// 0x347fd5d9
- (void)processInByte:(unsigned char)byte;	// 0x347fd8b1
- (void)processInTelegram;	// 0x347fd9f5
- (void)resetParser;	// 0x347fd57d
- (void)sendCommand:(unsigned char)command payload:(char *)payload payload_length:(unsigned short)length;	// 0x347fde45
- (void)setDelegate:(id)delegate;	// 0x347fdf5d
// declared property setter: - (void)setFirmwareBundle:(id)bundle;	// 0x347fd4d5
- (unsigned)supportedTargetProductIDCode;	// 0x347fd55d
@end
