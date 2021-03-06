/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrContactsController : BRMediaMenuController {
	ATVInternetPhotosAccount *_account;	// 176 = 0xb0
	int _mode;	// 180 = 0xb4
	id _screenSaverSelectionBlock;	// 184 = 0xb8
	id _photoSelectionBlock;	// 188 = 0xbc
}
@property(copy, nonatomic) id photoSelectionBlock;	// G=0x18067d; S=0x180691; @synthesize=_photoSelectionBlock
@property(copy, nonatomic) id screenSaverSelectionBlock;	// G=0x180659; S=0x18066d; @synthesize=_screenSaverSelectionBlock
- (id)initWithMode:(int)mode forAccount:(id)account;	// 0x1802b5
- (void)_handleAccountSelection:(id)selection;	// 0x180741
- (void)_handleReturnToFlickrSelection:(id)flickrSelection;	// 0x1806a1
- (void)_providerUpdated:(id)updated;	// 0x180919
- (void)dealloc;	// 0x1805b1
- (BOOL)isNetworkDependent;	// 0x180655
// declared property getter: - (id)photoSelectionBlock;	// 0x18067d
// declared property getter: - (id)screenSaverSelectionBlock;	// 0x180659
// declared property setter: - (void)setPhotoSelectionBlock:(id)block;	// 0x180691
// declared property setter: - (void)setScreenSaverSelectionBlock:(id)block;	// 0x18066d
@end

