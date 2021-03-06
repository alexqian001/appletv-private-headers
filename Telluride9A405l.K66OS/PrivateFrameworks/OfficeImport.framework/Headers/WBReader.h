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
@property(retain) id annotationRangeStart;	// G=0x30d163c5; S=0x30e4efed; converted property
@property(readonly, retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x30d12061; @synthesize=mCancelDelegate
@property(assign) BOOL isThumbnail;	// G=0x30d13ef9; S=0x30cfcd59; converted property
@property(assign) WrdParagraphProperties *lastRowParagraphProperties;	// G=0x30d237b1; S=0x30d21821; converted property
@property(retain) id officeArtState;	// G=0x30d1a19d; S=0x30d353a5; converted property
@property(assign) BOOL reportProgress;	// G=0x30d142b9; S=0x30d126b5; converted property
@property(assign, nonatomic) WDDocument *targetDocument;	// G=0x30d1b4b5; S=0x30d03fed; @synthesize=mTargetDocument
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail;	// 0x30e4f02d
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail;	// 0x30cf54a9
- (id)initWithData:(id)data cancel:(id)cancel tracing:(id)tracing;	// 0x30e4f361
- (id)initWithFile:(FILE *)file fileName:(id)name cancel:(id)cancel tracing:(id)tracing;	// 0x30cf5889
- (void)addFont:(id)font index:(int)index;	// 0x30d04b61
- (void)addStyle:(id)style index:(int)index;	// 0x30d0d721
- (WrdBookmarkTable *)annotationBookmarkTable;	// 0x30e4efa9
- (id)annotationOwner:(int)owner;	// 0x30e4efc9
// converted property getter: - (id)annotationRangeStart;	// 0x30d163c5
- (WrdAnnotationTable *)annotationTable;	// 0x30e4ef99
- (WrdBookmarkTable *)bookmarkTable;	// 0x30d0fad5
- (void)cacheTextBox:(id)box withChainIndex:(unsigned short)chainIndex;	// 0x30d1b529
// declared property getter: - (id)cancelDelegate;	// 0x30d12061
- (void)dealloc;	// 0x30c85295
- (id)drawableForShapeId:(unsigned)shapeId;	// 0x30d1e875
- (WrdNoteTable *)endnoteTable;	// 0x30d14c65
- (WrdEshObjectFactory *)eshObjectFactory;	// 0x30e4efb9
- (WrdFieldPositionTable *)fieldPositionTableForTextType:(int)textType;	// 0x30d14ce5
- (id)fileName;	// 0x30d06509
- (WrdFileShapeAddressTable *)fileShapeAddressHeaderTable;	// 0x30d23c45
- (WrdFileShapeAddressTable *)fileShapeAddressTable;	// 0x30d1e809
- (id)fontAtIndex:(int)index;	// 0x30d0eb95
- (WrdNoteTable *)footnoteTable;	// 0x30d14c55
- (WrdStoryTable *)headerStoryTable;	// 0x30db396d
- (void)initialize;	// 0x30cf7945
// converted property getter: - (BOOL)isThumbnail;	// 0x30d13ef9
// converted property getter: - (WrdParagraphProperties *)lastRowParagraphProperties;	// 0x30d237b1
- (OcReader *)ocReader;	// 0x30d064ed
// converted property getter: - (id)officeArtState;	// 0x30d1a19d
- (id)readCharactersForTextRun:(WrdTextRun *)textRun;	// 0x30d15ef5
- (id)readCharactersFrom:(unsigned long)from to:(unsigned long)to textType:(int)type;	// 0x30d15f21
// converted property getter: - (BOOL)reportProgress;	// 0x30d142b9
// converted property setter: - (void)setAnnotationRangeStart:(id)start;	// 0x30e4efed
// converted property setter: - (void)setIsThumbnail:(BOOL)thumbnail;	// 0x30cfcd59
// converted property setter: - (void)setLastRowParagraphProperties:(WrdParagraphProperties *)properties;	// 0x30d21821
// converted property setter: - (void)setOfficeArtState:(id)state;	// 0x30d353a5
// converted property setter: - (void)setReportProgress:(BOOL)progress;	// 0x30d126b5
// declared property setter: - (void)setTargetDocument:(id)document;	// 0x30d03fed
- (WrdStoryTable *)storyTable;	// 0x30d23e11
- (id)styleAtIndex:(int)index;	// 0x30d0d841
- (WrdCPTableHeaders *)tableHeaders;	// 0x30d166d9
// declared property getter: - (id)targetDocument;	// 0x30d1b4b5
- (unsigned)textBoxCount;	// 0x30d17209
- (WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned)index;	// 0x30d23c61
- (WrdBinaryReader *)wrdReader;	// 0x30d04279
@end

