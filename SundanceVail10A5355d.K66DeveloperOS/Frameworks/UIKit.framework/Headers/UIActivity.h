/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIActivity : NSObject {
	id _activityCompletionHandler;	// 4 = 0x4
}
@property(copy, nonatomic) id activityCompletionHandler;	// G=0x33e2b959; S=0x33e2b96d; @synthesize=_activityCompletionHandler
+ (id)_activityFunctionImage:(id)image;	// 0x33e2ba89
+ (id)_activityGenericImage:(id)image;	// 0x33e2bf51
+ (id)_activityImageForApplication:(id)application;	// 0x33e2b97d
+ (id)_activityImageForPrerenderedImage:(id)prerenderedImage;	// 0x33e2c0d9
- (id)_activityImage;	// 0x33e2c161
- (id)_beforeActivity;	// 0x33e2c199
- (BOOL)_canAdjustOrder;	// 0x33e2c19d
- (BOOL)_canPerformWithSuppliedActivityItems:(id)suppliedActivityItems;	// 0x33e2c15d
- (void)_cleanup;	// 0x33e2c1e1
- (BOOL)_dismissActivityFromViewController:(id)viewController animated:(BOOL)animated completion:(id)completion;	// 0x33e2c1e9
- (id)_embeddedActivityViewController;	// 0x33e2c1dd
- (BOOL)_presentActivityOnViewController:(id)controller animated:(BOOL)animated completion:(id)completion;	// 0x33e2c1e5
- (void)_setActivityCompletionHandler:(id)handler;	// 0x33e2c1a1
- (void)_setSubject:(id)subject;	// 0x33e2c1ed
// declared property getter: - (id)activityCompletionHandler;	// 0x33e2b959
- (void)activityDidFinish:(BOOL)activity;	// 0x33e2b921
- (id)activityImage;	// 0x33e2b8fd
- (id)activityTitle;	// 0x33e2b8f9
- (id)activityType;	// 0x33e2b8f5
- (id)activityViewController;	// 0x33e2b909
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x33e2b901
- (void)dealloc;	// 0x33e2b8a9
- (void)performActivity;	// 0x33e2b90d
- (void)prepareWithActivityItems:(id)activityItems;	// 0x33e2b905
// declared property setter: - (void)setActivityCompletionHandler:(id)handler;	// 0x33e2b96d
@end
