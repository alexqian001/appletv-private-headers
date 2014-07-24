/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface COMPUTERSApplianceController : BRViewController {
	BOOL _computersListed;	// 104 = 0x68
	BOOL _viewSelectedOnce;	// 105 = 0x69
	id<BRAppliance> _appliance;	// 108 = 0x6c
}
@property(assign, nonatomic) BOOL _computersListed;	// G=0x2c3a71; S=0x2c3a81; @synthesize
@property(assign, nonatomic) BOOL _viewSelectedOnce;	// G=0x2c3a91; S=0x2c3aa1; @synthesize
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0x2c3a4d; S=0x2c3a5d; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0x2c30f9
- (void).cxx_destruct;	// 0x2c3ab1
// declared property getter: - (BOOL)_computersListed;	// 0x2c3a71
- (void)_homeShareServersChanged:(id)changed;	// 0x2c42f5
- (void)_selectView;	// 0x2c3ac5
// declared property getter: - (BOOL)_viewSelectedOnce;	// 0x2c3a91
// declared property getter: - (id)appliance;	// 0x2c3a4d
- (void)dealloc;	// 0x2c31d9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2c391d
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x2c382d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x2c367d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2c34e1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2c3621
// declared property setter: - (void)setAppliance:(id)appliance;	// 0x2c3a5d
// declared property setter: - (void)set_computersListed:(BOOL)listed;	// 0x2c3a81
// declared property setter: - (void)set_viewSelectedOnce:(BOOL)once;	// 0x2c3aa1
- (void)wasExhumed;	// 0x2c3379
- (void)wasPushed;	// 0x2c3245
@end
