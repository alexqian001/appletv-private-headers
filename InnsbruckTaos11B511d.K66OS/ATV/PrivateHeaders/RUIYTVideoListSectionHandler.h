/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTVideoPlaybackAspectDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTListSectionHandling.h"

@class RUIYTVideoPlaybackAspect, RUIYTListDataSourceAspect, NSDictionary;

__attribute__((visibility("hidden")))
@interface RUIYTVideoListSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling, RUIYTVideoPlaybackAspectDelegate> {
	RUIYTVideoPlaybackAspect *_videoPlaybackAspect;	// 4 = 0x4
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 8 = 0x8
	NSDictionary *_likesBadgeTextAttributes;	// 12 = 0xc
}
@property(retain, nonatomic) NSDictionary *likesBadgeTextAttributes;	// G=0x28cc29; S=0x28cc99; @synthesize=_likesBadgeTextAttributes
@property(readonly, assign, nonatomic) RUIYTListDataSourceAspect *listDataSourceAspect;	// G=0x28cc79; @synthesize=_listDataSourceAspect
- (id)initWithListDataSourceAspect:(id)listDataSourceAspect videoPlaybackAspect:(id)aspect;	// 0x28bd85
- (void).cxx_destruct;	// 0x28ccc1
- (BOOL)isItemPlayableAtIndex:(id)index;	// 0x28c409
- (id)itemForIndex:(id)index;	// 0x28be25
- (float)itemHeightForIndex:(id)index;	// 0x28c3c1
- (id)itemIDForIndex:(id)index;	// 0x28c295
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x28c589
// declared property getter: - (id)likesBadgeTextAttributes;	// 0x28cc29
// declared property getter: - (id)listDataSourceAspect;	// 0x28cc79
- (BOOL)loadMoreAssetsForVideoPlaybackAspect:(id)videoPlaybackAspect;	// 0x28c975
- (void)moreAssetsAvailable:(id)available forSection:(unsigned)section;	// 0x28c775
- (BOOL)moreAssetsFailed:(id)failed forSection:(unsigned)section;	// 0x28c8c5
- (void)playbackWillEndForVideoPlaybackAspect:(id)playback error:(id)error;	// 0x28ca69
- (id)previewForIndex:(id)index defer:(BOOL *)defer;	// 0x28c40d
// declared property setter: - (void)setLikesBadgeTextAttributes:(id)attributes;	// 0x28cc99
@end
