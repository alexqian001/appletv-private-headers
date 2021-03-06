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
- (id)initWithConfigurationState:(id)configurationState;	// 0x30271d71
- (id)initWithConfigurationState:(id)configurationState error:(id *)error;	// 0x30271d85
- (OpaqueFigAssetWriter *)_retainedFigAssetWriter;	// 0x30272979
- (void)cancelWriting;	// 0x30272a59
- (void)dealloc;	// 0x3027267d
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)success error:(id)error;	// 0x30272769
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x302727f1
- (id)figTrackReferences;	// 0x30272391
- (void)finalize;	// 0x3027270d
- (void)finishWriting;	// 0x30272c8d
- (void)finishWritingWithCompletionHandler:(id)completionHandler;	// 0x30272e51
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x30272781
- (int)status;	// 0x3027277d
@end

