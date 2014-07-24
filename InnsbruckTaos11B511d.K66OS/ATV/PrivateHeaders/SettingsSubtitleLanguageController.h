/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class BRMediaMenuView, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsSubtitleLanguageController : BRViewController {
	NSArray *_menuItemKeys;	// 104 = 0x68
	BRMediaMenuView *_mediaMenuView;	// 108 = 0x6c
}
@property(retain, nonatomic) BRMediaMenuView *mediaMenuView;	// G=0x457c9d; S=0x457cad; @synthesize=_mediaMenuView
@property(retain, nonatomic) NSArray *menuItemKeys;	// G=0x457c65; S=0x457c75; @synthesize=_menuItemKeys
- (id)initWithFrame:(CGRect)frame;	// 0x457569
- (void).cxx_destruct;	// 0x457cd5
- (void)_populateMenuItemKeys;	// 0x457af1
- (void)_subtitleSettingsChanged:(id)changed;	// 0x457bf5
- (void)dealloc;	// 0x457745
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x457999
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x4577b1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x457979
// declared property getter: - (id)mediaMenuView;	// 0x457c9d
// declared property getter: - (id)menuItemKeys;	// 0x457c65
// declared property setter: - (void)setMediaMenuView:(id)view;	// 0x457cad
// declared property setter: - (void)setMenuItemKeys:(id)keys;	// 0x457c75
@end
