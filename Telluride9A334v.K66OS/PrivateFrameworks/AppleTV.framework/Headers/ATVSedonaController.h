/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSecureResource.h"
#import "BRController.h"

@class ATVSedonaAccount, NSString;

@interface ATVSedonaController : BRController <BRSecureResource> {
@private
	ATVSedonaAccount *_account;	// 80 = 0x50
	NSString *_preferredURL;	// 84 = 0x54
	BOOL _autoPlay;	// 88 = 0x58
}
@property(assign, nonatomic) BOOL autoPlay;	// G=0x33145411; S=0x33145421; @synthesize=_autoPlay
+ (id)controller;	// 0x33145051
+ (id)controllerWithPreferredURL:(id)preferredURL;	// 0x33145079
- (id)init;	// 0x331450b5
- (id)initWithPreferredURL:(id)preferredURL;	// 0x33145185
// declared property getter: - (BOOL)autoPlay;	// 0x33145411
- (void)controlWasActivated;	// 0x331452b1
- (void)dealloc;	// 0x331451c5
- (BOOL)isNetworkDependent;	// 0x33145255
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x331453d9
// declared property setter: - (void)setAutoPlay:(BOOL)play;	// 0x33145421
- (void)wasPushed;	// 0x33145259
@end
