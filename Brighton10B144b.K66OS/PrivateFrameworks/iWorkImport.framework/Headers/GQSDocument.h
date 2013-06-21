/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQWrapPointGenerator.h"
#import <NSObject.h> // Unknown library

@class GQDRoot, GQSTable, GQDSStylesheet, GQZArchive, GQPProcessor;
@protocol GQUOutputBundle;

@interface GQSDocument : NSObject <GQWrapPointGenerator> {
	GQPProcessor *mProcessor;	// 4 = 0x4
	GQDRoot *mRoot;	// 8 = 0x8
	CFURLRef mBundleUrl;	// 12 = 0xc
	GQZArchive *mArchive;	// 16 = 0x10
	id<GQUOutputBundle> mOutputBundle;	// 20 = 0x14
	CFArrayRef mObjectStack;	// 24 = 0x18
	id mGeneratorState;	// 28 = 0x1c
	GQSTable *mTableState;	// 32 = 0x20
	Class mCurrentDrawablesGenerator;	// 36 = 0x24
	Class mCurrentTableGenerator;	// 40 = 0x28
	id<GQWrapPointGenerator> mCurrentWrapPointGenerator;	// 44 = 0x2c
	BOOL mMustRegisterDrawables;	// 48 = 0x30
	BOOL mGeneratorBeginWasCalled;	// 49 = 0x31
	BOOL mShouldStreamTables;	// 50 = 0x32
	BOOL mDoExternalTextWrap;	// 51 = 0x33
	BOOL mGeneratingThumbnail;	// 52 = 0x34
	BOOL mThumbnailGenerationDone;	// 53 = 0x35
	unsigned mTextScale;	// 56 = 0x38
	set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > *mWrapPoints;	// 60 = 0x3c
	CFDictionaryRef mBundleResourceUriMap;	// 64 = 0x40
	GQDSStylesheet *mStylesheet;	// 68 = 0x44
	BOOL mIsReadingStorageAttachments;	// 72 = 0x48
	CFStringRef mFilename;	// 76 = 0x4c
}
@property(assign) Class currentDrawablesGenerator;	// G=0x368f0905; S=0x368f0915; converted property
@property(assign) Class currentTableGenerator;	// G=0x368f0925; S=0x368f0935; converted property
@property(retain) id currentWrapPointGenerator;	// G=0x368f0e21; S=0x368f0e31; converted property
@property(assign) BOOL doExternalTextWrap;	// G=0x368f0985; S=0x368f0995; converted property
@property(assign, getter=isGeneratingThumbnail) BOOL generatingThumbnail;	// G=0x368f09c9; S=0x368f09d9; converted property
@property(retain) id generatorState;	// G=0x368f08b9; S=0x368f08c9; converted property
@property(assign) BOOL isReadingStorageAttachments;	// G=0x368f0e9d; S=0x368f0e8d; converted property
@property(assign) BOOL mustRegisterDrawables;	// G=0x368f0945; S=0x368f0955; converted property
@property(assign) BOOL shouldStreamTables;	// G=0x368f0965; S=0x368f0975; converted property
@property(retain) id stylesheet;	// G=0x368f0e41; S=0x368f0e51; converted property
@property(retain) id tableState;	// G=0x368f086d; S=0x368f087d; converted property
@property(assign, getter=isThumbnailGenerationDone) BOOL thumbnailGenerationDone;	// G=0x368f09e9; S=0x368f09f9; converted property
- (id)initWithRoot:(id)root processor:(id)processor archive:(id)archive outputBundle:(id)bundle filename:(CFStringRef)filename;	// 0x368f0109
- (id)initWithRoot:(id)root processor:(id)processor bundleUrl:(CFURLRef)url archive:(id)archive outputBundle:(id)bundle;	// 0x368f0071
- (id)initWithRoot:(id)root processor:(id)processor outputBundle:(id)bundle filename:(CFStringRef)filename;	// 0x368eff41
- (void)addWrapPoint:(id)point;	// 0x368f0a09
- (void)clearWrapPoints;	// 0x368f0c75
- (vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > *)createListOfWrapPointsAlongY:(float)wrapPointsAlongY minX:(float)x maxX:(float)x3 zIndex:(int)index;	// 0x368f0add
- (CFURLRef)createUriToDocumentBundleResource:(CFStringRef)documentBundleResource;	// 0x368f0295
// converted property getter: - (Class)currentDrawablesGenerator;	// 0x368f0905
// converted property getter: - (Class)currentTableGenerator;	// 0x368f0925
// converted property getter: - (id)currentWrapPointGenerator;	// 0x368f0e21
- (void)dealloc;	// 0x368f0151
// converted property getter: - (BOOL)doExternalTextWrap;	// 0x368f0985
- (CFStringRef)filename;	// 0x368f0ead
- (BOOL)generatorBeginWasCalled;	// 0x368f09a5
// converted property getter: - (id)generatorState;	// 0x368f08b9
// converted property getter: - (BOOL)isGeneratingThumbnail;	// 0x368f09c9
// converted property getter: - (BOOL)isReadingStorageAttachments;	// 0x368f0e9d
// converted property getter: - (BOOL)isThumbnailGenerationDone;	// 0x368f09e9
// converted property getter: - (BOOL)mustRegisterDrawables;	// 0x368f0945
- (int)objectStackDepth;	// 0x368f0859
- (id)outputBundle;	// 0x368f0755
- (id)peekObject;	// 0x368f0765
- (id)popRetainedObject;	// 0x368f07ed
- (id)processor;	// 0x368f0275
- (void)pushObject:(id)object;	// 0x368f0845
- (id)root;	// 0x368f0285
// converted property setter: - (void)setCurrentDrawablesGenerator:(Class)generator;	// 0x368f0915
// converted property setter: - (void)setCurrentTableGenerator:(Class)generator;	// 0x368f0935
// converted property setter: - (void)setCurrentWrapPointGenerator:(id)generator;	// 0x368f0e31
// converted property setter: - (void)setDoExternalTextWrap:(BOOL)wrap;	// 0x368f0995
// converted property setter: - (void)setGeneratingThumbnail:(BOOL)thumbnail;	// 0x368f09d9
- (void)setGeneratorBeginWasCalled;	// 0x368f09b5
// converted property setter: - (void)setGeneratorState:(id)state;	// 0x368f08c9
// converted property setter: - (void)setIsReadingStorageAttachments:(BOOL)attachments;	// 0x368f0e8d
// converted property setter: - (void)setMustRegisterDrawables:(BOOL)drawables;	// 0x368f0955
// converted property setter: - (void)setShouldStreamTables:(BOOL)streamTables;	// 0x368f0975
// converted property setter: - (void)setStylesheet:(id)stylesheet;	// 0x368f0e51
// converted property setter: - (void)setTableState:(id)state;	// 0x368f087d
// converted property setter: - (void)setThumbnailGenerationDone:(BOOL)done;	// 0x368f09f9
// converted property getter: - (BOOL)shouldStreamTables;	// 0x368f0965
// converted property getter: - (id)stylesheet;	// 0x368f0e41
// converted property getter: - (id)tableState;	// 0x368f086d
- (id)topObjectOfClass:(Class)aClass;	// 0x368f0791
- (CFStringRef)uriForBundleResource:(CFStringRef)bundleResource ofType:(CFStringRef)type;	// 0x368f0c9d
- (const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > *)wrapPoints;	// 0x368f0acd
@end
