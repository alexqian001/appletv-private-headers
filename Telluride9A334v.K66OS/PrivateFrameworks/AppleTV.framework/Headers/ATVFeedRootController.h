/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class ATVFeedMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedRootController : BRController {
@private
	ATVFeedMerchant *_merchant;	// 80 = 0x50
}
+ (id)controllerWithMerchant:(id)merchant;	// 0x3319db3d
- (id)initWithMerchant:(id)merchant;	// 0x3319db89
- (void)dealloc;	// 0x3319dbdd
- (BOOL)isNetworkDependent;	// 0x3319dc29
- (void)wasPopped;	// 0x3319e041
- (void)wasPushed;	// 0x3319dc2d
@end
