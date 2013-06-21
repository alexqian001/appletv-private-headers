/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"

@class WBOfficeArtReaderState, TSUNoCopyDictionary, NSMutableArray, WDDocument;

@interface WBReader : OCBReader {
	WrdNoteTable *mFootnoteTable;	// 44 = 0x2c
	WrdNoteTable *mEndnoteTable;	// 48 = 0x30
	WrdAnnotationTable *mAnnotationTable;	// 52 = 0x34
	WrdCPTableHeaders *mTableHeaders;	// 56 = 0x38
	WrdBookmarkTable *mBookmarkTable;	// 60 = 0x3c
	WrdBookmarkTable *mAnnotationBookmarkTable;	// 64 = 0x40
	WrdFieldPositionTable *mFieldPositionTables[8];	// 68 = 0x44
	WrdStoryTable *mStoryTable;	// 100 = 0x64
	WrdStoryTable *mHeaderStoryTable;	// 104 = 0x68
	WrdFileShapeAddressTable *mFileShapeAddressTable;	// 108 = 0x6c
	WrdFileShapeAddressTable *mFileShapeAddressHeaderTable;	// 112 = 0x70
	WrdEshObjectFactory *mEshObjectFactory;	// 116 = 0x74
	WrdParagraphProperties *mLastRowParagraphProperties;	// 120 = 0x78
	NSMutableArray *mAnnotationOwners;	// 124 = 0x7c
	TSUNoCopyDictionary *mIndexToStyles;	// 128 = 0x80
	TSUNoCopyDictionary *mIndexToFonts;	// 132 = 0x84
	WDDocument *mTargetDocument;	// 136 = 0x88
	WBOfficeArtReaderState *mOfficeArtState;	// 140 = 0x8c
	vector<WBTextBoxReaderInfo, std::allocator<WBTextBoxReaderInfo> > *mTextBoxes;	// 144 = 0x90
	BOOL mReportProgress;	// 148 = 0x94
	id mAnnotationRangeStart;	// 152 = 0x98
}
@property(retain) id annotationRangeStart;	// G=0x34932151; S=0x34a8f3a5; converted property
@property(assign) WrdParagraphProperties *lastRowParagraphProperties;	// G=0x34951431; S=0x3494fb81; converted property
@property(retain) id officeArtState;	// G=0x34928345; S=0x34948545; converted property
@property(assign) BOOL reportProgress;	// G=0x3492f6b5; S=0x3492dd75; converted property
@property(assign, nonatomic) WDDocument *targetDocument;	// G=0x3494bf6d; S=0x3491c75d; @synthesize=mTargetDocument
- (id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;	// 0x34913369
- (void)addFont:(id)font index:(int)index;	// 0x3491d2e1
- (void)addStyle:(id)style index:(int)index;	// 0x349259a1
- (OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(OCCCryptoKey *)cryptoKey baseOutputFilenameInUTF8:(const char *)utf8;	// 0x34a8f2ad
- (WrdBookmarkTable *)annotationBookmarkTable;	// 0x3493001d
- (id)annotationOwner:(int)owner;	// 0x34a8f375
// converted property getter: - (id)annotationRangeStart;	// 0x34932151
- (WrdAnnotationTable *)annotationTable;	// 0x3493000d
- (WrdBookmarkTable *)bookmarkTable;	// 0x349295f5
- (void)cacheTextBox:(id)box withChainIndex:(unsigned short)chainIndex;	// 0x3494bfb1
- (void)dealloc;	// 0x3493417d
- (id)drawableForShapeId:(unsigned)shapeId;	// 0x34931af1
- (OCCEncryptionInfoReader *)encryptionInfoReader;	// 0x34914a85
- (WrdNoteTable *)endnoteTable;	// 0x3492ff4d
- (WrdEshObjectFactory *)eshObjectFactory;	// 0x34a8f395
- (WrdFieldPositionTable *)fieldPositionTableForTextType:(int)textType;	// 0x34930169
- (WrdFileShapeAddressTable *)fileShapeAddressHeaderTable;	// 0x349458a9
- (WrdFileShapeAddressTable *)fileShapeAddressTable;	// 0x34931a6d
- (id)fontAtIndex:(int)index;	// 0x34926fa1
- (WrdNoteTable *)footnoteTable;	// 0x3492ff3d
- (WrdStoryTable *)headerStoryTable;	// 0x3498b0b5
- (void)initialize;	// 0x34914d75
// converted property getter: - (WrdParagraphProperties *)lastRowParagraphProperties;	// 0x34951431
// converted property getter: - (id)officeArtState;	// 0x34928345
- (id)read;	// 0x34914aa9
- (id)readCharactersForTextRun:(WrdTextRun *)textRun;	// 0x34931265
- (id)readCharactersFrom:(unsigned long)from to:(unsigned long)to textType:(int)type;	// 0x34931291
// converted property getter: - (BOOL)reportProgress;	// 0x3492f6b5
// converted property setter: - (void)setAnnotationRangeStart:(id)start;	// 0x34a8f3a5
// converted property setter: - (void)setLastRowParagraphProperties:(WrdParagraphProperties *)properties;	// 0x3494fb81
// converted property setter: - (void)setOfficeArtState:(id)state;	// 0x34948545
// converted property setter: - (void)setReportProgress:(BOOL)progress;	// 0x3492dd75
// declared property setter: - (void)setTargetDocument:(id)document;	// 0x3491c75d
- (BOOL)start;	// 0x34913709
- (WrdStoryTable *)storyTable;	// 0x34951bc1
- (id)styleAtIndex:(int)index;	// 0x349259f1
- (WrdCPTableHeaders *)tableHeaders;	// 0x349324a1
// declared property getter: - (id)targetDocument;	// 0x3494bf6d
- (unsigned)textBoxCount;	// 0x3493341d
- (WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned)index;	// 0x34951a1d
- (WrdBinaryReader *)wrdReader;	// 0x34913a31
@end
