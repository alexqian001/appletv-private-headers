/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "OADTextClient.h"
#import "OADClient.h"

@class WDAAnchor, OADDrawable, WDATextBox;

__attribute__((visibility("hidden")))
@interface WDAContent : NSObject <OADClient, OADTextClient> {
@private
	WDAAnchor *mAnchor;	// 4 = 0x4
	WDATextBox *mTextBox;	// 8 = 0x8
	OADDrawable *mDrawable;	// 12 = 0xc
	int mTextType;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) WDAAnchor *anchor;	// G=0x32c10075; @synthesize=mAnchor
@property(assign) CGRect bounds;	// G=0x32bb18ed; S=0x32d1c909; converted property
@property(retain) id drawable;	// G=0x32c10755; S=0x32c0fe79; converted property
@property(retain) id textBox;	// G=0x32c13f0d; S=0x32c106d5; converted property
@property(assign) int textType;	// G=0x32c11b1d; S=0x32c0fe99; converted property
+ (Class)classForType:(unsigned short)type;	// 0x32d1c845
- (id)init;	// 0x32c0fe3d
// declared property getter: - (id)anchor;	// 0x32c10075
// converted property getter: - (CGRect)bounds;	// 0x32bb18ed
- (void)clearAnchor;	// 0x32c7f0ed
- (id)createAnchor;	// 0x32c0ff21
- (id)createTextBoxWithDocument:(id)document textType:(int)type;	// 0x32d1c961
- (void)dealloc;	// 0x32bb76d5
// converted property getter: - (id)drawable;	// 0x32c10755
- (BOOL)floating;	// 0x32c5eee1
- (BOOL)hasBounds;	// 0x32d1c7dd
- (BOOL)hasText;	// 0x32d1c865
- (bool)isLine;	// 0x32d1c8cd
- (bool)isShape;	// 0x32c13909
- (bool)isTopLevelObject;	// 0x32d1c8a1
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x32d1c909
// converted property setter: - (void)setDrawable:(id)drawable;	// 0x32c0fe79
// converted property setter: - (void)setTextBox:(id)box;	// 0x32c106d5
// converted property setter: - (void)setTextType:(int)type;	// 0x32c0fe99
// converted property getter: - (id)textBox;	// 0x32c13f0d
// converted property getter: - (int)textType;	// 0x32c11b1d
@end

