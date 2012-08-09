/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrCollectionController : BRMediaMenuController {
	ATVInternetPhotosAccount *_account;	// 172 = 0xac
	BOOL _isScreenSaverMenu;	// 176 = 0xb0
}
+ (id)menuControllerForAccount:(id)account;	// 0x18511d
+ (id)screenSaverMenuControllerForAccount:(id)account;	// 0x185165
- (id)initWithAccount:(id)account;	// 0x1851b1
- (id)initWithAccount:(id)account forScreenSaver:(BOOL)screenSaver;	// 0x1851c5
- (void)_handleAddSelection:(id)selection;	// 0x185ac9
- (void)_handleCollectionSelection:(id)selection;	// 0x1857c5
- (void)_handleContactsSelection:(id)selection;	// 0x185c79
- (void)_handleRemoveSelection:(id)selection;	// 0x185959
- (void)_providerUpdated:(id)updated;	// 0x185d4d
- (void)dealloc;	// 0x185711
- (long)defaultIndex;	// 0x18578d
- (BOOL)isNetworkDependent;	// 0x1857c1
@end
