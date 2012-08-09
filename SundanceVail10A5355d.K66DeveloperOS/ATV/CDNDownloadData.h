/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

@interface CDNDownloadData : XXUnknownSuperclass {
	NSString *name;	// 4 = 0x4
	unsigned cdnId;	// 8 = 0x8
	unsigned rank;	// 12 = 0xc
	unsigned rankBySpeed;	// 16 = 0x10
	unsigned rankByNormalizedSpeed;	// 20 = 0x14
	unsigned origIndexFromNCCP;	// 24 = 0x18
	unsigned sortedIndex;	// 28 = 0x1c
	unsigned long long bandwidth;	// 32 = 0x20
	unsigned rtt;	// 40 = 0x28
	unsigned numTotalDownloadables;	// 44 = 0x2c
	unsigned numSuccessfulDownloadables;	// 48 = 0x30
	unsigned numFailedDownloadables;	// 52 = 0x34
	NSMutableArray *downloadableData;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) unsigned long long bandwidth;	// G=0x4a94c1; @synthesize
@property(readonly, assign, nonatomic) unsigned cdnId;	// G=0x4a9441; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *downloadableData;	// G=0x4a9509; @synthesize
@property(readonly, assign, nonatomic) NSString *name;	// G=0x4a9431; @synthesize
@property(readonly, assign, nonatomic) unsigned numFailedDownloadables;	// G=0x4a94f9; @synthesize
@property(readonly, assign, nonatomic) unsigned numSuccessfulDownloadables;	// G=0x4a94e9; @synthesize
@property(readonly, assign, nonatomic) unsigned numTotalDownloadables;	// G=0x4a94d9; @synthesize
@property(readonly, assign, nonatomic) unsigned origIndexFromNCCP;	// G=0x4a9491; @synthesize
@property(readonly, assign, nonatomic) unsigned rank;	// G=0x4a9461; @synthesize
@property(readonly, assign, nonatomic) unsigned rankByNormalizedSpeed;	// G=0x4a9481; @synthesize
@property(readonly, assign, nonatomic) unsigned rankBySpeed;	// G=0x4a9471; @synthesize
@property(readonly, assign, nonatomic) unsigned rtt;	// G=0x4a9451; @synthesize
@property(assign, nonatomic) unsigned sortedIndex;	// G=0x4a94a1; S=0x4a94b1; @synthesize
- (id)initWithCdn:(Cdn *)cdn;	// 0x4a8a0d
- (BOOL)allDownloadablesDownloaded;	// 0x4a90e9
// declared property getter: - (unsigned long long)bandwidth;	// 0x4a94c1
// declared property getter: - (unsigned)cdnId;	// 0x4a9441
- (int)compareByNormalizedSpeed:(id)speed;	// 0x4a9315
- (int)compareByRank:(id)rank;	// 0x4a9265
- (int)compareBySpeed:(id)speed;	// 0x4a92bd
- (void)computeNumDownloadables;	// 0x4a8f41
- (void)dealloc;	// 0x4a8b85
- (id)description;	// 0x4a936d
// declared property getter: - (id)downloadableData;	// 0x4a9509
- (id)getDownloadURL:(unsigned)url withContentProfile:(int)contentProfile bcp47:(id)a47;	// 0x4a8bfd
- (id)getRedirectedDownloadURL:(unsigned)url withContentProfile:(int)contentProfile bcp47:(id)a47;	// 0x4a8d95
// declared property getter: - (id)name;	// 0x4a9431
// declared property getter: - (unsigned)numFailedDownloadables;	// 0x4a94f9
// declared property getter: - (unsigned)numSuccessfulDownloadables;	// 0x4a94e9
// declared property getter: - (unsigned)numTotalDownloadables;	// 0x4a94d9
// declared property getter: - (unsigned)origIndexFromNCCP;	// 0x4a9491
// declared property getter: - (unsigned)rank;	// 0x4a9461
// declared property getter: - (unsigned)rankByNormalizedSpeed;	// 0x4a9481
// declared property getter: - (unsigned)rankBySpeed;	// 0x4a9471
// declared property getter: - (unsigned)rtt;	// 0x4a9451
// declared property setter: - (void)setSortedIndex:(unsigned)index;	// 0x4a94b1
// declared property getter: - (unsigned)sortedIndex;	// 0x4a94a1
@end
