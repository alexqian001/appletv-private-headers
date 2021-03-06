/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterHelper.h"
#import "AVFoundation-Structs.h"
#import "AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h"

@class AVAssetWriterFigAssetWriterNotificationHandler, NSObject, AVWeakReference;
@protocol OS_dispatch_queue;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
	AVWeakReference *_weakReference;	// 12 = 0xc
	OpaqueFigAssetWriter *_figAssetWriter;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;	// 20 = 0x14
	BOOL _startSessionCalled;	// 24 = 0x18
	AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;	// 28 = 0x1c
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x302753d1
- (id)initWithConfigurationState:(id)configurationState error:(id *)error;	// 0x302753e5
- (OpaqueFigAssetWriter *)_retainedFigAssetWriter;	// 0x30276001
- (void)cancelWriting;	// 0x302760e1
- (void)dealloc;	// 0x30275d05
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)success error:(id)error;	// 0x30275df1
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x30275e79
- (id)figTrackReferences;	// 0x30275a19
- (void)finalize;	// 0x30275d95
- (void)finishWriting;	// 0x30276379
- (void)finishWritingWithCompletionHandler:(id)completionHandler;	// 0x3027653d
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x30275e09
- (int)status;	// 0x30275e05
@end

