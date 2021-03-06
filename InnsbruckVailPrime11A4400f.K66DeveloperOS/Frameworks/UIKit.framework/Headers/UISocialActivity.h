/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIActivity.h"

@class SLComposeViewController, UIImage, NSString;

@interface UISocialActivity : UIActivity {
	NSString *_socialActivityType;	// 8 = 0x8
	SLComposeViewController *_socialComposeViewController;	// 12 = 0xc
	UIImage *_composedImage;	// 16 = 0x10
}
@property(retain, nonatomic) UIImage *composedImage;	// G=0x2f919ac5; S=0x2f919ad5; @synthesize=_composedImage
@property(copy, nonatomic) NSString *socialActivityType;	// G=0x2f919aa1; S=0x2f919ab5; @synthesize=_socialActivityType
@property(retain, nonatomic) SLComposeViewController *socialComposeViewController;	// G=0x2f55af05; S=0x2f55b931; @synthesize=_socialComposeViewController
+ (int)activityCategory;	// 0x2f919791
- (id)initActivityType:(id)type;	// 0x2f919795
- (id)_activityImage;	// 0x2f9198b5
- (int)_activityItemTypes;	// 0x2f9199a9
- (int)_blockingActivityItemTypes;	// 0x2f9199ad
- (void)_cleanup;	// 0x2f55b91d
- (int)_maxImageDataSize;	// 0x2f919959
- (id)_serviceType;	// 0x2f54dd31
- (CGSize)_thumbnailSize;	// 0x2f919a95
- (id)activityTitle;	// 0x2f919865
- (id)activityType;	// 0x2f919855
- (id)activityViewController;	// 0x2f5520dd
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x2f54db41
// declared property getter: - (id)composedImage;	// 0x2f919ac5
- (void)dealloc;	// 0x2f9197dd
- (void)prepareWithActivityItems:(id)activityItems;	// 0x2f550e31
// declared property setter: - (void)setComposedImage:(id)image;	// 0x2f919ad5
// declared property setter: - (void)setSocialActivityType:(id)type;	// 0x2f919ab5
// declared property setter: - (void)setSocialComposeViewController:(id)controller;	// 0x2f55b931
// declared property getter: - (id)socialActivityType;	// 0x2f919aa1
// declared property getter: - (id)socialComposeViewController;	// 0x2f55af05
@end

