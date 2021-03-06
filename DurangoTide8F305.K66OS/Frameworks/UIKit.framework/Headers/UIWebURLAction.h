/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIWebURLAction : NSObject {
}
+ (id)actionSheetForURL:(id)url withAllowedTypes:(unsigned)allowedTypes inFrame:(id)frame;	// 0x321c39a5
+ (BOOL)performActionWithTag:(int)tag forURL:(id)url forFrame:(id)frame inView:(id)view interactionDelegate:(id)delegate;	// 0x321c3809
+ (BOOL)performActionWithTag:(int)tag forURL:(id)url forFrame:(id)frame withPopoverController:(id)popoverController interactionDelegate:(id)delegate;	// 0x321c37b5
+ (BOOL)performDefaultActionForURL:(id)url withAllowedTypes:(unsigned)allowedTypes forFrame:(id)frame inView:(id)view;	// 0x321c373d
+ (id)sharedInstance;	// 0x321c3779
+ (BOOL)shouldImmediatelyShowActionSheetForURL:(id)url forFrame:(id)frame;	// 0x3208449d
- (void)dealloc;	// 0x321c3711
- (BOOL)performDefaultActionForURL:(id)url withAllowedTypes:(unsigned)allowedTypes forFrame:(id)frame inView:(id)view;	// 0x321c385d
@end

