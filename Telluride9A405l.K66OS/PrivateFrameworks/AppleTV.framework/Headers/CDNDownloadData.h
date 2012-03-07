/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CDNDownloadData : NSObject {
@private
	NSString *name;	// 4 = 0x4
	unsigned short cdnId;	// 8 = 0x8
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
@property(readonly, assign, nonatomic) unsigned long long bandwidth;	// G=0x360f0c40; @synthesize
@property(readonly, assign, nonatomic) unsigned short cdnId;	// G=0x360f0ce4; @synthesize
@property(readonly, retain, nonatomic) NSMutableArray *downloadableData;	// G=0x360f0bf0; @synthesize
@property(readonly, retain, nonatomic) NSString *name;	// G=0x360f0cfc; @synthesize
@property(readonly, assign, nonatomic) unsigned numFailedDownloadables;	// G=0x360f0c04; @synthesize
@property(readonly, assign, nonatomic) unsigned numSuccessfulDownloadables;	// G=0x360f0c18; @synthesize
@property(readonly, assign, nonatomic) unsigned numTotalDownloadables;	// G=0x360f0c2c; @synthesize
@property(readonly, assign, nonatomic) unsigned origIndexFromNCCP;	// G=0x360f0c80; @synthesize
@property(readonly, assign, nonatomic) unsigned rank;	// G=0x360f0cbc; @synthesize
@property(readonly, assign, nonatomic) unsigned rankByNormalizedSpeed;	// G=0x360f0c94; @synthesize
@property(readonly, assign, nonatomic) unsigned rankBySpeed;	// G=0x360f0ca8; @synthesize
@property(readonly, assign, nonatomic) unsigned rtt;	// G=0x360f0cd0; @synthesize
@property(assign, nonatomic) unsigned sortedIndex;	// G=0x360f0c58; S=0x360f0c6c; @synthesize
- (id)initWithCdn:(Cdn *)cdn;	// 0x360f0d20
- (BOOL)allDownloadablesDownloaded;	// 0x360f124c
// declared property getter: - (unsigned long long)bandwidth;	// 0x360f0c40
// declared property getter: - (unsigned short)cdnId;	// 0x360f0ce4
- (int)compareByNormalizedSpeed:(id)speed;	// 0x360f10c0
- (int)compareByRank:(id)rank;	// 0x360f11c8
- (int)compareBySpeed:(id)speed;	// 0x360f1144
- (void)computeNumDownloadables;	// 0x360f1450
- (void)dealloc;	// 0x360f1a00
- (id)description;	// 0x360f0fd4
// declared property getter: - (id)downloadableData;	// 0x360f0bf0
- (id)getDownloadURL:(unsigned)url withContentProfile:(int)contentProfile;	// 0x360f184c
- (id)getRedirectedDownloadURL:(unsigned)url withContentProfile:(int)contentProfile;	// 0x360f1678
// declared property getter: - (id)name;	// 0x360f0cfc
// declared property getter: - (unsigned)numFailedDownloadables;	// 0x360f0c04
// declared property getter: - (unsigned)numSuccessfulDownloadables;	// 0x360f0c18
// declared property getter: - (unsigned)numTotalDownloadables;	// 0x360f0c2c
// declared property getter: - (unsigned)origIndexFromNCCP;	// 0x360f0c80
// declared property getter: - (unsigned)rank;	// 0x360f0cbc
// declared property getter: - (unsigned)rankByNormalizedSpeed;	// 0x360f0c94
// declared property getter: - (unsigned)rankBySpeed;	// 0x360f0ca8
// declared property getter: - (unsigned)rtt;	// 0x360f0cd0
// declared property setter: - (void)setSortedIndex:(unsigned)index;	// 0x360f0c6c
// declared property getter: - (unsigned)sortedIndex;	// 0x360f0c58
@end
