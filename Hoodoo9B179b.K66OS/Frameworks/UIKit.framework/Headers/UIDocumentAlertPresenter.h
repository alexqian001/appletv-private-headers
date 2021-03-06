/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAlertViewDelegate.h"
#import <NSObject.h> // Unknown library

@class NSError, UIAlertView;

__attribute__((visibility("hidden")))
@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate> {
@private
	id _completionHandler;	// 4 = 0x4
	NSError *_error;	// 8 = 0x8
	UIAlertView *_alert;	// 12 = 0xc
}
+ (id)_presentAlertWithError:(id)error completionHandler:(id)handler;	// 0x3323b25d
- (id)initWithError:(id)error completionHandler:(id)handler;	// 0x3323b159
- (void)_forceFinishNow;	// 0x3323b3bd
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x3323b3fd
- (void)alertViewCancel:(id)cancel;	// 0x3323b46d
- (void)dealloc;	// 0x3323b1d1
@end

