/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsChoosePhotosController.h"


__attribute__((visibility("hidden")))
@interface SettingsChooseSinglePhotoController : SettingsChoosePhotosController {
	id _selectionBlock;	// 116 = 0x74
}
@property(copy, nonatomic) id selectionBlock;	// G=0x12991d; S=0x129931; @synthesize=_selectionBlock
- (void).cxx_destruct;	// 0x129941
- (id)_configureSections;	// 0x12868d
- (void)_configureView;	// 0x128ae5
- (void)_handleAdhocPhotosSelection;	// 0x128bc5
- (void)_handleAppleDefaultPhotosSelection;	// 0x128bc9
- (void)_handleComputersPhotosSelectionForServer:(id)server;	// 0x12938d
- (void)_handleCupidSelection;	// 0x12949d
- (void)_handleFeedMerchantSelectionForMerchant:(id)merchant;	// 0x129919
- (void)_handleFlickrSelection;	// 0x1296b5
- (void)_handleITMSMerchantSelectionWithCollectionID:(id)collectionID name:(id)name;	// 0x128d41
- (void)_selectedPhoto:(id)photo;	// 0x129955
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1282c9
// declared property getter: - (id)selectionBlock;	// 0x12991d
// declared property setter: - (void)setSelectionBlock:(id)block;	// 0x129931
@end
