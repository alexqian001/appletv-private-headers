/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDFieldMarker : WDRun {
@private
	WDCharacterProperties *mProperties;	// 8 = 0x8
	int mFieldPosition;	// 12 = 0xc
	int mMarkerType;	// 16 = 0x10
	unsigned char mFieldType;	// 20 = 0x14
	unsigned mZombieEmbed : 1;	// 21 = 0x15
	unsigned mResultDirty : 1;	// 21 = 0x15
	unsigned mResultEdited : 1;	// 21 = 0x15
	unsigned mLocked : 1;	// 21 = 0x15
	unsigned mPrivateResult : 1;	// 21 = 0x15
	unsigned mNested : 1;	// 21 = 0x15
	unsigned mHasSeparator : 1;	// 21 = 0x15
}
@property(assign) int fieldMarkerType;	// G=0x34c0f845; S=0x34cb98e9; converted property
@property(assign) long fieldPosition;	// G=0x34e0a9dd; S=0x34cb98d9; converted property
@property(assign) unsigned char fieldType;	// G=0x34c12ac1; S=0x34cb98fd; converted property
@property(assign) BOOL hasSeparator;	// G=0x34e0ab51; S=0x34e0ab6d; converted property
@property(assign) BOOL locked;	// G=0x34e0aa9d; S=0x34e0aab9; converted property
@property(assign) BOOL nested;	// G=0x34e0ab15; S=0x34e0ab31; converted property
@property(assign) BOOL privateResult;	// G=0x34e0aad9; S=0x34e0aaf5; converted property
@property(assign) BOOL resultDirty;	// G=0x34e0aa25; S=0x34e0aa41; converted property
@property(assign) BOOL resultEdited;	// G=0x34e0aa61; S=0x34e0aa7d; converted property
@property(assign) BOOL zombieEmbed;	// G=0x34e0a9ed; S=0x34e0aa09; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x34cb9541
- (void)clearProperties;	// 0x34e0ab8d
- (void)dealloc;	// 0x34c20dd9
// converted property getter: - (int)fieldMarkerType;	// 0x34c0f845
// converted property getter: - (long)fieldPosition;	// 0x34e0a9dd
// converted property getter: - (unsigned char)fieldType;	// 0x34c12ac1
// converted property getter: - (BOOL)hasSeparator;	// 0x34e0ab51
// converted property getter: - (BOOL)locked;	// 0x34e0aa9d
// converted property getter: - (BOOL)nested;	// 0x34e0ab15
// converted property getter: - (BOOL)privateResult;	// 0x34e0aad9
- (id)properties;	// 0x34cb98c9
// converted property getter: - (BOOL)resultDirty;	// 0x34e0aa25
// converted property getter: - (BOOL)resultEdited;	// 0x34e0aa61
- (int)runType;	// 0x34c121f1
// converted property setter: - (void)setFieldMarkerType:(int)type;	// 0x34cb98e9
// converted property setter: - (void)setFieldPosition:(long)position;	// 0x34cb98d9
// converted property setter: - (void)setFieldType:(unsigned char)type;	// 0x34cb98fd
// converted property setter: - (void)setHasSeparator:(BOOL)separator;	// 0x34e0ab6d
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x34e0aab9
// converted property setter: - (void)setNested:(BOOL)nested;	// 0x34e0ab31
// converted property setter: - (void)setPrivateResult:(BOOL)result;	// 0x34e0aaf5
// converted property setter: - (void)setResultDirty:(BOOL)dirty;	// 0x34e0aa41
// converted property setter: - (void)setResultEdited:(BOOL)edited;	// 0x34e0aa7d
// converted property setter: - (void)setZombieEmbed:(BOOL)embed;	// 0x34e0aa09
// converted property getter: - (BOOL)zombieEmbed;	// 0x34e0a9ed
@end
