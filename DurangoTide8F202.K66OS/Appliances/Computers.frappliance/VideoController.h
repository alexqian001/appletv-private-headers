/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VideoController.h"
#import "Computers-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface VideoController : XXUnknownSuperclass {
	ATVMediaCollectionRef _mediaItemsCollection;	// 120 = 0x78
	BOOL _displayPlaylistsMenuItem;	// 124 = 0x7c
}
@property(assign) BOOL displayPlaylistsMenuItem;	// G=0x100bd; S=0x100ad; converted property
@property(assign) ATVMediaCollectionRef mediaItemsCollection;	// G=0x1009d; S=0x100cd; converted property
+ (int)getWatchedState:(id)state;	// 0x10239
// converted property getter: - (BOOL)displayPlaylistsMenuItem;	// 0x100bd
// converted property getter: - (ATVMediaCollectionRef)mediaItemsCollection;	// 0x1009d
- (id)providersForContextMenu;	// 0x102b9
// converted property setter: - (void)setDisplayPlaylistsMenuItem:(BOOL)item;	// 0x100ad
// converted property setter: - (void)setMediaItemsCollection:(ATVMediaCollectionRef)collection;	// 0x100cd
- (id)unwatchedItems;	// 0x10581
@end

@interface VideoController (Private)
- (void)_handleContextMenuMarkUnwatchedSelection:(id)selection;	// 0x10139
- (void)_handleContextMenuMarkWatchedSelection:(id)selection;	// 0x101b9
@end

