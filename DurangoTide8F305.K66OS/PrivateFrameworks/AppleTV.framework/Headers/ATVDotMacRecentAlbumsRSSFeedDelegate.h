/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRBaseParserDelegate.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacRecentAlbumsRSSFeedDelegate : BRBaseParserDelegate {
@private
	NSMutableArray *_recentAlbums;	// 12 = 0xc
	NSMutableDictionary *_currentAlbumInfo;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *recentAlbums;	// G=0x3077d57d; converted property
+ (id)delegate;	// 0x3077d661
- (id)init;	// 0x3077d605
- (void)dealloc;	// 0x3077d5a9
- (void)endItem;	// 0x3077d3cd
- (void)endLink;	// 0x3077d2c9
- (void)endPubDate;	// 0x3077d6a1
- (void)endTitle;	// 0x3077d37d
// converted property getter: - (id)recentAlbums;	// 0x3077d57d
- (void)startEnclosureWithAttributes:(id)attributes;	// 0x3077d415
- (void)startItemWithAttributes:(id)attributes;	// 0x3077d541
@end

