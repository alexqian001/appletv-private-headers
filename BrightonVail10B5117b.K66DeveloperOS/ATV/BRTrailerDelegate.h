/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseParserDelegate.h"

@class NSMutableArray, NSXMLParser, BRResolution, BRMovieTrailer, BRMovieTrailersProvider;

__attribute__((visibility("hidden")))
@interface BRTrailerDelegate : BRBaseParserDelegate {
	BRMovieTrailersProvider *_provider;	// 12 = 0xc
	BRMovieTrailer *_movieTrailer;	// 16 = 0x10
	NSMutableArray *_elementCollection;	// 20 = 0x14
	BRResolution *_resolution;	// 24 = 0x18
	NSXMLParser *_parser;	// 28 = 0x1c
}
- (id)initWithMediaProvider:(id)mediaProvider resolution:(id)resolution;	// 0x390369
- (void)dealloc;	// 0x3903ed
- (void)endCast;	// 0x390a71
- (void)endCopyright;	// 0x3908ad
- (void)endDescription;	// 0x39095d
- (void)endDirector;	// 0x390905
- (void)endGenre;	// 0x390b0d
- (void)endLarge;	// 0x390d61
- (void)endLocation;	// 0x390c6d
- (void)endMovieinfo;	// 0x390555
- (void)endName;	// 0x3909c9
- (void)endPostdate;	// 0x3907fd
- (void)endPoster;	// 0x390d1d
- (void)endRating;	// 0x39074d
- (void)endReleasedate;	// 0x390855
- (void)endRuntime;	// 0x3906f5
- (void)endStudio;	// 0x3907a5
- (void)endTitle;	// 0x390679
- (void)endXlarge;	// 0x390cc5
- (void)setWeakReferenceToParser:(id)parser;	// 0x390479
- (void)startCastWithAttributes:(id)attributes;	// 0x390a1d
- (void)startGenreWithAttributes:(id)attributes;	// 0x390ab9
- (void)startMovieinfoWithAttributes:(id)attributes;	// 0x390489
@end
