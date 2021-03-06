/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ContentHeaderDownloaderProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSLock, CDNDownloadData, NSCondition;

@interface ContentHeaderDownloaderManager : XXUnknownSuperclass <ContentHeaderDownloaderProtocol> {
	NSCondition *downloadsDone_;	// 4 = 0x4
	NSLock *downloadCompletedLock_;	// 8 = 0x8
	NSMutableArray *contentHeaderDownloadables_;	// 12 = 0xc
	NSMutableArray *downloadedContentHeaderDownloadableData_;	// 16 = 0x10
	int numActualDownloadables_;	// 20 = 0x14
	CDNDownloadData *selectedCdn_;	// 24 = 0x18
	BOOL aborting_;	// 28 = 0x1c
	int audioEncodingType_;	// 32 = 0x20
}
@property(assign) BOOL aborting;	// G=0x4ad691; S=0x4ad6a9; @synthesize=aborting_
@property(assign) int audioEncodingType;	// G=0x4ad6c1; S=0x4ad6d5; @synthesize=audioEncodingType_
@property(retain) NSMutableArray *contentHeaderDownloadables;	// G=0x4ad5bd; S=0x4ad5d1; @synthesize=contentHeaderDownloadables_
@property(retain) NSLock *downloadCompletedLock;	// G=0x4ad585; S=0x4ad599; @synthesize=downloadCompletedLock_
@property(retain) NSMutableArray *downloadedContentHeaderDownloadableData;	// G=0x4ad5f5; S=0x4ad609; @synthesize=downloadedContentHeaderDownloadableData_
@property(retain) NSCondition *downloadsDone;	// G=0x4ad54d; S=0x4ad561; @synthesize=downloadsDone_
@property(assign) int numActualDownloadables;	// G=0x4ad62d; S=0x4ad641; @synthesize=numActualDownloadables_
@property(retain) CDNDownloadData *selectedCdn;	// G=0x4ad659; S=0x4ad66d; @synthesize=selectedCdn_
+ (id)sharedInstance;	// 0x4ac23d
- (id)init;	// 0x4ac329
- (void)abort;	// 0x4ad4a1
// declared property getter: - (BOOL)aborting;	// 0x4ad691
// declared property getter: - (int)audioEncodingType;	// 0x4ad6c1
- (void)contentDownloadableFinished:(BOOL)finished bitRate:(unsigned)rate contentProfile:(int)profile cdnId:(unsigned)anId bcp47:(id)a47;	// 0x4acef9
- (void)contentDownloadableForPreferredBitrateFinished:(BOOL)preferredBitrateFinished contentData:(id)data;	// 0x4ad3b9
// declared property getter: - (id)contentHeaderDownloadables;	// 0x4ad5bd
- (void)dealloc;	// 0x4ac429
// declared property getter: - (id)downloadCompletedLock;	// 0x4ad585
- (int)downloadContentHeaders:(int)headers;	// 0x4ac4e9
// declared property getter: - (id)downloadedContentHeaderDownloadableData;	// 0x4ad5f5
// declared property getter: - (id)downloadsDone;	// 0x4ad54d
// declared property getter: - (int)numActualDownloadables;	// 0x4ad62d
- (void)reset;	// 0x4ad4b5
// declared property getter: - (id)selectedCdn;	// 0x4ad659
// declared property setter: - (void)setAborting:(BOOL)aborting;	// 0x4ad6a9
// declared property setter: - (void)setAudioEncodingType:(int)type;	// 0x4ad6d5
// declared property setter: - (void)setContentHeaderDownloadables:(id)downloadables;	// 0x4ad5d1
// declared property setter: - (void)setDownloadCompletedLock:(id)lock;	// 0x4ad599
// declared property setter: - (void)setDownloadedContentHeaderDownloadableData:(id)data;	// 0x4ad609
// declared property setter: - (void)setDownloadsDone:(id)done;	// 0x4ad561
// declared property setter: - (void)setNumActualDownloadables:(int)downloadables;	// 0x4ad641
// declared property setter: - (void)setSelectedCdn:(id)cdn;	// 0x4ad66d
@end

