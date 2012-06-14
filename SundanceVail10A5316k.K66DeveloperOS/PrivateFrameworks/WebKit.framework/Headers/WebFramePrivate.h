/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebFrameView;

__attribute__((visibility("hidden")))
@interface WebFramePrivate : NSObject {
@private
	Frame *coreFrame;	// 4 = 0x4
	WebFrameView *webFrameView;	// 8 = 0x8
	WebScriptDebugger *scriptDebugger;	// 12 = 0xc
	id internalLoadDelegate;	// 16 = 0x10
	BOOL shouldCreateRenderers;	// 20 = 0x14
	BOOL includedInWebKitStatistics;	// 21 = 0x15
	BOOL isCommitting;	// 22 = 0x16
	BOOL isSingleLine;	// 23 = 0x17
}
- (void)dealloc;	// 0x3501ee7d
- (void)finalize;	// 0x3503e9a9
- (void)setWebFrameView:(id)view;	// 0x35003e21
@end
