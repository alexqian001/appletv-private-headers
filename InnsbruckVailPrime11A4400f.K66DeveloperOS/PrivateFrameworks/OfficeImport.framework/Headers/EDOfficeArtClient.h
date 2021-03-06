/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextClient.h"
#import "OfficeImport-Structs.h"
#import </libobjc.A.h>
#import "OADClient.h"

@class EDSheet, EDAnchor, NSMutableDictionary, EDTextBox, EDComment;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {
	EDSheet *mSheet;	// 4 = 0x4
	id mClientState;	// 8 = 0x8
	EDAnchor *mAnchor;	// 12 = 0xc
	EDTextBox *mTextBox;	// 16 = 0x10
	EDComment *mComment;	// 20 = 0x14
	NSMutableDictionary *mTableModels;	// 24 = 0x18
	CGRect mBounds;	// 28 = 0x1c
	bool mIsBoundsSet;	// 44 = 0x2c
}
@property(retain) id anchor;	// G=0x317bead9; S=0x317ba5b5; converted property
@property(assign) CGRect bounds;	// G=0x31806e4d; S=0x317e8215; converted property
@property(retain) id clientState;	// G=0x318d4541; S=0x318d4551; converted property
@property(retain) id comment;	// G=0x317bfd75; S=0x31807af1; converted property
@property(retain) id sheet;	// G=0x318d45a5; S=0x317facb5; converted property
@property(retain) id tableModels;	// G=0x318d45b5; S=0x318d45c5; converted property
@property(retain) id textBox;	// G=0x317e5fd9; S=0x317e5e7d; converted property
- (id)init;	// 0x317ba3e9
- (id).cxx_construct;	// 0x317ba3e5
// converted property getter: - (id)anchor;	// 0x317bead9
- (bool)areBoundsSet;	// 0x318d4595
// converted property getter: - (CGRect)bounds;	// 0x31806e4d
// converted property getter: - (id)clientState;	// 0x318d4541
// converted property getter: - (id)comment;	// 0x317bfd75
- (void)dealloc;	// 0x317c8311
- (BOOL)hasBounds;	// 0x317beac9
- (BOOL)hasText;	// 0x317c154d
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x317ba5b5
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x317e8215
// converted property setter: - (void)setClientState:(id)state;	// 0x318d4551
// converted property setter: - (void)setComment:(id)comment;	// 0x31807af1
// converted property setter: - (void)setSheet:(id)sheet;	// 0x317facb5
// converted property setter: - (void)setTableModels:(id)models;	// 0x318d45c5
// converted property setter: - (void)setTextBox:(id)box;	// 0x317e5e7d
// converted property getter: - (id)sheet;	// 0x318d45a5
// converted property getter: - (id)tableModels;	// 0x318d45b5
// converted property getter: - (id)textBox;	// 0x317e5fd9
@end

