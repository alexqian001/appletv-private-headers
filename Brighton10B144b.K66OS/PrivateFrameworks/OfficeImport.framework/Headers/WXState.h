/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class OAXDrawingState, WDCharacterRun, OCPPackagePart, WXOAVState, NSMutableArray, WDDocument, TSUNoCopyDictionary;
@protocol OCCancelDelegate;

@interface WXState : NSObject {
	WDDocument *mDocument;	// 4 = 0x4
	TSUNoCopyDictionary *mTextNodesToBeAdded;	// 8 = 0x8
	TSUNoCopyDictionary *mMapBookmarkIdToName;	// 12 = 0xc
	TSUNoCopyDictionary *mMapAnnotationIdToAnnotation;	// 16 = 0x10
	OCPPackagePart *mPackagePart;	// 20 = 0x14
	OCPPackagePart *mAnnotationPart;	// 24 = 0x18
	xmlDoc *mFootnoteDocument;	// 28 = 0x1c
	xmlNode *mFootnotes;	// 32 = 0x20
	xmlDoc *mEndnoteDocument;	// 36 = 0x24
	xmlNode *mEndnotes;	// 40 = 0x28
	xmlDoc *mAnnotationDocument;	// 44 = 0x2c
	xmlNode *mAnnotations;	// 48 = 0x30
	NSMutableArray *mDeleteAuthorStack;	// 52 = 0x34
	NSMutableArray *mDeleteDateStack;	// 56 = 0x38
	NSMutableArray *mEditAuthorStack;	// 60 = 0x3c
	NSMutableArray *mEditDateStack;	// 64 = 0x40
	NSMutableArray *mFormatAuthorStack;	// 68 = 0x44
	NSMutableArray *mFormatDateStack;	// 72 = 0x48
	WXOAVState *mWXOavState;	// 76 = 0x4c
	OAXDrawingState *mDrawingState;	// 80 = 0x50
	int mCurrentOfficeArtTextType;	// 84 = 0x54
	WDCharacterRun *mReadSymbolTo;	// 88 = 0x58
	BOOL mNewSectionRequested;	// 92 = 0x5c
	unsigned long mCurrentRowCNFStyle;	// 96 = 0x60
	unsigned long mCurrentCellCNFStyle;	// 100 = 0x64
	BOOL mCurrentTableWraps;	// 104 = 0x68
	id<OCCancelDelegate> mCancelDelegate;	// 108 = 0x6c
	BOOL mIsThumbnail;	// 112 = 0x70
}
@property(retain) id annotationPart;	// G=0x34abf781; S=0x34abf791; converted property
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x348eed0d; S=0x348da501; @synthesize=mCancelDelegate
@property(assign) unsigned long currentCellCNFStyle;	// G=0x348e81e5; S=0x348f0d39; converted property
@property(assign, nonatomic) int currentOfficeArtTextType;	// G=0x348f6a71; S=0x348e975d; @synthesize=mCurrentOfficeArtTextType
@property(assign) unsigned long currentRowCNFStyle;	// G=0x348e81d5; S=0x348f0f25; converted property
@property(assign) BOOL currentTableWraps;	// G=0x348f0f81; S=0x348e3fc1; converted property
@property(retain) id document;	// G=0x348e0055; S=0x348da411; converted property
@property(assign) BOOL isThumbnail;	// G=0x34abf9a9; S=0x348da511; converted property
@property(assign, getter=isNewSectionRequested) BOOL newSectionRequested;	// G=0x348e7ced; S=0x348eebfd; converted property
@property(retain) id packagePart;	// G=0x348da279; S=0x348eda39; converted property
@property(retain) id readSymbolTo;	// G=0x349a3d69; S=0x34abf999; converted property
- (id)init;	// 0x348d9e85
- (id)initNoStacksWith:(id)with;	// 0x34abf3a5
- (void)addAnnotationID:(long)anId annotation:(id)annotation;	// 0x34abf5e5
- (void)addBookmarkId:(int)anId name:(id)name;	// 0x348e886d
- (void)addText:(id)text node:(xmlNode *)node;	// 0x34abf51d
// converted property getter: - (id)annotationPart;	// 0x34abf781
- (id)annotationWithID:(long)anId;	// 0x34abf631
- (id)bookmarkName:(int)name;	// 0x348eced5
// declared property getter: - (id)cancelDelegate;	// 0x348eed0d
- (void)clearOutNodesToBeAdded:(id)beAdded;	// 0x348e8311
// converted property getter: - (unsigned long)currentCellCNFStyle;	// 0x348e81e5
- (id)currentDeleteAuthor;	// 0x348e91c1
- (id)currentDeleteDate;	// 0x348e91e1
- (id)currentEditAuthor;	// 0x348e9201
- (id)currentEditDate;	// 0x348e9221
- (id)currentFormatAuthor;	// 0x34abf959
- (id)currentFormatDate;	// 0x34abf979
// declared property getter: - (int)currentOfficeArtTextType;	// 0x348f6a71
// converted property getter: - (unsigned long)currentRowCNFStyle;	// 0x348e81d5
// converted property getter: - (BOOL)currentTableWraps;	// 0x348f0f81
- (void)dealloc;	// 0x348f7af9
// converted property getter: - (id)document;	// 0x348e0055
- (id)drawingState;	// 0x348dabe5
- (bool)hasAnnotations;	// 0x34abf679
// converted property getter: - (BOOL)isNewSectionRequested;	// 0x348e7ced
// converted property getter: - (BOOL)isThumbnail;	// 0x34abf9a9
- (id)nodesToBeAdded:(id)beAdded;	// 0x348e82d9
// converted property getter: - (id)packagePart;	// 0x348da279
- (void)popDeleteAuthorDate;	// 0x34abf811
- (void)popEditAuthorDate;	// 0x34abf895
- (void)popFormatAuthorDate;	// 0x34abf919
- (void)pushDeleteAuthor:(id)author date:(id)date;	// 0x34abf7cd
- (void)pushEditAuthor:(id)author date:(id)date;	// 0x34abf851
- (void)pushFormatAuthor:(id)author date:(id)date;	// 0x34abf8d5
// converted property getter: - (id)readSymbolTo;	// 0x349a3d69
// converted property setter: - (void)setAnnotationPart:(id)part;	// 0x34abf791
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x348da501
// converted property setter: - (void)setCurrentCellCNFStyle:(unsigned long)style;	// 0x348f0d39
// declared property setter: - (void)setCurrentOfficeArtTextType:(int)type;	// 0x348e975d
// converted property setter: - (void)setCurrentRowCNFStyle:(unsigned long)style;	// 0x348f0f25
// converted property setter: - (void)setCurrentTableWraps:(BOOL)wraps;	// 0x348e3fc1
// converted property setter: - (void)setDocument:(id)document;	// 0x348da411
- (void)setDocumentPart:(id)part;	// 0x348e6d69
// converted property setter: - (void)setIsThumbnail:(BOOL)thumbnail;	// 0x348da511
// converted property setter: - (void)setNewSectionRequested:(BOOL)requested;	// 0x348eebfd
// converted property setter: - (void)setPackagePart:(id)part;	// 0x348eda39
// converted property setter: - (void)setReadSymbolTo:(id)to;	// 0x34abf999
- (id)wxoavState;	// 0x348e4ab1
- (xmlNode *)xmlAnnotationWithID:(long)anId;	// 0x34abf709
- (xmlNode *)xmlEndnoteWithID:(long)anId;	// 0x34abf691
- (xmlNode *)xmlFootnoteWithID:(long)anId;	// 0x349b2db1
@end
