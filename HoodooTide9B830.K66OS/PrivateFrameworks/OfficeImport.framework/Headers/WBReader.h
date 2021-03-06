/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"

@class SFUNoCopyDictionary, NSString, WBOfficeArtReaderState, NSMutableArray, WDDocument;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface WBReader : OCBReader {
@private
	WrdBinaryReader *mWrdReader;	// 16 = 0x10
	WrdNoteTable *mFootnoteTable;	// 20 = 0x14
	WrdNoteTable *mEndnoteTable;	// 24 = 0x18
	WrdAnnotationTable *mAnnotationTable;	// 28 = 0x1c
	WrdCPTableHeaders *mTableHeaders;	// 32 = 0x20
	WrdBookmarkTable *mBookmarkTable;	// 36 = 0x24
	WrdBookmarkTable *mAnnotationBookmarkTable;	// 40 = 0x28
	WrdFieldPositionTable *mFieldPositionTables[8];	// 44 = 0x2c
	WrdStoryTable *mStoryTable;	// 76 = 0x4c
	WrdStoryTable *mHeaderStoryTable;	// 80 = 0x50
	WrdFileShapeAddressTable *mFileShapeAddressTable;	// 84 = 0x54
	WrdFileShapeAddressTable *mFileShapeAddressHeaderTable;	// 88 = 0x58
	WrdEshObjectFactory *mEshObjectFactory;	// 92 = 0x5c
	WrdParagraphProperties *mLastRowParagraphProperties;	// 96 = 0x60
	NSMutableArray *mAnnotationOwners;	// 100 = 0x64
	SFUNoCopyDictionary *mIndexToStyles;	// 104 = 0x68
	SFUNoCopyDictionary *mIndexToFonts;	// 108 = 0x6c
	WDDocument *mTargetDocument;	// 112 = 0x70
	WBOfficeArtReaderState *mOfficeArtState;	// 116 = 0x74
	vector<WBTextBoxReaderInfo,std::allocator<WBTextBoxReaderInfo> > *mTextBoxes;	// 120 = 0x78
	NSString *mFileName;	// 124 = 0x7c
	BOOL mReportProgress;	// 128 = 0x80
	id mAnnotationRangeStart;	// 132 = 0x84
	id<OCCancelDelegate> mCancelDelegate;	// 136 = 0x88
	BOOL mIsThumbnail;	// 140 = 0x8c
}
@property(retain) id annotationRangeStart;	// G=0x312183c5; S=0x31350fed; converted property
@property(readonly, retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x31214061; @synthesize=mCancelDelegate
@property(assign) BOOL isThumbnail;	// G=0x31215ef9; S=0x311fed59; converted property
@property(assign) WrdParagraphProperties *lastRowParagraphProperties;	// G=0x312257b1; S=0x31223821; converted property
@property(retain) id officeArtState;	// G=0x3121c19d; S=0x312373a5; converted property
@property(assign) BOOL reportProgress;	// G=0x312162b9; S=0x312146b5; converted property
@property(assign, nonatomic) WDDocument *targetDocument;	// G=0x3121d4b5; S=0x31205fed; @synthesize=mTargetDocument
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail;	// 0x3135102d
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail;	// 0x311f74a9
- (id)initWithData:(id)data cancel:(id)cancel tracing:(id)tracing;	// 0x31351361
- (id)initWithFile:(FILE *)file fileName:(id)name cancel:(id)cancel tracing:(id)tracing;	// 0x311f7889
- (void)addFont:(id)font index:(int)index;	// 0x31206b61
- (void)addStyle:(id)style index:(int)index;	// 0x3120f721
- (WrdBookmarkTable *)annotationBookmarkTable;	// 0x31350fa9
- (id)annotationOwner:(int)owner;	// 0x31350fc9
// converted property getter: - (id)annotationRangeStart;	// 0x312183c5
- (WrdAnnotationTable *)annotationTable;	// 0x31350f99
- (WrdBookmarkTable *)bookmarkTable;	// 0x31211ad5
- (void)cacheTextBox:(id)box withChainIndex:(unsigned short)chainIndex;	// 0x3121d529
// declared property getter: - (id)cancelDelegate;	// 0x31214061
- (void)dealloc;	// 0x31187295
- (id)drawableForShapeId:(unsigned)shapeId;	// 0x31220875
- (WrdNoteTable *)endnoteTable;	// 0x31216c65
- (WrdEshObjectFactory *)eshObjectFactory;	// 0x31350fb9
- (WrdFieldPositionTable *)fieldPositionTableForTextType:(int)textType;	// 0x31216ce5
- (id)fileName;	// 0x31208509
- (WrdFileShapeAddressTable *)fileShapeAddressHeaderTable;	// 0x31225c45
- (WrdFileShapeAddressTable *)fileShapeAddressTable;	// 0x31220809
- (id)fontAtIndex:(int)index;	// 0x31210b95
- (WrdNoteTable *)footnoteTable;	// 0x31216c55
- (WrdStoryTable *)headerStoryTable;	// 0x312b596d
- (void)initialize;	// 0x311f9945
// converted property getter: - (BOOL)isThumbnail;	// 0x31215ef9
// converted property getter: - (WrdParagraphProperties *)lastRowParagraphProperties;	// 0x312257b1
- (OcReader *)ocReader;	// 0x312084ed
// converted property getter: - (id)officeArtState;	// 0x3121c19d
- (id)readCharactersForTextRun:(WrdTextRun *)textRun;	// 0x31217ef5
- (id)readCharactersFrom:(unsigned long)from to:(unsigned long)to textType:(int)type;	// 0x31217f21
// converted property getter: - (BOOL)reportProgress;	// 0x312162b9
// converted property setter: - (void)setAnnotationRangeStart:(id)start;	// 0x31350fed
// converted property setter: - (void)setIsThumbnail:(BOOL)thumbnail;	// 0x311fed59
// converted property setter: - (void)setLastRowParagraphProperties:(WrdParagraphProperties *)properties;	// 0x31223821
// converted property setter: - (void)setOfficeArtState:(id)state;	// 0x312373a5
// converted property setter: - (void)setReportProgress:(BOOL)progress;	// 0x312146b5
// declared property setter: - (void)setTargetDocument:(id)document;	// 0x31205fed
- (WrdStoryTable *)storyTable;	// 0x31225e11
- (id)styleAtIndex:(int)index;	// 0x3120f841
- (WrdCPTableHeaders *)tableHeaders;	// 0x312186d9
// declared property getter: - (id)targetDocument;	// 0x3121d4b5
- (unsigned)textBoxCount;	// 0x31219209
- (WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned)index;	// 0x31225c61
- (WrdBinaryReader *)wrdReader;	// 0x31206279
@end

