/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "CMMapperRoot.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, EDWorkbook, OIXMLDocument, OIXMLElement, NSString, CMArchiveManager;

__attribute__((visibility("hidden")))
@interface EMWorkbookMapper : CMMapper <CMMapperRoot> {
@private
	unsigned mRealSheetCount;	// 8 = 0x8
	int mWidth;	// 12 = 0xc
	int mHeight;	// 16 = 0x10
	EDWorkbook *edWorkbook;	// 20 = 0x14
	NSMutableArray *mWorksheetUrls;	// 24 = 0x18
	NSMutableArray *mWorksheetNames;	// 28 = 0x1c
	NSMutableArray *mWorksheetGuids;	// 32 = 0x20
	NSString *mResourceUrlPrefix;	// 36 = 0x24
	NSString *mResourceUrlProtocol;	// 40 = 0x28
	NSString *mStyleSheetGuid;	// 44 = 0x2c
	CMArchiveManager *mArchiver;	// 48 = 0x30
	NSString *mFileName;	// 52 = 0x34
	unsigned mSheetIndex;	// 56 = 0x38
	bool mIsFirstMappedSheet;	// 60 = 0x3c
	bool mIsFrameset;	// 61 = 0x3d
	OIXMLDocument *mXhtmlDoc;	// 64 = 0x40
	OIXMLElement *mBodyElement;	// 68 = 0x44
	OIXMLDocument *mTabBarDoc;	// 72 = 0x48
	NSString *mTabBarURL;	// 76 = 0x4c
	NSMutableArray *mSheetURLs;	// 80 = 0x50
	float mTabPosition;	// 84 = 0x54
	unsigned mNumberOfMappedSheets;	// 88 = 0x58
	BOOL mHasPushedHeader;	// 92 = 0x5c
	BOOL mHasPushedFirstSheet;	// 93 = 0x5d
	BOOL mLoadingMessageVisible;	// 94 = 0x5e
}
@property(retain) id fileName;	// G=0x3457f0a1; S=0x344bbc91; converted property
+ (id)baseDate;	// 0x344be8e1
+ (id)borderStyleCache;	// 0x343c3d31
+ (id)borderWidthCache;	// 0x343c400d
+ (id)cssStyleCache;	// 0x3457f3b5
+ (void)setBaseDate1904:(BOOL)a1904;	// 0x344bbc09
- (id)initWithEDWorkbook:(id)edworkbook archiver:(id)archiver;	// 0x344bb9b1
- (id)_createMainPageAndReturnFront;	// 0x344bf1cd
- (id)_createStringForSheet:(id)sheet atIndex:(unsigned)index withState:(id)state andMapper:(id)mapper;	// 0x343bf031
- (id)_mainPageBack;	// 0x343c88a9
- (void)_pushTabForSheet:(id)sheet atIndex:(unsigned)index;	// 0x3457f0b1
- (id)archiver;	// 0x343c43cd
- (id)blipAtIndex:(unsigned)index;	// 0x344c08e9
- (id)createSheetMapperWithEdSheet:(id)edSheet;	// 0x343beded
- (void)dealloc;	// 0x343cbcb5
- (id)documentTitle;	// 0x343c62a1
// converted property getter: - (id)fileName;	// 0x3457f0a1
- (void)finishMappingWithState:(id)state;	// 0x343c882d
- (BOOL)hasMultipleSheets;	// 0x343c6d1d
- (bool)isMultiPage;	// 0x3457f38d
- (void)mapBodyStyleAt:(id)at;	// 0x343bf51d
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x343be7ad
- (CGSize)pageSizeForDevice;	// 0x3457f2dd
// converted property setter: - (void)setFileName:(id)name;	// 0x344bbc91
- (void)startMappingWithState:(id)state;	// 0x344bbccd
- (id)styleMatrix;	// 0x3457f34d
- (id)workbook;	// 0x343c089d
@end
