/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrintInfoRequest : NSObject {
	PKPrinter *_printer;	// 4 = 0x4
	int _requestState;	// 8 = 0x8
	id _completionHandler;	// 12 = 0xc
}
@property(copy, nonatomic) id completionHandler;	// G=0x33d3cb21; S=0x33d3cb35; @synthesize=_completionHandler
@property(assign, nonatomic) int requestState;	// G=0x33d3cb01; S=0x33d3cb11; @synthesize=_requestState
+ (id)requestInfoForPrinter:(id)printer;	// 0x33d3c89d
// declared property getter: - (id)completionHandler;	// 0x33d3cb21
- (void)dealloc;	// 0x33d3c92d
- (void)requestPrintInfo;	// 0x33d3c991
// declared property getter: - (int)requestState;	// 0x33d3cb01
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x33d3cb35
// declared property setter: - (void)setRequestState:(int)state;	// 0x33d3cb11
@end

