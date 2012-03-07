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
@property(readonly, assign, nonatomic) WDAAnchor *anchor;	// G=0x319ee075; @synthesize=mAnchor
@property(assign) CGRect bounds;	// G=0x3198f8ed; S=0x31afa909; converted property
@property(retain) id drawable;	// G=0x319ee755; S=0x319ede79; converted property
@property(retain) id textBox;	// G=0x319f1f0d; S=0x319ee6d5; converted property
@property(assign) int textType;	// G=0x319efb1d; S=0x319ede99; converted property
+ (Class)classForType:(unsigned short)type;	// 0x31afa845
- (id)init;	// 0x319ede3d
// declared property getter: - (id)anchor;	// 0x319ee075
// converted property getter: - (CGRect)bounds;	// 0x3198f8ed
- (void)clearAnchor;	// 0x31a5d0ed
- (id)createAnchor;	// 0x319edf21
- (id)createTextBoxWithDocument:(id)document textType:(int)type;	// 0x31afa961
- (void)dealloc;	// 0x319956d5
// converted property getter: - (id)drawable;	// 0x319ee755
- (BOOL)floating;	// 0x31a3cee1
- (BOOL)hasBounds;	// 0x31afa7dd
- (BOOL)hasText;	// 0x31afa865
- (bool)isLine;	// 0x31afa8cd
- (bool)isShape;	// 0x319f1909
- (bool)isTopLevelObject;	// 0x31afa8a1
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x31afa909
// converted property setter: - (void)setDrawable:(id)drawable;	// 0x319ede79
// converted property setter: - (void)setTextBox:(id)box;	// 0x319ee6d5
// converted property setter: - (void)setTextType:(int)type;	// 0x319ede99
// converted property getter: - (id)textBox;	// 0x319f1f0d
// converted property getter: - (int)textType;	// 0x319efb1d
@end
