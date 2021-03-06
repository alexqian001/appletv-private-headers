/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterTerminalHelper.h"

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
	NSError *_terminalError;	// 12 = 0xc
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x3267ec4d
- (id)initWithConfigurationState:(id)configurationState terminalError:(id)error;	// 0x3267ec61
- (void)dealloc;	// 0x3267ed21
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x3267ed85
- (id)error;	// 0x3267ed71
- (void)finishWriting;	// 0x3267ed89
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x3267ed81
- (int)status;	// 0x3267ed6d
@end

