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
@property(copy, nonatomic) id completionHandler;	// G=0x348a7a99; S=0x348a7aad; @synthesize=_completionHandler
@property(assign, nonatomic) int requestState;	// G=0x348a7a79; S=0x348a7a89; @synthesize=_requestState
+ (id)requestInfoForPrinter:(id)printer;	// 0x348a7815
// declared property getter: - (id)completionHandler;	// 0x348a7a99
- (void)dealloc;	// 0x348a78a5
- (void)requestPrintInfo;	// 0x348a7909
// declared property getter: - (int)requestState;	// 0x348a7a79
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x348a7aad
// declared property setter: - (void)setRequestState:(int)state;	// 0x348a7a89
@end
