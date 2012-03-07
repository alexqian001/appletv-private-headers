/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class SFUNoCopyDictionary, ESDRoot, NSMutableDictionary, PDPresentation, NSMutableArray, PBOfficeArtReaderState, PDSlideBase, PBSlideState, PBOutlineBulletDictionary, ESDContainer, OADTheme, ESDObject;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PBPresentationReaderState : NSObject {
@private
	PptBinaryReader *mPptBinaryReader;	// 4 = 0x4
	PDPresentation *mTgtPresentation;	// 8 = 0x8
	ESDRoot *mDocumentRoot;	// 12 = 0xc
	ESDContainer *mSrcSlideListHolder;	// 16 = 0x10
	ChVector<int> *mCurrentSlideTextBlockStartIndexVector;	// 20 = 0x14
	unsigned mSrcSlideId;	// 24 = 0x18
	NSMutableArray *mSlideIndexes;	// 28 = 0x1c
	SFUNoCopyDictionary *mSlideMasterToMasterStyles;	// 32 = 0x20
	CFDictionaryRef mHyperlinkMap;	// 36 = 0x24
	PBOfficeArtReaderState *mOfficeArtState;	// 40 = 0x28
	NSMutableArray *mFontEntities;	// 44 = 0x2c
	PDSlideBase *mTgtSlide;	// 48 = 0x30
	unsigned mTextLength;	// 52 = 0x34
	BOOL mHasCharacterPropertyBulletIndex;	// 56 = 0x38
	unsigned mBulletIndex;	// 60 = 0x3c
	PBOutlineBulletDictionary *mPlaceholderBulletStyles;	// 64 = 0x40
	PBOutlineBulletDictionary *mPlaceholderMacCharStyles;	// 68 = 0x44
	ESDObject *mCurrentBulletStyle;	// 72 = 0x48
	ESDObject *mCurrentMacCharStyle;	// 76 = 0x4c
	ChVector<PBReaderMasterStyleInfo> *mSrcDocMasterStyleInfoVector;	// 80 = 0x50
	ChVector<PBReaderMasterStyleInfo> *mSrcCurrentMasterStyleInfoVector;	// 84 = 0x54
	OADTheme *mDefaultTheme;	// 88 = 0x58
	PBSlideState *mSlideState;	// 92 = 0x5c
	id<OCCancelDelegate> mCancel;	// 96 = 0x60
	BOOL mHasSlideNumberPlaceholder;	// 100 = 0x64
	NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;	// 104 = 0x68
}
@property(assign) unsigned bulletIndex;	// G=0x30e004dd; S=0x30c633b1; converted property
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x30d9723d; S=0x30c8e65d; @synthesize=mCancel
@property(retain) id defaultTheme;	// G=0x30ca140d; S=0x30ca0add; converted property
@property(retain) id documentRoot;	// G=0x30c65761; S=0x30c9c33d; converted property
@property(assign) BOOL hasCharacterPropertyBulletIndex;	// G=0x30c633a1; S=0x30c63fd5; converted property
@property(assign) BOOL hasSlideNumberPlaceholder;	// G=0x30c6bb6d; S=0x30c6bb7d; @synthesize=mHasSlideNumberPlaceholder
@property(assign) ESDContainer *sourceSlideListHolder;	// G=0x30c60541; S=0x30ca7225; @synthesize=mSrcSlideListHolder
@property(assign) unsigned textLength;	// G=0x30c98a79; S=0x30c98941; converted property
@property(retain) id tgtSlide;	// G=0x30ca4919; S=0x30beb889; converted property
- (id)initWithReader:(PptBinaryReader *)reader tgtPresentation:(id)presentation;	// 0x30c8e0d1
- (void)addFontEntity:(id)entity charSet:(int)set type:(int)type family:(int)family;	// 0x30c9c4b5
- (void)addSlideIndex:(int)index;	// 0x30e0058d
- (id)baseTextListStyle;	// 0x30beb8a9
// converted property getter: - (unsigned)bulletIndex;	// 0x30e004dd
// declared property getter: - (id)cancelDelegate;	// 0x30d9723d
- (id)currentBulletStyle;	// 0x30c61f3d
- (id)currentMacCharStyle;	// 0x30c63391
- (ChVector<int> *)currentSlideTextBlockStartIndexVector;	// 0x30c5ff61
- (PBReaderMasterStyleInfo *)currentSourceMasterStyleInfoOfType:(int)type;	// 0x30c61f15
- (void)dealloc;	// 0x30c6e96d
// converted property getter: - (id)defaultTheme;	// 0x30ca140d
- (PBReaderMasterStyleInfo *)docSourceMasterStyleInfoOfType:(int)type;	// 0x30c9c6ed
// converted property getter: - (id)documentRoot;	// 0x30c65761
- (id)fontEntityAtIndex:(unsigned)index;	// 0x30c635dd
- (unsigned)fontEntityCount;	// 0x30e00619
- (int)getSlideIndexAt:(int)at;	// 0x30e005dd
// converted property getter: - (BOOL)hasCharacterPropertyBulletIndex;	// 0x30c633a1
- (BOOL)hasCurrentSourceMasterStyleInfoVector;	// 0x30c61efd
// declared property getter: - (BOOL)hasSlideNumberPlaceholder;	// 0x30c6bb6d
- (id)hyperlinkInfoWithId:(unsigned long)anId createIfAbsent:(BOOL)absent;	// 0x30c9e7f5
- (BOOL)isCancelled;	// 0x30beacb1
- (id)masterStyles:(id)styles;	// 0x30ca66f5
- (int)numberOfSlideIndexes;	// 0x30ca4b9d
- (id)officeArtState;	// 0x30beb899
- (PptBinaryReader *)reader;	// 0x30c65749
- (void)resetSlideState;	// 0x30e00639
// converted property setter: - (void)setBulletIndex:(unsigned)index;	// 0x30c633b1
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x30c8e65d
- (void)setCurrentBulletStyle:(id)style macCharStyle:(id)style2;	// 0x30c5feed
- (void)setCurrentSourceMasterStyleInfoVector:(ChVector<PBReaderMasterStyleInfo> *)vector;	// 0x30beb349
- (void)setCurrentTextType:(int)type placeholderIndex:(unsigned long)index;	// 0x30c60905
// converted property setter: - (void)setDefaultTheme:(id)theme;	// 0x30ca0add
// converted property setter: - (void)setDocumentRoot:(id)root;	// 0x30c9c33d
// converted property setter: - (void)setHasCharacterPropertyBulletIndex:(BOOL)index;	// 0x30c63fd5
// declared property setter: - (void)setHasSlideNumberPlaceholder:(BOOL)placeholder;	// 0x30c6bb7d
- (void)setMasterStyles:(id)styles slideMaster:(id)master;	// 0x30ca2df9
- (void)setPlaceholderBulletStyles:(id)styles;	// 0x30d3d815
- (void)setPlaceholderMacCharStyles:(id)styles;	// 0x30d99e09
- (void)setSourceSlideId:(unsigned long)anId;	// 0x30beaca1
// declared property setter: - (void)setSourceSlideListHolder:(id)holder;	// 0x30ca7225
- (void)setSourceTextBoxContainerHolder:(id)holder forTargetShape:(id)targetShape;	// 0x30d310dd
// converted property setter: - (void)setTextLength:(unsigned)length;	// 0x30c98941
// converted property setter: - (void)setTgtSlide:(id)slide;	// 0x30beb889
- (id)slideIndexesRef;	// 0x30e004cd
- (id)slideState;	// 0x30e004ed
// declared property getter: - (id)sourceSlideListHolder;	// 0x30c60541
- (id)sourceTextBoxContainerHolderForTargetShape:(id)targetShape;	// 0x30c65d7d
// converted property getter: - (unsigned)textLength;	// 0x30c98a79
- (id)tgtPresentation;	// 0x30c9c701
// converted property getter: - (id)tgtSlide;	// 0x30ca4919
@end
