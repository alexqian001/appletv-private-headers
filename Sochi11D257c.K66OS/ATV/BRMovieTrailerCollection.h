/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaCollection.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRMovieTrailerCollection : BRBaseMediaCollection {
	NSMutableArray *_mediaAssets;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *mediaAssets;	// G=0x33e6d1; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x33e505
- (void)addObject:(id)object;	// 0x33e689
- (id)artist;	// 0x33e6e5
- (id)artistForSorting;	// 0x33e721
- (id)collectionID;	// 0x33e5d9
- (id)collectionType;	// 0x33e5bd
- (int)count;	// 0x33e6a9
- (id)coverArt;	// 0x33e615
- (void)dealloc;	// 0x33e571
- (long)duration;	// 0x33e7d5
- (BOOL)hasCoverArt;	// 0x33e651
- (BOOL)isCompilation;	// 0x33e6e1
- (BOOL)isLocal;	// 0x33e84d
// converted property getter: - (id)mediaAssets;	// 0x33e6d1
- (id)mediaType;	// 0x33e811
- (id)primaryGenre;	// 0x33e885
- (id)title;	// 0x33e75d
- (id)titleForSorting;	// 0x33e799
@end
