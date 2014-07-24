/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ContentHeaderDownloaderProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, CDNDownloadData, NSMutableArray, NSCondition;

@interface ContentHeaderDownloaderManager : XXUnknownSuperclass <ContentHeaderDownloaderProtocol> {
	BOOL aborting_;	// 4 = 0x4
	NSCondition *downloadsDone_;	// 8 = 0x8
	NSLock *downloadCompletedLock_;	// 12 = 0xc
	NSMutableArray *contentHeaderDownloadables_;	// 16 = 0x10
	NSMutableArray *downloadedContentHeaderDownloadableData_;	// 20 = 0x14
	NSMutableArray *downloadedContentHeaderTimedTextData_;	// 24 = 0x18
	int numActualDownloadables_;	// 28 = 0x1c
	CDNDownloadData *selectedCdn_;	// 32 = 0x20
	int audioEncodingType_;	// 36 = 0x24
	NSMutableArray *localRankedCdnList_;	// 40 = 0x28
}
@property(assign) BOOL aborting;	// G=0x60153d; S=0x601555; @synthesize=aborting_
@property(assign) int audioEncodingType;	// G=0x60156d; S=0x601581; @synthesize=audioEncodingType_
@property(retain) NSMutableArray *contentHeaderDownloadables;	// G=0x601481; S=0x601495; @synthesize=contentHeaderDownloadables_
@property(retain) NSLock *downloadCompletedLock;	// G=0x60145d; S=0x601471; @synthesize=downloadCompletedLock_
@property(retain) NSMutableArray *downloadedContentHeaderDownloadableData;	// G=0x6014a5; S=0x6014b9; @synthesize=downloadedContentHeaderDownloadableData_
@property(retain) NSMutableArray *downloadedContentHeaderTimedTextData;	// G=0x6014c9; S=0x6014dd; @synthesize=downloadedContentHeaderTimedTextData_
@property(retain) NSCondition *downloadsDone;	// G=0x601439; S=0x60144d; @synthesize=downloadsDone_
@property(retain) NSMutableArray *localRankedCdnList;	// G=0x601599; S=0x6015ad; @synthesize=localRankedCdnList_
@property(assign) int numActualDownloadables;	// G=0x6014ed; S=0x601501; @synthesize=numActualDownloadables_
@property(retain) CDNDownloadData *selectedCdn;	// G=0x601519; S=0x60152d; @synthesize=selectedCdn_
+ (id)sharedInstance;	// 0x5ff921
- (id)init;	// 0x5ffa0d
- (void)abort;	// 0x60138d
// declared property getter: - (BOOL)aborting;	// 0x60153d
// declared property getter: - (int)audioEncodingType;	// 0x60156d
- (int)checkAudioEncodingType:(id)type;	// 0x5ffdd1
- (void)contentDownloadableFinished:(BOOL)finished bitRate:(unsigned)rate contentProfile:(int)profile cdnId:(unsigned)anId bcp47:(id)a47;	// 0x600ccd
- (void)contentDownloadableForPreferredBitrateFinished:(BOOL)preferredBitrateFinished contentData:(id)data;	// 0x6012a5
// declared property getter: - (id)contentHeaderDownloadables;	// 0x601481
- (int)coundDownloadables:(id)downloadables;	// 0x5fff01
- (void)dealloc;	// 0x5ffb2d
// declared property getter: - (id)downloadCompletedLock;	// 0x60145d
- (int)downloadContentHeaders:(int)headers;	// 0x5fffc1
// declared property getter: - (id)downloadedContentHeaderDownloadableData;	// 0x6014a5
// declared property getter: - (id)downloadedContentHeaderTimedTextData;	// 0x6014c9
// declared property getter: - (id)downloadsDone;	// 0x601439
- (void)ignore:(id)ignore forLanguage:(id)language inDownloadData:(id)downloadData;	// 0x5ffc55
- (BOOL)isAAC:(int)aac;	// 0x5ffc19
- (BOOL)isAC3:(int)a3;	// 0x5ffbed
- (BOOL)isVideo:(int)video;	// 0x5ffc45
// declared property getter: - (id)localRankedCdnList;	// 0x601599
// declared property getter: - (int)numActualDownloadables;	// 0x6014ed
- (void)reset;	// 0x6013a1
// declared property getter: - (id)selectedCdn;	// 0x601519
// declared property setter: - (void)setAborting:(BOOL)aborting;	// 0x601555
// declared property setter: - (void)setAudioEncodingType:(int)type;	// 0x601581
// declared property setter: - (void)setContentHeaderDownloadables:(id)downloadables;	// 0x601495
// declared property setter: - (void)setDownloadCompletedLock:(id)lock;	// 0x601471
// declared property setter: - (void)setDownloadedContentHeaderDownloadableData:(id)data;	// 0x6014b9
// declared property setter: - (void)setDownloadedContentHeaderTimedTextData:(id)data;	// 0x6014dd
// declared property setter: - (void)setDownloadsDone:(id)done;	// 0x60144d
// declared property setter: - (void)setLocalRankedCdnList:(id)list;	// 0x6015ad
// declared property setter: - (void)setNumActualDownloadables:(int)downloadables;	// 0x601501
// declared property setter: - (void)setSelectedCdn:(id)cdn;	// 0x60152d
@end
