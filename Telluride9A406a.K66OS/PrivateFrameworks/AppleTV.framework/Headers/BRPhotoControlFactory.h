/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"

@class NSDateFormatter;
@protocol BRSelectionHandler;

@interface BRPhotoControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
	NSDateFormatter *_formatter;	// 8 = 0x8
	BOOL _useMinimumImages;	// 12 = 0xc
	BOOL _useLocalProviders;	// 13 = 0xd
}
@property(readonly, retain) NSDateFormatter *formatter;	// G=0x330d86d1; converted property
@property(retain) id selectionHandler;	// G=0x330d8401; S=0x330d8411; converted property
+ (id)mainMenuFactory;	// 0x330d814d
+ (id)standardFactory;	// 0x330d8101
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x330d8199
- (id)_cyclerForData:(id)data;	// 0x330d8a95
- (id)_cyclerItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x330d8d85
- (void)_decorateControlWithPlayIcon:(id)playIcon forMediaObject:(id)mediaObject;	// 0x330d9485
- (id)_gridItemForData:(id)data;	// 0x330d88cd
- (id)_menuItemForData:(id)data;	// 0x330d8765
- (id)_previewControlForData:(id)data;	// 0x330d93ad
- (id)_shelfItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x330d974d
- (id)_subtitleForCollection:(id)collection;	// 0x330d9945
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x330d8295
- (void)dealloc;	// 0x330d8235
// converted property getter: - (id)formatter;	// 0x330d86d1
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x330d8451
// converted property getter: - (id)selectionHandler;	// 0x330d8401
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x330d8411
- (void)setUseMinimumImages:(BOOL)images;	// 0x330d86b1
- (BOOL)useMinumumImages;	// 0x330d86c1
@end
