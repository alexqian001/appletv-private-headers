/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CATVApplication.h"
#import "AppleTV-Structs.h"

@class BREvent, NSMutableArray;
@protocol BRResponder;

__attribute__((visibility("hidden")))
@interface BRApplication : CATVApplication {
	BREvent *_currentEvent;	// 108 = 0x6c
	NSMutableArray *_eventQueue;	// 112 = 0x70
	CFRunLoopSourceRef _source;	// 116 = 0x74
	CFRunLoopRef _mainRunLoop;	// 120 = 0x78
	double _flushBeforeTimeStamp;	// 124 = 0x7c
	BOOL _handlingEvent;	// 132 = 0x84
	BOOL _eventsBlocked;	// 133 = 0x85
	BOOL _wantsSpaceCharacters;	// 134 = 0x86
	id<BRResponder> _firstBRResponder;	// 136 = 0x88
}
@property(readonly, retain) BREvent *currentEvent;	// G=0xf14d; converted property
@property(retain) id firstBRResponder;	// G=0xf0d5; S=0xf0e9; converted property
@property(assign) BOOL wantsSpaceCharacters;	// G=0xf12d; S=0xf13d; converted property
+ (void)_setupLogging;	// 0xeb35
+ (BOOL)registerAsSystemApp;	// 0xf481
+ (id)sharedApplication;	// 0xeb09
- (id)init;	// 0xee69
- (void).cxx_destruct;	// 0xf695
- (id)BRApplicationDelegate;	// 0xf0c5
- (id)_accessibilityResponderElement;	// 0xfb41
- (void)_handler;	// 0xf6dd
- (BOOL)_processForTypeahead:(id)typeahead wasHandledAlready:(BOOL)already;	// 0x41d0d5
- (BOOL)_willSendEventForHandling:(id *)handling;	// 0xf9ed
- (void)adjustToDisplayChange;	// 0xf449
- (void)applicationWillTerminate;	// 0xf0a9
- (void)blockEvents;	// 0xf401
// converted property getter: - (id)currentEvent;	// 0xf14d
- (void)dealloc;	// 0xf031
- (void)dispatchEventOnEventThread:(id)thread;	// 0xf2e1
- (void)emptyQueue;	// 0xf311
- (void)endScreenSaverTest;	// 0x4dcde9
- (void)failedTest:(id)test options:(id)options error:(id)error;	// 0x4dca75
- (void)finishedTest:(id)test options:(id)options;	// 0x4dca49
// converted property getter: - (id)firstBRResponder;	// 0xf0d5
- (void)postEvent:(id)event;	// 0xf161
- (BOOL)runTest:(id)test options:(id)options;	// 0x4dc911
// converted property setter: - (void)setFirstBRResponder:(id)responder;	// 0xf0e9
// converted property setter: - (void)setWantsSpaceCharacters:(BOOL)characters;	// 0xf13d
- (void)setupDisplayManagement;	// 0xf079
- (void)startLogTest:(id)test;	// 0x4dcb4d
- (void)startMoviePreviewPlayTest:(id)test;	// 0x4dced5
- (void)startScreenSaverTest:(id)test;	// 0x4dcd01
- (void)startYouTubePlayTest:(id)test;	// 0x4dcbcd
- (void)startedTest:(id)test options:(id)options;	// 0x4dca1d
- (void)submitAggregateReportingNow;	// 0xf465
- (void)unblockEvents;	// 0xf415
// converted property getter: - (BOOL)wantsSpaceCharacters;	// 0xf12d
@end
