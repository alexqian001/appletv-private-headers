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
@property(retain) id id;	// G=0x33ba8c11; S=0x33a8dd15; converted property
@property(retain) id text;	// G=0x339d1835; S=0x339bf94d; converted property
- (id)init;	// 0x339bf8c9
- (void)dealloc;	// 0x339de9dd
// converted property getter: - (id)id;	// 0x33ba8c11
- (BOOL)isEmpty;	// 0x33ade705
- (id)paragraphProperties;	// 0x33a8dd55
- (void)removeUnnecessaryOverrides;	// 0x339c42d5
// converted property setter: - (void)setId:(id)anId;	// 0x33a8dd15
// converted property setter: - (void)setText:(id)text;	// 0x339bf94d
// converted property getter: - (id)text;	// 0x339d1835
@end
