/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ContentHeaderDownloaderProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSCondition, CDNDownloadData, NSMutableArray;

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
@property(assign) BOOL aborting;	// G=0x4f133d; S=0x4f1355; @synthesize=aborting_
@property(assign) int audioEncodingType;	// G=0x4f136d; S=0x4f1381; @synthesize=audioEncodingType_
@property(retain) NSMutableArray *contentHeaderDownloadables;	// G=0x4f12a5; S=0x4f12b9; @synthesize=contentHeaderDownloadables_
@property(retain) NSLock *downloadCompletedLock;	// G=0x4f1281; S=0x4f1295; @synthesize=downloadCompletedLock_
@property(retain) NSMutableArray *downloadedContentHeaderDownloadableData;	// G=0x4f12c9; S=0x4f12dd; @synthesize=downloadedContentHeaderDownloadableData_
@property(retain) NSCondition *downloadsDone;	// G=0x4f125d; S=0x4f1271; @synthesize=downloadsDone_
@property(assign) int numActualDownloadables;	// G=0x4f12ed; S=0x4f1301; @synthesize=numActualDownloadables_
@property(retain) CDNDownloadData *selectedCdn;	// G=0x4f1319; S=0x4f132d; @synthesize=selectedCdn_
+ (id)sharedInstance;	// 0x4efc99
- (id)init;	// 0x4efd85
- (void)abort;	// 0x4f11b1
// declared property getter: - (BOOL)aborting;	// 0x4f133d
// declared property getter: - (int)audioEncodingType;	// 0x4f136d
- (int)checkAudioEncodingType:(id)type;	// 0x4f0109
- (void)contentDownloadableFinished:(BOOL)finished bitRate:(unsigned)rate contentProfile:(int)profile cdnId:(unsigned)anId bcp47:(id)a47;	// 0x4f0c09
- (void)contentDownloadableForPreferredBitrateFinished:(BOOL)preferredBitrateFinished contentData:(id)data;	// 0x4f10c9
// declared property getter: - (id)contentHeaderDownloadables;	// 0x4f12a5
- (int)coundDownloadables:(id)downloadables;	// 0x4f0239
- (void)dealloc;	// 0x4efe85
// declared property getter: - (id)downloadCompletedLock;	// 0x4f1281
- (int)downloadContentHeaders:(int)headers;	// 0x4f02fd
// declared property getter: - (id)downloadedContentHeaderDownloadableData;	// 0x4f12c9
// declared property getter: - (id)downloadsDone;	// 0x4f125d
- (void)ignore:(id)ignore forLanguage:(id)language inDownloadData:(id)downloadData;	// 0x4eff8d
- (BOOL)isAAC:(int)aac;	// 0x4eff69
- (BOOL)isAC3:(int)a3;	// 0x4eff45
// declared property getter: - (int)numActualDownloadables;	// 0x4f12ed
- (void)reset;	// 0x4f11c5
// declared property getter: - (id)selectedCdn;	// 0x4f1319
// declared property setter: - (void)setAborting:(BOOL)aborting;	// 0x4f1355
// declared property setter: - (void)setAudioEncodingType:(int)type;	// 0x4f1381
// declared property setter: - (void)setContentHeaderDownloadables:(id)downloadables;	// 0x4f12b9
// declared property setter: - (void)setDownloadCompletedLock:(id)lock;	// 0x4f1295
// declared property setter: - (void)setDownloadedContentHeaderDownloadableData:(id)data;	// 0x4f12dd
// declared property setter: - (void)setDownloadsDone:(id)done;	// 0x4f1271
// declared property setter: - (void)setNumActualDownloadables:(int)downloadables;	// 0x4f1301
// declared property setter: - (void)setSelectedCdn:(id)cdn;	// 0x4f132d
@end

