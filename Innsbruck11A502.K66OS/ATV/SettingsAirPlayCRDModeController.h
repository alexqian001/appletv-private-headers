/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSString;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface SettingsAirPlayCRDModeController : BRViewController {
	NSString *_pendingImageID;	// 104 = 0x68
	id<BRImageProxy> _backgroundImageProxy;	// 108 = 0x6c
}
+ (void)initialize;	// 0x4d4d6d
- (id)init;	// 0x4d4e21
- (void).cxx_destruct;	// 0x4d5a69
- (void)_CRDBackgroundPreferenceChanged:(id)changed;	// 0x4d64ed
- (void)_enterCustomMessage;	// 0x4d5a9d
- (void)_imageLoadFailed:(id)failed;	// 0x4d5f09
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x4d5d39
- (void)_successfullySelectedImage:(id)image;	// 0x4d61b5
- (void)dealloc;	// 0x4d4fe1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x4d534d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x4d5559
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x4d50d1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x4d5051
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x4d5069
- (long)numberOfSectionsInList:(id)list;	// 0x4d504d
- (void)selectedBackgroundImageProxy:(id)proxy;	// 0x4d57c9
@end
