/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray, ATVNavigationBarController;
@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface ATVApplianceController : BRViewController {
	ATVNavigationBarController *_navigationBarController;	// 104 = 0x68
	NSArray *_applianceCategories;	// 108 = 0x6c
	id<BRAppliance> _appliance;	// 112 = 0x70
}
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0xc8561; S=0xc8571; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0xc78f1
- (id)_controllerWithCategory:(id)category;	// 0xc805d
- (void)_installControllerView;	// 0xc80e1
- (void)_networkStateChanged;	// 0xc83b9
// declared property getter: - (id)appliance;	// 0xc8561
- (void)dealloc;	// 0xc7bbd
- (BOOL)isNetworkDependent;	// 0xc83f9
- (void)layoutSubcontrols;	// 0xc7c61
// declared property setter: - (void)setAppliance:(id)appliance;	// 0xc8571
- (void)updateBoundCategories;	// 0xc7d81
- (void)wasPopped;	// 0xc83fd
@end
