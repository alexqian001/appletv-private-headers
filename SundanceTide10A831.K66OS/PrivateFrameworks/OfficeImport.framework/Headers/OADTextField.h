/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextRun.h"

@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {
	OADParagraphProperties *mParagraphProperties;	// 8 = 0x8
	NSString *mId;	// 12 = 0xc
	NSString *mText;	// 16 = 0x10
}
@property(retain) id id;	// G=0x36c1d5e1; S=0x36b0267d; converted property
@property(retain) id text;	// G=0x36a4619d; S=0x36a342b5; converted property
- (id)init;	// 0x36a34231
- (void)dealloc;	// 0x36a53345
// converted property getter: - (id)id;	// 0x36c1d5e1
- (BOOL)isEmpty;	// 0x36b53045
- (id)paragraphProperties;	// 0x36b026bd
- (void)removeUnnecessaryOverrides;	// 0x36a38c3d
// converted property setter: - (void)setId:(id)anId;	// 0x36b0267d
// converted property setter: - (void)setText:(id)text;	// 0x36a342b5
// converted property getter: - (id)text;	// 0x36a4619d
@end

