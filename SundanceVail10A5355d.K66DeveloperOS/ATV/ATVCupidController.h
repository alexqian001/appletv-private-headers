/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"
#import "BRSecureResource.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVCupidController : BRDataQueryController <BRSecureResource> {
	int _mode;	// 156 = 0x9c
	NSArray *__sectionsData;	// 160 = 0xa0
	BOOL __updateOnExhume;	// 164 = 0xa4
}
@property(retain, nonatomic) NSArray *_sectionsData;	// G=0xeb371; S=0xeb381; @synthesize=__sectionsData
@property(assign, nonatomic) BOOL _updateOnExhume;	// G=0xeb391; S=0xeb3a1; @synthesize=__updateOnExhume
@property(assign, nonatomic) int mode;	// G=0xeb351; S=0xeb361; @synthesize=_mode
+ (id)cupidController;	// 0xe9845
+ (id)cupidControllerWithMode:(int)mode index:(unsigned)index;	// 0xe98bd
+ (id)cupidScreenSaverController;	// 0xe9881
+ (void)initialize;	// 0xe9775
- (id)init;	// 0xe98f9
- (id)initWithMode:(int)mode;	// 0xe990d
- (id)_defaultDescriptionForCollection:(id)collection;	// 0xeb965
- (BOOL)_handleContextMenuSelection:(id)selection;	// 0xebf8d
- (id)_itemAtIndexPath:(id)indexPath;	// 0xeb519
- (id)_parseSectionsDataFromDataQuery:(id)dataQuery;	// 0xeb5b1
- (id)_photoBrowserControllerForCollection:(id)collection;	// 0xeba19
- (void)_runInvitationAlertForCollection:(id)collection invitationAccepted:(BOOL *)accepted;	// 0xebc31
- (id)_sectionItemsForSectionIndex:(int)sectionIndex;	// 0xeb3b1
// declared property getter: - (id)_sectionsData;	// 0xeb371
- (void)_setScreenSaverPhotoCollection:(id)collection;	// 0xebef5
// declared property getter: - (BOOL)_updateOnExhume;	// 0xeb391
- (BOOL)dataClientUpdated:(id)updated;	// 0xe9c99
- (BOOL)dataQueryComplete:(id)complete;	// 0xea25d
- (void)dealloc;	// 0xe9a2d
- (id)errorForNoContent;	// 0xe9bed
- (BOOL)isQueryResultValid:(id)valid;	// 0xea2d5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xeac7d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xeab05
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0xeaacd
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0xeaac9
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0xeaac5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xea3fd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xea8d5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xea981
// declared property getter: - (int)mode;	// 0xeb351
- (id)newDataQuery;	// 0xe9c0d
- (long)numberOfSectionsInList:(id)list;	// 0xea8ad
- (id)providersForContextMenu;	// 0xeada9
- (id)secureResourceAuthenticator;	// 0xea3a5
// declared property setter: - (void)setMode:(int)mode;	// 0xeb361
// declared property setter: - (void)set_sectionsData:(id)data;	// 0xeb381
// declared property setter: - (void)set_updateOnExhume:(BOOL)exhume;	// 0xeb3a1
- (void)wasExhumed;	// 0xe9b79
- (void)wasPopped;	// 0xe9af9
- (void)wasPushed;	// 0xe9a79
@end

