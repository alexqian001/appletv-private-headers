/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterHelper.h"
#import "AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h"

@class AVAssetWriterFigAssetWriterNotificationHandler, AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
	AVWeakReference *_weakReference;	// 12 = 0xc
	OpaqueFigAssetWriter *_figAssetWriter;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;	// 20 = 0x14
	BOOL _startSessionCalled;	// 24 = 0x18
	AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;	// 28 = 0x1c
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x2c296c81
- (id)initWithConfigurationState:(id)configurationState error:(id *)error;	// 0x2c296c95
- (OpaqueFigAssetWriter *)_retainedFigAssetWriter;	// 0x2c2979d5
- (void)cancelWriting;	// 0x2c297ab9
- (void)dealloc;	// 0x2c2976d9
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)success error:(id)error;	// 0x2c2977c5
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x2c29784d
- (id)figTrackReferences;	// 0x2c2973e9
- (void)finalize;	// 0x2c297769
- (void)finishWriting;	// 0x2c297d49
- (void)finishWritingWithCompletionHandler:(id)completionHandler;	// 0x2c297f1d
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x2c2977dd
- (int)status;	// 0x2c2977d9
@end

